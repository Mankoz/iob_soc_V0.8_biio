/*
 * SPDX-FileCopyrightText: 2025 Ruiqi Zhao
 * SPDX-License-Identifier: MIT
 *
 * Simple Hello World demo for IOb-SoC-Ibex
 */

#include "iob_bsp.h"
#include "iob_printf.h"
#include "iob_soc_conf.h"
#include "iob_soc_mmap.h"
#include "iob_timer.h"
#include "iob_uart.h"
#include <string.h>

int main() {
  timer_init(TIMER0_BASE);
  uart_init(UART0_BASE, IOB_BSP_FREQ / IOB_BSP_BAUD);
  printf_init(&uart_putc);

  uart_puts("\n\nHello, IOb-SoC-Ibex!\n");
  printf("This is my first custom firmware running on Ibex.\n\n");

  int a = 10, b = 20, sum = a + b;
  printf("Sum of %d + %d = %d\n", a, b, sum);

  unsigned long long elapsed = timer_get_count();
  unsigned int elapsed_us = elapsed / (IOB_BSP_FREQ / 1000000);
  printf("\nElapsed: %d cycles (%dus @%dMHz)\n", (unsigned int)elapsed,
         elapsed_us, IOB_BSP_FREQ / 1000000);

  uart_puts("\nProgram finished.\n");
  uart_finish();
  return 0;
}
