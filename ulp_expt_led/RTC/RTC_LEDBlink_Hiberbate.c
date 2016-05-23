#include <services/pwr/adi_pwr.h>
#include <services/rtc/adi_rtc.h>
#include <services/gpio/adi_gpio.h>
#include "common.h"
#include "system.h"
#include "rtc_alarm.h"

static uint8_t gpioMemory[ADI_GPIO_MEMORY_SIZE];

static uint8_t aRtcDevMem0[ADI_RTC_MEMORY_SIZE];
ADI_RTC_HANDLE hDeviceRTC  = NULL;
/* Binary flag to indicate RTC interrupt occured */
volatile bool_t bRtcInterrupt;

#define RTC_ALARM_OFFSET1   2

ADI_RTC_RESULT rtc_Init (void) {

    /* callbacks */
    ADI_RTC_INT_TYPE  nInterrupts  = ADI_RTC_ALARM_INT;

    ADI_RTC_RESULT eResult;
        uint32_t nRtc1Count;
    
    
    do
    {
        eResult = adi_rtc_Open(RTC_DEVICE_NUM,aRtcDevMem0,ADI_RTC_MEMORY_SIZE,&hDeviceRTC);
        DEBUG_RESULT("\n Failed to open the device %04d",eResult,ADI_RTC_SUCCESS);
        
        eResult = adi_rtc_RegisterCallback(hDeviceRTC,rtc0Callback,hDeviceRTC);
        DEBUG_RESULT("\n Failed to open the device",eResult,ADI_RTC_SUCCESS);
        
        
        eResult = adi_rtc_SetTrim(hDeviceRTC,ADI_RTC_TRIM_INTERVAL,ADI_RTC_TRIM_VALUE,ADI_RTC_TRIM_DIRECTION);
        DEBUG_RESULT("Failed to set the trim value",eResult,ADI_RTC_SUCCESS);
        
        eResult = adi_rtc_EnableTrim(hDeviceRTC,true);
        DEBUG_RESULT("Failed to enable the trim",eResult,ADI_RTC_SUCCESS);
        
        eResult = adi_rtc_EnableAlarm(hDeviceRTC,true);
        DEBUG_RESULT("Failed to enable the alram ",eResult,ADI_RTC_SUCCESS);
        
        eResult = adi_rtc_EnableInterrupts(hDeviceRTC, nInterrupts,true);
        DEBUG_RESULT("Failed to enable the specified interrupts",eResult,ADI_RTC_SUCCESS);
       
          eResult = adi_rtc_GetCount(hDeviceRTC,&nRtc1Count);
    DEBUG_RESULT("\n Failed to open the device",eResult,ADI_RTC_SUCCESS);
        
    eResult = adi_rtc_SetAlarm(hDeviceRTC,RTC_ALARM_OFFSET1 + nRtc1Count);
    DEBUG_RESULT("\n Failed to open the device",eResult,ADI_RTC_SUCCESS);
     
        // eResult = adi_rtc_SetPreScale(hDeviceRTC,preScale);                                   //change
        
        eResult = adi_rtc_Enable(hDeviceRTC,true);
        DEBUG_RESULT("Failed to enable the device",eResult,ADI_RTC_SUCCESS);
       
    }while(0); 
    
    return(eResult);
}

ADI_RTC_RESULT rtc_UpdateAlarm (void) {
    ADI_RTC_RESULT eResult;
    uint32_t rtcCount;
    
    if(ADI_RTC_SUCCESS != (eResult = adi_rtc_GetCount(hDeviceRTC,&rtcCount)))
    {
        DEBUG_RESULT("\n Failed to open the device %04d",eResult,ADI_RTC_SUCCESS);
        return(eResult);
    }
    if(ADI_RTC_SUCCESS != (eResult = adi_rtc_SetAlarm(hDeviceRTC,rtcCount+RTC_ALARM_OFFSET1)))
    {
        DEBUG_RESULT("\n Failed to open the device %04d",eResult,ADI_RTC_SUCCESS);
        return(eResult);
    }
    return(eResult);    
}

void rtc0Callback (void *pCBParam, uint32_t nEvent, void *EventArg) {

    bRtcInterrupt = true;

   if (ADI_RTC_ALARM_INT & nEvent) 
    {
        DEBUG_MESSAGE("RTC interrupt");
        adi_gpio_Toggle(ADI_GPIO_PORT1, ADI_GPIO_PIN_12);
        
         /* Update RTC alarm */
        rtc_UpdateAlarm();
	
    }

}

int main(void)
{
   /* Clock initialization */
    SystemInit();

    /* test system initialization */
    test_Init();
    
    adi_pwr_Init();
    rtc_Init();
    
    adi_gpio_Init(gpioMemory, ADI_GPIO_MEMORY_SIZE); //GPIO init
    
    adi_gpio_OutputEnable(ADI_GPIO_PORT1,ADI_GPIO_PIN_12,true);  //make LED-4 as output
    
    adi_gpio_SetLow(ADI_GPIO_PORT1,ADI_GPIO_PIN_12);             //Set Low LED-4
    
    adi_pwr_EnterLowPowerMode(ADI_PWR_MODE_HIBERNATE,NULL,0x00);
    
    while(1);
}