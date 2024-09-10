/*
 * exercise2.c
 *
 *  Created on: Sep 10, 2024
 *      Author: tuank
 */

#include"exercise2.h"

int led_status = RED;
int counter = 0;

void init_exercise2(){}

void red_on()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}

void yellow_on()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}

void green_on()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}

void exercise2_run()
{
	switch(led_status)
	{
		case RED:
			red_on();
			counter++;
			if (counter >= 5)
			{
				led_status = GREEN;
				counter = 0;
			}
			break;
		case YELLOW:
			yellow_on();
			counter++;
			if (counter >= 2)
			{
				led_status = RED;
				counter = 0;
			}
			break;

		case GREEN:
			green_on();
			counter++;
			if (counter >= 3)
			{
				led_status = YELLOW;
				counter = 0;
			}

			break;
	default:
			break;

	}
}
