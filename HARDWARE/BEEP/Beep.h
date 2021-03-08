#ifndef _BEEP_H_
#define _BEEP_H_

#define BEEP_H GPIO_SetBits(GPIOA,GPIO_Pin_12)//·äÃùÆ÷²»Ïì
#define BEEP_L GPIO_ResetBits(GPIOA,GPIO_Pin_12)//·äÃùÆ÷Ïì

extern void BEEP_INIT(void);

#endif

