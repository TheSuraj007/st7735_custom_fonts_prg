/*
 * drv_debug_uart.c
 *
 *  Created on: 01-Oct-2021
 *      Author: avinash pathare
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdarg.h>
/*	Add user define includes	*/
#include "gpio.h"
#include "mxc_device.h"
#include "pb.h"
#include "board.h"
#include "mxc_delay.h"
#include "uart.h"
#include "nvic_table.h"
#include "drv_uart.h"

#define UART_BAUD 115200
#define BUFF_SIZE 8

/* Globals	*/

uint8_t RxData[BUFF_SIZE];
mxc_uart_req_t write_req;

/*	Functions	*/
void UART0_Handler(void)
{
	MXC_UART_AsyncHandler(MXC_UART0);
}

void readCallback(mxc_uart_req_t req, int error)
{
	/*TODO handle received data	*/
#if 0
	/*	Below code is temporary */
	mxc_uart_req_t write_req;
	write_req.uart = MXC_UART0;
	write_req.txData = (uint8_t*)"Ajinkya Gorhe";
	write_req.txLen = 14;
	write_req.rxLen = 1;
	write_req.callback = readCallback;

	MXC_UART_TransactionAsync(&write_req);
	/*	End temporary code here	*/
#endif
}

int uart_init(void)
{
	int error;

	NVIC_ClearPendingIRQ(UART0_IRQn);
	NVIC_DisableIRQ(UART0_IRQn);
	NVIC_SetVector(UART0_IRQn, UART0_Handler);
	NVIC_EnableIRQ(UART0_IRQn);

	error = MXC_UART_Init(MXC_UART0, UART_BAUD, MAP_B);
	if (error != E_NO_ERROR)
	{
		// uart_print("UART initializing fail %d\r\n", error);
	}

	return error;
}

int uart_write(uint8_t *data, uint32_t datalength)
{
	int error;

	write_req.uart = MXC_UART0;
	write_req.txData = data;
	write_req.txLen = datalength;
	write_req.rxData = RxData;
	write_req.rxLen = 1;
	write_req.callback = (mxc_uart_complete_cb_t)readCallback;

	error = MXC_UART_TransactionAsync(&write_req);

	if (error != E_NO_ERROR)
	{
		// uart_print("Err UART write %d", error);
	}

	return error;
}

void SendData()
{
	MXC_UART_TransactionAsync(&write_req);
}

/// @brief Takes an array of characters and sends it your pc via serial
///
/// @param data array of characters
/// @returns void
void uart_print(char *data, ...)
{
	char buff[100];
	va_list args;
	va_start(args, data);
	vsprintf(buff, data, args);
	va_end(args);
	uint32_t data_len = strlen(buff);
	uart_write((uint8_t *)buff, data_len);
	MXC_Delay(300);
}