/*===================================   u t i l . h  ===================================*/

/*
**
**      This file contains Analog Devices, Inc. proprietary information.
**      Copyright 2003 by Analog Devices, Inc.  All rights reserved.
**
**      File            : check.h
**      Author(s)       : Jimmy Qin, Tom Nolette
**      Description     : Low level utility functions 
**
**      $Log: code#include#util.h,v $
**      Revision 1.12  2012-07-26 19:25:35+01  tmviner
**      Making the DMA descriptor array to properly align in IAR and Keil.
**
**      Revision 1.11  2012-03-06 12:41:13+00  dharty
**      Added external message passing over GPIO
**
**      Revision 1.10  2012-02-04 21:27:40+00  jdudek
**      moved comon defines between util and util assembly into a seperate file util_defs
**
**      Revision 1.9  2012-01-22 23:50:02+00  jeldredg
**      added i2s to tb_hs event triggers
**
**      Revision 1.8  2012-01-13 16:30:07+00  awhooley
**      Added mask to PowAtomRet
**
**      Revision 1.7  2012-01-12 14:52:42+00  jdudek
**      adding a pow atom macro with sram retention bit
**
**      Revision 1.6  2011-12-08 20:41:04+00  jdudek
**      multiple definitions of HIBERNATE
**
**      Revision 1.5  2011-12-06 21:53:45+00  jdudek
**      added aducm350 power mode defines
**
**      Revision 1.4  2011-12-06 04:36:02+00  dlou
**      PWRMOD reduced to 2-bit
**
**      Revision 1.3  2011-11-19 15:13:50+00  dlou
**      OSCCTRL updated to oscset() and oscclr()
**
**      Revision 1.2  2011-11-07 09:45:05+00  asingh
**      changed the size of DMADesc data structure to 16
**
**      Revision 1.1  2011-08-26 19:58:36+01  sosadmin
**      Import from lpp-h Aug 26 2011
**
**      Revision 1.12  2011-08-19 11:53:52-04  jeldredg
**      added a PowAtom() macro for atomic power mode writes
**
**      Revision 1.11  2011-08-04 16:28:55-04  jeldredg
**      updated power mode #defines
**
**      Revision 1.10  2011-06-06 22:07:06-04  jdudek
**      added directed threads for external interrupts.
**
**      Revision 1.9  2011-03-29 01:54:49-04  asingh
**      added TB channel for spi0 underflow/overflow
**
**      Revision 1.8  2011-03-04 04:49:42-05  asingh
**      added power key defines
**
**      Revision 1.7  2011-03-03 02:24:51-05  asingh
**      SHUTDOWN changed to SHUT_DOWN as there is a register called SHUTDOWN in m52.h
**
**      Revision 1.6  2011-03-03 02:06:07-05  asingh
**      added power mode defines
**
**      Revision 1.5  2011-02-11 18:19:15-05  dlou
**      BitBand access added, USB_LPM sync handshake channel added
**
**      Revision 1.4  2010-10-26 07:59:59-04  mnair
**      DMA function prototypes and DMA data structure added
**
**      Revision 1.3  2010-10-18 09:45:01-04  dlou
**      usb handshake added
**
**      Revision 1.2  2010-09-21 03:01:16-04  anavada
**      Used new ISYNC for SPIH0
**
**      Revision 1.1  2009-10-06 00:10:24-04  raman
**      Initial revision.
**
**      Revision 1.5  2009-07-24 01:09:45-04  raman
**      Added fucntion to print memory check failure
**
**      Revision 1.4  2009-07-08 10:11:05-04  pnoonan
**      Added ext_pass_fail routines
**
**      Revision 1.3  2009-07-03 06:10:19-04  raman
**      added new defines.
**
**      Revision 1.2  2009-06-18 07:30:50-04  pnoonan
**      Added some interrupt helper functions
**
**      Revision 1.1  2009-03-19 09:24:57-04  sbradle
**      Initial copy from LPP database
**
**      Revision 1.8  2009-03-03 11:42:27-05  mcox
**      Updated handshaking #macros.
**
**      Revision 1.7  2009-02-26 18:18:19-05  mcox
**      Added TbStatus
**
**      Revision 1.6  2009-02-18 11:48:32-05  acarbaj
**      Add macro: TB_ISYNC_AFE
**
**      Revision 1.5  2008-10-30 14:25:48-04  mcox
**      Testbench control additions to API.
**
**      Revision 1.4  2008-09-02 09:33:51-04  pnoonan
**      Update for platform...
**
**      Revision 1.3  2008-08-27 10:32:45-04  pnoonan
**      Removed duplicated definitions
**
**      Revision 1.2  2008-08-26 06:33:32-04  pnoonan
**      Further definitions
**
**      Revision 1.1  2008-08-22 04:23:36-04  pnoonan
**      Utility functions
**
**      Revision 1.19  2006/02/01 18:58:15  pponnath
**      ECPI changes
**
**      Revision 1.18  2005/12/12 18:49:08  nolette
**      Cleaned up lots of prototypes
**
**      Revision 1.17  2005/11/21 23:35:11  ahussai
**
**      Initial import from Monza.
**
**      Revision 1.14  2005/06/13 18:32:03  mkoob
**      Updates to support additional tests ported from Lemans.
**      Padding added to util, dspcore, and sdc libraries to save the DSP pipeline from itself.
**
**      Revision 1.13  2005/02/04 16:06:05  amartin
**      Update with LeMans Qual_050112_1747
**      
**      Revision 1.15  2005/01/05 01:45:47  nolette
**      removed nop_lib
**      
**      Revision 1.14  2004/12/23 22:27:03  nolette
**      Removed -mcall32, Made WriteMem*() as macros not functions
**      
**      Revision 1.13  2004/12/22 01:43:23  nolette
**      Added Nop()
**      
**      Revision 1.12  2004/11/11 15:15:08  hnguyen
**      Jimmy Qin add new Memory write signed c functions
**      
**      Revision 1.11  2004/10/08 18:39:53  pponnath
**      Added function declarations for the USB mmt test
**      
**      Revision 1.10  2004/09/17 21:31:36  rmurki
**       Added new task WaitMemGtExp16 to util.c
**      
**      Revision 1.9  2004/07/16 14:21:29  jqin
**      added RTPG function or handshake channels
**      
**      Revision 1.8  2004/06/02 15:47:34  pcheruku
**      Added BlockMemWrite8, for 8 bit data
**      
**      Revision 1.7  2004/04/02 16:26:56  ranga
**      *** empty log message ***
**      
**
**      Revision 1.7  2004/04/01 18:12:18  ranga
**      Added WaitVar functions.
**
**      Revision 1.6  2004/01/06 16:37:16  pstroppa
**      
**      naming convention changes
**      
**      Revision 1.5  2004/01/06 15:04:09  pstroppa
**      
**      added handshaking routines
**      
**      Revision 1.4  2003/11/21 20:55:27  gsulliva
**      Added WaitBitSet16 function.
**      
**      Revision 1.3  2003/11/17 20:13:57  jqin
**      modification
**      
**      Revision 1.2  2003/11/14 22:43:27  jqin
**      add ReadMem8/WriteMem8/WaitMem8 functions
**      
**      Revision 1.1  2003/10/01 17:13:50  nolette
**      Split testlib files into seaprate libraries.
**      Fixed the interrupt jump table to simply be an offering of
**      individual IsrFunction pointers
**      Cleaned up headers and comments.
**      
**
*/

#ifndef UTIL_LEGACY_H
#define UTIL_LEGACY_H

/*=========================   T y p e   D e f i n i t i o n s  =========================*/
#include "lpp_type.h"
#include <limits.h>
#include "util_defs.h"

/*! 
   \file utils.h  
   \brief This file contains test bench helper functions
*/

/*=====================   C o n s t a n t   D e f i n i t i o n s  =====================*/



/*=================================   I n c l u d e s  =================================*/

typedef enum binary_op {
    AND,
    OR,
    XOR,
    NAND,
    NOR,   
    XNOR,
    NOP
} BINARY_OP_T;

/*============================================*/
//      DMA Data Structures
/*============================================*/

// Data structure for CTRL_CFG
typedef struct ctrl_cfg 
{
        unsigned int cycle_ctrl:3;
        unsigned int next_useburst:1;
        unsigned int n_minus_1:10;
        unsigned int r_power:4;
        unsigned int src_prot_ctrl:3;
        unsigned int dst_prot_ctrl:3;
        unsigned int src_size:2;
        unsigned int src_inc:2;
        unsigned int dst_size:2;
        unsigned int dst_inc:2;
} CtrlCfg;

// Data structure of a DMA descriptor.
typedef struct dma_desc 
{
        unsigned int srcEndPtr;
        unsigned int destEndPtr;
        CtrlCfg ctrlCfg;
        unsigned int reserved4Bytes;
} DmaDesc;



extern DmaDesc Ch_Desc[24];

/*===================================   M a c r o s  ===================================*/

#define WriteMem8(ADDR,DATA)   *((volatile u8  *) (ADDR)) = (DATA)
#define WriteMem16S(ADDR,DATA) *((volatile s16 *) (ADDR)) = (DATA)
#define WriteMem16(ADDR,DATA)  *((volatile u16 *) (ADDR)) = (DATA)
#define WriteMem32(ADDR,DATA)  *((volatile u32 *) (ADDR)) = (DATA)

/*======================   F u n c t i o n   P r o t o t y p e s  ======================*/

/*
** The following prototypes and/or comments are AUTO-GENERATED.
** Please edit the appropriate filename.c file, not this header file.
** Run "prototype filename.c" or "prototype -c filename.c" to update 
** the prototypes and/or comments.
*/

void WriteInvMem16Mask( u32 address, u16 mask );
void WriteMem16Mask( u32 address, u16 data, u16 mask );
void WriteMem32Mask( u32 address, u32 data, u32 mask );


void WriteMemMod16( volatile u32 *address, s32 postIncAddr, u16 data );
u8 ReadMem8( u32 address );
u16 ReadMem16( u32 address );
u32 ReadMem32( u32 address );
u16 WaitNonZeroMem16( u32 address );
u32 WaitNonZeroMem32( u32 address );
void WaitVar8( u32 addr, u8 expect, u8 mask, BINARY_OP_T op );
void WaitVar16( u32 addr, u16 expect, u16 mask, BINARY_OP_T op );
void WaitVar32( u32 addr, u32 expect, u32 mask, BINARY_OP_T op );
void WaitMem8( u32 address, u8 data );
void WaitMemGtExp16( u32 address, u16 data );
void WaitMem16( u32 address, u16 data );
void WaitMem32( u32 address, u32 data );
void BlockWriteMem16( u32 address, u32 num_data, u16 *data_array );
void BlockWriteMem8( u32 address, u32 num_data, u8 *data_array );
void BlockWriteMem32( u32 address, u32 num_data, u32 *data_array );
u32 ReadBit16( u32 address, u32 bit );
u16 SetMask16( u32 address, u16 mask );
u32 ReadBit32( u32 address, u32 bit );
u32 SetMask32( u32 address, u32 mask );
void WaitBitSet16( u32 address, u32 bit );
void WaitBitSet32( u32 address, u32 bit );
void WaitBitClr16( u32 address, u32 bit );
void WaitBitClr32( u32 address, u32 bit );

void Nop( u32 loopCount );
//u8 MemCheck8( u32 address, u8 expectedValue );
//u8 MemCheck16( u32 address, u16 expectedValue );
//u8 MemCheck32( u32 address, u32 expectedValue );
u8 MemCheck16Mask( u32 address, u16 expectedValue, u16 mask );
u8 MemCheck32Mask( u32 address, u32 expectedValue, u32 mask );
void BlockMemCheck32( u32 address, u32 numData, u32 *expectArray );
void BlockMemCheck16( u32 address, u32 numData, u16 *expectArray );
void BlockMemCheck8( u32 address, u32 numData, u8 *expectArray );
u8 CheckVar( u32 variableData, u32 expectedValue );
u8 CheckVar16( u16 variableData, u16 expectedValue );
void val_chk_failed_addr(u32 address, u32 variableData, u32 expectedValue );
void val_chk_failed(u32 variableData, u32 expectedValue );
void Error( void );
void TbTrigger(u8 chan);
void TbWait(u8 chan);
u32 TbStatus(u8 chan);
void TbClear(u8 chan);
void DmaTask(DmaDesc *Desc, unsigned int *src_end, unsigned int *dest_end,int dst_inc,int size, int src_inc, int R, int N_1,int nxt_burst, int mode);
void enableDMA();
void disableChannel(int channel);
void disableDMA();
void dmaswreq(int channel);
void setinterrupt(int intnum);
void DmaCfg_Basic(int channel,unsigned int *src_end,unsigned int *dst_end,int dst_inc,int size,int src_inc,int R,int N);
void DmaCfg_AutoReq(int channel,unsigned int *src_end,unsigned int *dst_end,int dst_inc,int size,int src_inc,int R,int N);
void Dma_Setup(int channel);
void DmaCfg_PPprim(int channel, unsigned int *src);
void DmaCfg_PPalt(int channel, unsigned int *src);
void DmaCfg_MSG(int channel, unsigned int *src_end,int no_tasks);
void DmaCfg_PSG(int channel,unsigned int *src_end,int no_tasks,int use_burst);
void OscSet(bool hfxtal, bool lfxtal, bool hfosc, bool lfosc);
void OscClr(bool hfxtal, bool lfxtal, bool hfosc, bool lfosc);

// quicker read/writes than from check.c/util.c
// everything uses unsinged values by default
// use MemReadI8/16/32 for signed reads!

#define MemWrite8(a, d)         (*((u8p)(a)) = (d))
#define MemWrite16(a, d)        (*((u16p)(a)) = (d))
#define MemWrite32(a, d)        (*((u32p)(a)) = (d))

#define MemRead8(a)             (*((u8p)(a)))
#define MemRead16(a)            (*((u16p)(a)))
#define MemRead32(a)            (*((u32p)(a)))

#define MemReadI8(a)            (*((s8p)(a)))
#define MemReadI16(a)           (*((s16p)(a)))
#define MemReadI32(a)           (*((s32p)(a)))

void ExtInt_Enable      (unsigned int iExtIntNum);
void ExtInt_Disable     (unsigned int iExtIntNum);
void ExtInt_SetPriority (unsigned int iExtIntNum,unsigned char Pri);

#define MemBitWrite(byte_addr,bit,data)	  (*((u32p)(0x22000000+(((byte_addr)-0x20000000)<<5) + ((bit)<<2) ) ) = (d))
#define MemBitRead(byte_addr,bit)	  (*((u32p)(0x22000000+(((byte_addr)-0x20000000)<<5) + ((bit)<<2) ) ) )

#define PeriBitWrite(byte_addr,bit,data)  (*((u32p)(0x42000000+(((byte_addr)-0x40000000)<<5) + ((bit)<<2) ) ) = (data))
#define PeriBitRead(byte_addr,bit)        (*((u32p)(0x42000000+(((byte_addr)-0x40000000)<<5) + ((bit)<<2) ) ) )

// *********************************************************************

// These routines interact with the ext_pass_fail verilog module 
// to provide the following functionality
// 
// 1 - simulation status
// 2 - Debug String output

// Output Port Options
typedef enum {PORT_0, PORT_1, PORT_2, PORT_3, PORT_4} mon_comm_port;

//Send a string to the standard output (from the simulator viewpoint)
void send_msg(mon_comm_port io, char *msg);

// Pass and end the simulation
void send_pass(mon_comm_port io);

// Fail and end the simulation
void send_fail(mon_comm_port io);

// Stop the monitor
void stop_mon(mon_comm_port io);

// Start the monitor
void start_mon(mon_comm_port io);

// Send a single character
void send_char(mon_comm_port io, char byte);

#endif 


