#ifndef _BEEP_H_
#define _BEEP_H_

#define BEEP_H GPIO_SetBits(GPIOA,GPIO_Pin_12)//����������
#define BEEP_L GPIO_ResetBits(GPIOA,GPIO_Pin_12)//��������

extern void BEEP_INIT(void);

#endif

