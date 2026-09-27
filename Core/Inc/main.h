#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f10x.h"

void SystemClock_Config(void);
void Error_Handler(void);
void delay_ms(uint32_t ms);

#endif
