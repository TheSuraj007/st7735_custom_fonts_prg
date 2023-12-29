/**
 * @file        main.c
 * 	Created on: 22-Dec-2023
 * 		Author: Surajkumar
 */

/***** Includes *****/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "mxc_device.h"
#include "mxc_delay.h"
#include "mxc_pins.h"
#include "spi.h"
#include "dma.h"
#include "board.h"
#include "gpio.h"
#include "drv_gpio.h"
#include "drv_spi.h"
#include "drv_uart.h"
#include "st7735.h"

#include "fonts/Font_8_Tiny.h"
#include "fonts/Fonts_variables.h"

/***** Definitions *****/

/***** Globals *****/

/***** Functions *****/

/****** Main Function Starts *******/
int main()
{
    init_gpio();
    init_spi();
    display_init();

    uint8_t temp_send[] = {0xAA};

    while (true)
    {
        spi_write(temp_send, 1);
        MXC_Delay(MXC_DELAY_MSEC(500));

        LCD_Font(5, 40, "57\n 84%\n 99%\n", _8_Tiny, 1, ST7735_RED);
        MXC_Delay(MXC_DELAY_MSEC(500));

        // LCD_Font(5, 40, "99\n 57%\n 84%\n", _8_Tiny, 1, ST7735_RED);
        // MXC_Delay(MXC_DELAY_MSEC(500));

        // LCD_Font(5, 40, "84\n 99%\n 57%\n", _8_Tiny, 1, ST7735_RED);
        // MXC_Delay(MXC_DELAY_MSEC(500));

        /* code */
    }
}
