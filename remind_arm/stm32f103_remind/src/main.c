/*
 * main.c
 *
 *  Created on: Feb 18, 2022
 *      Author: sungt
 */


#include "main.h"




#ifdef FREE_RTOS_USING
static void threadMain(void const *argument);


int main(void)
{
  hwInit();
  apInit();


  osThreadDef(threadMain, threadMain, _HW_DEF_RTOS_THREAD_PRI_MAIN, 0, _HW_DEF_RTOS_THREAD_MEM_MAIN);
  if (osThreadCreate(osThread(threadMain), NULL) != NULL)
  {
    logPrintf("threadMain \t\t: OK\r\n");
  }
  else
  {
    logPrintf("threadMain \t\t: Fail\r\n");
    while(1);
  }

  osKernelStart();
  return 0;
}

static void threadMain(void const *argument)
{
  UNUSED(argument);

  apMain();
}
#endif /* FREE_RTOS_USING */








#ifdef FREE_RTOS_NOT_USING
int main(void)
{
  hwInit();
  apInit();

  apMain();

  return 0;
}
#endif /* FREE_RTOS_USING */
