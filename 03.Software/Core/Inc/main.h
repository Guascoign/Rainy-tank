/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RGB_Pin GPIO_PIN_0
#define LED_RGB_GPIO_Port GPIOA
#define ESP_TX_Pin GPIO_PIN_2
#define ESP_TX_GPIO_Port GPIOA
#define ESP_RX_Pin GPIO_PIN_3
#define ESP_RX_GPIO_Port GPIOA
#define V_Sense_Pin GPIO_PIN_4
#define V_Sense_GPIO_Port GPIOA
#define I_Sense_Pin GPIO_PIN_5
#define I_Sense_GPIO_Port GPIOA
#define Liquid_level_Pin GPIO_PIN_6
#define Liquid_level_GPIO_Port GPIOA
#define DHT11_D_Pin GPIO_PIN_7
#define DHT11_D_GPIO_Port GPIOA
#define ESP_EN_Pin GPIO_PIN_1
#define ESP_EN_GPIO_Port GPIOB
#define FAN_SPPED_Pin GPIO_PIN_8
#define FAN_SPPED_GPIO_Port GPIOA
#define USB_TX_Pin GPIO_PIN_9
#define USB_TX_GPIO_Port GPIOA
#define USB_RX_Pin GPIO_PIN_10
#define USB_RX_GPIO_Port GPIOA
#define DCDC_EN_Pin GPIO_PIN_15
#define DCDC_EN_GPIO_Port GPIOA
#define RUNLED_Pin GPIO_PIN_3
#define RUNLED_GPIO_Port GPIOB
#define LED_PWM1_Pin GPIO_PIN_6
#define LED_PWM1_GPIO_Port GPIOB
#define LED_PWM2_Pin GPIO_PIN_7
#define LED_PWM2_GPIO_Port GPIOB
#define PUMP_Pin GPIO_PIN_8
#define PUMP_GPIO_Port GPIOB
#define FAN_PWM_Pin GPIO_PIN_9
#define FAN_PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
