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

    Module       : lpp_type.h
    Description  : 
                   
    Date         : $Date: 2012-06-07 10:31:02+01 $
    Version      : $Revision: 1.2 $
    Changelog    : $Log: code#include#lpp_type.h,v $
    Changelog    : Revision 1.2  2012-06-07 10:31:02+01  tmviner
    Changelog    : Removed the bool typedef, and source it from stdbool.h instead. TRUE/FALSE macros still needed to support all existing testcases.
    Changelog    :
    Changelog    : Revision 1.1  2011-08-26 19:59:00+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:09:39-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:04-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.3  2008-08-27 10:32:08-04  pnoonan
    Changelog    : Further definitions
    Changelog    :
    Changelog    : Revision 1.2  2008-03-07 10:46:27-05  pnoonan
    Changelog    : Added doxegen comments for automatic documentation generation
    Changelog    :
    Changelog    : Revision 1.1  2008-03-04 11:43:05-05  pnoonan
    Changelog    : Library Type definitions
    Changelog    :
*/
/*! 
   \file lpp_type.h  
   \brief This file contains types used throughout the LPP Library
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LPP_TYPE_H
#define __LPP_TYPE_H

/* Includes ------------------------------------------------------------------*/

#include <stdbool.h>

/* Exported types ------------------------------------------------------------*/

/*! \var   typedef signed long  s32
    \brief Typedef for a 32 bit signed integer.
    
    Use this definition when a 32 bit signed type is explicitly required.
*/
typedef signed long  s32;

/*! \var   typedef signed short s16
    \brief Typedef for a 16 bit signed integer.
    
    Use this definition when a 16 bit signed type is explicitly required.
*/
typedef signed short s16;

/*! \var   typedef signed char  s8
    \brief Typedef for a 8 bit signed character.
    
    Use this definition when an 8 bit signed type is explicitly required.
*/
typedef signed char  s8;

/*! \var   typedef volatile signed long  vs32
    \brief Typedef for a volatile 32 bit signed integer.
    
    Use this definition when a volatile 32 bit signed type is explicitly required.
*/
typedef volatile signed long  vs32;

/*! \var   typedef volatile signed short vs16
    \brief Typedef for a volatile 16 bit signed integer.
    
    Use this definition when a volatile 16 bit signed type is explicitly required.
*/
typedef volatile signed short vs16;

/*! \var   typedef volatile signed char  vs8
    \brief Typedef for a volatile 8 bit signed character.
    
    Use this definition when an volatile 8 bit signed type is explicitly required.
*/
typedef volatile signed char  vs8;

/*! \var   typedef signed long  u32
    \brief Typedef for a 32 bit unsigned integer.
    
    Use this definition when a 32 bit unsigned type is explicitly required.
*/
typedef unsigned long  u32;

/*! \var   typedef signed short u16
    \brief Typedef for a 16 bit unsigned integer.
    
    Use this definition when a 16 bit unsigned type is explicitly required.
*/
typedef unsigned short u16;

/*! \var   typedef unsigned char  u8
    \brief Typedef for a 8 bit unsigned character.
    
    Use this definition when an 8 bit unsigned type is explicitly required.
*/
typedef unsigned char  u8;

/*! \var   typedef signed long const uc32
    \brief Typedef for a 32 bit unsigned const integer.
    
    Use this definition when a 32 bit unsigned const type is explicitly required.
*/
typedef unsigned long  const uc32;  

/*! \var   typedef signed short const uc16
    \brief Typedef for a 16 bit unsigned const integer.
    
    Use this definition when a 16 bit unsigned const type is explicitly required.
*/
typedef unsigned short const uc16;

/*! \var   typedef signed chart const uc8
    \brief Typedef for a 8 bit unsigned const integer.
    
    Use this definition when a 8 bit unsigned const type is explicitly required.
*/
typedef unsigned char  const uc8;

/*! \var   typedef volatile unsigned long  vu32
    \brief Typedef for a volatile 32 bit unsigned integer.
    
    Use this definition when a volatile 32 bit unsigned type is explicitly required.
*/
typedef volatile unsigned long  vu32;

/*! \var   typedef volatile unsigned short vu16
    \brief Typedef for a volatile 16 bit unsigned integer.
    
    Use this definition when a volatile 16 bit unsigned type is explicitly required.
*/
typedef volatile unsigned short vu16;

/*! \var   typedef volatile unsigned char  vu8
    \brief Typedef for a volatile 8 bit unsigned character.
    
    Use this definition when an volatile 8 bit unsigned type is explicitly required.
*/
typedef volatile unsigned char  vu8;

/*! \var   typedef volatile unsigned long  const vuc32
    \brief Typedef for a volatile 32 bit constant unsigned integer
    
    Use this definition when an volatile 32 bit unsigned type constant is explicitly required.
*/
typedef volatile unsigned long  const vuc32;  

/*! \var   typedef volatile unsigned long  const vuc16
    \brief Typedef for a volatile 16 bit constant unsigned integer
    
    Use this definition when an volatile 16 bit unsigned type constant is explicitly required.
*/
typedef volatile unsigned short const vuc16;  

/*! \var   typedef volatile unsigned char  const vuc8
    \brief Typedef for a volatile 8 bit constant unsigned character
    
    Use this definition when an volatile 8 bit unsigned type constant is explicitly required.
*/
typedef volatile unsigned char  const vuc8;   

/* Unsigned pointers */
typedef volatile u8  *u8p;
typedef volatile u16 *u16p;
typedef volatile u32 *u32p;

/* Signed pointers */
typedef volatile s8  *s8p;
typedef volatile s16 *s16p;
typedef volatile s32 *s32p;

// bool typedef removed as it is now sourced from stdbool.h
// Need to keep the macros for TRUE/FALSE to support existing testcases
// They are defined as true/false (lowercase) in stdbool.h
// The macros should be removed if ever the testcases will use only the lowercase version

#define FALSE   0
#define TRUE    1


/*! \enum FlagStatus
 * A description of the enum type.
 */

/*! \var FlagStatus RESET
 * The description of the first enum value.
 */

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;

/*! \enum EnableState
 * Variables of this type are used to enable\disable features.
 */
/*! \var EnableState DISABLE
 * Disable (turn off) the required feature.
 */
/*! \var EnableState ENABLE
 * Enable (turn on) the required feature.
 */
typedef enum {DISABLE = 0, ENABLE = !DISABLE} EnableState;

/*!
  \def IS_ENABLE_STATE(STATE)
  Determines if \a STATE is a valid EnableState value. 

  Used for validating paramters in debug builds.
*/
#define IS_ENABLE_STATE(STATE) ((STATE == DISABLE) || (STATE == ENABLE))

/*! \enum ErrorStatus
 * Variables of this type are used to return an error response
 */
/*! \var ErrorStatus ERROR
 * The requested action resulted in a total or partial failure.
 */
/*! \var ErrorStatus SUCCESS
 * The requested action completed successfully.
 */
typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;

/*!
  \def U8_MAX
  The maximum value of an unsigned 8 bit type
*/
#define U8_MAX     ((u8)255)
/*!
  \def S8_MAX
  The maximum value of an signed 8 bit type
*/
#define S8_MAX     ((s8)127)
/*!
  \def S8_MIN
  The minumum value of an signed 8 bit type
*/
#define S8_MIN     ((s8)-128)
/*!
  \def U16_MAX
  The maximum value of an unsigned 16 bit type
*/
#define U16_MAX    ((u16)65535u)
/*!
  \def S16_MAX
  The maximum value of an signed 16 bit type
*/
#define S16_MAX    ((s16)32767)
/*!
  \def S16_MIN
  The minumum value of an signed 16 bit type
*/
#define S16_MIN    ((s16)-32768)
/*!
  \def U32_MAX
  The maximum value of an unsigned 32 bit type
*/
#define U32_MAX    ((u32)4294967295uL)
/*!
  \def S32_MAX
  The maximum value of an signed 32 bit type
*/
#define S32_MAX    ((s32)2147483647)
/*!
  \def S32_MIN
  The minimum value of an signed 32 bit type
*/
#define S32_MIN    ((s32)2147483648uL)

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __LPP_TYPE_H */

