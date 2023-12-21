/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI4_15_IRQn
#define led_1_Pin GPIO_PIN_1
#define led_1_GPIO_Port GPIOC
#define led_2_Pin GPIO_PIN_2
#define led_2_GPIO_Port GPIOC
#define led_3_Pin GPIO_PIN_3
#define led_3_GPIO_Port GPIOC
#define motor_stby_Pin GPIO_PIN_0
#define motor_stby_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define motorA_IN1_Pin GPIO_PIN_4
#define motorA_IN1_GPIO_Port GPIOC
#define motorA_IN2_Pin GPIO_PIN_5
#define motorA_IN2_GPIO_Port GPIOC
#define led_6_Pin GPIO_PIN_1
#define led_6_GPIO_Port GPIOB
#define led_4_Pin GPIO_PIN_2
#define led_4_GPIO_Port GPIOB
#define motorB_IN1_Pin GPIO_PIN_6
#define motorB_IN1_GPIO_Port GPIOC
#define motorB_IN2_Pin GPIO_PIN_7
#define motorB_IN2_GPIO_Port GPIOC
#define motorA_pwm_Pin GPIO_PIN_8
#define motorA_pwm_GPIO_Port GPIOC
#define motorB_pwm_Pin GPIO_PIN_9
#define motorB_pwm_GPIO_Port GPIOC
#define bt_tx_Pin GPIO_PIN_9
#define bt_tx_GPIO_Port GPIOA
#define bt_rx_Pin GPIO_PIN_10
#define bt_rx_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define led_Pin GPIO_PIN_10
#define led_GPIO_Port GPIOC
#define led_5_Pin GPIO_PIN_3
#define led_5_GPIO_Port GPIOB
#define door_pwm_Pin GPIO_PIN_5
#define door_pwm_GPIO_Port GPIOB
#define sensor_1_Pin GPIO_PIN_6
#define sensor_1_GPIO_Port GPIOB
#define sensor_1_EXTI_IRQn EXTI4_15_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
