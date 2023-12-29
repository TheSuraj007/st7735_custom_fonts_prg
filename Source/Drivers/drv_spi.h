/*
 * drv_spi.h
 *
 *  Created on: 30-Aug-2022
 *      Author: suraj
 */

#ifndef DRV_SPI_H_
#define DRV_SPI_H_
#include "stdio.h"

#define SPI_MASTER_LCD MXC_SPI0 //	SPI 0 instance

int init_spi();
int spi_read(uint8_t *TxData, uint32_t TxDataLength, uint8_t *RxData, uint32_t RxDataLength);
int spi_write(uint8_t *TxData, uint32_t TxDataLength);

#endif /* DRV_SPI_H_ */
