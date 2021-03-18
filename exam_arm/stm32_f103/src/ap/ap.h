/*
 * ap.h
 *
 *  Created on: Mar 14, 2021
 *      Author: sungt
 */
/* 실질적으로  Main 함수를 담당하는 부분입니다.*/

#ifndef SRC_AP_AP_H_
#define SRC_AP_AP_H_


#include "hw.h"



void apInit(void);
void apMain(void);


#define Alpha  0.96
#define Beta   0.92
#define DEG2RAD   0.01745  // pi/180
#define RAD2DEG   57.29578 // 180/pi



#endif /* SRC_AP_AP_H_ */
