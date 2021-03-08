#include "systick.h"
#include "ADC_DMA_Config.h"
#include "SPI.h"
#include "nrf24l01.h"
#include "eeprom.h"
#include "remote.h"
#include <string.h>
#include "usart.h"
#include "delay.h"

uint32_t SysTick_count = 0;

void SysTick_Handler(void)
{
	SysTick_count++;	
	TimeDelay--;
	RC_Analy();
}




