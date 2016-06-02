/*   
THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES INC. ``AS IS'' AND ANY EXPRESS OR 
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT, ARE 
DISCLAIMED. IN NO EVENT SHALL ANALOG DEVICES INC. BE LIABLE FOR ANY DIRECT, 
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.

YOU ASSUME ANY AND ALL RISK FROM THE USE OF THIS CODE OR SUPPORT FILE.  

IT IS THE RESPONSIBILITY OF THE PERSON INTEGRATING THIS CODE INTO AN APPLICATION
TO ENSURE THAT THE RESULTING APPLICATION PERFORMS AS REQUIRED AND IS SAFE.

    Module       : cm3systick.h
    Description  : Defines the NVIC Systick Timer
    Date         : $Date
    Version      : $Revision
    Changelog    : $Log
*/
/*! 
   \file cm3systick.h  
   \brief This file describes the NVIV Systick Timer
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CM3SYSTICK_H
#define __CM3SYSTICK_H

/* Includes ------------------------------------------------------------------*/

/*------------------------ SystemTick ----------------------------------------*/

#define STK_BASE            0xE000E010

// Systick Control and Status
#define STK_CTRL_A          0xE000E010
#define STK_CTRL_R          (*((volatile unsigned long *)STK_CTRL_A))
// Systick Reload Value 
#define STK_RELOAD_A        0xE000E014
#define STK_RELOAD_R        (*((volatile unsigned long *)STK_RELOAD_A))
// Systick Current Value 
#define STK_CURRENT_A       0xE000E018
#define STK_CURRENT_R       (*((volatile unsigned long *)STK_CURRENT_A))
// Systick Calibration Value 
#define STK_CAL_A           0xE000E01C
#define STK_CAL_R           (*((volatile unsigned long *)STK_CAL_A))

// Bits and masks within STK_CTRL_R
#define STK_CTRL_COUNT      0x00010000  // Count flag
#define STK_CTRL_CLK_SRC    0x00000004  // Clock Source
#define STK_CTRL_INTEN      0x00000002  // Interrupt enable
#define STK_CTRL_ENABLE     0x00000001  // Enable

// Bits and masks within STK_RELOAD_R
#define STK_RELOAD_M        0x00FFFFFF  // Counter load value
#define STK_RELOAD_S        0

// Bits and masks within STK_CURRENT_R
#define STK_CURRENT_M       0x00FFFFFF  // Counter current value
#define STK_CURRENT_S       0

// Bits and masks within STK_CAL_R
#define STK_CAL_NOREF       0x80000000  // No reference clock
#define STK_CAL_SKEW        0x40000000  // Clock skew
#define STK_CAL_ONEMS_M     0x00FFFFFF  // 1ms reference value
#define STK_CAL_ONEMS_S     0

#ifdef C_CPP_COMPILE
struct SysTick_TypeDefStruct
{
   union
   {
      vu32 CTRL;
      struct
      {
         vu32 ENABLE    : 1; 
         vu32 TCKINT    : 1; 
         vu32 CLKSOURCE : 1; 
         vu32 Reserved  : 13; 
         vu32 COUNTFLAG : 1; 
      } CTRL_Bits;
   };
  vu32 RELOAD;
  vu32 VAL;
  union
  {
     vu32 CALIB;
     struct
     {
        vu32 TENMS     : 24; 
        vu32 Reserved  : 6; 
        vu32 SKEW      : 1; 
        vu32 NOREF     : 1; 
     } CALIB_Bits;
  };

};

typedef struct SysTick_TypeDefStruct SysTick_TypeDef;
#endif



#ifdef _SysTick
#  define SysTick             ((SysTick_TypeDef *) STK_BASE)
#endif

#endif /* __CM3SYSTICK_H */

