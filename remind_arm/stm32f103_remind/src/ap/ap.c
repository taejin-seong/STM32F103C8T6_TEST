/*
 * ap.c
 *
 *  Created on: Feb 18, 2022
 *      Author: sungt
 */

#include "ap.h"



#ifdef FREE_RTOS_USING
static void threadLed(void const *argument);
#endif /* FREE_RTOS_USING */

void apInit(void)
{
  uartOpen(_DEF_UART1, 115200); // USB
  uartOpen(_DEF_UART2, 115200); // UART

#ifdef CLI_USING
  cliOpen(_DEF_UART1, 115200); // CLI
#endif /*CLI_USING */

#ifdef CLI_LOG_USING
  cliOpenLog(_DEF_UART2, 115200); // CLI Debugging
#endif /* CLI_USING */

#ifdef FREE_RTOS_USING
  osThreadDef(threadLed, threadLed, _HW_DEF_RTOS_THREAD_PRI_LED, 0, _HW_DEF_RTOS_THREAD_MEM_LED);
  if (osThreadCreate(osThread(threadLed), NULL) != NULL)
  {
    logPrintf("threadLed \t\t: OK\r\n");
  }
  else
  {
    logPrintf("threadLed \t\t: Fail\r\n");
    while(1);
  }
#endif /* FREE_RTOS_USING */
}


void apMain(void)
{
#ifdef LED_USING
  uint32_t pre_time;
#endif /* LED_USING */


#ifdef UART_TO_USB
#ifdef USB_TO_UART
#ifdef UARTS_USING

  uint8_t  rx_buf[128];
  uint32_t rx_len;

#endif /* UART_USING */
#endif /* USB_TO_UART */
#endif /* UART_TO_USB */


#ifdef LED_USING
  pre_time = millis();
#endif /* LED_USING */


  while(1)
  {
#ifdef LED_USING
    if (millis() - pre_time >= 500)
    {
      pre_time = millis();
      ledToggle(_DEF_LED1);

     // logPrintf("logprintf test %d\n", (int)millis()); // USB로 터미널 창에 LOG 출력
    }
#endif /* LED_USING */


#ifdef FLASH_USING

    //내장 flash 메모리에 읽고, 쓰기

    if (uartAvailable(_DEF_UART1) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART1);

      if (rx_data == '1')
      {
        uint8_t buf[32];

        logPrintf("Read...\n");

        flashRead(0x8000000 + (60 * 1024), buf, 32);

        for (int i = 0; i < 32; i++)
        {
          logPrintf("0x%X : 0x%X\n", 0x8000000 + (60 * 1024) + i, buf[i]);
        }
      }

      if (rx_data == '2')
      {
        logPrintf("Erase...\n");

        if (flashErase(0x8000000 + (60 * 1024), 32) == true)
        {
          logPrintf("Erase Ok\n");
        }

        else
        {
          logPrintf("Erase Fail\n");
        }
      }

      if (rx_data == '3')
      {
        uint8_t buf[32];

        for (int i = 0; i < 32; i++)
        {
          buf[i] = i;
        }

        logPrintf("Write...\n");

        if (flashWrite(0x8000000 + (60 * 1024), buf, 32) == true)
        {
          logPrintf("Wrtie OK\n");
        }

        else
        {
          logPrintf("Wrtie Fail\n");
        }
      }
    }
#endif /* FLASH_USING */

#ifdef UART_USING

    // UART Baud가 안맞을 때 저절로 바꿔줌
    if (uartGetBaud(_DEF_UART1) != uartGetBaud(_DEF_UART2))
    {
      uartOpen(_DEF_UART2, uartGetBaud(_DEF_UART1));
    }
#endif /* UART_USING */

#ifdef USB_TO_UART

    // USB -> UART
    rx_len = uartAvailable(_DEF_UART1);
    if (rx_len > 128)
    {
      rx_len = 128;
    }

    if (rx_len > 0)
    {
      for (int i = 0; i < rx_len; i++)
      {
        rx_buf[i] = uartRead(_DEF_UART1);
      }

      uartWrite(_DEF_UART2, rx_buf, rx_len);
    }
#endif /* USB_TO_UART */

#ifdef UART_TO_USB

    // UART->USB
    rx_len = uartAvailable(_DEF_UART2);
    if (rx_len > 128)
    {
      rx_len = 128;
    }

    if (rx_len > 0)
    {
      for (int i = 0; i < rx_len; i++)
      {
        rx_buf[i] = uartRead(_DEF_UART2);
      }

      uartWrite(_DEF_UART1, rx_buf, rx_len);
    }

#endif /* UART_TO_USB */


#ifdef CLI_LOG_USING

    if (uartAvailable(_DEF_UART2) > 0)
    {
       uint8_t rx_data;

       rx_data = uartRead(_DEF_UART2);
       uartPrintf(_DEF_UART2, "Rx : 0x%X\n", rx_data);
    }
#endif /* CLI_LOG_USING */

#ifdef CLI_USING
    cliMain();
#endif /* CLI_USING */

#ifdef FREE_RTOS_USING
   delay(1);
#endif /* FREE_RTOS_USING */

  }
}


#ifdef FREE_RTOS_USING
static void threadLed(void const *argument)
{
  UNUSED(argument);

  while(1)
  {
    ledToggle(_DEF_LED1);
    delay(500);
  }
}
#endif /* FREE_RTOS_USING */

