
#include "main.h"
#include "motor_direction.h"

//-------------------------------------------------------------------------------------------
void enablePWM_ch3(void)
{
	TIM3->CNT=0;
	TIM3->CR1 |= 0x1ul;
	TIM3->CCER |= 0x1ul<<8;

}

void pwmLevel_ch3(uint32_t value)
{	
	TIM3->CCR3=value;
	
}

void enablePWM_ch4(void)
{
	TIM3->CNT=0;
	TIM3->CR1 |= 0x1ul;
	TIM3->CCER |= 0x1ul<<12;

}

void pwmLevel_ch4(uint32_t value)
{	
	TIM3->CCR4=value;
	
}


//-------------------------------------------------------------------------------------------
void motor_direction(uint8_t direction)
{
	
	switch(direction){
	
		case motorA_up :
			pwmLevel_ch4(100);
			GPIOC->ODR &= ~(0xful<<4);
			GPIOC->ODR |= 0x1ul<<7;
			break;
		
		case motorA_down:
			pwmLevel_ch4(100);
			GPIOC->ODR &= ~(0xful<<4);
			GPIOC->ODR |= 0x1ul<<6;
			break;
		case motorA_stop:
			GPIOC->ODR &= ~(0xful<<4);
			break;
		
		case motorB_strong:
			pwmLevel_ch3(100);
			GPIOC->ODR &= ~(0xful<<4);
			GPIOC->ODR |= 0x1ul<<4;
			break;
		
		case motorB_mid:
			pwmLevel_ch3(70);
			GPIOC->ODR &= ~(0xful<<4);
			GPIOC->ODR |= 0x1ul<<4;
			break;
		
		case motorB_weak:
			pwmLevel_ch3(30);
			GPIOC->ODR &= ~(0xful<<4);
			GPIOC->ODR |= 0x1ul<<4;
			break;
		
		case motorB_stop:
			GPIOC->ODR &= ~(0xful<<4);
			break;
		
		
	}
}