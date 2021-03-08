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
	while(SysTick_Config(SystemCoreClock / 1000))		//系统滴答时钟 1ms发生一次中断
	{
		
	}
	BEEP_INIT();
	NRF24L01_INIT();        //初始化NRF24L01
  USART1_Config();        //初始化串口1	
	OLED_Config();					//OLED配置
	delay_ms(100);	
	printf("\r\nstm32f103C8t6\r\n");//串口1打印单片机型号
	ADC1_GPIO_Config();      //初始化ADC IO	
	ADC1_Mode_Config();      //初始化ADC模式	
	RC_INIT();               //校准摇杆数据初始化
	while(1)
	{
		OLED_ShowData();
	}
}










