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

    Module       : cortexm3.h
    Description  : 
    Date         : $Date: 2011-12-12 16:39:36+00 $
    Version      : $Revision: 1.2 $
    Changelog    : $Log: code#include#cortexm3.h,v $
    Changelog    : Revision 1.2  2011-12-12 16:39:36+00  jnekl
    Changelog    : Run dos2unix to cleanup different types of newlines used within the same file.
    Changelog    :
    Changelog    : Revision 1.1  2011-08-26 19:59:16+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:09:04-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:14-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.2  2008-03-11 07:45:59-04  pnoonan
    Changelog    : Library update and documentation update
    Changelog    :
    Changelog    : Revision 1.1  2008-03-11 07:12:59-04  pnoonan
    Changelog    : Useful functionality for CortexM3 programming
    Changelog    :
*/
/*! 
   \file cortexm3.h  
   \brief This file contains useful definitions needed for Cortex-M3 programming
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CORTEXM3_H
#define __CORTEXM3_H

/* Includes ------------------------------------------------------------------*/
#include "lpp_type.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void    __WFI                   (void                   );
void    __WFE                   (void                   );
void    __SEV                   (void                   );
void    __ISB                   (void                   );
void    __DSB                   (void                   );
void    __DMB                   (void                   );
void    __SVC                   (void                   );
u32     __GET_CM3_CONTROL_SREG  (void                   );
void    __SET_CM3_CONTROL_SREG  (u32 Control            );
u32     __GET_CM3_PROCESS_STACK (void                   );
void    __SET_CM3_PROCESS_STACK (u32 TopOfProcessStack  );
u32     __GET_CM3_MAIN_STACK    (void                   );
void    __SET_CM3_MAIN_STACK    (u32 TopOfMainStack     );
void    __SETPRIMASK            (void                   );
void    __RESETPRIMASK          (void                   );
void    __SETFAULTMASK          (void                   );
void    __RESETFAULTMASK        (void                   );
void    __BASEPRICONFIG         (u32 NewPriority        );
u32     __GetBASEPRI            (void                   );
u16     __REV_HalfWord          (u16 Data               );
u32     __REV_Word              (u32 Data               );

#endif /* __CORTEXM3_H */

