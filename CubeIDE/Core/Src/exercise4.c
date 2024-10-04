/*
 * exercise4.c
 *
 *  Created on: Sep 10, 2024
 *      Author: tuank
 */


#include "exercise4.h"

int counter = 0;

char seg[10] =
{
		0x40,
		0x79,
		0x24,
		0x30,
		0x19,
		0x12,
		0x02,
		0x78,
		0x00,
		0x10
};

void display_number(int number)
{
	char code = seg[number];

	// Kiem tra bit tuong ung SEG cua so can hien thi neu = 1 thi SEG OFF
	HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, (code & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, (code & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, (code & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, (code & 0x08) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, (code & 0x10) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, (code & 0x20) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, (code & 0x40) ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void exercise4_run()
{
	display_number(counter++);
	if (counter >= 10)
	{
		counter = 0;
	}
}



