
#include "main.h"
#include <stdio.h>
#include "door_control.h"
#include <stdbool.h>
bool doorOn = false;
//-------------------------------------------------------------------------------------------

void door_Control(uint8_t Control)
{
	
	switch(Control){
	
		case door_Open:
			GPIOB->ODR |= 0x01ul<<3;
      doorOn = true;
      break;

    case door_Close:
			GPIOB->ODR &= ~0x01ul<<3;
      doorOn = false;
      break;

	}
}
		