/*
 * exercise9.c
 *
 *  Created on: Sep 11, 2024
 *      Author: tuank
 */

#include "exercise9.h"


int counter = 0;

void init_exercise9(){}
void clearAllClock();
void clearNumberOnClock(int num);


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


void clearNumberOnClock(int num)
{
	HAL_GPIO_WritePin(GPIOA, LED[num], GPIO_PIN_SET);
}

void exercise9_run()
{

}




