/*
 * bsp.h
 *
 *  Created on: Feb 18, 2022
 *      Author: sungt
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#include "def.h"


#define _USE_LOG_PRINT      1 // 1일 경우 log 출력,  0일 경우 log 출력 안함

#if _USE_LOG_PRINT
#define logPrintf(fmt, ...)       printf(fmt, ##__VA_ARGS__)
#else
#define logPrintf(fmt, ...)
#endif /* _USE_LOG_PRINT */



#include "stm32f1xx_hal.h"

void bspInit(void);

void delay(uint32_t ms);
uint32_t millis(void);

void Error_Handler(void);

#endif /* SRC_BSP_BSP_H_ */
