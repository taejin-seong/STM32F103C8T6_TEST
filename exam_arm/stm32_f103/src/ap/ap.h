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


// MPU9250 상보필터 변수
#define Alpha  0.96
#define Beta   0.92
#define DEG2RAD   0.01745  // pi/180
#define RAD2DEG   57.29578 // 180/pi

// 엔코더 모터 RPM 변수
#define ONE_ROTATION_PULSES 7
// 엔코더 이동거리 변수
#define D 65		// 바퀴 둘레   // TODO: 바퀴 둘레 수정

#define G 20		// 기어비
#define PI 3.14
#define F (D * PI) / (G * ONE_ROTATION_PULSES ) // 1 thick당 이동한 거리




// TODO: 엔코더 모터 Pin 연결

/*
							// 좌측 모터
(PB1) TIM3_CH4 -----> ENA

(PB7) TIM4_CH2 -----> CHA
(PB6) TIM4_CH1 -----> CHB

							// 우측 모터
(PB0) TIM3_CH3 -----> ENB

(PA0) TIM2_CH1 -----> CHB
(PA1) TIM2_CH2 -----> CHA

*/
#endif /* SRC_AP_AP_H_ */
