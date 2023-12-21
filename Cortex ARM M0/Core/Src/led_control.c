#include "main.h"
#include <stdio.h>
#include "led_control.h"
#include <stdbool.h>
bool led2On = false;
bool led3On = false;
bool led4On = false;

//-------------------------------------------------------------------------------------------

void led_control(uint8_t control)
{
	
	switch(control){
	
		case led_on:
      GPIOC->ODR |= 0x04ul;
			GPIOC->ODR |= 0x08ul;
      GPIOB->ODR |= 0x04ul;
      led2On = true;
      led3On = true;
      led4On = true;
			
      break;

    case led_off:
      GPIOC->ODR &= ~0x04ul;
			GPIOC->ODR &= ~0x08ul;
      GPIOB->ODR &= ~0x04ul;
      led2On = false;
      led3On = false;
      led4On = false;
			
      break;

    case led2_on:
      if (!led2On) {
        GPIOC->ODR |= 0x04ul;
        led2On = true;
      } else {
        GPIOC->ODR &= ~0x04ul;
        led2On = false;
      }
      break;

    case led3_on:
      if (!led3On) {
        GPIOC->ODR |= 0x08ul;
        led3On = true;
      } else {
        GPIOC->ODR &= ~0x08ul;
        led3On = false;
      }
      break;

    case led4_on:
      if (!led4On) {
        GPIOB->ODR |= 0x04ul;
        led4On = true;
      } else {
        GPIOB->ODR &= ~0x04ul;
        led4On = false;
      }
      break;
		case door_led_on:
      GPIOB->ODR |= 0x08ul;      	
      break;

    case door_led_off:
			GPIOB->ODR &= ~0x08ul;			
      break;

	}
}