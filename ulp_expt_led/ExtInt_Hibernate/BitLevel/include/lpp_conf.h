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

    Module       : lpp_conf.h
    Description  : 
                   
    Date         : $Date: 2011-12-12 16:37:54+00 $
    Version      : $Revision: 1.2 $
    Changelog    : $Log: code#include#lpp_conf.h,v $
    Changelog    : Revision 1.2  2011-12-12 16:37:54+00  jnekl
    Changelog    : Run dos2unix to cleanup different types of newlines used within the same file.
    Changelog    :
    Changelog    : Revision 1.1  2011-08-26 19:59:06+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:09:22-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:08-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.3  2008-04-11 11:02:24-04  pnoonan
    Changelog    : Additional functionality
    Changelog    :
    Changelog    : Revision 1.2  2008-03-11 07:13:40-04  pnoonan
    Changelog    : ASSERT macro added.
    Changelog    :
    Changelog    : Revision 1.1  2008-03-04 11:43:48-05  pnoonan
    Changelog    : Configure peripheral availability
    Changelog    :
*/
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LPP_CONF_H
#define __LPP_CONF_H

/* Includes ------------------------------------------------------------------*/
#include "lpp_type.h"

/************************************* NVIC ***********************************/
#define _NVIC

/************************************* SysTick ********************************/
#define _SysTick

/* Exported macro ------------------------------------------------------------*/
#ifdef  DEBUG
  #define ASSERT(expr) ((expr) ? (void)0 : ASSERT_FAILED((u8 *)__FILE__, __LINE__))
  void ASSERT_FAILED(u8* file, u32 line);
#else
  #define ASSERT(expr) ((void)0)
#endif /* DEBUG */
/* Exported functions ------------------------------------------------------- */
void        conf_SetHCLKFreq   		(u32 HCLKFreq  );
void        conf_SetEXTCLKFreq 		(u32 EXTCLKFreq);
void        conf_SetNumInterrupts 	(u32 NumInts   );

u32         conf_GetHCLKFreq   			(void);
u32         conf_GetEXTCLKFreq 			(void);
u32         conf_GetNumInterrupts 		(void);


#endif /* __LPP_CONF_H */

