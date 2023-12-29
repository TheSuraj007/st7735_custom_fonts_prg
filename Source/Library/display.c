#include "mxc_device.h"
#include "mxc_delay.h"
#include "mxc_pins.h"
#include "spi.h"
#include "dma.h"
#include "board.h"
#include "gpio.h"
#include "drv_gpio.h"
#include "drv_spi.h"

#include "fonts.h"
#include "Background_image.h"
#include "colors.h"

#include "display.h"
#include "st7735.h"
#include "GUI_images.h"

/// @brief initializes the display and writes all the background images to the display
void display_init()
{
    // Turn ON the backlight
    lcd_backlight(TRUE);

    st7735_init();

    // st7735_draw_color_image(0, 0, &spanda_logo);
    st7735_fill_screen(ST7735_WHITE);
}