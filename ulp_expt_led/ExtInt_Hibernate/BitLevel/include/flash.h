//------------------------------------------------------------------------
//
// Copyright (c) 2014 Analog Devices
// Analog Devices Confidential. All rights reserved.
//
// Description:
//   C header file for the Flash Controller.
//
// Revision History:
//   31 Jan 2014: Originally coded by Gene Sullivan for MicroGlue project.
//
//------------------------------------------------------------------------

#ifndef FLASH_H
#define FLASH_H

#include "LPP.h"
#include "util.h"
#include "IRQ.h"
#include <stdlib.h>

#define FLSH_DMA_CH_NUM 15

#define KH_DMA_EN 0
#define AUTO_INCR 1
#define INFO_TOP 0x40780

// Write KEY value to allow access
#define flash_user_key()    FEEKEY          = 0x676C7565
#define test_key()          FEETST_CMD_KEY  = 0x29254862
#define cache_key()         FEECACHEKEY     = 0xF123F456
#define cache_test_key()    FEECACHEKEY     = 0x20567926
#define testprot_key()      TESTPROT        = 0x5970418E

#define terase(val) flash_user_key() ; FEETIME_PARAM0 = (FEETIME_PARAM0 & 0xF0FFFFFF) | (val << 24)

// HCLKDIVCNT = PCLKDIVCNT = val
// Make sure PCLK is not faster than HCLK
#define set_hclk(val) CLKCON1 = (CLKCON1 & 0xFFFFC0C0) | (val << 8) | val;

#endif

