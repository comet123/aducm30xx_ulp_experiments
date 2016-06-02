/*********************************************************************************

Copyright(c) 2014 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/

/*
* Use the GPIO service to Toggle LED's when the push buttons are pressed
* on the ADuCM302x EZ-Board.
*/

#include <stdio.h>
#include <system.h>
#include <services/pwr/adi_pwr.h>
#include <services/gpio/adi_gpio.h>
#include "common.h"

static ADI_GPIO_RESULT eToggleResult;
int count;
ADI_PWR_RESULT pwrResult;
bool_t flagHib = false;
/*
 * GPIO event Callback function
 */
static void pinIntCallback(void* pCBParam, uint32_t Port,  void* PinIntData)
{
    switch(*(IRQn_Type*)pCBParam)
    {
    case SYS_GPIO_INTA_IRQn:
        /* push button 4 */
        if((Port == (uint32_t)ADI_GPIO_PORT1) && (*(uint32_t*)PinIntData & ADI_GPIO_PIN_14))
        {
            /* toggle LED 4 */
            eToggleResult = adi_gpio_Toggle(ADI_GPIO_PORT1, ADI_GPIO_PIN_12);
        }
        break;
    default:
        break;
    }
  if(flagHib==false)
     flagHib=true;

    count++;
}

/*
 * main
 */
int main(void)
{
   ADI_GPIO_RESULT eResult;
    static uint8_t gpioMemory[ADI_GPIO_MEMORY_SIZE];
    IRQn_Type eIrq;

    /* Clock initialization */
    SystemInit();

    /* test system initialization */
    test_Init();
    
    do
    {
        if(adi_pwr_Init()!= ADI_PWR_SUCCESS)
        {
            DEBUG_MESSAGE("\n Failed to intialize the power service \n");
            eResult = ADI_GPIO_FAILURE; 
            break;
        }
        if(ADI_PWR_SUCCESS != adi_pwr_SetClockDivider(ADI_CLOCK_HCLK,1))
        {
            DEBUG_MESSAGE("Failed to intialize the power service\n");
            eResult = ADI_GPIO_FAILURE;
            break;
        }
        if(ADI_PWR_SUCCESS != adi_pwr_SetClockDivider(ADI_CLOCK_PCLK,1))
        {
            DEBUG_MESSAGE("Failed to intialize the power service\n");
            eResult = ADI_GPIO_FAILURE;
        break;
        }
        
        /* init the GPIO service */
        if(ADI_GPIO_SUCCESS != (eResult = adi_gpio_Init(gpioMemory, ADI_GPIO_MEMORY_SIZE)))
        {
            DEBUG_MESSAGE("adi_gpio_Init failed\n");
            break;
        }

        /*
         * Setup Push Button 4
         */

        /* set GPIO input */
        if(ADI_GPIO_SUCCESS != (eResult = adi_gpio_InputEnable(ADI_GPIO_PORT1, ADI_GPIO_PIN_14, true)))
        {
            DEBUG_MESSAGE("adi_gpio_InputEnable failed\n");
            break;
        }

        /* set Pin polarity as rising edge */
        if(ADI_GPIO_SUCCESS != (eResult = adi_gpio_SetGroupInterruptPolarity(ADI_GPIO_PORT1, ADI_GPIO_PIN_14)))
        {
            DEBUG_MESSAGE("adi_gpio_SetGroupInterruptPolarity failed\n");
            break;
        }

        

        /* Enable pin interrupt on group interrupt A */
        if(ADI_GPIO_SUCCESS != (eResult = adi_gpio_SetGroupInterruptPins(ADI_GPIO_PORT1, SYS_GPIO_INTA_IRQn, ADI_GPIO_PIN_14)))
        {
            DEBUG_MESSAGE("adi_gpio_SetGroupInterruptPins failed\n");
            break;
        }
        
        eIrq = SYS_GPIO_INTA_IRQn;
        /* Register the callback */
        if(ADI_GPIO_SUCCESS != (eResult = adi_gpio_RegisterCallback (SYS_GPIO_INTA_IRQn, pinIntCallback, (void*)&eIrq)))
        {
            DEBUG_MESSAGE("adi_gpio_RegisterCallback failed\n");
            break;
        }

        /* set GPIO output LED 4 and 5 */
        if(ADI_GPIO_SUCCESS != (eResult = adi_gpio_OutputEnable(ADI_GPIO_PORT1,ADI_GPIO_PIN_12, true)))
        {
            DEBUG_MESSAGE("adi_gpio_SetDirection failed\n");
            break;
        }
    }while(0);
 
BACK:
    count=1;
   while(count)
 {   
   if(count!=1)
   {
   break;
   }
 }
   flagHib=false;
    pwrResult = adi_pwr_EnterLowPowerMode(ADI_PWR_MODE_HIBERNATE,&flagHib,0x00);
    DEBUG_RESULT("\n Failed to enter low power mode %04d",pwrResult,ADI_PWR_SUCCESS);
    
    goto BACK;
}
