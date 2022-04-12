/*
 * cdc.h
 *
 *  Created on: 2022. 2. 20.
 *      Author: sungt
 */

#ifndef SRC_COMMON_HW_INCLUDE_CDC_H_
#define SRC_COMMON_HW_INCLUDE_CDC_H_


#include "hw_def.h"



#ifdef _USE_HW_CDC


bool     cdcInit(void);
uint32_t cdcAvailable(void);
uint8_t  cdcRead(void);
void     cdcDataIn(uint8_t rx_data);
uint32_t cdcWrite(uint8_t *p_data, uint32_t length);
uint32_t cdcGetBaud(void);



#endif /* _USE_HW_CDC */

#endif /* SRC_COMMON_HW_INCLUDE_CDC_H_ */
