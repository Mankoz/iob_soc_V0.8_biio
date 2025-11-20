#include "iob_bsp.h"
#include "iob_printf.h"
#include "iob_soc_mmap.h"
#include "iob_timer.h"
#include "iob_uart.h"

int main(void) {
  timer_init(TIMER0_BASE);
  uart_init(UART0_BASE, IOB_BSP_FREQ / IOB_BSP_BAUD);
  printf_init(&uart_putc);
  uart_puts("MAIN STUB OK\n");
#ifndef TESTER
  uart_finish();
#endif
  return 0;
}
