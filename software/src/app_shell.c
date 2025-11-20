#include "iob_bsp.h"
#include "iob_printf.h"
#include "iob_soc_mmap.h"
#include "iob_timer.h"
#include "iob_uart.h"
#include <stdint.h>
#include <string.h>

#define CPU_MHZ (IOB_BSP_FREQ / 1000000u)
#define MAX_LINE 128

// ---------- small helpers ----------
static char *skip_ws(char *p) {
  while (*p == ' ' || *p == '\t')
    ++p;
  return p;
}
static void tolower_str(char *s) {
  for (; *s; ++s)
    if (*s >= 'A' && *s <= 'Z')
      *s += 32;
}
static int parse_int(char **pp, int *out) {
  char *p = skip_ws(*pp);
  int sign = 1, v = 0, ok = 0;
  if (*p == '-') {
    sign = -1;
    ++p;
  }
  while (*p >= '0' && *p <= '9') {
    v = v * 10 + (*p - '0');
    ++p;
    ok = 1;
  }
  *pp = p;
  if (!ok)
    return 0;
  *out = sign * v;
  return 1;
}
static void sleep_us(unsigned us) {
  unsigned long long t0 = timer_get_count();
  unsigned long long target = t0 + (unsigned long long)us * CPU_MHZ;
  while ((timer_get_count() - t0) < (target - t0)) { /* busy wait */
  }
}
static void print_help(void) {
  uart_puts("Commands:\n");
  uart_puts("  help              - show this help\n");
  uart_puts("  echo <text>       - print text\n");
  uart_puts("  add <a> <b>       - integer addition\n");
  uart_puts("  ticks             - show cycles & microseconds since start\n");
  uart_puts("  sleep <us>        - busy-wait sleep in microseconds\n");
  uart_puts("  quit              - exit program\n");
}

// ---------- command executor (no UART input needed) ----------
static unsigned long long g_start_cycles;

static void exec_one_line(const char *line_const) {
  // Make a writable copy for parsing
  char line[MAX_LINE];
  line[MAX_LINE - 1] = 0;
  strncpy(line, line_const, MAX_LINE - 1);

  // Show the command like a prompt would
  uart_puts("> ");
  uart_puts(line);
  uart_puts("\n");

  char *p = skip_ws(line);
  if (!*p)
    return;
  char cmd[16] = {0};
  int i = 0;
  while (*p && *p != ' ' && *p != '\t' && i < 15)
    cmd[i++] = *p++;
  tolower_str(cmd);
  p = skip_ws(p);

  if (!strcmp(cmd, "help")) {
    print_help();
  } else if (!strcmp(cmd, "echo")) {
    uart_puts(p);
    uart_puts("\n");
  } else if (!strcmp(cmd, "add")) {
    int a, b;
    if (parse_int(&p, &a) && parse_int(&p, &b))
      printf("%d\n", a + b);
    else
      uart_puts("Usage: add <a> <b>\n");
  } else if (!strcmp(cmd, "ticks")) {
    unsigned long long t = timer_get_count() - g_start_cycles;
    unsigned int us = (unsigned int)(t / CPU_MHZ);
    unsigned int cyc = (unsigned int)t; // print as 32-bit to avoid %llu
    printf("ticks=%u  time=%u us\n", cyc, us);
  } else if (!strcmp(cmd, "sleep")) {
    int us;
    if (parse_int(&p, &us) && us >= 0) {
      sleep_us((unsigned)us);
      uart_puts("OK\n");
    } else
      uart_puts("Usage: sleep <us>\n");
  } else if (!strcmp(cmd, "quit") || !strcmp(cmd, "exit")) {
    // nothing to do here; main() will exit after the script
  } else {
    uart_puts("Unknown. Try 'help'.\n");
  }
}

int main(void) {
  timer_init(TIMER0_BASE);
  uart_init(UART0_BASE, IOB_BSP_FREQ / IOB_BSP_BAUD);
  printf_init(&uart_putc);

  printf("IOb-Shell(auto) @%u MHz — running scripted demo\n", CPU_MHZ);
  g_start_cycles = timer_get_count();

  // Scripted commands to run automatically (no user input)
  static const char *script[] = {"help",        "echo hello ibex",
                                 "add 3 5",     "ticks",
                                 "sleep 10000", // 10 ms
                                 "ticks",       "quit"};
  const int N = (int)(sizeof(script) / sizeof(script[0]));
  for (int k = 0; k < N; k++)
    exec_one_line(script[k]);

#ifndef TESTER
  uart_finish();
#endif
  return 0;
}
