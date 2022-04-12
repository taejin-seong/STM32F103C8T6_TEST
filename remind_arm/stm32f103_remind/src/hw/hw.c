/*
 * hw.c
 *
 *  Created on: Feb 18, 2022
 *      Author: sungt
 */


#include "hw.h"





void hwInit(void)
{
  bspInit();
  cliInit();

  rtcInit();
  resetInit();
  ledInit();
  usbInit();
  uartInit();
  flashInit();
}
