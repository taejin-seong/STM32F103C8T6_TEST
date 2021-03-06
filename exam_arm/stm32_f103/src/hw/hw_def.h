/*
 * hw_def.h
 *
 *  Created on: Mar 14, 2021
 *      Author: sungt
 */

/*hw 폴더 밑에 만들어지는 모듈들이 공통으로 쓰는 하드웨어 관련 정의를 선언합니다.*/

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "def.h"
#include "bsp.h"

//TODO: HW 설정 (2)
#define   _USE_HW_UART
#define   _USE_HW_TIM
#define   _USE_HW_I2C
#define   _USE_HW_SPI
#define   _USE_HW_MOTOR
#define   _USE_HW_MPU9250
#define   _USE_HW_NRF24L01
#define   _USE_HW_LED




/*									Parameter
------------------------------------------------ */
#define  HW_LED_MAX_CH					1
#define  HW_UART_MAX_CH					1
#define  HW_MOTOR_MAX_CH			    4





#endif /* SRC_HW_HW_DEF_H_ */
