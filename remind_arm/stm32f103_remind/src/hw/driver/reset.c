/*
 * reset.c
 *
 *  Created on: 2022. 2. 20.
 *      Author: sungt
 */


#include "reset.h"
#include "rtc.h"

static uint32_t reset_count = 0;


bool resetInit(void)
{
  bool ret = true;

  //만약 Reset Pin이 눌렸다면
  if (RCC->CSR & (1<<26))
  {
    rtcBackupRegWrite(1, rtcBackupRegRead(1) + 1);
    delay(1000);
    reset_count = rtcBackupRegRead(1);
  }

  rtcBackupRegWrite(1, 0);

  return ret;
}


uint32_t resetGetCount(void)
{
  return reset_count;
}
