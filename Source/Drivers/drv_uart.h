/*
 * drv_uart.h
 *
 *  Created on: 01-Oct-2021
 *      Author: Surajkumar
 */

#ifndef DRV_UART_H_
#define DRV_UART_H_

#include <stdint.h>
#include "stdbool.h"
#define DEBUG false

int uart_init(void);
int uart_write(uint8_t *data, uint32_t datalength);
void uart_print(char *data, ...);
#endif /* DRV_DEBUG_UART_H_ */
