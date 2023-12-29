/*
 * drv_gpio.h
 *
 *  Created on: 02-Oct-2021
 *      Author: Surajkumar
 */
#include <stdint.h>
#ifndef DRV_GPIO_H_
#define DRV_GPIO_H_

#include "stdbool.h"

typedef enum
{
	MXC_GPIO_PORT0,
	MXC_GPIO_PORT1,
	MXC_GPIO_MAX
} GPIO_PORT;

void init_gpio();
uint8_t set_gpio(GPIO_PORT port, uint32_t pin);
uint8_t clear_gpio(GPIO_PORT port, uint32_t pin);
void shutdown_device(void);
void lcd_backlight(bool lightState);

bool charger_connection_state(void);

void enable_gpio_interrupts(void);
void Battery_Read_Cntrl(bool Cntrl_State);
void Soft_Start_Hold(bool Cntrl_State);
bool charging_state(void);

uint8_t set_spi_cs();
uint8_t clear_spi_cs();
#endif /* DRV_GPIO_H_ */
