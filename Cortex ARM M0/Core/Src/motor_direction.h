
#include "main.h"

#define motorA_up  	0  
#define motorA_down 1
#define motorA_stop 2
#define motorB_strong   3
#define motorB_mid   4
#define motorB_weak	5	
#define motorB_stop 6



void motor_direction(uint8_t direction);

void enablePWM_ch3(void);
void pwmLevel_ch3(uint32_t value);
void enablePWM_ch4(void);
void pwmLevel_ch4(uint32_t value);


