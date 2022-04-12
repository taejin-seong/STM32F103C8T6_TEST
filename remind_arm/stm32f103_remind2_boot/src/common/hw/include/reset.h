/*
 * reset.h
 *
 *  Created on: 2022. 2. 20.
 *      Author: sungt
 */

#ifndef SRC_COMMON_HW_INCLUDE_RESET_H_
#define SRC_COMMON_HW_INCLUDE_RESET_H_


#include "hw_def.h"

#ifdef _USE_HW_RESET


bool resetInit(void);
uint32_t resetGetCount(void);


#endif /* _USE_HW_RESET */

#endif /* SRC_COMMON_HW_INCLUDE_RESET_H_ */
