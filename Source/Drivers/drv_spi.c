/*
 * drv_spi.c
 *
 *  Created on: 30-Aug-2022
 *      Author: suraj
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*	Add user define includes	*/
#include "mxc_device.h"
#include "mxc_delay.h"
#include "mxc_pins.h"
#include "nvic_table.h"
#include "spi.h"
#include "dma.h"
#include "drv_spi.h"

/***** Preprocessors *****/
#define MASTERSYNC
// 1. MASTERSYNC
// 2. MASTERASYNC
// 3. MASTERDMA

#define SPI_SPEED 5015015
// #define SPI_SPEED 15015015
// #define SPI_SPEED 40000000
// 150000       	//	Bit Rate 20000000 50ns, 2048000 2.048MHZ 15015015
#define SPI_DATA_SIZE 8 //	8 bit data size

volatile int SPI_FLAG;
volatile uint8_t DMA_FLAG = 0;
#define SPI_IRQ SPI0_IRQn

void SPI0_IRQHandler(void)
{
    MXC_SPI_AsyncHandler(SPI_MASTER_LCD);
}

// void DMA0_IRQHandler(void)
// {
//     MXC_DMA_Handler(MXC_DMA0);
// }

// void DMA1_IRQHandler(void)
// {
//     MXC_DMA_Handler(MXC_DMA0);
//     DMA_FLAG = 1;
// }

void SPI_Callback(mxc_spi_req_t *req, int error)
{
    SPI_FLAG = error;
}

/// @brief initializes SPI pins
/// @return None
int init_spi()
{
    int retVal = 0, error = 0;
    // Configure the peripheral
    MXC_SPI0->ctrl0 = 0;

    if (MXC_SPI_Init(SPI_MASTER_LCD, 1, 0, 1, 0, SPI_SPEED, MAP_A) == E_NO_ERROR)
    { // @suppress("Symbol is not resolved")

        if (MXC_SPI_SetMode(SPI_MASTER_LCD, SPI_MODE_0) == E_NO_ERROR)
        { // @suppress("Symbol is not resolved")
            // retVal = MXC_SPI_SetDataSize(SPI_MASTER_LCD, 8);
            if (MXC_SPI_SetDataSize(SPI_MASTER_LCD, 8) == E_NO_ERROR)
            {
                // retVal = MXC_SPI_SetWidth(SPI_MASTER_LCD, SPI_WIDTH_3WIRE);
                if (MXC_SPI_SetWidth(SPI_MASTER_LCD, SPI_WIDTH_3WIRE) == E_NO_ERROR)
                { // @suppress("Symbol is not resolved")
                    retVal = MXC_SPI_SetSlave(SPI_MASTER_LCD, 0);
                    if (retVal != E_NO_ERROR)
                    {
                        error = 5;
                    }
                }
                else
                {
                    error = 4;
                }
            }
            else
            {
                error = 3;
            }
        }
        else
        {
            error = 2;
        }
    }
    else
    {
        error = 1;
    }
    retVal = error;
    return retVal;
}

/// @brief to read data from the SPI channel
/// @param TxData
/// @param TxDataLength
/// @param RxData
/// @param RxDataLength
/// @return None
int spi_read(uint8_t *TxData, uint32_t TxDataLength, uint8_t *RxData, uint32_t RxDataLength)
{
    int retVal;
    mxc_spi_req_t reqMaster;

    reqMaster.spi = SPI_MASTER_LCD;
    reqMaster.txData = (uint8_t *)TxData;
    reqMaster.rxData = (uint8_t *)RxData;
    reqMaster.txLen = TxDataLength;
    reqMaster.rxLen = RxDataLength;
    reqMaster.ssIdx = 0;
    reqMaster.ssDeassert = 1;
    reqMaster.txCnt = 0;
    reqMaster.rxCnt = 0;
    reqMaster.completeCB = (spi_complete_cb_t)SPI_Callback;
    SPI_FLAG = 1;

    retVal = MXC_SPI_SetDataSize(SPI_MASTER_LCD, SPI_DATA_SIZE);
    if (retVal != E_NO_ERROR)
    {
        printf("\nSPI SET DATASIZE ERROR: %d\n", retVal);
        return retVal;
    }

    retVal = MXC_SPI_SetWidth(SPI_MASTER_LCD, SPI_WIDTH_STANDARD);
    if (retVal != E_NO_ERROR)
    {
        printf("\nSPI SET WIDTH ERROR: %d\n", retVal);
        return retVal;
    }

#ifdef MASTERSYNC
    MXC_SPI_MasterTransaction(&reqMaster);
#endif

#ifdef MASTERASYNC
    MXC_NVIC_SetVector(SPI_IRQ, SPI0_IRQHandler);
    NVIC_EnableIRQ(SPI_IRQ);
    MXC_SPI_MasterTransactionAsync(&reqMaster);

    while (SPI_FLAG == 1)
        ;
#endif

#ifdef MASTERDMA
    MXC_DMA_ReleaseChannel(0);
    MXC_DMA_ReleaseChannel(1);

    NVIC_EnableIRQ(DMA0_IRQn);
    NVIC_EnableIRQ(DMA1_IRQn);
    MXC_SPI_MasterTransactionDMA(&reqMaster, MXC_DMA0);

    while (DMA_FLAG == 0)
        ;
    DMA_FLAG = 0;
#endif
    return E_NO_ERROR;
}

/// @brief write data to SPI channel
/// @param TxData data to transmit
/// @param TxDataLength length of data to transmit
/// @return None
int spi_write(uint8_t *TxData, uint32_t TxDataLength)
{
    // MXC_SPI_Init(SPI_MASTER_LCD, 1, 0, 1, 0, SPI_SPEED, MAP_A);
    init_spi();
    int retVal;
    mxc_spi_req_t reqMaster;

    reqMaster.spi = SPI_MASTER_LCD;
    reqMaster.txData = TxData;
    reqMaster.rxData = NULL;
    reqMaster.txLen = TxDataLength;
    reqMaster.rxLen = 0;
    reqMaster.ssIdx = 0;
    reqMaster.ssDeassert = 1;
    reqMaster.txCnt = 1;
    reqMaster.rxCnt = 0;
    reqMaster.completeCB = (spi_complete_cb_t)SPI_Callback;
    SPI_FLAG = 1;

    retVal = MXC_SPI_SetDataSize(SPI_MASTER_LCD, SPI_DATA_SIZE);
    if (retVal != E_NO_ERROR)
    {
        printf("\nSPI SET DATASIZE ERROR: %d\n", retVal);
        return retVal;
    }

    retVal = MXC_SPI_SetWidth(SPI_MASTER_LCD, SPI_WIDTH_STANDARD);
    if (retVal != E_NO_ERROR)
    {
        printf("\nSPI SET WIDTH ERROR: %d\n", retVal);
        return retVal;
    }

#ifdef MASTERSYNC
    MXC_SPI_MasterTransaction(&reqMaster);
#endif

#ifdef MASTERASYNC
    MXC_NVIC_SetVector(SPI_IRQ, SPI0_IRQHandler);
    NVIC_EnableIRQ(SPI_IRQ);
    MXC_SPI_MasterTransactionAsync(&reqMaster);

    while (SPI_FLAG == 1)
        ;
#endif

#ifdef MASTERDMA
    MXC_DMA_ReleaseChannel(0);
    MXC_DMA_ReleaseChannel(1);

    NVIC_EnableIRQ(DMA0_IRQn);
    NVIC_EnableIRQ(DMA1_IRQn);
    MXC_SPI_MasterTransactionDMA(&reqMaster, MXC_DMA0);

    while (DMA_FLAG == 0)
        ;
    DMA_FLAG = 0;
#endif
    MXC_SPI_Shutdown(SPI_MASTER_LCD);
    MXC_SPI_ClearTXFIFO(MXC_SPI0);

    return E_NO_ERROR;
}
