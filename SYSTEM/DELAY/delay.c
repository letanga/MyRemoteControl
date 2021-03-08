#include "stm32f10x.h"
#include "misc.h"
#include "delay.h"
#include "systick.h"

static volatile uint32_t usTicks = 0;
uint16_t TimeDelay=0;
void cycleCounterInit(void)
{
    RCC_ClocksTypeDef clocks;
    RCC_GetClocksFreq(&clocks);
    usTicks = clocks.SYSCLK_Frequency / 1000000;
}

void delay_ms(uint16_t nTime) //    ∫¡√Îº∂—” ±∫Ø ˝	 
{
  TimeDelay=nTime;
	while(TimeDelay);
}
