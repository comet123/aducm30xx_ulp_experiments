#include <stdint.h>
#include <stdio.h>
#include "common.h"
#include "system.h"
#include <services/tmr/adi_tmr.h>

#include <services/pwr/adi_pwr.h>
#include <services/gpio/adi_gpio.h>

static const uint16_t GPT1_LOAD_2SEC     = 50795;
static uint8_t aDeviceMemory1[ADI_TMR_MEMORY_SIZE];

static uint8_t gpioMemory[ADI_GPIO_MEMORY_SIZE];
 
ADI_TMR_HANDLE hDevice1;

#define TIMER_DEVICE_1 1

static void GPTimer1Callback(void *pCBParam, uint32_t Event, void *pArg)
{
  switch(Event)
  {
    case ADI_TMR_EVENT_TIMEOUT: 
             adi_gpio_Toggle(ADI_GPIO_PORT1, ADI_GPIO_PIN_12);
             break;
    
  }
}

int main(void)
{
  /* Clock initialization */
    SystemInit();

    /* test system initialization */
    test_Init();
    
    adi_pwr_Init(); //power init
    
    /*  CLOCK SCALED TO REDUCE POWER CONSUMPTION - 26 MHz HCLK precaled by 26 */
    adi_pwr_SetClockDivider(ADI_CLOCK_HCLK,26);        
    
    adi_gpio_Init(gpioMemory, ADI_GPIO_MEMORY_SIZE); //GPIO init
    
    adi_gpio_OutputEnable(ADI_GPIO_PORT1,ADI_GPIO_PIN_12,true);  //make LED-4 as output
    
    adi_gpio_SetLow(ADI_GPIO_PORT1,ADI_GPIO_PIN_12);             //Set Low LED-4
  
  adi_tmr_Open(TIMER_DEVICE_1,aDeviceMemory1,ADI_TMR_MEMORY_SIZE,&hDevice1); 
  adi_tmr_RegisterCallback( hDevice1, GPTimer1Callback ,hDevice1);
      
  adi_tmr_SetPrescaler(hDevice1, ADI_GPT_PRESCALER_256);
  adi_tmr_SetLoadValue( hDevice1, GPT1_LOAD_2SEC);
  adi_tmr_Enable(hDevice1,true);
  

  
  while(1);
}