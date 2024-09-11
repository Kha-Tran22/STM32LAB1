/*
 * exercise6.c
 *
 *  Created on: Sep 11, 2024
 *      Author: tuank
 */

#include "exercise6.h"


int counter = 0;

void init_exercise6(){}

uint16_t LED[12] =
{
	GPIO_PIN_4,
	GPIO_PIN_5,
	GPIO_PIN_6,
	GPIO_PIN_7,
	GPIO_PIN_8,
	GPIO_PIN_9,
	GPIO_PIN_10,
	GPIO_PIN_11,
	GPIO_PIN_12,
	GPIO_PIN_13,
	GPIO_PIN_14,
	GPIO_PIN_15

};

void led_on(int index)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14 , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15 , GPIO_PIN_SET);

	HAL_GPIO_WritePin(GPIOA, LED[index], GPIO_PIN_RESET);
}

void exercise6_run()
{
	led_on(counter++);
	if (counter >= 12)
			counter = 0;
}




