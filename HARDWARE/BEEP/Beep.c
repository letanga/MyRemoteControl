#include "Beep.h"
#include "stm32f10x.h"

void BEEP_INIT(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);    //ʹ��GPIO��ʱ��  
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;          //������
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;    //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	BEEP_L;
	
}
