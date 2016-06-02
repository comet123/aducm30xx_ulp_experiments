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

    Module       : aportabl.h
    Description  : The following macros can be used in assember modules
                   to allow portability across toolchains
    Date         : $Date: 2011-08-26 19:59:21+01 $
    Version      : $Revision: 1.1 $
    Changelog    : $Log: code#include#aportabl.h,v $
    Changelog    : Revision 1.1  2011-08-26 19:59:21+01  sosadmin
    Changelog    : Import from lpp-h Aug 26 2011
    Changelog    :
    Changelog    : Revision 1.1  2009-10-06 00:08:54-04  raman
    Changelog    : Initial revision.
    Changelog    :
    Changelog    : Revision 1.1  2009-03-19 09:25:17-04  sbradle
    Changelog    : Initial copy from LPP database
    Changelog    :
    Changelog    : Revision 1.1  2008-02-29 11:30:09-05  pnoonan
    Changelog    : Initial revision.
    Changelog    :
*/

#ifndef __APORTABL_H__
#define __APORTABL_H__

//*****************************************************************************
//
// GCC.
//
//*****************************************************************************
#ifdef __GNUC__

//
// The assembly code preamble required to put the assembler into the correct
// configuration.
//
    .syntax unified
    .thumb

//
// Section headers.
//
#define __TEXT__                .text
#define __DATA__                .data
#define __BSS__                 .bss

//
// Assembler nmenonics.
//
#define __ALIGN__               .balign 4
#define __END__                 .end
#define __EXPORT__              .globl
#define __IMPORT__              .extern
#define __LABEL__               :
#define __STR__                 .ascii
#define __THUMB_LABEL__         .thumb_func
#define __WORD__                .word

#endif // gcc

//*****************************************************************************
//
// RV-MDK.
//
//*****************************************************************************
#ifdef rvmdk

//
// The assembly code preamble required to put the assembler into the correct
// configuration.
//
    thumb
    require8
    preserve8

//
// Section headers.
//
#define __TEXT__                area ||.text||, code, readonly, align=2
#define __DATA__                area ||.data||, data, align=2
#define __BSS__                 area ||.bss||, noinit, align=2

//
// Assembler nmenonics.
//
#define __ALIGN__               align 4
#define __END__                 end
#define __EXPORT__              export
#define __IMPORT__              import
#define __LABEL__
#define __STR__                 dcb
#define __THUMB_LABEL__
#define __WORD__                dcd

#endif // rvmdk

//*****************************************************************************
//
// EW-ARM 
//
//*****************************************************************************
#ifdef ewarm

//
// Section headers.
//
#define __TEXT__                rseg CODE:CODE(2)
#define __DATA__                rseg DATA:DATA(2)
#define __BSS__                 rseg DATA:DATA(2)

//
// Assembler nmenonics.
//
#define __ALIGN__               alignrom 4
#define __END__                 end
#define __EXPORT__              export
#define __IMPORT__              import
#define __LABEL__
#define __STR__                 dcb
#define __THUMB_LABEL__
#define __WORD__                dcd

#endif // ewarm


#endif // __APORTABL_H__
