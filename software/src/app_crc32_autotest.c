#include "iob_bsp.h"
#include "iob_printf.h"
#include "iob_soc_mmap.h"
#include "iob_timer.h"
#include "iob_uart.h"
#include <stdint.h>
#include <string.h>

#define CPU_MHZ (IOB_BSP_FREQ / 1000000u)

// --- CRC32 ---
static uint32_t crc32_ieee(const uint8_t *s, int len) {
  uint32_t crc = 0xFFFFFFFFu;
  for (int i = 0; i < len; i++) {
    crc ^= s[i];
    for (int b = 0; b < 8; b++)
      crc = (crc >> 1) ^ (0xEDB88320u & (0 - (int)(crc & 1)));
  }
  return ~crc;
}

// 八位十六进制打印（避免 printf 的 %08x 兼容性差异）
static void print_hex32(uint32_t v) {
  static const char H[] = "0123456789ABCDEF";
  uart_puts("0x");
  for (int i = 28; i >= 0; i -= 4)
    uart_putc(H[(v >> i) & 0xF]);
}

// 真正的应用入口（不要叫 main，下面用别名导出）
static int app_main(void) {
  timer_init(TIMER0_BASE);
  uart_init(UART0_BASE, IOB_BSP_FREQ / IOB_BSP_BAUD);
  printf_init(&uart_putc);

  printf("\nCRC32(IEEE) autotest @%u MHz\n", CPU_MHZ);

  static const char *vecs[] = {"", "a", "abc", "123456789"};
  static const uint32_t expect[] = {0x00000000u, 0xE8B7BE43u, 0x352441C2u,
                                    0xCBF43926u};
  const int N = (int)(sizeof(vecs) / sizeof(vecs[0]));
  unsigned pass = 0;

  for (int i = 0; i < N; i++) {
    const char *s = vecs[i];
    int len = (int)strlen(s);
    unsigned long long t0 = timer_get_count();
    uint32_t crc = crc32_ieee((const uint8_t *)s, len);
    unsigned long long t1 = timer_get_count();
    unsigned us = (unsigned)((t1 - t0) / CPU_MHZ);

    printf("Test %d: len=%d  text=\"%s\"\n", i, len, s);
    uart_puts("  CRC32=");
    print_hex32(crc);
    uart_puts("  expect=");
    print_hex32(expect[i]);
    uart_puts(crc == expect[i] ? "  [OK]\n" : "  [FAIL]\n");
    printf("  time=%u us\n\n", us);
    if (crc == expect[i])
      pass++;
  }

  uart_puts("Summary pass/total = ");
  printf("%u/%u\n", pass, (unsigned)N);

#ifndef TESTER
  uart_finish();
#endif
  return 0;
}

// 强制把 main 导出为 app_main 的别名，杜绝“找不到 main”
int main(void) __attribute__((used, alias("app_main")));
