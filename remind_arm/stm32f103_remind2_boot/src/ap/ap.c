/*
 * ap.c
 *
 *  Created on: Feb 18, 2022
 *      Author: sungt
 */

#include "ap.h"


void apInit(void)
{

}


void apMain(void)
{
  uint32_t pre_time;

  pre_time = millis();

  while(1)
  {
    if (millis() - pre_time >= 100)
    {
      pre_time = millis();
      ledToggle(_DEF_LED1);

    }

  }
}


