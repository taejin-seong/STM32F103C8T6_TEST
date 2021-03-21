/*
 * ap.c
 *
 *  Created on: Mar 14, 2021
 *      Author: sungt
 */

#ifndef SRC_AP_AP_C_
#define SRC_AP_AP_C_


#include "ap.h"




// TEST용 함수
void apInit(void)
{
   uartOpen(_DEF_UART1, 115200); //UART 개통


   // nRF24L01 송신 코드
   /*
   while(NRF24L01_Check())
   	{
	    uartPrintf(_DEF_UART1,"NRF24L01 wireless module cannot be found by hardware\n" );
   		HAL_Delay(100);
   	}
   	 uartPrintf(_DEF_UART1, "NRF24L01 wireless module hardware connection is normal\n");

   	 NRF24L01_TX_Mode();
   	 uartPrintf(_DEF_UART1, "Enter data sending mode, send data every 1s\n");
	*/


   // nRF24L01 수신 코드
  /*
   while(NRF24L01_Check())
  	{
  		uartPrintf(_DEF_UART1,"NRF24L01 wireless module cannot be found by hardware\n");
   		HAL_Delay(100);
  	}

  	uartPrintf(_DEF_UART1,"NRF24L01 wireless module hardware connection is normal\n");

  	NRF24L01_RX_Mode();
    uartPrintf(_DEF_UART1, "Enter data receiving mode\n");
   */
}



// TEST용 함수
void apMain(void)
{

	// nRF24L01 송신 코드 (보낼 데이터)
//	uint8_t tmp_buf[]="Hey, data is received!";

	// nRF24L01 수신 코드 (받을 데이터 버퍼)
//	uint8_t tmp_buf[256]; // 임시로 지정


	// MPU9250  각도 값 테스트 변수
//	int16_t AccData, MagData, GyroData ;

    // MPU9250 축 테스트 변수
   int16_t Ac_X, Ac_Y, Ac_Z, Gy_X, Gy_Y, Gy_Z, Ma_X, Ma_Y, Ma_Z;

   //상보 필터 테스트 변수


   int16_t Base_Ax, Base_Ay,Base_Az, Base_Gx, Base_Gy, Base_Gz;
   int16_t Las_Angle_Gx , Las_Angle_Gy, Las_Angle_Gz;
   int16_t Angle_Ax, Angle_Ay, Angle_Gx, Angle_Gy, Angle_Gz; //Angle_Az,
   //int16_t Reward_Mx, Reward_My; /* 변환행렬 지자계 각도 보정 변수 */
   int16_t Roll , Pitch , Yaw ;
   int16_t Yaw_G, Yaw_M;

   float dt,pre_msec;

   calibrate(&Base_Ax, &Base_Ay, &Base_Az, &Base_Gx, &Base_Gy, &Base_Gz);

	while(1)
	{

		// MPU9250: 변환행렬로 지자계 각도 보정 할 시...
/*
		  //단위시간 변화량
		  dt = (millis()-pre_msec)/1000.0;
		  pre_msec = millis();

		  //상보 필터 테스트 TODO: 미완성
		  MPU6050_GetData_Axis(&Ac_X, &Ac_Y, &Ac_Z, &Gy_X, &Gy_Y, &Gy_Z, &Ma_X, &Ma_Y, &Ma_Z);

		  Las_Angle_Gx = Roll;	//최근값 누적
		  Las_Angle_Gy = Pitch;
		  Las_Angle_Gz = Yaw;


		  Gy_X = (Gy_X - Base_Gx)/ 131;
		  Gy_Y = (Gy_Y - Base_Gy)/ 131;
		  Gy_Z = (Gy_Z - Base_Gz)/ 131;


		  Angle_Ax = atan(-1.000 * Ac_Y / sqrt( pow(Ac_X,2) + pow(Ac_Z,2) ) ) * RAD2DEG;
		  Angle_Ay = atan(Ac_X / sqrt( pow(Ac_Y,2) + pow(Ac_Z,2) ) ) * RAD2DEG;

		  Angle_Gx = Gy_X * dt + Las_Angle_Gx;
		  Angle_Gy = Gy_Y * dt + Las_Angle_Gy;
		  Angle_Gz = Gy_Z * dt + Las_Angle_Gz;

		  dt = 0.000;

		  Roll  = Alpha * Angle_Gx + (1.000 - Alpha) * Angle_Ax;
		  Pitch = Alpha * Angle_Gy + (1.000 - Alpha) * Angle_Ay;


		  Ma_X  =  (Ma_X - 15) * 0.9;
		  Ma_Y  =  Ma_Y + 65;
		  Ma_Z  =  (Ma_Z + 125) * 0.53;

		  Reward_Mx =  (cos(70.000*DEG2RAD)*Ma_X + sin(70.000*DEG2RAD)*Ma_Z) - 141;
		  Reward_My =  (cos(-70.000*DEG2RAD)*Ma_Y - sin(-70.000*DEG2RAD)*Ma_Z)- 143;

		  Yaw_G =  Angle_Gz;
		  Yaw_M =  -atan2(Reward_Mx, Reward_My) * RAD2DEG;


		  if( (Roll<10) && (Roll>-10) && (Pitch<10) && (Pitch>-10) )
		  {
			  Yaw = Beta * Yaw_G + (1.000 - Beta) * Yaw_M;
		  }
		  else
		  {
			  Yaw = Yaw_G;
		  }

		  uartPrintf(_DEF_UART1, "Roll:%d, Pitch %d, Yaw:%d , Yaw_G:%d, Yaw_M:%d \r\n", Roll, Pitch, Yaw, Yaw_G, Yaw_M);
		  delay(10);
*/


		// MPU9250: 변환행렬로 지자계 각도 비보정

		  //단위시간 변화량
		  dt = (millis()-pre_msec)/1000.0;
		  pre_msec = millis();

		  //상보 필터 테스트 TODO: 미완성
		  MPU6050_GetData_Axis(&Ac_X, &Ac_Y, &Ac_Z, &Gy_X, &Gy_Y, &Gy_Z, &Ma_X, &Ma_Y, &Ma_Z);

		  Las_Angle_Gx = Roll;	//최근값 누적
		  Las_Angle_Gy = Pitch;
		  Las_Angle_Gz = Yaw;


		  Gy_X = (Gy_X - Base_Gx)/ 131;
		  Gy_Y = (Gy_Y - Base_Gy)/ 131;
		  Gy_Z = (Gy_Z - Base_Gz)/ 131;


		  Angle_Ax = atan(-1.000 * Ac_Y / sqrt( pow(Ac_X,2) + pow(Ac_Z,2) ) ) * RAD2DEG;
		  Angle_Ay = atan(Ac_X / sqrt( pow(Ac_Y,2) + pow(Ac_Z,2) ) ) * RAD2DEG;

		  Angle_Gx = Gy_X * dt + Las_Angle_Gx;
		  Angle_Gy = Gy_Y * dt + Las_Angle_Gy;
		  Angle_Gz = Gy_Z * dt + Las_Angle_Gz;

		  dt = 0.000;

		  Roll  = Alpha * Angle_Gx + (1.000 - Alpha) * Angle_Ax;
		  Pitch = Alpha * Angle_Gy + (1.000 - Alpha) * Angle_Ay;

          Yaw_G =  Angle_Gz;
          Yaw_M =  -atan2(Ma_X, Ma_Y) * RAD2DEG;



	      Yaw = Beta * Yaw_G + (1.000 - Beta) * Yaw_M;

		  uartPrintf(_DEF_UART1, "Roll:%d, Pitch %d, Yaw:%d , Yaw_G:%d, Yaw_M:%d \r\n", Roll, Pitch, Yaw, Yaw_G, Yaw_M);
		  delay(5);





		//MPU-9250 각도 값 테스트
		/*
		MPU9250_GetData(&AccData, &MagData, &GyroData);
		//															  가속도계센서 각도      지자기센서 각도  자이로센서 각도
		uartPrintf(_DEF_UART1, "MPU9250: ACC:%d , Mag:%d , Gyro:%d \r\n", AccData,  MagData,  GyroData);
		HAL_Delay(10);
		*/




		//MPU-9250  센서 축 테스트

	//	MPU6050_GetData_Axis(&Ac_X, &Ac_Y, &Ac_Z, &Gy_X, &Gy_Y, &Gy_Z, &Ma_X, &Ma_Y, &Ma_Z);
	//	uartPrintf(_DEF_UART1, "MPU9250: Ac_X: %d, Ac_Y: %d, Ac_Z: %d, Gy_X: %d, Gy_Y: %d, Gy_Z: %d, Ma_X: %d, &Ma_Y: %d, Ma_Z: %d \r\n",
	//			   	   	   	   	   	   	  Ac_X, Ac_Y, Ac_Z, Gy_X, Gy_Y, Gy_Z, Ma_X, Ma_Y, Ma_Z);

	//	uartPrintf(_DEF_UART1, "Ma_X: %d, Ma_Y: %d, Ma_Z: %d \r\n", Ma_X, Ma_Y, Ma_Z);
	//    HAL_Delay(10);




		//nRF24L01 송신 코드
		/*
		if (NRF24L01_TxPacket(tmp_buf) == TX_OK)
		{
			uartPrintf(_DEF_UART1,"NRF24L01 wireless module data sent successfully: %s\n",tmp_buf);
		}
		else
		{
			uartPrintf(_DEF_UART1, "NRF24L01 wireless module data transmission failed\n");
		}
		*/

		//nRF24L01 수신 코드
		/*
		if(NRF24L01_RxPacket(tmp_buf)==0)
		{
			// tmp_buf[32]=0;//Add string terminator
            uartPrintf(_DEF_UART1,"NRF24L01 wireless module data received successfully: %s\n",tmp_buf);
		}
		else
		{
			uartPrintf(_DEF_UART1,"NRF24L01 wireless module data reception failed \n");
			HAL_Delay(100);
		}

		HAL_Delay(10);
		*/




		// 모터 제어 테스트

	/*	Go_Straight();
		delay(1000);
		Stop();

		Back();
		delay(1000);
	    Stop();

	    Turn_Left();
	    delay(1000);
	    Stop();

	    Turn_Right();
	    delay(1000);
	    Stop();

*/


	    // 유아트 수신 테스트..
	    /*
	    uartPrintf(_DEF_UART1, "a");

		if (uartAvailable(_DEF_UART1) == 0)
		{
			uint8_t rx_data = uartRead(_DEF_UART1);
			uartPrintf(_DEF_UART1, "rx_data : %c\n\r", rx_data);

		}
		*/



		//라즈베리파이 초음파 장애물 감지시 모터 정지  또는 회전 테스트
		/*
		 * 1). 라즈베리파이 초음파 장애물 감지에 따라  모터 정지, 직진은 하나 라즈베리파이 서보모터는 정지하지 않음
		 *     생각해서 코딩 다시 짜야댐
		 *
		 * 2). 라즈베리파이 쪽에서 전압 딸림
		 *
		 * 3). 실제로 사용할려면 while문에 스위치문 쓰기에는 무리가 있음 구조체나 다른 방안 검토
		 */

			//uint8_t rx_data = uartRead(_DEF_UART1);

		/*	switch (rx_data)
			{
				case 'f':
					Go_Straight();
					break;

				case 's':
					Stop();

				default:
					break;
			}

			*/

	}
}




// TODO: 실전 함수

/*

 void apInit(void)
{
   uartOpen(_DEF_UART1, 115200); //UART
}


void apMain(void)
{

	while(1)
	{

	}
}
*/


#endif /* SRC_AP_AP_C_ */
