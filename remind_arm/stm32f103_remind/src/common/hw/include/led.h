/*
 * led.h
 *
 *  Created on: 2022. 2. 19.
 *      Author: sungt
 */

#ifndef SRC_COMMON_HW_INCLUDE_LED_H_
#define SRC_COMMON_HW_INCLUDE_LED_H_


#include "hw_def.h"



#ifdef _USE_HW_LED

#define LED_MAX_CH      HW_LED_MAX_CH

bool ledInit(void);
void ledOn(uint8_t ch);
void ledOff(uint8_t ch);
void ledToggle(uint8_t ch);

#endif /* _USE_HW_LED */

#endif /* SRC_COMMON_HW_INCLUDE_LED_H_ */
