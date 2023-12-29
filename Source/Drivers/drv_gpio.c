/*
 * drv_gpio.c
 *
 *  Created on: 02-Oct-2021
 *      Author: Surajkumar
 */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
/*	Add user define includes	*/
#include "max32665.h"
#include "gpio.h"
#include "drv_gpio.h"
#include "mxc_delay.h"

// #include "drv_pwm_timer.h"

/***** Definitions *****/
/*////////////////////////////////////////////////////////////*/

#define LED1_RED_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define LED1_RED_PIN_IN MXC_GPIO_PIN_4
#define LED1_GREEN_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define LED1_GREEN_PIN_IN MXC_GPIO_PIN_3

#define LED2_RED_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define LED2_RED_PIN_IN MXC_GPIO_PIN_12
#define LED2_GREEN_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define LED2_GREEN_PIN_IN MXC_GPIO_PIN_11

#define LED3_RED_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define LED3_RED_PIN_IN MXC_GPIO_PIN_13
#define LED3_GREEN_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define LED3_GREEN_PIN_IN MXC_GPIO_PIN_15
/*////////////////////////////////////////////////////////////*/
#define CHARGER_SENSE_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define CHARGER_SENSE_PIN_IN MXC_GPIO_PIN_22

#define CHARGING_STATUS_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define CHARGING_STATUS_PIN_IN MXC_GPIO_PIN_10

#define BATTERY_READ_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define BATTERY_READ_PIN_IN MXC_GPIO_PIN_23

#define POWER_KEY_SENSE_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define POWER_KEY_SENSE_PIN_IN MXC_GPIO_PIN_18

#define POWER_LATCH_ENABLE_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define POWER_LATCH_ENABLE_PIN_IN MXC_GPIO_PIN_19

#define BATTERY_SENSE_CONTROL_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define BATTERY_SENSE_CONTROL_PIN_IN MXC_GPIO_PIN_28
/*////////////////////////////////////////////////////////////*/
#define WP_EEPROM_PORT_IN (mxc_gpio_regs_t *)MXC_GPIO0
#define WP_EEPROM_PIN_IN MXC_GPIO_PIN_29
/*////////////////////////////////////////////////////////////*/

mxc_gpio_cfg_t gpio_led1_red;
mxc_gpio_cfg_t gpio_led1_green;

mxc_gpio_cfg_t gpio_led2_red;
mxc_gpio_cfg_t gpio_led2_green;

mxc_gpio_cfg_t gpio_led3_red;
mxc_gpio_cfg_t gpio_led3_green;

mxc_gpio_cfg_t switch1_power;
mxc_gpio_cfg_t switch2_vol_up;
mxc_gpio_cfg_t switch3_mode;
mxc_gpio_cfg_t switch4_vol_dwn;
mxc_gpio_cfg_t switch5_recording;

mxc_gpio_cfg_t gpio_LCD_backlight;

mxc_gpio_cfg_t gpio_charger_sense;
mxc_gpio_cfg_t gpio_charging_sense;
mxc_gpio_cfg_t gpio_battery_read;
mxc_gpio_cfg_t gpio_power_key_sense;
mxc_gpio_cfg_t gpio_power_latch_enable;
mxc_gpio_cfg_t Battery_Sense_Control;

mxc_gpio_cfg_t Wp_EEPROM;

#define SET_GPIO(gpio, portname, pin, padname, funcname, Max_pin_volt) \
	gpio.port = (mxc_gpio_regs_t *)portname;                           \
	gpio.mask = pin;                                                   \
	gpio.pad = (mxc_gpio_pad_t)padname;                                \
	gpio.func = funcname;                                              \
	gpio.vssel = Max_pin_volt;                                         \
	MXC_GPIO_Config(&gpio);

/*//////////////////////////////////////////////////////////////////////////////////////*/

/// @brief initializes gpio pins
void init_gpio()
{
#if DEBUG
	// uart_print("init_gpio\n");
#endif
	mxc_gpio_cfg_t gpioconfig;
	/*================================= SPI LCD =======================================*/
	//======= ST7735s LCD RESET configuration---> P1.1 =======
	mxc_gpio_cfg_t gpioConfig_reset;
	SET_GPIO(gpioConfig_reset, MXC_GPIO1, MXC_GPIO_PIN_1, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	//======= ST7735s LCD RS configuration---> P1.7 =======
	SET_GPIO(gpioconfig, (mxc_gpio_regs_t *)MXC_GPIO1, MXC_GPIO_PIN_7, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	//======= ST7735s LCD /CS configuration---> P1.8 =======
	SET_GPIO(gpioconfig, (mxc_gpio_regs_t *)MXC_GPIO1, MXC_GPIO_PIN_8, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	//======= ST7735s LCD SPI_MOSI configuration---> P1.9 =======
	SET_GPIO(gpioconfig, (mxc_gpio_regs_t *)MXC_GPIO1, MXC_GPIO_PIN_9, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_ALT1, MXC_GPIO_VSSEL_VDDIOH);

	//======= ST7735s LCD SPI_MISO configuration---> P1.10 =======
	SET_GPIO(gpioconfig, (mxc_gpio_regs_t *)MXC_GPIO1, MXC_GPIO_PIN_10, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_ALT1, MXC_GPIO_VSSEL_VDDIOH);

	//======= ST7735s LCD SPI_CLK configuration---> P1.11 =======
	SET_GPIO(gpioconfig, (mxc_gpio_regs_t *)MXC_GPIO1, MXC_GPIO_PIN_11, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_ALT1, MXC_GPIO_VSSEL_VDDIOH);

	//======= ST7735s LCD Back Light configuration---> P1.3 =======
	SET_GPIO(gpio_LCD_backlight, (mxc_gpio_regs_t *)MXC_GPIO1, MXC_GPIO_PIN_3, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIO);

	/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

	/*===================== Charger sense =====================*/
	SET_GPIO(gpio_charger_sense, CHARGER_SENSE_PORT_IN, CHARGER_SENSE_PIN_IN, MXC_GPIO_PAD_PULL_DOWN, MXC_GPIO_FUNC_IN, MXC_GPIO_VSSEL_VDDIOH);

	/*===================== Charging status =====================*/
	SET_GPIO(gpio_charging_sense, CHARGING_STATUS_PORT_IN, CHARGING_STATUS_PIN_IN, MXC_GPIO_PAD_PULL_DOWN, MXC_GPIO_FUNC_IN, MXC_GPIO_VSSEL_VDDIOH);

	/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
	/*=============================================== OUTPUT ================================================*/

	// ===== LED1 RED ======
	SET_GPIO(gpio_led1_red, LED1_RED_PORT_IN, LED1_RED_PIN_IN, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	// ===== LED1 GREEN ======
	SET_GPIO(gpio_led1_green, LED1_GREEN_PORT_IN, LED1_GREEN_PIN_IN, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	// ===== LED2 RED ======
	SET_GPIO(gpio_led2_red, LED2_RED_PORT_IN, LED2_RED_PIN_IN, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	// ===== LED2 GREEN ======
	SET_GPIO(gpio_led2_green, LED2_GREEN_PORT_IN, LED2_GREEN_PIN_IN, MXC_GPIO_PAD_NONE, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	// ===== LED3 RED ======
	SET_GPIO(gpio_led3_red, LED3_RED_PORT_IN, LED3_RED_PIN_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	// ===== LED3 GREEN ======
	SET_GPIO(gpio_led3_green, LED3_GREEN_PORT_IN, LED3_GREEN_PIN_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);
	/*========================================================*/

	/*=============== gpio_power_latch_enable ===============*/
	SET_GPIO(gpio_power_latch_enable, POWER_LATCH_ENABLE_PORT_IN, POWER_LATCH_ENABLE_PIN_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	/*=============== Battery_Sense_Control ===============*/
	SET_GPIO(Battery_Sense_Control, BATTERY_SENSE_CONTROL_PORT_IN, BATTERY_SENSE_CONTROL_PIN_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIO);

	/*=============== Write Protecting EEPROM ===============*/
	SET_GPIO(Wp_EEPROM, WP_EEPROM_PORT_IN, WP_EEPROM_PIN_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_FUNC_OUT, MXC_GPIO_VSSEL_VDDIOH);

	/*========================================================*/

	//================================= gpio_power_on_latch_enable =================================
	// To do => only enable this when voltage is above the threshold(1.8V) and move this function in ADC module
	MXC_GPIO_OutSet(gpio_power_latch_enable.port, gpio_power_latch_enable.mask);

	MXC_GPIO_OutSet(MXC_GPIO1, MXC_GPIO_PIN_8);
	/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
}

/// @brief set GPIO port and pin
/// @param port gpio port
/// @param pin gpio pin
/// @return true if successful, false otherwise
uint8_t set_gpio(GPIO_PORT port, uint32_t pin)
{
	uint8_t Result = false;

	if (port == MXC_GPIO_PORT0)
	{
		MXC_GPIO_OutSet(MXC_GPIO0, pin);
		Result = true;
	}
	else if (port == MXC_GPIO_PORT1)
	{
		MXC_GPIO_OutSet(MXC_GPIO1, pin);
		Result = true;
	}
	else
	{
		/*	Invalid port */
	}

	return Result;
}

/// @brief frees gpio port and pin
/// @param port gpio port
/// @param pin gpio pin
/// @return true if successful, false otherwise
uint8_t clear_gpio(GPIO_PORT port, uint32_t pin)
{
	uint8_t Result = false;

	if (port == MXC_GPIO_PORT0)
	{
		MXC_GPIO_OutClr(MXC_GPIO0, pin);
		Result = true;
	}
	else if (port == MXC_GPIO_PORT1)
	{
		MXC_GPIO_OutClr(MXC_GPIO1, pin);
		Result = true;
	}
	else
	{
		/*	Invalid port */
	}

	return Result;
}

uint8_t clear_spi_cs()
{
	MXC_GPIO_OutClr(MXC_GPIO1, MXC_GPIO_PIN_8);
}

uint8_t set_spi_cs()
{
	MXC_GPIO_OutSet(MXC_GPIO1, MXC_GPIO_PIN_8);
}

void shutdown_device(void)
{
	MXC_GPIO_OutClr(gpio_power_latch_enable.port, gpio_power_latch_enable.mask);
}

/// @brief toggle LCD backlight
/// @param lightState turns it on if true, off if false
void lcd_backlight(bool lightState)
{
	if (lightState)
	{
		MXC_GPIO_OutSet(gpio_LCD_backlight.port, gpio_LCD_backlight.mask);
	}
	else if (!lightState)
	{
		MXC_GPIO_OutClr(gpio_LCD_backlight.port, gpio_LCD_backlight.mask);
	}
	return;
}

bool charging_state(void)
{
	if ((MXC_GPIO_InGet(gpio_charging_sense.port, gpio_charging_sense.mask)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool charger_connection_state(void)
{
	if ((MXC_GPIO_InGet(gpio_charger_sense.port, gpio_charger_sense.mask)))
	{
		// led3_control(true);
		// uart_print("charging pin connected\n");
		return true;
	}
	else
	{
		// led3_control(false);
		// uart_print("charging pin disconnected\n");
		return false;
	}
}

void Battery_Read_Cntrl(bool Cntrl_State)
{
	if (Cntrl_State)
	{
		MXC_GPIO_OutSet(Battery_Sense_Control.port, Battery_Sense_Control.mask);
	}
	else if (!Cntrl_State)
	{
		MXC_GPIO_OutClr(Battery_Sense_Control.port, Battery_Sense_Control.mask);
	}
	return;
}

void Soft_Start_Hold(bool Cntrl_State)
{
	uart_print("soft start : %d\n", Cntrl_State);
	if (Cntrl_State)
	{
		//================================= gpio_power_on_latch_enable =================================
		// To do => only enable this when voltage is above the threshold(1.8V) and move this function in ADC module
		MXC_GPIO_OutSet(gpio_power_latch_enable.port, gpio_power_latch_enable.mask);
	}
	else if (!Cntrl_State)
	{
		MXC_GPIO_OutClr(gpio_power_latch_enable.port, gpio_power_latch_enable.mask);
	}
	return;
}
