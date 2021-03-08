#include "stm32f10x.h"
#include "systick.h"
#include "stdio.h"
#include "delay.h"
#include "usart.h"
#include "nrf24l01.h"
#include "ADC_DMA_Config.h"
#include "remote.h"
#include "Beep.h"
#include "oled.h"
#include "bmp.h"
int main(void)
{	
	cycleCounterInit();
	while(SysTick_Config(SystemCoreClock / 1000))		//ϵͳ�δ�ʱ�� 1ms����һ���ж�
	{
		
	}
	BEEP_INIT();
	NRF24L01_INIT();        //��ʼ��NRF24L01
  USART1_Config();        //��ʼ������1	
	OLED_Config();					//OLED����
	delay_ms(100);	
	printf("\r\nstm32f103C8t6\r\n");//����1��ӡ��Ƭ���ͺ�
	ADC1_GPIO_Config();      //��ʼ��ADC IO	
	ADC1_Mode_Config();      //��ʼ��ADCģʽ	
	RC_INIT();               //У׼ҡ�����ݳ�ʼ��
	while(1)
	{
		OLED_ShowData();
	}
}










