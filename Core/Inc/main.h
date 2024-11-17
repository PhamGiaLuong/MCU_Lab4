/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define A_Pin GPIO_PIN_1
#define A_GPIO_Port GPIOA
#define B_Pin GPIO_PIN_2
#define B_GPIO_Port GPIOA
#define C_Pin GPIO_PIN_3
#define C_GPIO_Port GPIOA
#define D_Pin GPIO_PIN_4
#define D_GPIO_Port GPIOA
#define E_Pin GPIO_PIN_5
#define E_GPIO_Port GPIOA
#define F_Pin GPIO_PIN_6
#define F_GPIO_Port GPIOA
#define G_Pin GPIO_PIN_7
#define G_GPIO_Port GPIOA
#define Button0_Pin GPIO_PIN_0
#define Button0_GPIO_Port GPIOB
#define Button1_Pin GPIO_PIN_1
#define Button1_GPIO_Port GPIOB
#define Button2_Pin GPIO_PIN_2
#define Button2_GPIO_Port GPIOB
#define Warning_Pin GPIO_PIN_15
#define Warning_GPIO_Port GPIOB
#define En1_Pin GPIO_PIN_8
#define En1_GPIO_Port GPIOA
#define En2_Pin GPIO_PIN_9
#define En2_GPIO_Port GPIOA
#define En3_Pin GPIO_PIN_10
#define En3_GPIO_Port GPIOA
#define En4_Pin GPIO_PIN_11
#define En4_GPIO_Port GPIOA
#define RedV_Pin GPIO_PIN_3
#define RedV_GPIO_Port GPIOB
#define AmberV_Pin GPIO_PIN_4
#define AmberV_GPIO_Port GPIOB
#define GreenV_Pin GPIO_PIN_5
#define GreenV_GPIO_Port GPIOB
#define RedH_Pin GPIO_PIN_6
#define RedH_GPIO_Port GPIOB
#define AmberH_Pin GPIO_PIN_7
#define AmberH_GPIO_Port GPIOB
#define GreenH_Pin GPIO_PIN_8
#define GreenH_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
