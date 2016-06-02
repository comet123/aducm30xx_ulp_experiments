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

    Module       : lpp_map.h
    Description  : This file contains all the peripheral register's definitions 
                   and memory mapping.                                          
    Date         : $Date: 2011-08-26 19:59:02+01 $
    Version      : $Revision: 1.1 $
    Changelog    : $Log: code#include#lpp_map.h,v $
    Changelog    : Revision 1.1  2011-08-26 19:59:02+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:09:34-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.4  2009-06-18 10:56:36-04  pnoonan
    Changelog    : Moved definitions to IRQ.h
    Changelog    :
    Changelog    : Revision 1.3  2009-06-18 07:20:28-04  pnoonan
    Changelog    : Update for m52 interrupts and dma
    Changelog    :
    Changelog    : Revision 1.2  2009-04-17 11:35:25-04  pking
    Changelog    : Added lfrx interrupt Enable
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:05-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.9  2009-02-26 06:09:14-05  pnoonan
    Changelog    : Added DMA interrupt handlers
    Changelog    :
    Changelog    : Revision 1.8  2009-02-09 13:40:13-05  pnoonan
    Changelog    : Fixed typo
    Changelog    :
    Changelog    : Revision 1.7  2009-01-19 06:52:43-05  pnoonan
    Changelog    : Added DMA request definitions
    Changelog    :
    Changelog    : Revision 1.6  2009-01-05 06:18:29-05  pnoonan
    Changelog    : Added PWM interrupt definitiona
    Changelog    :
    Changelog    : Revision 1.5  2008-12-18 09:54:11-05  pnoonan
    Changelog    : Interrupt definitions
    Changelog    :
    Changelog    : Revision 1.4  2008-07-21 06:10:56-04  pnoonan
    Changelog    : New definitions
    Changelog    :
    Changelog    : Revision 1.3  2008-04-09 06:06:07-04  pnoonan
    Changelog    : ...No comments entered during checkin...
    Changelog    :
    Changelog    : Revision 1.2  2008-03-11 07:16:13-04  pnoonan
    Changelog    : Library update and documentation update
    Changelog    :
    Changelog    : Revision 1.1  2008-03-04 11:49:45-05  pnoonan
    Changelog    : Memory map and peripheral definition
    Changelog    :
*/
/*! 
   \file lpp_map.h  
   \brief Contains map
*/

//-----------------------------------------------------------

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LPP_MAP_H
#define __LPP_MAP_H

/* Includes ------------------------------------------------------------------*/
#include "lpp_conf.h"
#include "lpp_type.h"
#include "cortexm3.h"
#include "Peripherals/cm3nvic.h"
#include "Peripherals/cm3systick.h"

/* Exported types ------------------------------------------------------------*/
/******************************************************************************/
/*                          IP registers structures                           */
/******************************************************************************/

/*------------------------ Nested Vectored Interrupt Controller --------------*/

#define CORTEX_MAX_INTERRUPTS 240
/*! \brief NVIC Registers
*/
typedef struct
{
   /*! Interrupt Enable bits for 240 interrupts @ 0xE000E100 */
  vu32 Enable	[8];
  /*! Reserved  */
  u32 RESERVED0	[24];
  /*! Interrupt Disable bits for 240 interrupts @ 0xE000E180 */
  vu32 Disable	[8];
  /*! Reserved  */
  u32 RESERVED1	[24];
  /*! Interrupt Set Pending bits for 240 interrupts @ 0xE000E200 */
  vu32 Set		[8];
  /*! Reserved  */
  u32 RESERVED2	[24];
  /*! Interrupt Clear Pending bits for 240 interrupts @ 0xE000E280 */
  vu32 Clear	[8];
  /*! Reserved  */
  u32 RESERVED3	[24];
  /*! Interrupt Active bits for 240 interrupts  @ 0xE000E300 */
  vu32 Active	[8];
  /*! Reserved  */
  u32 RESERVED4	[24];
  u32 RESERVED5	[32];
  /*! Interrupt Priority bits for 240 interrupts @ 0xE000E400 */
  vu32 Priority	[60];
} NVICRegisters;

/*--------------------- System Control Block  --------------------------------*/



/*! \brief System Control Block Registers

 * System Control Block
         CPUID
         System Control, configuration, and status
         Fault Reporting
*/
typedef struct
{
/*! \brief CPUID Register @ 0xE000ED00

   Read the CPUID Register to determine information about the core.
*/
  CPUID_Reg                 CPUID; 
/*! \brief Interrupt Control State Register @ 0xE000ED04
*/
  IRQControlState_Reg       IRQControlState;
/*! \brief  Vector Table Offset Register @ 0xE000ED08*/
  ExceptionTableOffset_Reg  ExceptionTableOffset;
/*! \brief  Application Interrupt Reset Control Register @ 0xE000ED0C*/
  AIRC_Reg                  AIRC;
/*! \brief  System Control Register @ 0xE000ED10*/
  SysCtrl_Reg               SysCtrl;
/*! \brief  Configuration Control Register @ 0xE000ED14*/
  ConfigCtrl_Reg            ConfigCtrl;
/*! \brief  System Handlers Priority Registers @ 0xE000ED18*/
  SystemPriority_Reg        SystemPriority;
/*! \brief  System Handler Control and State Register @ 0xE000ED24*/
  SysHandlerCtrl_Reg        SysHandlerCtrl;
/*! \brief  Configurable Fault Status Registers @ 0xE000ED28*/
  ConfigFaultStatus_Reg     ConfigFaultStatus;
/*! \brief  Hard Fault Status Register @ 0xE000ED2C*/
  HardFaultStatus_Reg       HardFaultStatus;
/*! \brief  Debug Fault Status Register @ 0xE000ED30*/
  DebugFaultStatus_Reg      DebugFaultStatus;
/*! \brief  Mem Manage Address Register @ 0xE000ED34*/
  vu32                      MemoryManageFaultAddr;
/*! \brief  Bus Fault Address Register @ 0xE000ED38*/
  vu32                      BusFaultAddr;
/*! \brief  Auxiliary Fault Status Register @ 0xE000ED3C*/
  vu32                      AuxFaultStatus;
} SCBRegisters;


/******************************************************************************/
/*                       Peripheral memory map                                */
/******************************************************************************/
/* Peripheral and SRAM base address in the alias region */
#define PERIPH_BB_BASE        ((u32)0x42000000)
#define SRAM_BB_BASE          ((u32)0x22000000)

/* Peripheral and SRAM base address in the bit-band region */
#define SRAM_BASE             ((u32)0x20000000)
#define PERIPH_BASE           ((u32)0x40000000)

/* Peripheral memory map */
#define APB1PERIPH_BASE       PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE        (PERIPH_BASE + 0x20000)


/* System Control Space memory map */
#define SCS_BASE              ((u32)0xE000E000)

//#define SysTick_BASE          (SCS_BASE + 0x0010)
#define NVIC_BASE             (SCS_BASE + 0x0100)
#define SCB_BASE              (SCS_BASE + 0x0D00)


/******************************************************************************/
/*                            IPs' declaration                                */
/******************************************************************************/

/*------------------- Non Debug Mode -----------------------------------------*/

#ifdef _NVIC
  #define NVIC                ((NVICRegisters *) NVIC_BASE)
  #define SCB                 ((SCBRegisters *) SCB_BASE)  
#endif /*_NVIC */


/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

/*! Determine the max index of an array */ 
#define MAX_INDEX(array) (sizeof(array)/sizeof(array[0]))

/*! Number of bits in a byte */ 
#define BITS_PER_BYTE 0x8

/*! Determine number of bits in the simple type */ 
#define BITS_IN_TYPE(type) (sizeof(type)*BITS_PER_BYTE)

/* Exported functions ------------------------------------------------------- */


#include <IRQ.h>

#endif /* __lpp_map_h */

