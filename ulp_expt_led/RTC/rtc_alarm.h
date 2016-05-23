/*********************************************************************************

Copyright(c) 2012 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/*!
* @file     rtc_alram.h
*
* @brief    Primary header file for RTC  example.
*
* @details  Primary header file for RTC driver example which contains the
*           processor specific defines.
*
*/

#ifndef _RTC_ALRAM_H_
#define _RTC_ALRAM_H_
/* set lowest interrupt priority (highest number)
   according to number of priority bits on-chip */
#define LOWEST_PRIORITY ((1U << __NVIC_PRIO_BITS) -1)

/* bump UART interrupt priority by one (lower number = higher priority)
   so that UART output continues during low-power hibernation test */
#define UART_PRIORITY (LOWEST_PRIORITY - 1)

/* leap-year compute macro (ignores leap-seconds) */
#define LEAP_YEAR(x) (((0==x%4)&&(0!=x%100))||(0==x%400))

#define RTC_DEVICE_NUM_FOR_WUT 1

#define  ADI_RTC_RESET
/* uncomment this macro to force RTC clock reset to last build timestamp */
/*#define ADI_RTC_RESET */

/* Number of RTC alarms required to be registered for successfull completion of the example */
#define ADI_RTC_NUM_ALARMS      3

/* If the RTC need to be calibrated */
#define ADI_RTC_CALIBRATE

/* To test the wakeup timer functionality from RTC0 */
#define  USE_RTC0_FOR_WAKEUP

#define RTC_ALARM_OFFSET 5

/* Trim interval */
#define ADI_RTC_TRIM_INTERVAL    ADI_RTC_TRIM_INTERVAL_14
/* Trim operation +/- */
#define ADI_RTC_TRIM_DIRECTION   ADI_RTC_TRIM_SUB
/* Trim  value */
#define ADI_RTC_TRIM_VALUE       ADI_RTC_TRIM_1

#define RTC_DEVICE_NUM    0

/* prototypes for RTC initialization */
ADI_RTC_RESULT rtc_Init(void);
/* prototypes for RTC calibration runctions  */
ADI_RTC_RESULT rtc_Calibrate(void);
/* prototypes for RTC updating the count  */
ADI_RTC_RESULT rtc_UpdateAlarm (void);
/* prototypes for RTC test function  */
ADI_RTC_RESULT rtc_AlarmTest(void);
/* prototypes for RTC time reporting function */
void rtc_ReportTime(void);
/* prototypes for RTC seconds computation */
uint32_t BuildSeconds(void);
/* prototypes for clock initialization */
ADI_PWR_RESULT InitClock(void);

/* callbacks */
void rtc0Callback (void *pCBParam, uint32_t nEvent, void *EventArg);
void rtc1Callback (void *pCBParam, uint32_t Event, void *EventArg);


#endif /* _RTC_ALRAM_H_ */
