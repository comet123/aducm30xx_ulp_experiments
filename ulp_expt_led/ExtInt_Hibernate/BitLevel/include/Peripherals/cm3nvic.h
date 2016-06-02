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

    Module       : nvic.h
    Description  : This file contains all the peripheral register's definitions 
                   and memory mapping.                                          
    Date         : $Date: 2011-12-12 16:35:57+00 $
    Version      : $Revision: 1.2 $
    Changelog    : $Log: code#include#Peripherals#cm3nvic.h,v $
    Changelog    : Revision 1.2  2011-12-12 16:35:57+00  jnekl
    Changelog    : Run dos2unix to cleanup different types of newlines used within the same file.
    Changelog    :
    Changelog    : Revision 1.1  2011-08-26 20:18:10+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:08:23-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:58-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.1  2008-04-09 06:06:44-04  pnoonan
    Changelog    : Initial revision.
    Changelog    :
*/
/*! 
   \file nvic.h  
   \brief Contains type definitions related to the NVIC
*/

//-----------------------------------------------------------

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __NVIC_H
#define __NVIC_H

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/

/*! \brief C structure defintion of the bits in the CPUID Register @ 0xE000ED00

 This definition allows the individual bits of the CPUID Register to be accessed
 in C Code.

 See CPUID_Reg for an example
*/
typedef struct
{
   /*! Implementation Defined revision number */
   vu32 REVISION    : 4; 
   /*! Number of processor within family      */
   vu32 PARTNO      : 12; 
   /*! Reads as 0xF                           */
   vu32 Constant    : 4; 
   /*! Implementation defined variant number. */
   vu32 VARIANT     : 4; 
   /*! Implementer code. ARM is 0x41          */
   vu32 IMPLEMENTER : 8; 
} CPUID_Bits;

/*! \brief CPUID Register Union of Bits and Value

 This definition allows the entire value or the  individual bits of the CPUID 
 Register to be accessed in C Code.

\code
   CPUID_Reg CPUID = NVIC_GetCPUID();   

   if (CPUID.Bits.IMPLEMENTER != 0x41)
      {
      // Not an ARM implementer
      }
\endcode
*/
typedef union 
{
   /*! Complete contents of the CPUID register in a vu32*/
   vu32             Reg;
   /*! Individual Bit Defintions of the CPUID Register */
   CPUID_Bits       Bits;
} CPUID_Reg; 

/*! \brief C structure defintion of the bits in the Interrupt Control State 
    Register @ 0xE000ED04.

 This definition allows the individual bits of the Interrupt Control State 
    Register to be accessed in C Code.
*/
typedef struct
{
   /*!  Active ISR Number Field */
   vu32    VECTACTIVE   : 9; 
   /*!  Reserved */
   vu32                 : 1; 
   /*!  Reserved */
   vu32                 : 1; 
   /*!  This bit is 1 if the current exception is the only one active */
   vu32    RETTOBASE    : 1; 
   /*!   Pending ISR Number Field */
   vu32    VECTPENDING  : 10; 
   /*! Interrupt pending flag. Excludes NMI and Faults   */
   vu32    ISRPENDING   : 1; 
   /*! Only for use during debug   */
   vu32    ISRPREEMPT   : 1; 
   /*! Reserved   */
   vu32                 : 1; 
   /*! Clear pending Systick bit   */
   vu32  PENDSTCLR      : 1; 
   /*! Set pending Systick bit   */
   vu32  PENDSTSET      : 1; 
   /*! Clear pending pendSV bit   */
   vu32  PENDCVCLR      : 1; 
   /*! Set pending pendSV bit   */
   vu32  PENDSVSET      : 1; 
   /*! Reserved   */
   vu32                 : 2; 
   /*! Set pending NMI Bit. Pends and activates an NMI.   */
   vu32  NMIPENDSET     : 1; 
} IRQControlState_Bits;

/*! \brief Interrupt Control State Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Interrupt Control State Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Interrupt Control State Register register in a vu32*/
   vu32                 Reg;
   /*! Individual Bit Defintions of the Interrupt Control State Register Register */
   IRQControlState_Bits Bits;
} IRQControlState_Reg;      

/*! \brief C structure defintion of the bits in the Vector Table Offset Register @ 0xE000ED08.

 This definition allows the individual bits of the Vector Table Offset Register to be accessed
 in C Code.

*/
typedef struct
{
   /*! Reserved   */
   vu32                 : 7; 
   /*! Vector table base offset field. Contains the offset from bottom of SRAM or CODE space   */
   vu32    TBLOFF       : 22; 
   /*! Table Base in CODE or SRAM. Code=0, RAM=1   */
   vu32    TBLBASE      : 1; 
   /*! Reserved   */
   vu32                 : 2; 
} ExceptionTableOffset_Bits;

/*! \brief Vector Table Offset Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Vector Table Offset Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Vector Table Offset register in a vu32*/
   vu32                         Reg;
   /*! Individual Bit Defintions of the Vector Table Offset Register */
   ExceptionTableOffset_Bits    Bits;
} ExceptionTableOffset_Reg;     

/*! \brief C structure defintion of the bits in the Application Interrupt Reset Control Register @ 0xE000ED0C.

 This definition allows the individual bits of the Application Interrupt Reset Control Register to be accessed
 in C Code.

*/
typedef struct
{
   /*! System Reset Bit. Resets the system with the exception of debug components */
   vu32 VECTRESET       : 1; 
   /*!  Clear active vector bit */
   vu32 VECTCLRACTIVE   : 1; 
   /*!  Reset a system reset */
   vu32 SYSRESETREQ     : 1; 
   /*!  Reserved */
   vu32                 : 5; 
   /*! Split of pre-emption priority from subpriority */
   vu32 PRIGROUP        : 3; 
   /*! Reserved */
   vu32                 : 4; 
   /*! Data endianess bit (1= big endian, 0=little endian */
   vu32 ENDIANESS       : 1; 
   /*!  Register Key */
   vu32  VECTKEY        : 16; 
} AIRC_Bits;

/*! \brief Application Interrupt Reset Control Register Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Application Interrupt Reset Control Register Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Application Interrupt Reset Control register in a vu32*/
   vu32             Reg;
   /*! Individual Bit Defintions of the Application Interrupt Reset Control Register */
   AIRC_Bits        Bits;
} AIRC_Reg;                     

/*! \brief C structure defintion of the bits in the System Control Register @ 0xE000ED10 .

 This definition allows the individual bits of the System Control Register to be accessed
 in C Code.

*/
typedef struct
{
   /*!  Reserved */
   vu32                 : 1; 
   /*! Sleep on exit when returning from handler to thread mode. Sleep=1,no sleep=0 */
   vu32 SLEEPONEXIT     : 1; 
   /*! Sleep Deep bit. Indicates to the system that the Cortex-M3 clock can be stopped */
   vu32 SLEEPDEEP       : 1; 
   /*!  Reserved */
   vu32                 : 1; 
   /*! When enabled, this causes WFE to wake up when an interrupt moves from inactive to pended. */
   vu32 SLEEPPEND       : 1; 
   /*!  Reserved */
   vu32                 : 27; 
} SysCtrl_Bits;

/*! \brief System Control Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 System Control Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the System Control Register in a vu32*/
   vu32             Reg;
   /*! Individual Bit Defintions of the System Control Register */
   SysCtrl_Bits     Bits;
} SysCtrl_Reg;              

/*! \brief C structure defintion of the bits in the Configuration Control Register @ 0xE000ED14 .

 This definition allows the individual bits of the Configuration Control Register to be accessed
 in C Code.

*/
typedef struct
{
   /*!  Control thread mode entry */
   vu32    NONEBASETHRDENA  : 1; 
   /*!  Enable user code to trigger a main exception */
   vu32    USERSETMPEND     : 1; 
   /*!  Reserved */
   vu32                     : 1; 
   /*!  Trap on unaligned access */
   vu32    UNALIGN_TRP      : 1; 
   /*!  Trap on divide by zero */
   vu32    DIV_0_TRP        : 1; 
   /*!  Reserved */
   vu32                     : 1; 
   /*! Data bus fault handling for priorities -1 and -2 */
   vu32    BFHFNMIGN        : 1; 
   /*! 4 or eight byte stack alignment */
   vu32    STKALIGN         : 1; 
   /*!  Reserved */
   vu32                     : 22; 
} ConfigCtrl_Bits;

/*! \brief Configuration Control Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Configuration Control  Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Configuration Control Register in a vu32*/
   vu32             Reg;
   /*! Individual Bit Defintions of the Configuration Control Register */
   ConfigCtrl_Bits  Bits;
} ConfigCtrl_Reg;           

/*! \brief C structure defintion of the bits in the System Handlers Priority Registers @ 0xE000ED18 .

 This definition allows the individual bits of the System Handlers Priority Registers to be accessed
 in C Code.

*/
typedef struct
{
   /*! Priority of the MemManage Fault Exception*/
   vu32   MemManageFaultPriority: 8; 
   /*! Priority of the Bus Fault Exception */
   vu32   BusFaultPriority      : 8; 
   /*! Priority of the Usage Fault Exception*/
   vu32   UsageFaultPriority    : 8; 
   /*! Reserved */
   vu32                         : 8; 
   /*! Reserved */
   vu32                         : 8; 
   /*! Reserved */
   vu32                         : 8; 
   /*! Reserved */
   vu32                         : 8; 
   /*! Priority of the SVCALL Exception */
   vu32   SVCallPriority        : 8; 
   /*! Priority of the Debug Monitor Exception */
   vu32   DebugMonitorPriority  : 8; 
   /*! Reserved */
   vu32                         : 8; 
   /*! Priority of the PendSV Exception */
   vu32 PendSVPriority          : 8; 
   /*! Priority of the SYSTICK Exception */
   vu32 SYSTICKPriority         : 8; 
} SystemPriority_Bits;

/*! \brief System Handlers Priority Registers Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 System Handlers Priority Registers Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the System Handlers Priority Registers in a vu32*/
   vu32                 Reg [3];
   /*! Individual Bit Defintions of the System Handlers Priority Registers */
   SystemPriority_Bits  Bits;
} SystemPriority_Reg;       

/*! \brief C structure defintion of the bits in the System Handler Control and State Register @ 0xE000ED24 .

 This definition allows the individual bits of the System Handler Control and State Register to be accessed
 in C Code.

*/
typedef struct
{
   /*!  Reads as 1 if MemManage is active.*/
   vu32 MEMFAULTACT     : 1; 
   /*! Reads as 1 if BusFault is active. */
   vu32 BUSFAULTACT     : 1; 
   /*!  Reserved */
   vu32                 : 1; 
   /*! Reads as 1 if UsageFault is active. */
   vu32 USGFAULTACT     : 1; 
   /*!  Reserved */
   vu32                 : 3; 
   /*! Reads as 1 if SVCall is active. */
   vu32 SVCALLACT       : 1; 
   /*! Reads as 1 if the Monitor is active. */
   vu32 MONITORACT      : 1; 
   /*!  Reserved */
   vu32                 : 1; 
   /*!  Reads as 1 if PendSV is active.*/
   vu32 PENDSVACT       : 1; 
   /*! Reads as 1 if SysTick is active. */
   vu32 SYSTICKACT      : 1; 
   /*! Read as 1 if usage fault is pended */
   vu32 USGFAULTPENDED  : 1; 
   /*!  Reads as 1 if MemManage is pended.*/
   vu32 MEMFAULTPENDED  : 1; 
   /*! Reads as 1 if BusFault is pended. */
   vu32 BUSFAULTPENDED  : 1; 
   /*! Reads as 1 if SVCall is pended. */
   vu32 SVCALLPENDED    : 1; 
   /*! Mem Fault. Set to 0 to disable, else 1 for enabled. */
   vu32 MEMFAULTENA     : 1; 
   /*! Bus Fault. Set to 0 to disable, else 1 for enabled. */
   vu32 BUSFAULTENA     : 1; 
   /*! Usage Fault. Set to 0 to disable, else 1 for enabled. */
   vu32 USGFAULTENA     : 1; 
   /*! Reserved */
   vu32                 : 13; 
} SysHandlerCtrl_Bits;


/*! \brief System Handler Control and State Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 System Handler Control and State Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the System Handler Control and State Register in a vu32*/
   vu32                 Reg;
   /*! Individual Bit Defintions of the System Handler Control and State Register */
   SysHandlerCtrl_Bits  Bits;
} SysHandlerCtrl_Reg;       

/*! \brief C structure defintion of the bits in the Configurable Fault Status Registers @ 0xE000ED28 .

 This definition allows the individual bits of the Configurable Fault Status Register to be accessed
 in C Code.

*/
typedef struct
{
/* MemManage Fault Error Bit Assignments */
   /*! Instruction Access violation flag */
   vu32 IACCVIOL    : 1; 
   /*!  Data Access violation flag       */
   vu32 DACCVIOL    : 1; 
   /*!  Reserved */
   vu32             : 1; 
   /*!  Unstacking from exception has caused one or more access violations */
   vu32 MUNSTKERR   : 1; 
   /*!  Stacking from exception has caused one or more access violations */
   vu32 MSTKERR     : 1; 
   /*! Reserved  */
   vu32             : 2; 
   /*! Memory Manage Address register valid */
   vu32 MMARVALID   : 1; 

/* Bus Fault Error Bit Assignments */
   /*! Instruction bus error flag:  */
   vu32 IBUSERR     : 1; 
   /*! Precise data bus error return.  */
   vu32 PRECISERR   : 1; 
   /*! Imprecise data bus error.  */
   vu32 IMPRECISERR : 1; 
   /*! Unstack from exception return has caused one or more bus faults.  */
   vu32 UNSTKERR    : 1; 
   /*! Stacking from exception has caused one or more bus faults.  */
   vu32 STKERR      : 1; 
   /*! Reserved  */
   vu32             : 2; 
   /*! Bus Fault address register valid  */
   vu32 BFARVALID   : 1; 

/* Usage Fault Error Bit Assignments */

   /*! Undefined Instruction*/
   vu32 UNDEFINSTR              : 1; 
   /*! Invalid combination of EPSR and instruction, for reasons other than UNDEFINED instruction. */
   vu32 INVSTATE                : 1; 
   /*!  Attempt to load EXC_RETURN into PC illegally*/
   vu32 INVPC                   : 1; 
   /*!  Attempt to use a coprocessor instruction.*/
   vu32 NOCP                    : 1; 
   /*!  Reserved */
   vu32                         : 4; 
   /*!  Unaligned trap*/
   vu32 UNALIGNED               : 1; 
   /*!  Divide by zero trap */
   vu32 DIVBYZERO               : 1; 
   /*! Reserved  */
   vu32                         : 7; 
} ConfigFaultStatus_Bits;

/*! \brief Configurable Fault Status Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Configurable Fault Status Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Configurable Fault Status register in a vu32*/
   vu32                     Reg;
   /*! Individual Bit Defintions of the Configurable Fault Status Register */
   ConfigFaultStatus_Bits   Bits;
} ConfigFaultStatus_Reg;    

/*! \brief C structure defintion of the bits in the Hard Fault Status Register @ 0xE000ED2C .

 This definition allows the individual bits of the Hard Fault Status Register to be accessed
 in C Code.

*/
typedef struct
{
   /*! Reserved */
   vu32             : 1; 
   /*! This bit is set if there is a fault because of vector table read on exception processing */
   vu32 VECTTBL     : 1; 
   /*! Reserved */
   vu32             : 28; 
   /*!  Forced */
   vu32 FORCED      : 1; 
   /*! This bit is set if there is a fault related to debug. */
   vu32 DEBUGEVT    : 1; 
} HardFaultStatus_Bits;

/*! \brief Hard Fault Status Register Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Hard Fault Status Register Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Hard Fault Status Register in a vu32*/
   vu32                 Reg;
   /*! Individual Bit Defintions of the Hard Fault Status Register*/
   HardFaultStatus_Bits Bits;
} HardFaultStatus_Reg;      

/*! \brief C structure defintion of the bits in the Debug Fault Status Register @ 0xE000ED30 .

 This definition allows the individual bits of the Debug Fault Status Register to be accessed
 in C Code.

*/
typedef struct
{
   /*! Halt request flag */
   vu32 HALTED      : 1; 
   /*! BKPT flag */
   vu32 BKPT        : 1; 
   /*! DWTTRAP Data Watchpoint and Trace (DWT) flag */
   vu32 DWTTRAP     : 1; 
   /*! VCATCH Vector catch flag */
   vu32 VCATCH      : 1; 
   /*! External debug request flag */
   vu32 EXTERNAL    : 1; 
   /*! Reserved */
   vu32             : 27; 
} DebugFaultStatus_Bits;

/*! \brief Debug Fault Status Register Union of Bits and Value

 This definition allows the entire value or the individual bits of the 
 Debug Fault Status Register to be accessed in C Code.

\code
\endcode
*/
typedef union 
{
   /*! Complete contents of the Debug Fault Status Register in a vu32*/
   vu32                     Reg;
   /*! Individual Bit Defintions of the Debug Fault Status Register */
   DebugFaultStatus_Bits    Bits;
} DebugFaultStatus_Reg;         

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __NVIC_H */

