#include <string.h>
#include "st7735.h"
#include "mxc_delay.h"
#include "drv_gpio.h"
#include "drv_spi.h"
#include "gpio.h"
#include "spi.h"
#include "reent.h"
#include "drv_uart.h"
#include "GUI_images.h"

#define DELAY 0x80
int32_t Ymax, Ymin, X; // X goes from 0 to 127
int32_t Yrange;        // YrangeDiv2;
int TimeIndex;
uint16_t PlotBGColor;

/// @brief defines the region to write data to in the display
/// @param x0 starting x co-orddinate
/// @param y0 starting y co-ordinate
/// @param x1 ending x co-ordinate
/// @param y1 ending y co-ordinate
void ST7735_Set_Address_Window(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1)
{
  lcd7735_sendCmd(ST7735_CASET);        // Column addr set
  lcd7735_sendData(0x00);               // XS15 ~ XS8
  lcd7735_sendData(x0 + ST7735_XSTART); // XSTART       XS7 ~ XS0
  lcd7735_sendData(0x00);               // XE15 ~ XE8
  lcd7735_sendData(x1 + ST7735_XSTART); // XEND         XE7 ~ XE0

  lcd7735_sendCmd(ST7735_RASET); // Row addr set
  lcd7735_sendData(0x00);
  lcd7735_sendData(y0 + ST7735_YSTART); // YSTART
  lcd7735_sendData(0x00);
  lcd7735_sendData(y1 + ST7735_YSTART); // YEND

  lcd7735_sendCmd(ST7735_RAMWR);
}

/// @brief intializes the display by configuring the registers
void st7735_init()
{
  LCD_CS0;                                    // ST7735_Selected
  clear_gpio(MXC_GPIO_PORT1, MXC_GPIO_PIN_8); /* /CS = 0*/

  // ST7735_Reset();
  LCD_RST0;

  MXC_Delay(100);

  LCD_RST1;

  MXC_Delay(100);

  ST7735_Init_Command1();
  MXC_Delay(100);

  ST7735_Init_Command2();
  MXC_Delay(100);

  // ST7735_Init_Command3();
  // MXC_Delay(100);

  LCD_CS1; // ST7735_Unselected
}

/// @brief sends data and command to LCD registers
/// @param None
void ST7735_Init_Command1(void)
{
  lcd7735_sendCmd(ST7735_SWRESET); //  1: Software reset
  MXC_Delay(150);
  lcd7735_sendCmd(ST7735_SLPOUT); //  2: Out of sleep mode
  MXC_Delay(120);

  // ST7735R Frame Rate
  lcd7735_sendCmd(0xB1);
  lcd7735_sendData(0x01);
  lcd7735_sendData(0x2C);
  lcd7735_sendData(0x2D);

  // FRMCTR2 (Frame Rate Control)
  lcd7735_sendCmd(0xB2);
  lcd7735_sendData(0x01);
  lcd7735_sendData(0x2C);
  lcd7735_sendData(0x2D);

  lcd7735_sendCmd(0xB3);
  lcd7735_sendData(0x01);
  lcd7735_sendData(0x2C);
  lcd7735_sendData(0x2D);
  lcd7735_sendData(0x01);
  lcd7735_sendData(0x2C);
  lcd7735_sendData(0x2D);

  lcd7735_sendCmd(ST7735_INVCTR); //  6: Display inversion ctrl
  lcd7735_sendData(0x07);         //     No inversion

  // ST7735R Power Sequence
  lcd7735_sendCmd(0xC0);
  lcd7735_sendData(0xA2);
  lcd7735_sendData(0x02);
  lcd7735_sendData(0x84);

  lcd7735_sendCmd(0xC1);
  lcd7735_sendData(0xC5);

  lcd7735_sendCmd(0xC2);
  lcd7735_sendData(0x0A);
  lcd7735_sendData(0x00);

  lcd7735_sendCmd(0xC3);
  lcd7735_sendData(0x8A);
  lcd7735_sendData(0x2A);

  lcd7735_sendCmd(0xC4);
  lcd7735_sendData(0x8A);
  lcd7735_sendData(0xEE);

  lcd7735_sendCmd(0xC5); // VCOM
  lcd7735_sendData(0x0E);

  lcd7735_sendCmd(0x36); // MX, MY, RGB mode
  lcd7735_sendData(ST7735_ROTATION);

  // ST7735R Gamma Sequence
  lcd7735_sendCmd(0xe0);
  lcd7735_sendData(0x0f);
  lcd7735_sendData(0x1a);
  lcd7735_sendData(0x0f);
  lcd7735_sendData(0x18);
  lcd7735_sendData(0x2f);
  lcd7735_sendData(0x28);
  lcd7735_sendData(0x20);
  lcd7735_sendData(0x22);
  lcd7735_sendData(0x1f);
  lcd7735_sendData(0x1b);
  lcd7735_sendData(0x23);
  lcd7735_sendData(0x37);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x07);
  lcd7735_sendData(0x02);
  lcd7735_sendData(0x10);

  lcd7735_sendCmd(0xe1);
  lcd7735_sendData(0x0f);
  lcd7735_sendData(0x1b);
  lcd7735_sendData(0x0f);
  lcd7735_sendData(0x17);
  lcd7735_sendData(0x33);
  lcd7735_sendData(0x2c);
  lcd7735_sendData(0x29);
  lcd7735_sendData(0x2e);
  lcd7735_sendData(0x30);
  lcd7735_sendData(0x30);
  lcd7735_sendData(0x39);
  lcd7735_sendData(0x3f);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x07);
  lcd7735_sendData(0x03);
  lcd7735_sendData(0x10);

  lcd7735_sendCmd(0x2a);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x7f);

  lcd7735_sendCmd(0x2b);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x9f);

  lcd7735_sendCmd(0xF0); // Enable test command
  lcd7735_sendData(0x01);

  lcd7735_sendCmd(0xF6); // Disable ram power save mode
  lcd7735_sendData(0x00);

  // lcd7735_sendCmd(ST7735_INVOFF);    // 13: Don't invert display
  lcd7735_sendCmd(ST7735_INVON); // 13: ON invert display

  // lcd7735_sendCmd(ST7735_MADCTL);             // 14: Memory access control (directions)
  lcd7735_sendData(ST7735_ROTATION_OPPOSITE); //     row addr/col addr, bottom to top refresh

  lcd7735_sendCmd(0x3A); // 65k mode
  lcd7735_sendData(0x05);

  lcd7735_sendCmd(0x29); // Display on
}

// ST7735_IS_128X128

/// @brief sends data and command to LCD registers
/// @param None
void ST7735_Init_Command2(void)
{
  lcd7735_sendCmd(ST7735_CASET); //  1: Column addr set
  lcd7735_sendData(0x00);        //     XSTART = 0
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00); //     XEND = 127
  lcd7735_sendData(0x7F);
  lcd7735_sendCmd(ST7735_RASET); //  2: Row addr set
  lcd7735_sendData(0x00);        //     XSTART = 0
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00); //     XEND = 127
  lcd7735_sendData(0x7F);
}

void ST7735_Init_Command3(void)
{
  lcd7735_sendCmd(ST7735_GMCTRP1); //  1: Magical unicorn dust
  lcd7735_sendData(0x02);
  lcd7735_sendData(0x1C);
  lcd7735_sendData(0x07);
  lcd7735_sendData(0x12);
  lcd7735_sendData(0x37);
  lcd7735_sendData(0x32);
  lcd7735_sendData(0x29);
  lcd7735_sendData(0x2D);
  lcd7735_sendData(0x29);
  lcd7735_sendData(0x25);
  lcd7735_sendData(0x2B);
  lcd7735_sendData(0x39);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x01);
  lcd7735_sendData(0x03);
  lcd7735_sendData(0x10);
  lcd7735_sendCmd(ST7735_GMCTRN1); //  2: Sparkles and rainbows
  lcd7735_sendData(0x03);
  lcd7735_sendData(0x1D);
  lcd7735_sendData(0x07);
  lcd7735_sendData(0x06);
  lcd7735_sendData(0x2E);
  lcd7735_sendData(0x2C);
  lcd7735_sendData(0x29);
  lcd7735_sendData(0x2D);
  lcd7735_sendData(0x2E);
  lcd7735_sendData(0x2E);
  lcd7735_sendData(0x37);
  lcd7735_sendData(0x3F);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x00);
  lcd7735_sendData(0x02);
  lcd7735_sendData(0x10);
  lcd7735_sendCmd(ST7735_NORON);
  MXC_Delay(100);
  lcd7735_sendCmd(ST7735_DISPON);
  MXC_Delay(100);
}

/// @brief plot a single point on the display
/// @param data1 co-ordinate of the point
/// @param color1 color of the point
void Sst7735_plot_point(int32_t data1, uint16_t color1)
{
  data1 = ((data1 - Ymin) * 100) / Yrange;
  if (data1 > 98)
  {
    data1 = 98;
    color1 = ST7735_RED;
  }
  if (data1 < 0)
  {
    data1 = 0;
    color1 = ST7735_RED;
  }
  st7735_draw_pixel(TimeIndex + 11, 116 - data1, color1);
  st7735_draw_pixel(TimeIndex + 11, 115 - data1, color1);
}

void st7735_plot_increment(void)
{
  TimeIndex = TimeIndex + 1;
  if (TimeIndex > 99)
  {
    TimeIndex = 0;
  }
  st7735_draw_fast_vertical_line(TimeIndex + 11, 17, 100, PlotBGColor);
}

/// @brief draw a single pixel on the display
/// @param x x co-ordinate of the pixel
/// @param y y co-ordinate of the pixel
/// @param color color of the pixel
void st7735_draw_pixel(uint16_t x, uint16_t y, uint16_t color)
{
  if ((x >= ST7735_WIDTH) || (y >= ST7735_HEIGHT))
    return;

  LCD_CS0;

  ST7735_Set_Address_Window(x, y, x + 1, y + 1);
  // uint8_t data[2];
  // data[0] = color >> 8;
  // data[1] = color & 0xFF;
  lcd7735_sendData((uint8_t)(color >> 8)); // no need to allocate an array since the operation can be inlined
  lcd7735_sendData((uint8_t)(color & 0xFF));

  LCD_CS1; // unselect
}

/// @brief write a string on the display
/// @param x x co-ordinate of the display to write to
/// @param y y co-ordinate of the display to write to
/// @param pt pointer to the string
/// @param textColor color of the text
/// @return number of characters printeds
uint32_t st7735_draw_string(uint16_t x, uint16_t y, char *pt, int16_t textColor)
{
  uint32_t count = 0;
  if (y > 15)
    return 0;
  while (*pt)
  {
    st7735_draw_char(x * 6, y * 10, *pt, textColor, ST7735_WHITE, 1);
    pt++;
    x = x + 1;
    if (x > 20)
      return count; // number of characters printed
    count++;
  }
  return count; // number of characters printed
}

/// @brief write a character on the display
/// @param x x co-ordinate of the display to write to
/// @param y y co-ordinate of the display to write to
/// @param c character to write
/// @param textColor color of the character
/// @param bgColor color of the background
/// @param size size of teh character to write
void st7735_draw_char(int16_t x, int16_t y, char c, int16_t textColor, int16_t bgColor, uint8_t size)
{
  uint8_t line;
  int32_t i, j;
  if ((x >= ST7735_WIDTH) ||
      (y >= ST7735_HEIGHT) ||
      ((x + 5 * size - 1) < 0) ||
      ((y + 8 * size - 1) < 0))
    return;

  for (i = 0; i < 6; i++)
  {
    if (i == 5)
      line = 0x0;
    else
      line = Font[(c * 5) + i];
    for (j = 0; j < 8; j++)
    {
      if (line & 0x1)
      {
        if (size == 1)
          st7735_draw_pixel(x + i, y + j, textColor);
        else
        {
          st7735_fill_rectangle(x + (i * size), y + (j * size), size, size, textColor);
        }
      }
      else if (bgColor != textColor)
      {
        if (size == 1) // default size
          st7735_draw_pixel(x + i, y + j, bgColor);
        else
        { // big size
          st7735_fill_rectangle(x + i * size, y + j * size, size, size, bgColor);
        }
      }
      line >>= 1;
    }
  }
}

/// @brief draw axis onto display
/// @param axisColor set color of axis
/// @param bgColor set background color of axis
/// @param xLabel label for x axis
/// @param yLabel1 label 1 for y axis
/// @param label1Color label 1 color
/// @param yLabel2 label 2 for y axis
/// @param label2Color label 2 color
/// @param ymax maximum value for y axis
/// @param ymin minimum value for y axis
void st7735_drawaxes(uint16_t axisColor, uint16_t bgColor, char *xLabel, char *yLabel1, uint16_t label1Color, char *yLabel2, uint16_t label2Color, int32_t ymax, int32_t ymin)
{
  int i;

  Ymax = ymax;
  Ymin = ymin;
  Yrange = Ymax - Ymin;
  TimeIndex = 0;
  PlotBGColor = bgColor;
  LCD_CS0;
  st7735_fill_rectangle(0, 0, 128, 160, bgColor);
  st7735_draw_fast_horizontal_line(10, 140, 101, axisColor);
  st7735_draw_fast_vertical_line(10, 17, 124, axisColor);
  for (i = 20; i <= 110; i = i + 10)
  {
    st7735_draw_pixel(i, 141, axisColor);
  }
  for (i = 17; i < 120; i = i + 10)
  {
    st7735_draw_pixel(9, i, axisColor);
  }
  i = 50;
  while ((*xLabel) && (i < 100))
  {
    st7735_draw_char(i, 145, *xLabel, axisColor, bgColor, 1);
    i = i + 6;
    xLabel++;
  }
  if (*yLabel2)
  { // two labels
    i = 26;
    while ((*yLabel2) && (i < 50))
    {
      st7735_draw_char(0, i, *yLabel2, label2Color, bgColor, 1);
      i = i + 8;
      yLabel2++;
    }
    i = 82;
  }
  else
  { // one label
    i = 42;
  }
  while ((*yLabel1) && (i < 120))
  {
    st7735_draw_char(0, i, *yLabel1, label1Color, bgColor, 1);
    i = i + 8;
    yLabel1++;
  }
  LCD_CS1;
}

/// @brief draw a horizontal line on display
/// @param x x co-ordinate of the display to start writing
/// @param y y co-ordinate of the display to start writing
/// @param w width of the line
/// @param color color of the line
void st7735_draw_fast_horizontal_line(int16_t x, int16_t y, int16_t w, uint16_t color)
{
  uint8_t hi = color >> 8, lo = color;

  LCD_CS0;
  // Rudimentary clipping
  if ((x >= ST7735_WIDTH) || (y >= ST7735_HEIGHT))
    return;
  if ((x + w - 1) >= ST7735_WIDTH)
    w = ST7735_WIDTH - x;
  ST7735_Set_Address_Window(x, y, x + w - 1, y);

  while (w--)
  {
    lcd7735_sendData(hi);
    lcd7735_sendData(lo);
  }
  LCD_CS1;
}

/// @brief draw a vertical line on display
/// @param x x co-ordinate of the display to start writing
/// @param y y co-ordinate of the display to start writing
/// @param h height of the line
/// @param color color of the line
void st7735_draw_fast_vertical_line(int16_t x, int16_t y, int16_t h, uint16_t color)
{
  uint8_t hi = color >> 8, lo = color;
  LCD_CS0;

  // Rudimentary clipping
  if ((x >= ST7735_WIDTH) || (y >= ST7735_HEIGHT))
    return;
  if ((y + h - 1) >= ST7735_HEIGHT)
    h = ST7735_HEIGHT - y;
  ST7735_Set_Address_Window(x, y, x, y + h - 1);

  while (h--)
  {
    lcd7735_sendData(hi);
    lcd7735_sendData(lo);
  }
  LCD_CS1;
}

/// @brief draw a solid rectangle onto the display
/// @param x_start x co-ordinate of the display to start writing
/// @param y_start y co-ordinate of the display to start writing
/// @param width width of the rectangle
/// @param height height of the rectangle
/// @param color color of the rectangle
void st7735_fill_rectangle(uint8_t x_start, uint8_t y_start, uint8_t width, uint8_t height, uint16_t color)
{
  // clipping
  if ((x_start >= ST7735_WIDTH) || (y_start >= ST7735_HEIGHT))
    return;
  if ((x_start + width - 1) >= ST7735_WIDTH)
    width = ST7735_WIDTH - x_start;
  if ((y_start + height - 1) >= ST7735_HEIGHT)
    height = ST7735_HEIGHT - y_start;

  LCD_CS0;

  ST7735_Set_Address_Window(x_start, y_start, (x_start + width - 1), (y_start + height - 1));

  for (y_start = height; y_start > 0; y_start--)
  {
    for (x_start = width; x_start > 0; x_start--)
    {
      lcd7735_sendData(color >> 8);
      lcd7735_sendData(color);
    }
  }

  LCD_CS1; // Unselect

  return;
}

void st7735_fill_rectangle_byPixel(uint16_t x_start, uint16_t y_start, uint16_t width, uint16_t height, uint16_t color)
{
  // clipping
  if ((x_start >= ST7735_WIDTH) || (y_start >= ST7735_HEIGHT))
    return;
  if ((x_start + width - 1) >= ST7735_WIDTH)
    width = ST7735_WIDTH - x_start;
  if ((y_start + height - 1) >= ST7735_HEIGHT)
    height = ST7735_HEIGHT - y_start;

  for (uint16_t i = 0; i < height; i++)
  {
    for (uint16_t j = 0; j < width; j++)
    {
      // uart_print(" x val %d y val %d \n", x_start + j, y_start + i);
      st7735_draw_pixel(x_start + j, y_start + i, color);
    }
  }

  return;
}

/// @brief fill entire display with a color
/// @param color color to fill the display with
void st7735_fill_screen(uint16_t color)
{
  st7735_fill_rectangle(0, 0, ST7735_WIDTH, ST7735_HEIGHT, color);
}

//===================================================================================================

/// @brief invert colors of the display
/// @param invert
void st7735_invert_colors(bool invert)
{
  // ST7735_WriteCommand(invert ? ST7735_INVON : ST7735_INVOFF);
  lcd7735_sendCmd(invert ? ST7735_INVON : ST7735_INVOFF);
}

/// @brief sends command to the display
/// @param cmd
void lcd7735_sendCmd(uint8_t cmd)
{ // uint8_t       //unsigned char
  LCD_CS1;
  LCD_CS0;
  LCD_DC0; // Set DC low
  uint8_t temp[1];
  memset(temp, 0x00, sizeof(temp));
  temp[0] = cmd;
  spi_write(temp, 1); // To transmit on SPI
  LCD_CS1;
}

/// @brief sends data to the display
/// @param data
void lcd7735_sendData(uint8_t data)
{ // uint8_t      //unsigned char
  LCD_CS1;
  LCD_CS0;
  LCD_DC1; // Set DC HIGH
  uint8_t temp[1];
  memset(temp, 0x00, sizeof(temp));
  temp[0] = data;
  spi_write(temp, 1); // To transmit on SPI
  LCD_CS1;
}

/*========================================================================================================*/

/// @brief write string with custom font onto display
/// @param x x co-ordinate of the display to start writing from
/// @param y y co-ordinate of the display to start writing from
/// @param pt pointer to the character to write
/// @param font font to use
/// @param textColor color of the text
/// @param backgroundColor background color of the text
/// @param fontSize size of the text
/// @return number of characters printed
uint32_t Sst7735_string_custom_fonts(uint16_t x, uint16_t y, const char *pt,
                                     FontDef font, int16_t textColor, int16_t backgroundColor, int16_t fontSize)
{
  uint32_t count = 0;
  if (y > 15)
    return 0;

  uint8_t font_odd_even_offset = 0;
  if (strlen(pt) % 2 == 0)
  {
    font_odd_even_offset += (font.width / 2);
  }

  while (*pt)
  {
    st7735_char_custom_fonts(x * (font.width - font.offset) + font_odd_even_offset + (count * 2), y * (font.height - font.offset), *pt,
                             font, textColor, backgroundColor, fontSize);
    pt++;
    x = x + 1;
    if (x > 20)
      return count; // number of characters printed
    count++;
  }
  return count; // number of characters printed
}

/// @brief write character with custom font onto display
/// @param x x co-ordinate of the display to start writing from
/// @param y y co-ordinate of the display to start writing from
/// @param c character to write
/// @param font font to use
/// @param textColor color of the text
/// @param bgColor background color of the text
/// @param size size of the text
void st7735_char_custom_fonts(int16_t x, int16_t y, char c, FontDef font,
                              int16_t textColor, int16_t bgColor, uint8_t size)
{
  uint16_t line;
  int32_t i, j, k = 0;
  int32_t x_start = 0;
  int32_t y_start = 0;
  int32_t fontPosition = 0;
  int16_t width_By_Column = 0;
  //	if ((x >= ST7735_WIDTH) || (y >= ST7735_HEIGHT) || ((x + 5 * size - 1) < 0)
  //			|| ((y + 8 * size - 1) < 0))
  //		return;
  for (i = 0; i < font.height + 1; i++)
  { // <== Height
    if (fontPosition == font.height * font.column)
      line = 0x0;
    else
    {
      x_start = 0;

      for (k = 0; k < font.column; k++)
      { // <== 3
        line = font.data[((c - 32) * font.height * font.column) + fontPosition];

        width_By_Column = font.width / font.column;

        for (j = 0; j < width_By_Column; j++)
        { // <== Width 8 Bits
          if (line & 0x1)
          {
            if (size == 1)
              st7735_draw_pixel(x + x_start, y + y_start,
                                textColor);
            else
            {
              st7735_fill_rectangle(x + (j * size), y + (i * size), size, size, textColor);
            }
          }
          else if (bgColor != textColor)
          {
            if (size == 1) // default size
              st7735_draw_pixel(x + x_start, y + y_start,
                                bgColor);
            else
            { // big size
              st7735_fill_rectangle(x + j * size, y + i * size,
                                    size, size, bgColor);
            }
          }
          line >>= 1;
          x_start++;
        }
        fontPosition++;
      }
      y_start++;
    }
  }
}

/// @brief write rle encoded monochrome vector image onto display
/// @param x_start x co-ordinate of the display to start writing from
/// @param y_start y co-ordinate of the display to start writing from
/// @param image pointer to the image to write
/// @param color color of the image
/// @param background_color background color of the image
void st7735_draw_monochrome_vector_image(uint8_t x_start, uint8_t y_start, ImageColor *image, uint16_t color, uint16_t background_color)
{

  uint16_t i = 0;
  LCD_CS1; // select

  ST7735_Set_Address_Window(x_start, y_start, x_start + image->width - 1, y_start + image->height - 1);
  uint32_t count = 0;
  while (count < image->width * image->height)
  {
    for (uint8_t j = 0; j < image->data[i]; j++)
    {
      if (image->data[i + 1] == 1)
      {
        lcd7735_sendData((uint8_t)(color >> 8));
        lcd7735_sendData((uint8_t)(color));
      }
      else
      {
        lcd7735_sendData((uint8_t)(background_color >> 8));
        lcd7735_sendData((uint8_t)(background_color));
      }
      count++;
    }
    i += 2;
  }

  LCD_CS0; // Unselect
  return;
}

/// @brief draw a rle encoded image onto the display
/// @param x x co-ordinate of the display to start writing from
/// @param y y co-ordinate of the display to start writing from
/// @param image pointer to the image to write
void st7735_draw_color_image(uint8_t x_start, uint8_t y_start, ImageColor *image)
{

  int i = 0;
  LCD_CS1; // select

  ST7735_Set_Address_Window(x_start, y_start, x_start + image->width - 1, y_start + image->height - 1);

  uint32_t count = 0;
  while (count < image->width * image->height)
  {
    for (uint8_t j = 0; j < image->data[i]; j++)
    {
      lcd7735_sendData((uint8_t)(image->data[i + 1] >> 8));
      lcd7735_sendData((uint8_t)(image->data[i + 1]));
      count++;
    }
    i += 2;
  }

  LCD_CS0; // Unselect
  return;
}

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
static void LCD_Char(int16_t x, int16_t y, const GFXglyph *glyph, const GFXfont *font, uint8_t size, uint32_t color24)
{
  uint8_t *bitmap = font->bitmap;
  uint16_t bo = glyph->bitmapOffset;
  uint8_t bits = 0, bit = 0;
  uint16_t set_pixels = 0;
  uint8_t cur_x, cur_y;
  for (cur_y = 0; cur_y < glyph->height; cur_y++)
  {
    for (cur_x = 0; cur_x < glyph->width; cur_x++)
    {
      if (bit == 0)
      {
        bits = (*(const unsigned char *)(&bitmap[bo++]));
        bit = 0x80;
      }
      if (bits & bit)
        set_pixels++;
      else if (set_pixels > 0)
      {
        st7735_fill_rectangle(x + (glyph->xOffset + cur_x - set_pixels) * size, y + (glyph->yOffset + cur_y) * size, size * set_pixels, size, color24);
        set_pixels = 0;
      }
      bit >>= 1;
    }
    if (set_pixels > 0)
    {
      st7735_fill_rectangle(x + (glyph->xOffset + cur_x - set_pixels) * size, y + (glyph->yOffset + cur_y) * size, size * set_pixels, size, color24);
      set_pixels = 0;
    }
  }
}

void LCD_Font(uint16_t x, uint16_t y, const char *text, const GFXfont *p_font, uint8_t size, uint32_t color24)
{
  int16_t cursor_x = x;
  int16_t cursor_y = y;
  GFXfont font;
  memcpy(&font, p_font, sizeof(GFXfont));
  for (uint16_t text_pos = 0; text_pos < strlen(text); text_pos++)
  {
    char c = text[text_pos];
    if (c == '\n')
    {
      cursor_x = x;
      cursor_y += font.yAdvance * size;
    }
    else if (c >= font.first && c <= font.last && c != '\r')
    {
      GFXglyph glyph;
      memcpy(&glyph, &font.glyph[c - font.first], sizeof(GFXglyph));
      LCD_Char(cursor_x, cursor_y, &glyph, &font, size, color24);
      cursor_x += glyph.xAdvance * size;
    }
  }
}
