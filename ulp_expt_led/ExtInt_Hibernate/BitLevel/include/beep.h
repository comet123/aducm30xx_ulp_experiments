//------------------------------------------------------------------------
//
// Copyright (c) 2011 Analog Devices
// Analog Devices Confidential. All rights reserved.
//
// Description:
//   C header file for the Beeper driver.
//
// Revision History:
//   15 Nov 2011: Originally coded by Gene Sullivan for Roche project.
//
//------------------------------------------------------------------------

#include <LPP.h>
#include <util.h>
#include <IRQ.h>
#include <clk.h>

// This is not an RTL register.  It is used for DV.
#define BEEP_RSVD_A                                    0x40005C10
#define BEEP_RSVD    (*(volatile unsigned short int *) 0x40005C10)

// BEEP_CFG register bit masks
#define SEQ_REPEAT          0x00FF  
#define BEEP_EN             0x0100  
#define IRQ_TONEA_START     0x0400  
#define IRQ_TONEA_END       0x0800  
#define IRQ_TONEB_START     0x1000  
#define IRQ_TONEB_END       0x2000  
#define IRQ_SEQ_NEAR_END    0x4000  
#define IRQ_SEQ_END         0x8000  

// Status register bit masks
#define SEQ_REMAIN          0x00FF  
#define BEEP_BUSY           0x0100  
#define EVT_TONEA_START     0x0400  
#define EVT_TONEA_END       0x0800  
#define EVT_TONEB_START     0x1000  
#define EVT_TONEB_END       0x2000  
#define EVT_SEQ_NEAR_END    0x4000  
#define EVT_SEQ_END         0x8000  

// Tone A/B register bit masks
#define DUR     0x00FF
#define FREQ    0x7F00
#define DISABLE 0x8000

#define InitBeep() InitBeepBase(1)

void InitBeepBase (bool extclk);
void ShutDownBeep (void);
