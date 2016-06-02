/* Generic device.h file

This file exists so testcases can be written generically and use
    #include "device.h"
instead of
    #include "ADxxxx.h"

This makes porting testcases to new projects easier.
*/
#ifndef DEVICE_H
#define DEVICE_H
#ifndef __CHECK_DEVICE_DEFINES
#define __CHECK_DEVICE_DEFINES
#endif
#include <stdlib.h>

//Project Related Header files
#include "microglue_device.h"
#include "microglue.h"
#include "microglue_peripherals.h"

//Other macros and peripheral related functions
#include "util.h"
#include "IRQ.h"
#include "gpt.h"
#include "GPIO.h"
#include "pm.h"

#include "irq_cmsis.h"

//Coretex Header File and Defines

#define __CM3_REV               0x0200
#define __MPU_PRESENT           0
#define __NVIC_PRIO_BITS        4
#define __Vendor_SysTickConfig  0

#include "core_cm3.h"


#endif //DEVICE_H

