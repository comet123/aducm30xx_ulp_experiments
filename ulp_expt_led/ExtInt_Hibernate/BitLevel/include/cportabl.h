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

    Module       : cportabl.h
    Description  : The following macros can be used in C modules
                   to allow portability across toolchains
    Date         : $Date: 2011-11-10 22:48:37+00 $
    Version      : $Revision: 1.2 $
    Changelog    : $Log: code#include#cportabl.h,v $
    Changelog    : Revision 1.2  2011-11-10 22:48:37+00  jnekl
    Changelog    : Add naked and noreturn attribute macros.
    Changelog    :
    Changelog    : Revision 1.1  2011-08-26 19:59:14+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:09:09-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:13-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.4  2009-01-13 07:11:59-05  pnoonan
    Changelog    : Support for placing code in RAM
    Changelog    :
    Changelog    : Revision 1.3  2008-09-29 12:14:22-04  pnoonan
    Changelog    : Use pre-defined gcc definition rather than defining a new one
    Changelog    :
    Changelog    : Revision 1.2  2008-03-05 12:40:39-05  pnoonan
    Changelog    : Added definition for weak function attributes
    Changelog    :
    Changelog    : Revision 1.1  2008-02-29 11:30:05-05  pnoonan
    Changelog    : Initial revision.
    Changelog    :
*/

#ifndef __CPORTABL_H__
#define __CPORTABL_H__

//*****************************************************************************
//
// GCC.
//
//*****************************************************************************
#ifdef __GNUC__

// Function attribute to signify interrupt function
#define ATTRIBUTE_INTERRUPT __attribute__((__interrupt__))

// Function attribute to signify weak function
#define ATTRIBUTE_WEAK __attribute__((weak))

// Function attribute to omit function prologue/epilogue 
#define ATTRIBUTE_NAKED __attribute__((naked))

// Function attribute 
#define ATTRIBUTE_NORETURN __attribute__((noreturn))

// Functions to be executed from RAM will be placed in the .ramfunctions
// and located appropriately by the linker
#define RAMFUNC __attribute__ ((long_call,section (".ramfunctions")))

#endif // gcc

//*****************************************************************************
//
// RV-MDK.
//
//*****************************************************************************
#ifdef rvmdk

// Function attribute to signify interrupt function
#define ATTRIBUTE_INTERRUPT 
// Function attribute to signify weak function
#define ATTRIBUTE_WEAK

#define ATTRIBUTE_NAKED 
#define ATTRIBUTE_NORETURN

#endif // rvmdk

//*****************************************************************************
//
// EW-ARM 
//
//*****************************************************************************
#ifdef ewarm

// Function attribute to signify interrupt function
#define ATTRIBUTE_INTERRUPT 
// Function attribute to signify weak function
#define ATTRIBUTE_WEAK

#define ATTRIBUTE_NAKED 
#define ATTRIBUTE_NORETURN

#endif // ewarm


#endif // __CPORTABL_H__
