/*
 * hw.h
 *
 *  Created on: Feb 18, 2022
 *      Author: sungt
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#include "hw_def.h"



#include "rtc.h"
#include "reset.h"
#include "led.h"
#include "uart.h"
#include "usb.h"
#include "flash.h"
#include "cli.h"


void hwInit(void);

#endif /* SRC_HW_HW_H_ */
