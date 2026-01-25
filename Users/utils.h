#include "bsp_config.h"
#ifdef UTILS_API_EN
#ifndef UTILS_H
#define UTILS_H

#include "stm32f4xx.h"                  // Device header
#include "stm32f4xx_hal.h"

void TransNum2String(unsigned char val, char* res);

#endif
#endif