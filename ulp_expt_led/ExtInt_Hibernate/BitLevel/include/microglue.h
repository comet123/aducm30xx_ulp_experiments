/* ================================================================================

     Created by   :   gsulliva
     Created on   :   2014 Jun 30, 12:47 EDT

     Project      :   microglue
     File         :   microglue.h
     Description  :   Register Definitions

     !! ADI Confidential !!
       INTERNAL USE ONLY

     Copyright (c) Analog Devices, Inc.  All Rights Reserved.
     This software is proprietary and confidential to Analog Devices, Inc. and
     its licensors.

     This file was auto-generated. Do not make local changes to this file.
     Auto generation script information:
       Script:         /usr/cadtools/bin/yoda.dir/generators/inc/genHeaders
       Svn Revision:   $Revision: 7719 $:
       Svn Repository: $HeadURL: https://dsgn-svn1.spd.analog.com/svn/coda/yoda/perl/trunk/dspGenDsgnHeaders $:

   ================================================================================ */

#ifndef _DEF_MICROGLUE_H
#define _DEF_MICROGLUE_H

#define __ADI_HAS_beeper__         1
#define __ADI_HAS_bus_matrix__     1
#define __ADI_HAS_CLK__            1
#define __ADI_HAS_CLKG__           1
#define __ADI_HAS_CLKGT__          1
#define __ADI_HAS_CacheFlash__     1
#define __ADI_HAS_EXTINT__         1
#define __ADI_HAS_FLASH__          1
#define __ADI_HAS_FLASH_CACHE__    1
#define __ADI_HAS_FLASH_DFT__      1
#define __ADI_HAS_FLASH_TEST__     1
#define __ADI_HAS_gpio__           1
#define __ADI_HAS_TMR__            1
#define __ADI_HAS_cortex__         1
#define __ADI_HAS_PMG__            1
#define __ADI_HAS_PMGT__           1
#define __ADI_HAS_PTI__            1
#define __ADI_HAS_PowerManagement_AON__ 1
#define __ADI_HAS_RNG__            1
#define __ADI_HAS_rtc__            1
#define __ADI_HAS_SPI__            1
#define __ADI_HAS_sport__          1
#define __ADI_HAS_sys__            1
#define __ADI_HAS_wdt__            1
#define __ADI_HAS_crc__            1
#define __ADI_HAS_crypto__         1
#define __ADI_HAS_dma__            1
#define __ADI_HAS_i2cf__           1
#define __ADI_HAS_uart__           1

/* ============================================================================================================================
        
   ============================================================================================================================ */

/* ============================================================================================================================
        bus_matrix
   ============================================================================================================================ */
#define MOD_BUS_MATRIX_BASE                  0x4004C800            /*    */
#define MOD_BUS_MATRIX_MASK                  0x00003FFF            /*    */
#define REG_BUS_MATRIX_ARBIT0_RESET          0x00240024            /*      Reset Value for ARBIT0  */
#define REG_BUS_MATRIX_ARBIT0                0x4004C800            /*  bus_matrix Arbitration Priority Configuration for FLASH and SRAM0 */
#define REG_BUS_MATRIX_ARBIT1_RESET          0x00240024            /*      Reset Value for ARBIT1  */
#define REG_BUS_MATRIX_ARBIT1                0x4004C804            /*  bus_matrix Arbitration Priority Configuration for SRAM1 and SIP */
#define REG_BUS_MATRIX_ARBIT2_RESET          0x00240024            /*      Reset Value for ARBIT2  */
#define REG_BUS_MATRIX_ARBIT2                0x4004C808            /*  bus_matrix Arbitration Priority Configuration for APB32 and APB16 */
#define REG_BUS_MATRIX_ARBIT3_RESET          0x00010002            /*      Reset Value for ARBIT3  */
#define REG_BUS_MATRIX_ARBIT3                0x4004C80C            /*  bus_matrix Arbitration Priority Configuration for APB16 priority for core and for DMA1 */

/* ============================================================================================================================
        bus_matrix Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          bus_matrix_ARBIT0                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BUS_MATRIX_ARBIT0_SRAM0_DMA0    20            /*  SRAM0 priority for DMA0 */
#define BITP_BUS_MATRIX_ARBIT0_SRAM0_SBUS    18            /*  SRAM0 priority for SBUS */
#define BITP_BUS_MATRIX_ARBIT0_SRAM0_DCODE   16            /*  SRAM0 priority for Dcode */
#define BITP_BUS_MATRIX_ARBIT0_FLSH_DMA0      4            /*  Flash priority for DMA0 */
#define BITP_BUS_MATRIX_ARBIT0_FLSH_SBUS      2            /*  Flash priority for SBUS */
#define BITP_BUS_MATRIX_ARBIT0_FLSH_DCODE     0            /*  Flash priority for DCODE */
#define BITM_BUS_MATRIX_ARBIT0_SRAM0_DMA0    0x00300000    /*  SRAM0 priority for DMA0 */
#define BITM_BUS_MATRIX_ARBIT0_SRAM0_SBUS    0x000C0000    /*  SRAM0 priority for SBUS */
#define BITM_BUS_MATRIX_ARBIT0_SRAM0_DCODE   0x00030000    /*  SRAM0 priority for Dcode */
#define BITM_BUS_MATRIX_ARBIT0_FLSH_DMA0     0x00000030    /*  Flash priority for DMA0 */
#define BITM_BUS_MATRIX_ARBIT0_FLSH_SBUS     0x0000000C    /*  Flash priority for SBUS */
#define BITM_BUS_MATRIX_ARBIT0_FLSH_DCODE    0x00000003    /*  Flash priority for DCODE */

/* -------------------------------------------------------------------------------------------------------------------------
          bus_matrix_ARBIT1                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BUS_MATRIX_ARBIT1_SIP_DMA0      20            /*  SIP priority for DMA0 */
#define BITP_BUS_MATRIX_ARBIT1_SIP_SBUS      18            /*  SIP priority for SBUS */
#define BITP_BUS_MATRIX_ARBIT1_SIP_DCODE     16            /*  SIP priority for DCODE */
#define BITP_BUS_MATRIX_ARBIT1_SRAM1_DMA0     4            /*  SRAM1 priority for DMA0 */
#define BITP_BUS_MATRIX_ARBIT1_SRAM1_SBUS     2            /*  SRAM1 priority for SBUS */
#define BITP_BUS_MATRIX_ARBIT1_SRAM1_DCODE    0            /*  SRAM1 priority for Dcode */
#define BITM_BUS_MATRIX_ARBIT1_SIP_DMA0      0x00300000    /*  SIP priority for DMA0 */
#define BITM_BUS_MATRIX_ARBIT1_SIP_SBUS      0x000C0000    /*  SIP priority for SBUS */
#define BITM_BUS_MATRIX_ARBIT1_SIP_DCODE     0x00030000    /*  SIP priority for DCODE */
#define BITM_BUS_MATRIX_ARBIT1_SRAM1_DMA0    0x00000030    /*  SRAM1 priority for DMA0 */
#define BITM_BUS_MATRIX_ARBIT1_SRAM1_SBUS    0x0000000C    /*  SRAM1 priority for SBUS */
#define BITM_BUS_MATRIX_ARBIT1_SRAM1_DCODE   0x00000003    /*  SRAM1 priority for Dcode */

/* -------------------------------------------------------------------------------------------------------------------------
          bus_matrix_ARBIT2                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BUS_MATRIX_ARBIT2_APB16_DMA0    20            /*  APB16 priority for DMA0 */
#define BITP_BUS_MATRIX_ARBIT2_APB16_SBUS    18            /*  APB16 priority for SBUS */
#define BITP_BUS_MATRIX_ARBIT2_APB16_DCODE   16            /*  APB16 priority for DCODE */
#define BITP_BUS_MATRIX_ARBIT2_APB32_DMA0     4            /*  APB32 priority for DMA0 */
#define BITP_BUS_MATRIX_ARBIT2_APB32_SBUS     2            /*  APB32 priority for SBUS */
#define BITP_BUS_MATRIX_ARBIT2_APB32_DCODE    0            /*  APB32 priority for DCODE */
#define BITM_BUS_MATRIX_ARBIT2_APB16_DMA0    0x00300000    /*  APB16 priority for DMA0 */
#define BITM_BUS_MATRIX_ARBIT2_APB16_SBUS    0x000C0000    /*  APB16 priority for SBUS */
#define BITM_BUS_MATRIX_ARBIT2_APB16_DCODE   0x00030000    /*  APB16 priority for DCODE */
#define BITM_BUS_MATRIX_ARBIT2_APB32_DMA0    0x00000030    /*  APB32 priority for DMA0 */
#define BITM_BUS_MATRIX_ARBIT2_APB32_SBUS    0x0000000C    /*  APB32 priority for SBUS */
#define BITM_BUS_MATRIX_ARBIT2_APB32_DCODE   0x00000003    /*  APB32 priority for DCODE */

/* -------------------------------------------------------------------------------------------------------------------------
          bus_matrix_ARBIT3                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BUS_MATRIX_ARBIT3_APB16_4DMA_DMA1 17            /*  APB16 for dma priority for DMA1 */
#define BITP_BUS_MATRIX_ARBIT3_APB16_4DMA_CORE 16            /*  APB16 for dma priority for CORE */
#define BITP_BUS_MATRIX_ARBIT3_APB16_DMA1     1            /*  APB16 priority for DMA1 */
#define BITP_BUS_MATRIX_ARBIT3_APB16_CORE     0            /*  APB16 priority for CORE */
#define BITM_BUS_MATRIX_ARBIT3_APB16_4DMA_DMA1 0x00020000    /*  APB16 for dma priority for DMA1 */
#define BITM_BUS_MATRIX_ARBIT3_APB16_4DMA_CORE 0x00010000    /*  APB16 for dma priority for CORE */
#define BITM_BUS_MATRIX_ARBIT3_APB16_DMA1    0x00000002    /*  APB16 priority for DMA1 */
#define BITM_BUS_MATRIX_ARBIT3_APB16_CORE    0x00000001    /*  APB16 priority for CORE */


/* ============================================================================================================================
        General Purpose Timer
   ============================================================================================================================ */

/* ============================================================================================================================
        TMR0
   ============================================================================================================================ */
#define MOD_TMR0_BASE                        0x40000000            /*  General Purpose Timer  */
#define MOD_TMR0_MASK                        0x0000003F            /*  General Purpose Timer  */
#define REG_TMR0_LD_RESET                    0x00000000            /*      Reset Value for LD  */
#define REG_TMR0_LD                          0x40000000            /*  TMR0 16-bit load value */
#define REG_TMR0_VAL_RESET                   0x00000000            /*      Reset Value for VAL  */
#define REG_TMR0_VAL                         0x40000004            /*  TMR0 16-bit timer value */
#define REG_TMR0_CON_RESET                   0x0000000A            /*      Reset Value for CON  */
#define REG_TMR0_CON                         0x40000008            /*  TMR0 Control */
#define REG_TMR0_CLRI_RESET                  0x00000000            /*      Reset Value for CLRI  */
#define REG_TMR0_CLRI                        0x4000000C            /*  TMR0 Clear Interrupt */
#define REG_TMR0_CAP_RESET                   0x00000000            /*      Reset Value for CAP  */
#define REG_TMR0_CAP                         0x40000010            /*  TMR0 Capture */
#define REG_TMR0_ALD_RESET                   0x00000000            /*      Reset Value for ALD  */
#define REG_TMR0_ALD                         0x40000014            /*  TMR0 16-bit load value, asynchronous */
#define REG_TMR0_AVAL_RESET                  0x00000000            /*      Reset Value for AVAL  */
#define REG_TMR0_AVAL                        0x40000018            /*  TMR0 16-bit timer value, asynchronous */
#define REG_TMR0_STA_RESET                   0x00000000            /*      Reset Value for STA  */
#define REG_TMR0_STA                         0x4000001C            /*  TMR0 Status */
#define REG_TMR0_PCON_RESET                  0x00000000            /*      Reset Value for PCON  */
#define REG_TMR0_PCON                        0x40000020            /*  TMR0 PWM Control Register */
#define REG_TMR0_PMAT_RESET                  0x00000000            /*      Reset Value for PMAT  */
#define REG_TMR0_PMAT                        0x40000024            /*  TMR0 PWM Match Value */

/* ============================================================================================================================
        TMR1
   ============================================================================================================================ */
#define MOD_TMR1_BASE                        0x40000400            /*  General Purpose Timer  */
#define MOD_TMR1_MASK                        0x0000003F            /*  General Purpose Timer  */
#define REG_TMR1_LD_RESET                    0x00000000            /*      Reset Value for LD  */
#define REG_TMR1_LD                          0x40000400            /*  TMR1 16-bit load value */
#define REG_TMR1_VAL_RESET                   0x00000000            /*      Reset Value for VAL  */
#define REG_TMR1_VAL                         0x40000404            /*  TMR1 16-bit timer value */
#define REG_TMR1_CON_RESET                   0x0000000A            /*      Reset Value for CON  */
#define REG_TMR1_CON                         0x40000408            /*  TMR1 Control */
#define REG_TMR1_CLRI_RESET                  0x00000000            /*      Reset Value for CLRI  */
#define REG_TMR1_CLRI                        0x4000040C            /*  TMR1 Clear Interrupt */
#define REG_TMR1_CAP_RESET                   0x00000000            /*      Reset Value for CAP  */
#define REG_TMR1_CAP                         0x40000410            /*  TMR1 Capture */
#define REG_TMR1_ALD_RESET                   0x00000000            /*      Reset Value for ALD  */
#define REG_TMR1_ALD                         0x40000414            /*  TMR1 16-bit load value, asynchronous */
#define REG_TMR1_AVAL_RESET                  0x00000000            /*      Reset Value for AVAL  */
#define REG_TMR1_AVAL                        0x40000418            /*  TMR1 16-bit timer value, asynchronous */
#define REG_TMR1_STA_RESET                   0x00000000            /*      Reset Value for STA  */
#define REG_TMR1_STA                         0x4000041C            /*  TMR1 Status */
#define REG_TMR1_PCON_RESET                  0x00000000            /*      Reset Value for PCON  */
#define REG_TMR1_PCON                        0x40000420            /*  TMR1 PWM Control Register */
#define REG_TMR1_PMAT_RESET                  0x00000000            /*      Reset Value for PMAT  */
#define REG_TMR1_PMAT                        0x40000424            /*  TMR1 PWM Match Value */

/* ============================================================================================================================
        TMR2
   ============================================================================================================================ */
#define MOD_TMR2_BASE                        0x40000800            /*  General Purpose Timer  */
#define MOD_TMR2_MASK                        0x0000003F            /*  General Purpose Timer  */
#define REG_TMR2_LD_RESET                    0x00000000            /*      Reset Value for LD  */
#define REG_TMR2_LD                          0x40000800            /*  TMR2 16-bit load value */
#define REG_TMR2_VAL_RESET                   0x00000000            /*      Reset Value for VAL  */
#define REG_TMR2_VAL                         0x40000804            /*  TMR2 16-bit timer value */
#define REG_TMR2_CON_RESET                   0x0000000A            /*      Reset Value for CON  */
#define REG_TMR2_CON                         0x40000808            /*  TMR2 Control */
#define REG_TMR2_CLRI_RESET                  0x00000000            /*      Reset Value for CLRI  */
#define REG_TMR2_CLRI                        0x4000080C            /*  TMR2 Clear Interrupt */
#define REG_TMR2_CAP_RESET                   0x00000000            /*      Reset Value for CAP  */
#define REG_TMR2_CAP                         0x40000810            /*  TMR2 Capture */
#define REG_TMR2_ALD_RESET                   0x00000000            /*      Reset Value for ALD  */
#define REG_TMR2_ALD                         0x40000814            /*  TMR2 16-bit load value, asynchronous */
#define REG_TMR2_AVAL_RESET                  0x00000000            /*      Reset Value for AVAL  */
#define REG_TMR2_AVAL                        0x40000818            /*  TMR2 16-bit timer value, asynchronous */
#define REG_TMR2_STA_RESET                   0x00000000            /*      Reset Value for STA  */
#define REG_TMR2_STA                         0x4000081C            /*  TMR2 Status */
#define REG_TMR2_PCON_RESET                  0x00000000            /*      Reset Value for PCON  */
#define REG_TMR2_PCON                        0x40000820            /*  TMR2 PWM Control Register */
#define REG_TMR2_PMAT_RESET                  0x00000000            /*      Reset Value for PMAT  */
#define REG_TMR2_PMAT                        0x40000824            /*  TMR2 PWM Match Value */

/* ============================================================================================================================
        TMR Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          TMR_CON                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TMR_CON_SYNC_BYPASS             15            /*  Synchronization bypass */
#define BITP_TMR_CON_RESET_TIMER_EN          14            /*  Counter and prescale reset enable */
#define BITP_TMR_CON_EVENTEN                 13            /*  Event select */
#define BITP_TMR_CON_EVENT                    8            /*  Event select range */
#define BITP_TMR_CON_RLD                      7            /*  Reload control */
#define BITP_TMR_CON_CLK                      5            /*  Clock select */
#define BITP_TMR_CON_ENABLE                   4            /*  Timer enable */
#define BITP_TMR_CON_MOD                      3            /*  Timer mode */
#define BITP_TMR_CON_UP                       2            /*  Count up */
#define BITP_TMR_CON_PRE                      0            /*  Prescaler */
#define BITM_TMR_CON_SYNC_BYPASS             0x00008000    /*  Synchronization bypass */
#define BITM_TMR_CON_RESET_TIMER_EN          0x00004000    /*  Counter and prescale reset enable */

#define BITM_TMR_CON_EVENTEN                 0x00002000    /*  Event select */
#define BITM_TMR_CON_EVENT                   0x00001F00    /*  Event select range */

#define BITM_TMR_CON_RLD                     0x00000080    /*  Reload control */

#define BITM_TMR_CON_CLK                     0x00000060    /*  Clock select */

#define BITM_TMR_CON_ENABLE                  0x00000010    /*  Timer enable */

#define BITM_TMR_CON_MOD                     0x00000008    /*  Timer mode */

#define BITM_TMR_CON_UP                      0x00000004    /*  Count up */

#define BITM_TMR_CON_PRE                     0x00000003    /*  Prescaler */

/* -------------------------------------------------------------------------------------------------------------------------
          TMR_CLRI                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TMR_CLRI_CAP                     1            /*  Clear captured event interrupt */
#define BITP_TMR_CLRI_TMOUT                   0            /*  Clear timeout interrupt */

#define BITM_TMR_CLRI_CAP                    0x00000002    /*  Clear captured event interrupt */

#define BITM_TMR_CLRI_TMOUT                  0x00000001    /*  Clear timeout interrupt */

/* -------------------------------------------------------------------------------------------------------------------------
          TMR_STA                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TMR_STA_COUNT_RESET_REQ          8            /*  Counter reset occurring */
#define BITP_TMR_STA_PDOK                     7            /*  GPTCLRI synchronization */
#define BITP_TMR_STA_BUSY                     6            /*  Timer Busy */
#define BITP_TMR_STA_CAP                      1            /*  Capture event pending */
#define BITP_TMR_STA_TMOUT                    0            /*  Timeout event occurred */
#define BITM_TMR_STA_COUNT_RESET_REQ         0x00000100    /*  Counter reset occurring */

#define BITM_TMR_STA_PDOK                    0x00000080    /*  GPTCLRI synchronization */

#define BITM_TMR_STA_BUSY                    0x00000040    /*  Timer Busy */

#define BITM_TMR_STA_CAP                     0x00000002    /*  Capture event pending */

#define BITM_TMR_STA_TMOUT                   0x00000001    /*  Timeout event occurred */

/* -------------------------------------------------------------------------------------------------------------------------
          TMR_PCON                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TMR_PCON_IDLE_STATE              1            /*  PWM Idle State */
#define BITP_TMR_PCON_MATCH_EN                0            /*  PWM Match enabled */
#define BITM_TMR_PCON_IDLE_STATE             0x00000002    /*  PWM Idle State */
#define BITM_TMR_PCON_MATCH_EN               0x00000001    /*  PWM Match enabled */


/* ============================================================================================================================
        Real-Time Clock
   ============================================================================================================================ */

/* ============================================================================================================================
        rtc0
   ============================================================================================================================ */
#define MOD_RTC0_BASE                        0x40001000            /*  Real-Time Clock  */
#define MOD_RTC0_MASK                        0x0000007F            /*  Real-Time Clock  */
#define REG_RTC0_CR0_RESET                   0x000003C4            /*      Reset Value for CR0  */
#define REG_RTC0_CR0                         0x40001000            /*  rtc0 RTC Control 0 */
#define REG_RTC0_SR0_RESET                   0x00033F80            /*      Reset Value for SR0  */
#define REG_RTC0_SR0                         0x40001004            /*  rtc0 RTC Status 0 */
#define REG_RTC0_SR1_RESET                   0x00000078            /*      Reset Value for SR1  */
#define REG_RTC0_SR1                         0x40001008            /*  rtc0 RTC Status 1 */
#define REG_RTC0_CNT0_RESET                  0x00000000            /*      Reset Value for CNT0  */
#define REG_RTC0_CNT0                        0x4000100C            /*  rtc0 RTC Count 0 */
#define REG_RTC0_CNT1_RESET                  0x00000000            /*      Reset Value for CNT1  */
#define REG_RTC0_CNT1                        0x40001010            /*  rtc0 RTC Count 1 */
#define REG_RTC0_ALM0_RESET                  0x0000FFFF            /*      Reset Value for ALM0  */
#define REG_RTC0_ALM0                        0x40001014            /*  rtc0 RTC Alarm 0 */
#define REG_RTC0_ALM1_RESET                  0x0000FFFF            /*      Reset Value for ALM1  */
#define REG_RTC0_ALM1                        0x40001018            /*  rtc0 RTC Alarm 1 */
#define REG_RTC0_TRM_RESET                   0x00000398            /*      Reset Value for TRM  */
#define REG_RTC0_TRM                         0x4000101C            /*  rtc0 RTC Trim */
#define REG_RTC0_GWY_RESET                   0x00000000            /*      Reset Value for GWY  */
#define REG_RTC0_GWY                         0x40001020            /*  rtc0 RTC Gateway */
#define REG_RTC0_DBG_RESET                   0x00000000            /*      Reset Value for DBG  */
#define REG_RTC0_DBG                         0x40001024            /*  rtc0 RTC Debug Access : ADI Factory Use Only */
#define REG_RTC0_CR1_RESET                   0x000001E0            /*      Reset Value for CR1  */
#define REG_RTC0_CR1                         0x40001028            /*  rtc0 RTC Control 1 */
#define REG_RTC0_SR2_RESET                   0x0000C000            /*      Reset Value for SR2  */
#define REG_RTC0_SR2                         0x4000102C            /*  rtc0 RTC Status 2 */
#define REG_RTC0_SNAP0_RESET                 0x00000000            /*      Reset Value for SNAP0  */
#define REG_RTC0_SNAP0                       0x40001030            /*  rtc0 RTC Snapshot 0 */
#define REG_RTC0_SNAP1_RESET                 0x00000000            /*      Reset Value for SNAP1  */
#define REG_RTC0_SNAP1                       0x40001034            /*  rtc0 RTC Snapshot 1 */
#define REG_RTC0_SNAP2_RESET                 0x00000000            /*      Reset Value for SNAP2  */
#define REG_RTC0_SNAP2                       0x40001038            /*  rtc0 RTC Snapshot 2 */
#define REG_RTC0_MOD_RESET                   0x00000040            /*      Reset Value for MOD  */
#define REG_RTC0_MOD                         0x4000103C            /*  rtc0 RTC Modulo */
#define REG_RTC0_CNT2_RESET                  0x00000000            /*      Reset Value for CNT2  */
#define REG_RTC0_CNT2                        0x40001040            /*  rtc0 RTC Count 2 */
#define REG_RTC0_ALM2_RESET                  0xFFFF0000            /*      Reset Value for ALM2  */
#define REG_RTC0_ALM2                        0x40001044            /*  rtc0 RTC Alarm 2 */

/* ============================================================================================================================
        rtc1
   ============================================================================================================================ */
#define MOD_RTC1_BASE                        0x40001400            /*  Real-Time Clock  */
#define MOD_RTC1_MASK                        0x0000007F            /*  Real-Time Clock  */
#define REG_RTC1_CR0_RESET                   0x000003C4            /*      Reset Value for CR0  */
#define REG_RTC1_CR0                         0x40001400            /*  rtc1 RTC Control 0 */
#define REG_RTC1_SR0_RESET                   0x00033F80            /*      Reset Value for SR0  */
#define REG_RTC1_SR0                         0x40001404            /*  rtc1 RTC Status 0 */
#define REG_RTC1_SR1_RESET                   0x00000078            /*      Reset Value for SR1  */
#define REG_RTC1_SR1                         0x40001408            /*  rtc1 RTC Status 1 */
#define REG_RTC1_CNT0_RESET                  0x00000000            /*      Reset Value for CNT0  */
#define REG_RTC1_CNT0                        0x4000140C            /*  rtc1 RTC Count 0 */
#define REG_RTC1_CNT1_RESET                  0x00000000            /*      Reset Value for CNT1  */
#define REG_RTC1_CNT1                        0x40001410            /*  rtc1 RTC Count 1 */
#define REG_RTC1_ALM0_RESET                  0x0000FFFF            /*      Reset Value for ALM0  */
#define REG_RTC1_ALM0                        0x40001414            /*  rtc1 RTC Alarm 0 */
#define REG_RTC1_ALM1_RESET                  0x0000FFFF            /*      Reset Value for ALM1  */
#define REG_RTC1_ALM1                        0x40001418            /*  rtc1 RTC Alarm 1 */
#define REG_RTC1_TRM_RESET                   0x00000398            /*      Reset Value for TRM  */
#define REG_RTC1_TRM                         0x4000141C            /*  rtc1 RTC Trim */
#define REG_RTC1_GWY_RESET                   0x00000000            /*      Reset Value for GWY  */
#define REG_RTC1_GWY                         0x40001420            /*  rtc1 RTC Gateway */
#define REG_RTC1_DBG_RESET                   0x00000000            /*      Reset Value for DBG  */
#define REG_RTC1_DBG                         0x40001424            /*  rtc1 RTC Debug Access : ADI Factory Use Only */
#define REG_RTC1_CR1_RESET                   0x000001E0            /*      Reset Value for CR1  */
#define REG_RTC1_CR1                         0x40001428            /*  rtc1 RTC Control 1 */
#define REG_RTC1_SR2_RESET                   0x0000C000            /*      Reset Value for SR2  */
#define REG_RTC1_SR2                         0x4000142C            /*  rtc1 RTC Status 2 */
#define REG_RTC1_SNAP0_RESET                 0x00000000            /*      Reset Value for SNAP0  */
#define REG_RTC1_SNAP0                       0x40001430            /*  rtc1 RTC Snapshot 0 */
#define REG_RTC1_SNAP1_RESET                 0x00000000            /*      Reset Value for SNAP1  */
#define REG_RTC1_SNAP1                       0x40001434            /*  rtc1 RTC Snapshot 1 */
#define REG_RTC1_SNAP2_RESET                 0x00000000            /*      Reset Value for SNAP2  */
#define REG_RTC1_SNAP2                       0x40001438            /*  rtc1 RTC Snapshot 2 */
#define REG_RTC1_MOD_RESET                   0x00000040            /*      Reset Value for MOD  */
#define REG_RTC1_MOD                         0x4000143C            /*  rtc1 RTC Modulo */
#define REG_RTC1_CNT2_RESET                  0x00000000            /*      Reset Value for CNT2  */
#define REG_RTC1_CNT2                        0x40001440            /*  rtc1 RTC Count 2 */
#define REG_RTC1_ALM2_RESET                  0xFFFF0000            /*      Reset Value for ALM2  */
#define REG_RTC1_ALM2                        0x40001444            /*  rtc1 RTC Alarm 2 */

/* ============================================================================================================================
        rtc Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          rtc_CR0                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_CR0_DISPRESCALE             16            /*  Modify the prescaler in the RTC to prescale by 4. Used for ADI factory debug only */
#define BITP_RTC_CR0_WPENDINTEN              15            /*  Enable WPENDINT-sourced interrupts to the CPU */
#define BITP_RTC_CR0_WSYNCINTEN              14            /*  Enable WSYNCINT-sourced interrupts to the CPU */
#define BITP_RTC_CR0_WPENDERRINTEN           13            /*  Enable WPENDERRINT-sourced interrupts to the CPU when an RTC register-write pending error occurs */
#define BITP_RTC_CR0_ISOINTEN                12            /*  Enable ISOINT-sourced interrupts to the CPU when isolation of the RTC power domain is activated and subsequently de-activated */
#define BITP_RTC_CR0_MOD60ALMINTEN           11            /*  Enable periodic MOD60ALMINT-sourced interrupts to the CPU */
#define BITP_RTC_CR0_MOD60ALM                 5            /*  Periodic, modulo-60 alarm time in prescaled RTC time units beyond a modulo-60 boundary */
#define BITP_RTC_CR0_MOD60ALMEN               4            /*  Enable RTC modulo-60 counting of time past a modulo-60 boundary */
#define BITP_RTC_CR0_TRMEN                    3            /*  Enable RTC digital trimming */
#define BITP_RTC_CR0_ALMINTEN                 2            /*  Enable ALMINT-sourced alarm interrupts to the CPU */
#define BITP_RTC_CR0_ALMEN                    1            /*  Enable the RTC alarm (absolute) operation */
#define BITP_RTC_CR0_CNTEN                    0            /*  Global enable for the RTC */

#define BITM_RTC_CR0_DISPRESCALE             0x00010000    /*  Modify the prescaler in the RTC to prescale by 4. Used for ADI factory debug only */

#define BITM_RTC_CR0_WPENDINTEN              0x00008000    /*  Enable WPENDINT-sourced interrupts to the CPU */

#define BITM_RTC_CR0_WSYNCINTEN              0x00004000    /*  Enable WSYNCINT-sourced interrupts to the CPU */

#define BITM_RTC_CR0_WPENDERRINTEN           0x00002000    /*  Enable WPENDERRINT-sourced interrupts to the CPU when an RTC register-write pending error occurs */

#define BITM_RTC_CR0_ISOINTEN                0x00001000    /*  Enable ISOINT-sourced interrupts to the CPU when isolation of the RTC power domain is activated and subsequently de-activated */

#define BITM_RTC_CR0_MOD60ALMINTEN           0x00000800    /*  Enable periodic MOD60ALMINT-sourced interrupts to the CPU */

#define BITM_RTC_CR0_MOD60ALM                0x000007E0    /*  Periodic, modulo-60 alarm time in prescaled RTC time units beyond a modulo-60 boundary */

#define BITM_RTC_CR0_MOD60ALMEN              0x00000010    /*  Enable RTC modulo-60 counting of time past a modulo-60 boundary */

#define BITM_RTC_CR0_TRMEN                   0x00000008    /*  Enable RTC digital trimming */

#define BITM_RTC_CR0_ALMINTEN                0x00000004    /*  Enable ALMINT-sourced alarm interrupts to the CPU */

#define BITM_RTC_CR0_ALMEN                   0x00000002    /*  Enable the RTC alarm (absolute) operation */

#define BITM_RTC_CR0_CNTEN                   0x00000001    /*  Global enable for the RTC */
#define ENUM_RTC_CR0_OPERATIONAL_SETTING     0x00000000            /*  DISPRESCALE: Prescale the 32kHz RTC clock according to the PRESCALE2EXP field of RTCCR1. */
#define ENUM_RTC_CR0_DEBUG_SETTING           0x00010000            /*  DISPRESCALE: Prescale the 32kHz RTC clock by 4, thereby overriding the PRESCALE2EXP field setting of the RTCCR1 MMR. */
#define ENUM_RTC_CR0_EXAMPLE_1_THIRTY_TIME_UNITS_DECIMAL 0x000003C0            /*  MOD60ALM: Example of setting a modulo-60 periodic interrupt from the RTC to be issued to the CPU at 30 time units past a modulo-60 boundary. */
#define ENUM_RTC_CR0_EXAMPLE_2_FIFTYFIVE_TIME_UNITS_DECIMAL 0x000006E0            /*  MOD60ALM: Example of setting a modulo-60 periodic interrupt from the RTC to be issued to the CPU at 55 time units past a modulo-60 boundary. */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_SR0                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_SR0_WSYNCALM2               17            /*  Synchronisation status of posted writes to RTCALM2 */
#define BITP_RTC_SR0_WSYNCCR1                16            /*  Synchronisation status of posted writes to RTCCR1 */
#define BITP_RTC_SR0_LOCK32KHZ               15            /*  Lock status of the 32kHz crystal oscillator output clock */
#define BITP_RTC_SR0_ISOENB                  14            /*  Master enable for isolation of the always-on RTC power domain */
#define BITP_RTC_SR0_WSYNCTRM                13            /*  Synchronisation status of posted writes to RTCTRM */
#define BITP_RTC_SR0_WSYNCALM1               12            /*  Synchronisation status of posted writes to RTCALM1 */
#define BITP_RTC_SR0_WSYNCALM0               11            /*  Synchronisation status of posted writes to RTCALM0 */
#define BITP_RTC_SR0_WSYNCCNT1               10            /*  Synchronisation status of posted writes to RTCCNT1 */
#define BITP_RTC_SR0_WSYNCCNT0                9            /*  Synchronisation status of posted writes to RTCCNT0 */
#define BITP_RTC_SR0_WSYNCSR0                 8            /*  Synchronisation status of posted clearances to interrupt sources in RTCSR0 */
#define BITP_RTC_SR0_WSYNCCR0                 7            /*  Synchronisation status of posted writes to RTCCR0 */
#define BITP_RTC_SR0_WPENDINT                 6            /*  Write pending interrupt */
#define BITP_RTC_SR0_WSYNCINT                 5            /*  Write synchronisation interrupt */
#define BITP_RTC_SR0_WPENDERRINT              4            /*  Write pending error interrupt source */
#define BITP_RTC_SR0_ISOINT                   3            /*  RTC power-domain isolation interrupt source */
#define BITP_RTC_SR0_MOD60ALMINT              2            /*  Modulo-60 RTC alarm interrupt source */
#define BITP_RTC_SR0_ALMINT                   1            /*  Alarm interrupt source */
#define BITP_RTC_SR0_RTCFAIL                  0            /*  RTC failure interrupt source */

#define BITM_RTC_SR0_WSYNCALM2               0x00020000    /*  Synchronisation status of posted writes to RTCALM2 */

#define BITM_RTC_SR0_WSYNCCR1                0x00010000    /*  Synchronisation status of posted writes to RTCCR1 */

#define BITM_RTC_SR0_LOCK32KHZ               0x00008000    /*  Lock status of the 32kHz crystal oscillator output clock */

#define BITM_RTC_SR0_ISOENB                  0x00004000    /*  Master enable for isolation of the always-on RTC power domain */

#define BITM_RTC_SR0_WSYNCTRM                0x00002000    /*  Synchronisation status of posted writes to RTCTRM */

#define BITM_RTC_SR0_WSYNCALM1               0x00001000    /*  Synchronisation status of posted writes to RTCALM1 */

#define BITM_RTC_SR0_WSYNCALM0               0x00000800    /*  Synchronisation status of posted writes to RTCALM0 */

#define BITM_RTC_SR0_WSYNCCNT1               0x00000400    /*  Synchronisation status of posted writes to RTCCNT1 */

#define BITM_RTC_SR0_WSYNCCNT0               0x00000200    /*  Synchronisation status of posted writes to RTCCNT0 */

#define BITM_RTC_SR0_WSYNCSR0                0x00000100    /*  Synchronisation status of posted clearances to interrupt sources in RTCSR0 */

#define BITM_RTC_SR0_WSYNCCR0                0x00000080    /*  Synchronisation status of posted writes to RTCCR0 */

#define BITM_RTC_SR0_WPENDINT                0x00000040    /*  Write pending interrupt */

#define BITM_RTC_SR0_WSYNCINT                0x00000020    /*  Write synchronisation interrupt */

#define BITM_RTC_SR0_WPENDERRINT             0x00000010    /*  Write pending error interrupt source */

#define BITM_RTC_SR0_ISOINT                  0x00000008    /*  RTC power-domain isolation interrupt source */

#define BITM_RTC_SR0_MOD60ALMINT             0x00000004    /*  Modulo-60 RTC alarm interrupt source */

#define BITM_RTC_SR0_ALMINT                  0x00000002    /*  Alarm interrupt source */

#define BITM_RTC_SR0_RTCFAIL                 0x00000001    /*  RTC failure interrupt source */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_SR1                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_SR1_WPENDALM2               17            /*  Pending status of posted writes to RTCALM2 */
#define BITP_RTC_SR1_WPENDCR1                16            /*  Pending status of posted writes to RTCCR1 */
#define BITP_RTC_SR1_DBGWDOG                 15            /*  Indicator that the transaction lock watchdog is currently active */
#define BITP_RTC_SR1_DISPRESCSRALE_MIRROR    14            /*  Mirror of the DISPRESCALE field of RTCCR0 */
#define BITP_RTC_SR1_WPENDTRM                13            /*  Pending status of posted writes to RTCTRM */
#define BITP_RTC_SR1_WPENDALM1               12            /*  Pending status of posted writes to RTCALM1 */
#define BITP_RTC_SR1_WPENDALM0               11            /*  Pending status of posted writes to RTCALM0 */
#define BITP_RTC_SR1_WPENDCNT1               10            /*  Pending status of posted writes to RTCCNT1 */
#define BITP_RTC_SR1_WPENDCNT0                9            /*  Pending status of posted writes to RTCCNT0 */
#define BITP_RTC_SR1_WPENDSR0                 8            /*  Pending status of posted clearances of interrupt sources in RTCSR0 */
#define BITP_RTC_SR1_WPENDCR0                 7            /*  Pending status of posted writes to RTCCR0 */
#define BITP_RTC_SR1_WERRCODE                 3            /*  Identifier for the source of a write synchronisation error */
#define BITP_RTC_SR1_DBGPTR                   0            /*  Debug address pointer */

#define BITM_RTC_SR1_WPENDALM2               0x00020000    /*  Pending status of posted writes to RTCALM2 */

#define BITM_RTC_SR1_WPENDCR1                0x00010000    /*  Pending status of posted writes to RTCCR1 */

#define BITM_RTC_SR1_DBGWDOG                 0x00008000    /*  Indicator that the transaction lock watchdog is currently active */
#define BITM_RTC_SR1_DISPRESCSRALE_MIRROR    0x00004000    /*  Mirror of the DISPRESCALE field of RTCCR0 */

#define BITM_RTC_SR1_WPENDTRM                0x00002000    /*  Pending status of posted writes to RTCTRM */

#define BITM_RTC_SR1_WPENDALM1               0x00001000    /*  Pending status of posted writes to RTCALM1 */

#define BITM_RTC_SR1_WPENDALM0               0x00000800    /*  Pending status of posted writes to RTCALM0 */

#define BITM_RTC_SR1_WPENDCNT1               0x00000400    /*  Pending status of posted writes to RTCCNT1 */

#define BITM_RTC_SR1_WPENDCNT0               0x00000200    /*  Pending status of posted writes to RTCCNT0 */

#define BITM_RTC_SR1_WPENDSR0                0x00000100    /*  Pending status of posted clearances of interrupt sources in RTCSR0 */

#define BITM_RTC_SR1_WPENDCR0                0x00000080    /*  Pending status of posted writes to RTCCR0 */

#define BITM_RTC_SR1_WERRCODE                0x00000078    /*  Identifier for the source of a write synchronisation error */
#define BITM_RTC_SR1_DBGPTR                  0x00000007    /*  Debug address pointer */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_CNT0                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_CNT0_RTCCNT1_MIRROR         16            /*  Mirror of RTCCNT1. */
#define BITP_RTC_CNT0_RTCCNT0                 0            /*  Lower 16 prescaled (non-fractional) bits of the RTC real-time count. */
#define BITM_RTC_CNT0_RTCCNT1_MIRROR         0xFFFF0000    /*  Mirror of RTCCNT1. */
#define BITM_RTC_CNT0_RTCCNT0                0x0000FFFF    /*  Lower 16 prescaled (non-fractional) bits of the RTC real-time count. */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_ALM0                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_ALM0_RTCALM1_MIRROR         16            /*  Mirror of RTCALM1. */
#define BITP_RTC_ALM0_RTCALM0                 0            /*  Lower 16 prescaled (i.e. non-fractional) bits of the RTC alarm target time. */
#define BITM_RTC_ALM0_RTCALM1_MIRROR         0xFFFF0000    /*  Mirror of RTCALM1. */
#define BITM_RTC_ALM0_RTCALM0                0x0000FFFF    /*  Lower 16 prescaled (i.e. non-fractional) bits of the RTC alarm target time. */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_TRM                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_TRM_TRMIVL2EXPMIN            6            /*  Minimum power-of-two interval of prescaled RTC time units which TRMIVL can select */
#define BITP_RTC_TRM_TRMIVL                   4            /*  Trim interval in prescaled RTC time units */
#define BITP_RTC_TRM_TRMADD                   3            /*  Trim polarity */
#define BITP_RTC_TRM_TRMVAL                   0            /*  Trim value in prescaled RTC time units to be added or subtracted from the RTC count at the end of a periodic interval selected by TRMIVL */
#define BITM_RTC_TRM_TRMIVL2EXPMIN           0x000003C0    /*  Minimum power-of-two interval of prescaled RTC time units which TRMIVL can select */

#define BITM_RTC_TRM_TRMIVL                  0x00000030    /*  Trim interval in prescaled RTC time units */

#define BITM_RTC_TRM_TRMADD                  0x00000008    /*  Trim polarity */

#define BITM_RTC_TRM_TRMVAL                  0x00000007    /*  Trim value in prescaled RTC time units to be added or subtracted from the RTC count at the end of a periodic interval selected by TRMIVL */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_CR1                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_CR1_APB3PSLVERREN           10            /*  Enable AMBA 3 APB PSLVERR bus error signaling in the RTC. */
#define BITP_RTC_CR1_APB32BITREADEN           9            /*  Enable 32-bit APB read data for RTCCNT0, RTCALM0, RTCSNAP0, RTCMOD, RTCCR0 MMRs. */
#define BITP_RTC_CR1_PRESCALE2EXP             5            /*  Prescale power of 2 division factor for the RTC base clock */
#define BITP_RTC_CR1_RTCCNTMOD60ROLLINTEN     4            /*  Enable for the RTC modulo-60 count roll-over interrupt source, RTCMOD60ROLLINT in RTCSR2 */
#define BITP_RTC_CR1_RTCCNTROLLINTEN          3            /*  Enable for the RTC count roll-over interrupt source, RTCCNTROLLINT in RTCSR2 */
#define BITP_RTC_CR1_RTCTRMINTEN              2            /*  Enable for the RTC trim interrupt source, RTCTRMINT in RTCSR2 */
#define BITP_RTC_CR1_RTCPSINTEN               1            /*  Enable for the prescaled, modulo-1 interrupt source, RTCPSINT in RTCSR2 */
#define BITP_RTC_CR1_RTCCNTINTEN              0            /*  Enable for the RTC count interrupt source, RTCCNTINT in RTCSR2 */

#define BITM_RTC_CR1_APB3PSLVERREN           0x00000400    /*  Enable AMBA 3 APB PSLVERR bus error signaling in the RTC. */

#define BITM_RTC_CR1_APB32BITREADEN          0x00000200    /*  Enable 32-bit APB read data for RTCCNT0, RTCALM0, RTCSNAP0, RTCMOD, RTCCR0 MMRs. */

#define BITM_RTC_CR1_PRESCALE2EXP            0x000001E0    /*  Prescale power of 2 division factor for the RTC base clock */

#define BITM_RTC_CR1_RTCCNTMOD60ROLLINTEN    0x00000010    /*  Enable for the RTC modulo-60 count roll-over interrupt source, RTCMOD60ROLLINT in RTCSR2 */

#define BITM_RTC_CR1_RTCCNTROLLINTEN         0x00000008    /*  Enable for the RTC count roll-over interrupt source, RTCCNTROLLINT in RTCSR2 */

#define BITM_RTC_CR1_RTCTRMINTEN             0x00000004    /*  Enable for the RTC trim interrupt source, RTCTRMINT in RTCSR2 */

#define BITM_RTC_CR1_RTCPSINTEN              0x00000002    /*  Enable for the prescaled, modulo-1 interrupt source, RTCPSINT in RTCSR2 */

#define BITM_RTC_CR1_RTCCNTINTEN             0x00000001    /*  Enable for the RTC count interrupt source, RTCCNTINT in RTCSR2 */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_SR2                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_SR2_WSYNCALM2_MIRROR        15            /*  Mirror of the WSYNCALM2 field of RTCSR0 */
#define BITP_RTC_SR2_WSYNCCR1_MIRROR         14            /*  Mirror of the WSYNCCR1 field of RTCSR0 */
#define BITP_RTC_SR2_WPENDALM2_MIRROR        13            /*  Mirror of the WPENDALM2 field of RTCSR1 */
#define BITP_RTC_SR2_WPENDCR1_MIRROR         12            /*  Mirror of the WPENDCR1 field of RTCSR1 */
#define BITP_RTC_SR2_RTCTRMBDY_MIRROR         7            /*  Mirror of the RTCTRMBDY field of RTCMOD */
#define BITP_RTC_SR2_RTCCNTMOD60ROLL          6            /*  RTC count modulo-60 roll-over */
#define BITP_RTC_SR2_RTCCNTROLL               5            /*  RTC count roll-over */
#define BITP_RTC_SR2_RTCCNTMOD60ROLLINT       4            /*  RTC modulo-60 count roll-over interrupt source */
#define BITP_RTC_SR2_RTCCNTROLLINT            3            /*  RTC count roll-over interrupt source */
#define BITP_RTC_SR2_RTCTRMINT                2            /*  RTC trim interrupt source */
#define BITP_RTC_SR2_RTCPSINT                 1            /*  RTC prescaled, modulo-1 boundary interrupt source */
#define BITP_RTC_SR2_RTCCNTINT                0            /*  RTC count interrupt source */

#define BITM_RTC_SR2_WSYNCALM2_MIRROR        0x00008000    /*  Mirror of the WSYNCALM2 field of RTCSR0 */

#define BITM_RTC_SR2_WSYNCCR1_MIRROR         0x00004000    /*  Mirror of the WSYNCCR1 field of RTCSR0 */

#define BITM_RTC_SR2_WPENDALM2_MIRROR        0x00002000    /*  Mirror of the WPENDALM2 field of RTCSR1 */

#define BITM_RTC_SR2_WPENDCR1_MIRROR         0x00001000    /*  Mirror of the WPENDCR1 field of RTCSR1 */
#define BITM_RTC_SR2_RTCTRMBDY_MIRROR        0x00000080    /*  Mirror of the RTCTRMBDY field of RTCMOD */

#define BITM_RTC_SR2_RTCCNTMOD60ROLL         0x00000040    /*  RTC count modulo-60 roll-over */

#define BITM_RTC_SR2_RTCCNTROLL              0x00000020    /*  RTC count roll-over */

#define BITM_RTC_SR2_RTCCNTMOD60ROLLINT      0x00000010    /*  RTC modulo-60 count roll-over interrupt source */

#define BITM_RTC_SR2_RTCCNTROLLINT           0x00000008    /*  RTC count roll-over interrupt source */

#define BITM_RTC_SR2_RTCTRMINT               0x00000004    /*  RTC trim interrupt source */

#define BITM_RTC_SR2_RTCPSINT                0x00000002    /*  RTC prescaled, modulo-1 boundary interrupt source */

#define BITM_RTC_SR2_RTCCNTINT               0x00000001    /*  RTC count interrupt source */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_SNAP0                            Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_SNAP0_RTCSNAP1_MIRROR       16            /*  Mirror of RTCSNAP1 */
#define BITP_RTC_SNAP0_RTCSNAP0               0            /*  Sticky snapshot of RTCCNT0 */
#define BITM_RTC_SNAP0_RTCSNAP1_MIRROR       0xFFFF0000    /*  Mirror of RTCSNAP1 */
#define BITM_RTC_SNAP0_RTCSNAP0              0x0000FFFF    /*  Sticky snapshot of RTCCNT0 */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_SNAP2                            Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_SNAP2_RTCSNAP0_MIRROR       16            /*  Mirror of RTCSNAP0 */
#define BITP_RTC_SNAP2_RTCSNAP2               0            /*  Sticky snapshot of RTCCNT2 */
#define BITM_RTC_SNAP2_RTCSNAP0_MIRROR       0xFFFF0000    /*  Mirror of RTCSNAP0 */
#define BITM_RTC_SNAP2_RTCSNAP2              0x00007FFF    /*  Sticky snapshot of RTCCNT2 */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_MOD                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_MOD_RTCCNT1_4TOZERO         27            /*  Mirror of RTCCNT1[5:0]. */
#define BITP_RTC_MOD_RTCCNT0_15TO5           16            /*  Mirror of RTCCNT0[15:6]. */
#define BITP_RTC_MOD_RTCCNT0_4TOZERO         11            /*  Mirror of RTCCNT0[5:0]. */
#define BITP_RTC_MOD_RTCTRMBDY               10            /*  Trim boundary indicator that the most recent RTC count increment has coincided with trimming of the count value */
#define BITP_RTC_MOD_RTCINCR                  6            /*  Most recent increment value which has been added to the RTC count in {RTCCNT1, RTCCNT0} */
#define BITP_RTC_MOD_RTCCNTMOD60              0            /*  Modulo-60 value of the RTC count, {RTCCNT1, RTCCNT0} */
#define BITM_RTC_MOD_RTCCNT1_4TOZERO         0xF8000000    /*  Mirror of RTCCNT1[5:0]. */
#define BITM_RTC_MOD_RTCCNT0_15TO5           0x07FF0000    /*  Mirror of RTCCNT0[15:6]. */
#define BITM_RTC_MOD_RTCCNT0_4TOZERO         0x0000F800    /*  Mirror of RTCCNT0[5:0]. */

#define BITM_RTC_MOD_RTCTRMBDY               0x00000400    /*  Trim boundary indicator that the most recent RTC count increment has coincided with trimming of the count value */
#define BITM_RTC_MOD_RTCINCR                 0x000003C0    /*  Most recent increment value which has been added to the RTC count in {RTCCNT1, RTCCNT0} */
#define BITM_RTC_MOD_RTCCNTMOD60             0x0000003F    /*  Modulo-60 value of the RTC count, {RTCCNT1, RTCCNT0} */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_CNT2                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_CNT2_RTCCNT0_MIRROR         16            /*  Mirror of RTCCNT0 */
#define BITP_RTC_CNT2_RTCCNT2                 0            /*  Fractional bits of the RTC real-time count */
#define BITM_RTC_CNT2_RTCCNT0_MIRROR         0xFFFF0000    /*  Mirror of RTCCNT0 */
#define BITM_RTC_CNT2_RTCCNT2                0x00007FFF    /*  Fractional bits of the RTC real-time count */

/* -------------------------------------------------------------------------------------------------------------------------
          rtc_ALM2                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RTC_ALM2_RTCALM0_MIRROR         16            /*  Mirror of RTCALM0 */
#define BITP_RTC_ALM2_RTCALM2                 0            /*  Fractional (non-prescaled) bits of the RTC alarm target time */
#define BITM_RTC_ALM2_RTCALM0_MIRROR         0xFFFF0000    /*  Mirror of RTCALM0 */
#define BITM_RTC_ALM2_RTCALM2                0x00007FFF    /*  Fractional (non-prescaled) bits of the RTC alarm target time */


/* ============================================================================================================================
        System Identification and Debug Enable
   ============================================================================================================================ */

/* ============================================================================================================================
        sys
   ============================================================================================================================ */
#define MOD_SYS_BASE                         0x40002000            /*  System Identification and Debug Enable  */
#define MOD_SYS_MASK                         0xFFFFFFFF            /*  System Identification and Debug Enable  */
#define REG_SYS_ADIID_RESET                  0x00004144            /*      Reset Value for ADIID  */
#define REG_SYS_ADIID                        0x40002020            /*  sys ADI Identification */
#define REG_SYS_CHIPID_RESET                 0x00000280            /*      Reset Value for CHIPID  */
#define REG_SYS_CHIPID                       0x40002024            /*  sys Chip Identifier */
#define REG_SYS_SWDEN_RESET                  0x00007072            /*      Reset Value for SWDEN  */
#define REG_SYS_SWDEN                        0x40002040            /*  sys Serial Wire Debug Enable */

/* ============================================================================================================================
        sys Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          sys_CHIPID                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SYS_CHIPID_PARTID                4
#define BITP_SYS_CHIPID_REV                   0
#define BITM_SYS_CHIPID_PARTID               0x0000FFF0
#define BITM_SYS_CHIPID_REV                  0x0000000F


/* ============================================================================================================================
        Watchdog Timer
   ============================================================================================================================ */

/* ============================================================================================================================
        wdt
   ============================================================================================================================ */
#define MOD_WDT_BASE                         0x40002C00            /*  Watchdog Timer  */
#define MOD_WDT_MASK                         0x0000001F            /*  Watchdog Timer  */
#define REG_WDT_LOAD_RESET                   0x00001000            /*      Reset Value for LOAD  */
#define REG_WDT_LOAD                         0x40002C00            /*  wdt Load value */
#define REG_WDT_CCOUNT_RESET                 0x00001000            /*      Reset Value for CCOUNT  */
#define REG_WDT_CCOUNT                       0x40002C04            /*  wdt Current count value */
#define REG_WDT_CTRL_RESET                   0x000000E9            /*      Reset Value for CTRL  */
#define REG_WDT_CTRL                         0x40002C08            /*  wdt Control */
#define REG_WDT_RESTART_RESET                0x00000000            /*      Reset Value for RESTART  */
#define REG_WDT_RESTART                      0x40002C0C            /*  wdt Clear interrupt */
#define REG_WDT_RESETCTRL_RESET              0x00000000            /*      Reset Value for RESETCTRL  */
#define REG_WDT_RESETCTRL                    0x40002C10            /*  wdt Reset Control Register */
#define REG_WDT_ACOUNT_RESET                 0x00001000            /*      Reset Value for ACOUNT  */
#define REG_WDT_ACOUNT                       0x40002C14            /*  wdt Value Register Async */
#define REG_WDT_STATUS_RESET                 0x00000000            /*      Reset Value for STATUS  */
#define REG_WDT_STATUS                       0x40002C18            /*  wdt Status */

/* ============================================================================================================================
        wdt Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          wdt_CTRL                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_WDT_CTRL_SPARE                   7            /*  Unused spare bit */
#define BITP_WDT_CTRL_MODE                    6            /*  Timer mode */
#define BITP_WDT_CTRL_ENABLE                  5            /*  Timer enable */
#define BITP_WDT_CTRL_PRE                     2            /*  Prescaler */
#define BITP_WDT_CTRL_IRQ                     1            /*  Timer interrupt */
#define BITP_WDT_CTRL_PMD                     0            /*  Power Mode Disable */
#define BITM_WDT_CTRL_SPARE                  0x00000080    /*  Unused spare bit */
#define BITM_WDT_CTRL_MODE                   0x00000040    /*  Timer mode */
#define BITM_WDT_CTRL_ENABLE                 0x00000020    /*  Timer enable */

#define BITM_WDT_CTRL_PRE                    0x0000000C    /*  Prescaler */
#define BITM_WDT_CTRL_IRQ                    0x00000002    /*  Timer interrupt */

#define BITM_WDT_CTRL_PMD                    0x00000001    /*  Power Mode Disable */
#define ENUM_WDT_CTRL_DIV1                   0x00000000            /*  pre: source clock/1. */
#define ENUM_WDT_CTRL_DIV16                  0x00000004            /*  pre: source clock/16. */
#define ENUM_WDT_CTRL_DIV256                 0x00000008            /*  pre: source clock/256 (default). */
#define ENUM_WDT_CTRL_RESERVED               0x0000000C            /*  pre: Reserved */
#define ENUM_WDT_CTRL_RUN                    0x00000000            /*  pmd: The watchdog timer will continue its count down while in hibernate or halted mode. */
#define ENUM_WDT_CTRL_SUSPEND                0x00000001            /*  pmd: When hibernate or halted mode is entered, the watchdog counter will suspend its count down. As hibernate mode is exited, the count down will resume from its current count value (the count will not be reset). */

/* -------------------------------------------------------------------------------------------------------------------------
          wdt_RESETCTRL                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_WDT_RESETCTRL_MODE               0            /*  WDT reset configuration bit */

#define BITM_WDT_RESETCTRL_MODE              0x00000001    /*  WDT reset configuration bit */
#define ENUM_WDT_RESETCTRL_POR_AND_RESET     0x00000000            /*  mode: POR or System Reset resets WDT */
#define ENUM_WDT_RESETCTRL_POR_ONLY          0x00000001            /*  mode: Only POR resets WDT */

/* -------------------------------------------------------------------------------------------------------------------------
          wdt_STATUS                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_WDT_STATUS_RESETCTRL             5            /*  ResetCtrl written and locked */
#define BITP_WDT_STATUS_LOCKED                4            /*  Lock status bit */
#define BITP_WDT_STATUS_COUNTING              3            /*  CTRL write sync in progress */
#define BITP_WDT_STATUS_LOADING               2            /*  LOAD write sync in progress */
#define BITP_WDT_STATUS_CLR_IRQ               1            /*  RESTART(clri) write sync in progress */
#define BITP_WDT_STATUS_IRQ                   0            /*  WDT Interrupt */

#define BITM_WDT_STATUS_RESETCTRL            0x00000020    /*  ResetCtrl written and locked */

#define BITM_WDT_STATUS_LOCKED               0x00000010    /*  Lock status bit */

#define BITM_WDT_STATUS_COUNTING             0x00000008    /*  CTRL write sync in progress */

#define BITM_WDT_STATUS_LOADING              0x00000004    /*  LOAD write sync in progress */

#define BITM_WDT_STATUS_CLR_IRQ              0x00000002    /*  RESTART(clri) write sync in progress */

#define BITM_WDT_STATUS_IRQ                  0x00000001    /*  WDT Interrupt */


/* ============================================================================================================================
        I2C Master/Slave
   ============================================================================================================================ */

/* ============================================================================================================================
        i2cf
   ============================================================================================================================ */
#define MOD_I2CF_BASE                        0x40003000            /*  I2C Master/Slave  */
#define MOD_I2CF_MASK                        0x0000007F            /*  I2C Master/Slave  */
#define REG_I2CF_I2CFMCON_RESET              0x00000000            /*      Reset Value for I2CFMCON  */
#define REG_I2CF_I2CFMCON                    0x40003000            /*  i2cf Master control */
#define REG_I2CF_I2CFMSTA_RESET              0x00006000            /*      Reset Value for I2CFMSTA  */
#define REG_I2CF_I2CFMSTA                    0x40003004            /*  i2cf Master status */
#define REG_I2CF_I2CFMRX_RESET               0x00000000            /*      Reset Value for I2CFMRX  */
#define REG_I2CF_I2CFMRX                     0x40003008            /*  i2cf Master receive data */
#define REG_I2CF_I2CFMTX_RESET               0x00000000            /*      Reset Value for I2CFMTX  */
#define REG_I2CF_I2CFMTX                     0x4000300C            /*  i2cf Master transmit data */
#define REG_I2CF_I2CFMRXCNT_RESET            0x00000000            /*      Reset Value for I2CFMRXCNT  */
#define REG_I2CF_I2CFMRXCNT                  0x40003010            /*  i2cf Master receive data count */
#define REG_I2CF_I2CFMCRXCNT_RESET           0x00000000            /*      Reset Value for I2CFMCRXCNT  */
#define REG_I2CF_I2CFMCRXCNT                 0x40003014            /*  i2cf Master current receive data count */
#define REG_I2CF_I2CFADR1_RESET              0x00000000            /*      Reset Value for I2CFADR1  */
#define REG_I2CF_I2CFADR1                    0x40003018            /*  i2cf 1st master address byte */
#define REG_I2CF_I2CFADR2_RESET              0x00000000            /*      Reset Value for I2CFADR2  */
#define REG_I2CF_I2CFADR2                    0x4000301C            /*  i2cf 2nd master address byte */
#define REG_I2CF_I2CFBYT_RESET               0x00000000            /*      Reset Value for I2CFBYT  */
#define REG_I2CF_I2CFBYT                     0x40003020            /*  i2cf Start byte */
#define REG_I2CF_I2CFDIV_RESET               0x00001F1F            /*      Reset Value for I2CFDIV  */
#define REG_I2CF_I2CFDIV                     0x40003024            /*  i2cf Serial clock period divisor */
#define REG_I2CF_I2CFSCON_RESET              0x00000000            /*      Reset Value for I2CFSCON  */
#define REG_I2CF_I2CFSCON                    0x40003028            /*  i2cf Slave control */
#define REG_I2CF_I2CFSSTA_RESET              0x00000001            /*      Reset Value for I2CFSSTA  */
#define REG_I2CF_I2CFSSTA                    0x4000302C            /*  i2cf Slave I2C Status/Error/IRQ */
#define REG_I2CF_I2CFSRX_RESET               0x00000000            /*      Reset Value for I2CFSRX  */
#define REG_I2CF_I2CFSRX                     0x40003030            /*  i2cf Slave receive */
#define REG_I2CF_I2CFSTX_RESET               0x00000000            /*      Reset Value for I2CFSTX  */
#define REG_I2CF_I2CFSTX                     0x40003034            /*  i2cf Slave transmit */
#define REG_I2CF_I2CFALT_RESET               0x00000000            /*      Reset Value for I2CFALT  */
#define REG_I2CF_I2CFALT                     0x40003038            /*  i2cf Hardware general call ID */
#define REG_I2CF_I2CFID0_RESET               0x00000000            /*      Reset Value for I2CFID0  */
#define REG_I2CF_I2CFID0                     0x4000303C            /*  i2cf 1st slave address device ID */
#define REG_I2CF_I2CFID1_RESET               0x00000000            /*      Reset Value for I2CFID1  */
#define REG_I2CF_I2CFID1                     0x40003040            /*  i2cf 2nd slave address device ID */
#define REG_I2CF_I2CFID2_RESET               0x00000000            /*      Reset Value for I2CFID2  */
#define REG_I2CF_I2CFID2                     0x40003044            /*  i2cf 3rd slave address device ID */
#define REG_I2CF_I2CFID3_RESET               0x00000000            /*      Reset Value for I2CFID3  */
#define REG_I2CF_I2CFID3                     0x40003048            /*  i2cf 4th slave address device ID */
#define REG_I2CF_I2CFSTA_RESET               0x00000000            /*      Reset Value for I2CFSTA  */
#define REG_I2CF_I2CFSTA                     0x4000304C            /*  i2cf Master and slave FIFO status */
#define REG_I2CF_I2CFSHCON_RESET             0x00000000            /*      Reset Value for I2CFSHCON  */
#define REG_I2CF_I2CFSHCON                   0x40003050            /*  i2cf Shared control */
#define REG_I2CF_I2CFTCTL_RESET              0x00000005            /*      Reset Value for I2CFTCTL  */
#define REG_I2CF_I2CFTCTL                    0x40003054            /*  i2cf Timing Control Register */
#define REG_I2CF_I2CFASSCL_RESET             0x00000000            /*      Reset Value for I2CFASSCL  */
#define REG_I2CF_I2CFASSCL                   0x40003058            /*  i2cf Automatic stretch SCL register */

/* ============================================================================================================================
        i2cf Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFMCON                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFMCON_PRESTOP_BUS_CLR   13            /*  Prestop Bus-Clear */
#define BITP_I2CF_I2CFMCON_BUS_CLR_EN        12            /*  Bus-Clear Enable */
#define BITP_I2CF_I2CFMCON_MTXDMA            11            /*  Enable master Tx DMA request */
#define BITP_I2CF_I2CFMCON_MRXDMA            10            /*  Enable master Rx DMA request */
#define BITP_I2CF_I2CFMCON_MXMITDEC           9            /*  Decrement master TX FIFO status when a byte has been transmitted */
#define BITP_I2CF_I2CFMCON_IENCMP             8            /*  Transaction completed (or stop detected) interrupt enable */
#define BITP_I2CF_I2CFMCON_IENACK             7            /*  ACK not received interrupt enable */
#define BITP_I2CF_I2CFMCON_IENALOST           6            /*  Arbitration lost interrupt enable */
#define BITP_I2CF_I2CFMCON_IENMTX             5            /*  Transmit request interrupt enable. */
#define BITP_I2CF_I2CFMCON_IENMRX             4            /*  Receive request interrupt enable */
#define BITP_I2CF_I2CFMCON_STRETCH            3            /*  Stretch SCL enable */
#define BITP_I2CF_I2CFMCON_LOOPBACK           2            /*  Internal loopback enable */
#define BITP_I2CF_I2CFMCON_COMPLETE           1            /*  Start back-off disable */
#define BITP_I2CF_I2CFMCON_MASEN              0            /*  Master enable */
#define BITM_I2CF_I2CFMCON_PRESTOP_BUS_CLR   0x00002000    /*  Prestop Bus-Clear */
#define BITM_I2CF_I2CFMCON_BUS_CLR_EN        0x00001000    /*  Bus-Clear Enable */
#define BITM_I2CF_I2CFMCON_MTXDMA            0x00000800    /*  Enable master Tx DMA request */
#define BITM_I2CF_I2CFMCON_MRXDMA            0x00000400    /*  Enable master Rx DMA request */
#define BITM_I2CF_I2CFMCON_MXMITDEC          0x00000200    /*  Decrement master TX FIFO status when a byte has been transmitted */
#define BITM_I2CF_I2CFMCON_IENCMP            0x00000100    /*  Transaction completed (or stop detected) interrupt enable */
#define BITM_I2CF_I2CFMCON_IENACK            0x00000080    /*  ACK not received interrupt enable */
#define BITM_I2CF_I2CFMCON_IENALOST          0x00000040    /*  Arbitration lost interrupt enable */
#define BITM_I2CF_I2CFMCON_IENMTX            0x00000020    /*  Transmit request interrupt enable. */
#define BITM_I2CF_I2CFMCON_IENMRX            0x00000010    /*  Receive request interrupt enable */
#define BITM_I2CF_I2CFMCON_STRETCH           0x00000008    /*  Stretch SCL enable */
#define BITM_I2CF_I2CFMCON_LOOPBACK          0x00000004    /*  Internal loopback enable */
#define BITM_I2CF_I2CFMCON_COMPLETE          0x00000002    /*  Start back-off disable */
#define BITM_I2CF_I2CFMCON_MASEN             0x00000001    /*  Master enable */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFMSTA                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFMSTA_SCL_FILTERED      14            /*  State of SCL Line */
#define BITP_I2CF_I2CFMSTA_SDA_FILTERED      13            /*  State of SDA Line */
#define BITP_I2CF_I2CFMSTA_MTXUFLOW          12            /*  Master Transmit Underflow */
#define BITP_I2CF_I2CFMSTA_MSTOP             11            /*  STOP driven by this I2C Master */
#define BITP_I2CF_I2CFMSTA_LINEBUSY          10            /*  Line is busy */
#define BITP_I2CF_I2CFMSTA_MRXOF              9            /*  Master Receive FIFO overflow */
#define BITP_I2CF_I2CFMSTA_TCOMP              8            /*  Transaction complete or stop detected */
#define BITP_I2CF_I2CFMSTA_NACKDATA           7            /*  ACK not received in response to data write */
#define BITP_I2CF_I2CFMSTA_MBUSY              6            /*  Master busy */
#define BITP_I2CF_I2CFMSTA_ALOST              5            /*  Arbitration lost */
#define BITP_I2CF_I2CFMSTA_NACKADDR           4            /*  ACK not received in response to an address */
#define BITP_I2CF_I2CFMSTA_MRXREQ             3            /*  Master Receive request */
#define BITP_I2CF_I2CFMSTA_MTXREQ             2            /*  When read is master Transmit request; when write is Clear master transmit interrupt bit */
#define BITP_I2CF_I2CFMSTA_MTXFSTA            0            /*  Master Transmit FIFO status */
#define BITM_I2CF_I2CFMSTA_SCL_FILTERED      0x00004000    /*  State of SCL Line */
#define BITM_I2CF_I2CFMSTA_SDA_FILTERED      0x00002000    /*  State of SDA Line */
#define BITM_I2CF_I2CFMSTA_MTXUFLOW          0x00001000    /*  Master Transmit Underflow */
#define BITM_I2CF_I2CFMSTA_MSTOP             0x00000800    /*  STOP driven by this I2C Master */
#define BITM_I2CF_I2CFMSTA_LINEBUSY          0x00000400    /*  Line is busy */
#define BITM_I2CF_I2CFMSTA_MRXOF             0x00000200    /*  Master Receive FIFO overflow */
#define BITM_I2CF_I2CFMSTA_TCOMP             0x00000100    /*  Transaction complete or stop detected */
#define BITM_I2CF_I2CFMSTA_NACKDATA          0x00000080    /*  ACK not received in response to data write */
#define BITM_I2CF_I2CFMSTA_MBUSY             0x00000040    /*  Master busy */
#define BITM_I2CF_I2CFMSTA_ALOST             0x00000020    /*  Arbitration lost */
#define BITM_I2CF_I2CFMSTA_NACKADDR          0x00000010    /*  ACK not received in response to an address */
#define BITM_I2CF_I2CFMSTA_MRXREQ            0x00000008    /*  Master Receive request */
#define BITM_I2CF_I2CFMSTA_MTXREQ            0x00000004    /*  When read is master Transmit request; when write is Clear master transmit interrupt bit */
#define BITM_I2CF_I2CFMSTA_MTXFSTA           0x00000003    /*  Master Transmit FIFO status */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFMRX                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFMRX_ICMRX               0            /*  Master receive register */
#define BITM_I2CF_I2CFMRX_ICMRX              0x000000FF    /*  Master receive register */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFMTX                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFMTX_I2CMRX              0            /*  Master transmit register */
#define BITM_I2CF_I2CFMTX_I2CMRX             0x000000FF    /*  Master transmit register */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFMRXCNT                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFMRXCNT_EXTEND           8            /*  Extended read */
#define BITP_I2CF_I2CFMRXCNT_COUNT            0            /*  Receive count */
#define BITM_I2CF_I2CFMRXCNT_EXTEND          0x00000100    /*  Extended read */
#define BITM_I2CF_I2CFMRXCNT_COUNT           0x000000FF    /*  Receive count */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFMCRXCNT                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFMCRXCNT_COUNT           0            /*  Current receive count */
#define BITM_I2CF_I2CFMCRXCNT_COUNT          0x000000FF    /*  Current receive count */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFADR1                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFADR1_ADR1               0            /*  Address byte 1 */
#define BITM_I2CF_I2CFADR1_ADR1              0x000000FF    /*  Address byte 1 */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFADR2                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFADR2_ADR2               0            /*  Address byte 2 */
#define BITM_I2CF_I2CFADR2_ADR2              0x000000FF    /*  Address byte 2 */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFBYT                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFBYT_SBYTE               0            /*  Start byte */
#define BITM_I2CF_I2CFBYT_SBYTE              0x000000FF    /*  Start byte */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFDIV                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFDIV_HIGH                8            /*  Serial clock high time */
#define BITP_I2CF_I2CFDIV_LOW                 0            /*  Serial clock low time */
#define BITM_I2CF_I2CFDIV_HIGH               0x0000FF00    /*  Serial clock high time */
#define BITM_I2CF_I2CFDIV_LOW                0x000000FF    /*  Serial clock low time */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFSCON                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFSCON_STXDMA            14            /*  Enable slave Tx DMA request */
#define BITP_I2CF_I2CFSCON_SRXDMA            13            /*  Enable slave Rx DMA request */
#define BITP_I2CF_I2CFSCON_IENREPST          12            /*  Repeated start interrupt enable */
#define BITP_I2CF_I2CFSCON_SXMITDEC          11            /*  Decrement Slave Tx FIFO status when a byte has been transmitted */
#define BITP_I2CF_I2CFSCON_IENSTX            10            /*  Slave Transmit request interrupt enable */
#define BITP_I2CF_I2CFSCON_IENSRX             9            /*  Slave Receive request interrupt enable */
#define BITP_I2CF_I2CFSCON_IENSTOP            8            /*  Stop condition detected interrupt enable */
#define BITP_I2CF_I2CFSCON_NACK               7            /*  NACK next communication */
#define BITP_I2CF_I2CFSCON_STRETCHSCL         6            /*  Stretch SCL enable */
#define BITP_I2CF_I2CFSCON_EARLYTXR           5            /*  Early transmit request mode */
#define BITP_I2CF_I2CFSCON_GCSBCLR            4            /*  General call status bit clear */
#define BITP_I2CF_I2CFSCON_HGCEN              3            /*  Hardware general call enable */
#define BITP_I2CF_I2CFSCON_GCEN               2            /*  General call enable */
#define BITP_I2CF_I2CFSCON_ADR10EN            1            /*  Enabled 10-bit addressing */
#define BITP_I2CF_I2CFSCON_SLVEN              0            /*  Slave enable */
#define BITM_I2CF_I2CFSCON_STXDMA            0x00004000    /*  Enable slave Tx DMA request */
#define BITM_I2CF_I2CFSCON_SRXDMA            0x00002000    /*  Enable slave Rx DMA request */
#define BITM_I2CF_I2CFSCON_IENREPST          0x00001000    /*  Repeated start interrupt enable */
#define BITM_I2CF_I2CFSCON_SXMITDEC          0x00000800    /*  Decrement Slave Tx FIFO status when a byte has been transmitted */
#define BITM_I2CF_I2CFSCON_IENSTX            0x00000400    /*  Slave Transmit request interrupt enable */
#define BITM_I2CF_I2CFSCON_IENSRX            0x00000200    /*  Slave Receive request interrupt enable */
#define BITM_I2CF_I2CFSCON_IENSTOP           0x00000100    /*  Stop condition detected interrupt enable */
#define BITM_I2CF_I2CFSCON_NACK              0x00000080    /*  NACK next communication */
#define BITM_I2CF_I2CFSCON_STRETCHSCL        0x00000040    /*  Stretch SCL enable */
#define BITM_I2CF_I2CFSCON_EARLYTXR          0x00000020    /*  Early transmit request mode */
#define BITM_I2CF_I2CFSCON_GCSBCLR           0x00000010    /*  General call status bit clear */
#define BITM_I2CF_I2CFSCON_HGCEN             0x00000008    /*  Hardware general call enable */
#define BITM_I2CF_I2CFSCON_GCEN              0x00000004    /*  General call enable */
#define BITM_I2CF_I2CFSCON_ADR10EN           0x00000002    /*  Enabled 10-bit addressing */
#define BITM_I2CF_I2CFSCON_SLVEN             0x00000001    /*  Slave enable */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFSSTA                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFSSTA_START             14            /*  Start and matching address */
#define BITP_I2CF_I2CFSSTA_REPSTART          13            /*  Repeated start and matching address */
#define BITP_I2CF_I2CFSSTA_IDMAT             11            /*  Device ID matched */
#define BITP_I2CF_I2CFSSTA_STOP              10            /*  Stop after start and matching address */
#define BITP_I2CF_I2CFSSTA_GCID               8            /*  General ID */
#define BITP_I2CF_I2CFSSTA_GCINT              7            /*  General call interrupt */
#define BITP_I2CF_I2CFSSTA_SBUSY              6            /*  Slave busy */
#define BITP_I2CF_I2CFSSTA_NOACK              5            /*  Ack not generated by the slave */
#define BITP_I2CF_I2CFSSTA_SRXOF              4            /*  Slave Receive FIFO overflow */
#define BITP_I2CF_I2CFSSTA_SRXREQ             3            /*  Slave Receive request */
#define BITP_I2CF_I2CFSSTA_STXREQ             2            /*  When read is slave Transmit request(STXREQ); when write is clear slave transmit interrupt bit(slv_txint_clr) */
#define BITP_I2CF_I2CFSSTA_STXUR              1            /*  Slave Transmit FIFO underflow */
#define BITP_I2CF_I2CFSSTA_STXFSEREQ          0            /*  Slave Tx FIFO Status or early request */
#define BITM_I2CF_I2CFSSTA_START             0x00004000    /*  Start and matching address */
#define BITM_I2CF_I2CFSSTA_REPSTART          0x00002000    /*  Repeated start and matching address */

#define BITM_I2CF_I2CFSSTA_IDMAT             0x00001800    /*  Device ID matched */
#define BITM_I2CF_I2CFSSTA_STOP              0x00000400    /*  Stop after start and matching address */

#define BITM_I2CF_I2CFSSTA_GCID              0x00000300    /*  General ID */
#define BITM_I2CF_I2CFSSTA_GCINT             0x00000080    /*  General call interrupt */
#define BITM_I2CF_I2CFSSTA_SBUSY             0x00000040    /*  Slave busy */
#define BITM_I2CF_I2CFSSTA_NOACK             0x00000020    /*  Ack not generated by the slave */
#define BITM_I2CF_I2CFSSTA_SRXOF             0x00000010    /*  Slave Receive FIFO overflow */
#define BITM_I2CF_I2CFSSTA_SRXREQ            0x00000008    /*  Slave Receive request */
#define BITM_I2CF_I2CFSSTA_STXREQ            0x00000004    /*  When read is slave Transmit request(STXREQ); when write is clear slave transmit interrupt bit(slv_txint_clr) */
#define BITM_I2CF_I2CFSSTA_STXUR             0x00000002    /*  Slave Transmit FIFO underflow */
#define BITM_I2CF_I2CFSSTA_STXFSEREQ         0x00000001    /*  Slave Tx FIFO Status or early request */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFSRX                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFSRX_I2CSRX              0            /*  Slave receive register */
#define BITM_I2CF_I2CFSRX_I2CSRX             0x000000FF    /*  Slave receive register */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFSTX                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFSTX_I2CSTX              0            /*  Slave transmit register */
#define BITM_I2CF_I2CFSTX_I2CSTX             0x000000FF    /*  Slave transmit register */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFALT                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFALT_ALT                 0            /*  Slave Alt */
#define BITM_I2CF_I2CFALT_ALT                0x000000FF    /*  Slave Alt */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFID0                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFID0_ID0                 0            /*  Slave device ID 0 */
#define BITM_I2CF_I2CFID0_ID0                0x000000FF    /*  Slave device ID 0 */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFID1                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFID1_ID1                 0            /*  Slave device ID 1 */
#define BITM_I2CF_I2CFID1_ID1                0x000000FF    /*  Slave device ID 1 */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFID2                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFID2_ID2                 0            /*  Slave device ID 2 */
#define BITM_I2CF_I2CFID2_ID2                0x000000FF    /*  Slave device ID 2 */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFID3                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFID3_ID3                 0            /*  Slave device ID 3 */
#define BITM_I2CF_I2CFID3_ID3                0x000000FF    /*  Slave device ID 3 */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFSTA                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFSTA_MFLUSH              9            /*  Flush the master transmit FIFO */
#define BITP_I2CF_I2CFSTA_SFLUSH              8            /*  Flush the slave transmit FIFO */
#define BITP_I2CF_I2CFSTA_MRXFSTA             6            /*  Master receive FIFO status */
#define BITP_I2CF_I2CFSTA_MTXFSTA             4            /*  Master transmit FIFO status */
#define BITP_I2CF_I2CFSTA_SRXFSTA             2            /*  Slave receive FIFO status */
#define BITP_I2CF_I2CFSTA_STXFSTA             0            /*  Slave transmit FIFO status */
#define BITM_I2CF_I2CFSTA_MFLUSH             0x00000200    /*  Flush the master transmit FIFO */
#define BITM_I2CF_I2CFSTA_SFLUSH             0x00000100    /*  Flush the slave transmit FIFO */

#define BITM_I2CF_I2CFSTA_MRXFSTA            0x000000C0    /*  Master receive FIFO status */

#define BITM_I2CF_I2CFSTA_MTXFSTA            0x00000030    /*  Master transmit FIFO status */

#define BITM_I2CF_I2CFSTA_SRXFSTA            0x0000000C    /*  Slave receive FIFO status */

#define BITM_I2CF_I2CFSTA_STXFSTA            0x00000003    /*  Slave transmit FIFO status */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFSHCON                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFSHCON_RESET             0            /*  Reset START STOP detect circuit */
#define BITM_I2CF_I2CFSHCON_RESET            0x00000001    /*  Reset START STOP detect circuit */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFTCTL                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFTCTL_FILTEROFF          8            /*  Input Filter Control */
#define BITP_I2CF_I2CFTCTL_THDATIN            0            /*  Data In Hold Start */

#define BITM_I2CF_I2CFTCTL_FILTEROFF         0x00000100    /*  Input Filter Control */
#define BITM_I2CF_I2CFTCTL_THDATIN           0x0000001F    /*  Data In Hold Start */

/* -------------------------------------------------------------------------------------------------------------------------
          i2cf_I2CFASSCL                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2CF_I2CFASSCL_TIMEOUT_SSCL_SLV  9            /*  slave automatic stretch timeout */
#define BITP_I2CF_I2CFASSCL_TIMEOUT_SSCL_MAS  8            /*  master automatic stretch timeout */
#define BITP_I2CF_I2CFASSCL_STRETCH_MODE_SLV  4            /*  slave automatic stretch mode */
#define BITP_I2CF_I2CFASSCL_STRETCH_MODE_MAS  0            /*  master automatic stretch mode */
#define BITM_I2CF_I2CFASSCL_TIMEOUT_SSCL_SLV 0x00000200    /*  slave automatic stretch timeout */
#define BITM_I2CF_I2CFASSCL_TIMEOUT_SSCL_MAS 0x00000100    /*  master automatic stretch timeout */
#define BITM_I2CF_I2CFASSCL_STRETCH_MODE_SLV 0x000000F0    /*  slave automatic stretch mode */
#define BITM_I2CF_I2CFASSCL_STRETCH_MODE_MAS 0x0000000F    /*  master automatic stretch mode */


/* ============================================================================================================================
        
   ============================================================================================================================ */

/* ============================================================================================================================
        SPIH
   ============================================================================================================================ */
#define MOD_SPIH_BASE                        0x40024000            /*    */
#define MOD_SPIH_MASK                        0x000000FF            /*    */
#define REG_SPIH_STAT_RESET                  0x00000800            /*      Reset Value for STAT  */
#define REG_SPIH_STAT                        0x40024000            /*  SPIH Status */
#define REG_SPIH_RX_RESET                    0x00000000            /*      Reset Value for RX  */
#define REG_SPIH_RX                          0x40024004            /*  SPIH Receive */
#define REG_SPIH_TX_RESET                    0x00000000            /*      Reset Value for TX  */
#define REG_SPIH_TX                          0x40024008            /*  SPIH Transmit */
#define REG_SPIH_DIV_RESET                   0x00000000            /*      Reset Value for DIV  */
#define REG_SPIH_DIV                         0x4002400C            /*  SPIH SPI baud rate selection */
#define REG_SPIH_CTL_RESET                   0x00000000            /*      Reset Value for CTL  */
#define REG_SPIH_CTL                         0x40024010            /*  SPIH SPI configuration 1 */
#define REG_SPIH_IEN_RESET                   0x00000000            /*      Reset Value for IEN  */
#define REG_SPIH_IEN                         0x40024014            /*  SPIH SPI configuration 2 */
#define REG_SPIH_CNT_RESET                   0x00000000            /*      Reset Value for CNT  */
#define REG_SPIH_CNT                         0x40024018            /*  SPIH Transfer byte count */
#define REG_SPIH_DMA_RESET                   0x00000000            /*      Reset Value for DMA  */
#define REG_SPIH_DMA                         0x4002401C            /*  SPIH SPI DMA enable */
#define REG_SPIH_FIFO_STAT_RESET             0x00000000            /*      Reset Value for FIFO_STAT  */
#define REG_SPIH_FIFO_STAT                   0x40024020            /*  SPIH FIFO Status */
#define REG_SPIH_RD_CTL_RESET                0x00000000            /*      Reset Value for RD_CTL  */
#define REG_SPIH_RD_CTL                      0x40024024            /*  SPIH Read Control */
#define REG_SPIH_FLOW_CTL_RESET              0x00000000            /*      Reset Value for FLOW_CTL  */
#define REG_SPIH_FLOW_CTL                    0x40024028            /*  SPIH Flow Control */
#define REG_SPIH_WAIT_TMR_RESET              0x00000000            /*      Reset Value for WAIT_TMR  */
#define REG_SPIH_WAIT_TMR                    0x4002402C            /*  SPIH Wait timer for flow control */
#define REG_SPIH_CS_CTL_RESET                0x00000001            /*      Reset Value for CS_CTL  */
#define REG_SPIH_CS_CTL                      0x40024030            /*  SPIH Chip-Select control for multi-slave connections */
#define REG_SPIH_CS_OVERRIDE_RESET           0x00000000            /*      Reset Value for CS_OVERRIDE  */
#define REG_SPIH_CS_OVERRIDE                 0x40024034            /*  SPIH Chip-Select Override */
#define REG_SPIH_XFR_CNT_RESET               0x00000000            /*      Reset Value for XFR_CNT  */
#define REG_SPIH_XFR_CNT                     0x40024038            /*  SPIH Transferred Count */

/* ============================================================================================================================
        SPI0
   ============================================================================================================================ */
#define MOD_SPI0_BASE                        0x40004000            /*    */
#define MOD_SPI0_MASK                        0x000000FF            /*    */
#define REG_SPI0_STAT_RESET                  0x00000800            /*      Reset Value for STAT  */
#define REG_SPI0_STAT                        0x40004000            /*  SPI0 Status */
#define REG_SPI0_RX_RESET                    0x00000000            /*      Reset Value for RX  */
#define REG_SPI0_RX                          0x40004004            /*  SPI0 Receive */
#define REG_SPI0_TX_RESET                    0x00000000            /*      Reset Value for TX  */
#define REG_SPI0_TX                          0x40004008            /*  SPI0 Transmit */
#define REG_SPI0_DIV_RESET                   0x00000000            /*      Reset Value for DIV  */
#define REG_SPI0_DIV                         0x4000400C            /*  SPI0 SPI baud rate selection */
#define REG_SPI0_CTL_RESET                   0x00000000            /*      Reset Value for CTL  */
#define REG_SPI0_CTL                         0x40004010            /*  SPI0 SPI configuration 1 */
#define REG_SPI0_IEN_RESET                   0x00000000            /*      Reset Value for IEN  */
#define REG_SPI0_IEN                         0x40004014            /*  SPI0 SPI configuration 2 */
#define REG_SPI0_CNT_RESET                   0x00000000            /*      Reset Value for CNT  */
#define REG_SPI0_CNT                         0x40004018            /*  SPI0 Transfer byte count */
#define REG_SPI0_DMA_RESET                   0x00000000            /*      Reset Value for DMA  */
#define REG_SPI0_DMA                         0x4000401C            /*  SPI0 SPI DMA enable */
#define REG_SPI0_FIFO_STAT_RESET             0x00000000            /*      Reset Value for FIFO_STAT  */
#define REG_SPI0_FIFO_STAT                   0x40004020            /*  SPI0 FIFO Status */
#define REG_SPI0_RD_CTL_RESET                0x00000000            /*      Reset Value for RD_CTL  */
#define REG_SPI0_RD_CTL                      0x40004024            /*  SPI0 Read Control */
#define REG_SPI0_FLOW_CTL_RESET              0x00000000            /*      Reset Value for FLOW_CTL  */
#define REG_SPI0_FLOW_CTL                    0x40004028            /*  SPI0 Flow Control */
#define REG_SPI0_WAIT_TMR_RESET              0x00000000            /*      Reset Value for WAIT_TMR  */
#define REG_SPI0_WAIT_TMR                    0x4000402C            /*  SPI0 Wait timer for flow control */
#define REG_SPI0_CS_CTL_RESET                0x00000001            /*      Reset Value for CS_CTL  */
#define REG_SPI0_CS_CTL                      0x40004030            /*  SPI0 Chip-Select control for multi-slave connections */
#define REG_SPI0_CS_OVERRIDE_RESET           0x00000000            /*      Reset Value for CS_OVERRIDE  */
#define REG_SPI0_CS_OVERRIDE                 0x40004034            /*  SPI0 Chip-Select Override */
#define REG_SPI0_XFR_CNT_RESET               0x00000000            /*      Reset Value for XFR_CNT  */
#define REG_SPI0_XFR_CNT                     0x40004038            /*  SPI0 Transferred Count */

/* ============================================================================================================================
        SPI1
   ============================================================================================================================ */
#define MOD_SPI1_BASE                        0x40004400            /*    */
#define MOD_SPI1_MASK                        0x000000FF            /*    */
#define REG_SPI1_STAT_RESET                  0x00000800            /*      Reset Value for STAT  */
#define REG_SPI1_STAT                        0x40004400            /*  SPI1 Status */
#define REG_SPI1_RX_RESET                    0x00000000            /*      Reset Value for RX  */
#define REG_SPI1_RX                          0x40004404            /*  SPI1 Receive */
#define REG_SPI1_TX_RESET                    0x00000000            /*      Reset Value for TX  */
#define REG_SPI1_TX                          0x40004408            /*  SPI1 Transmit */
#define REG_SPI1_DIV_RESET                   0x00000000            /*      Reset Value for DIV  */
#define REG_SPI1_DIV                         0x4000440C            /*  SPI1 SPI baud rate selection */
#define REG_SPI1_CTL_RESET                   0x00000000            /*      Reset Value for CTL  */
#define REG_SPI1_CTL                         0x40004410            /*  SPI1 SPI configuration 1 */
#define REG_SPI1_IEN_RESET                   0x00000000            /*      Reset Value for IEN  */
#define REG_SPI1_IEN                         0x40004414            /*  SPI1 SPI configuration 2 */
#define REG_SPI1_CNT_RESET                   0x00000000            /*      Reset Value for CNT  */
#define REG_SPI1_CNT                         0x40004418            /*  SPI1 Transfer byte count */
#define REG_SPI1_DMA_RESET                   0x00000000            /*      Reset Value for DMA  */
#define REG_SPI1_DMA                         0x4000441C            /*  SPI1 SPI DMA enable */
#define REG_SPI1_FIFO_STAT_RESET             0x00000000            /*      Reset Value for FIFO_STAT  */
#define REG_SPI1_FIFO_STAT                   0x40004420            /*  SPI1 FIFO Status */
#define REG_SPI1_RD_CTL_RESET                0x00000000            /*      Reset Value for RD_CTL  */
#define REG_SPI1_RD_CTL                      0x40004424            /*  SPI1 Read Control */
#define REG_SPI1_FLOW_CTL_RESET              0x00000000            /*      Reset Value for FLOW_CTL  */
#define REG_SPI1_FLOW_CTL                    0x40004428            /*  SPI1 Flow Control */
#define REG_SPI1_WAIT_TMR_RESET              0x00000000            /*      Reset Value for WAIT_TMR  */
#define REG_SPI1_WAIT_TMR                    0x4000442C            /*  SPI1 Wait timer for flow control */
#define REG_SPI1_CS_CTL_RESET                0x00000001            /*      Reset Value for CS_CTL  */
#define REG_SPI1_CS_CTL                      0x40004430            /*  SPI1 Chip-Select control for multi-slave connections */
#define REG_SPI1_CS_OVERRIDE_RESET           0x00000000            /*      Reset Value for CS_OVERRIDE  */
#define REG_SPI1_CS_OVERRIDE                 0x40004434            /*  SPI1 Chip-Select Override */
#define REG_SPI1_XFR_CNT_RESET               0x00000000            /*      Reset Value for XFR_CNT  */
#define REG_SPI1_XFR_CNT                     0x40004438            /*  SPI1 Transferred Count */

/* ============================================================================================================================
        SPI Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          SPI_STAT                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_STAT_RDY                    15            /*  Detected an edge on Ready indicator for flow-control */
#define BITP_SPI_STAT_CSRISE                 14            /*  Detected a rising edge on CS, in slave CON mode */
#define BITP_SPI_STAT_CSFALL                 13            /*  Detected a falling edge on CS, in slave CON mode */
#define BITP_SPI_STAT_CSERR                  12            /*  Detected a CS error condition in slave mode */
#define BITP_SPI_STAT_CS                     11            /*  CS Status */
#define BITP_SPI_STAT_RXOVR                   7            /*  SPI Rx FIFO overflow */
#define BITP_SPI_STAT_RXIRQ                   6            /*  SPI Rx IRQ */
#define BITP_SPI_STAT_TXIRQ                   5            /*  SPI Tx IRQ */
#define BITP_SPI_STAT_TXUNDR                  4            /*  SPI Tx FIFO underflow */
#define BITP_SPI_STAT_TXDONE                  3            /*  SPI Tx Done in read command mode */
#define BITP_SPI_STAT_TXEMPTY                 2            /*  SPI Tx FIFO empty interrupt */
#define BITP_SPI_STAT_XFRDONE                 1            /*  SPI transfer completion */
#define BITP_SPI_STAT_IRQ                     0            /*  SPI Interrupt status */
#define BITM_SPI_STAT_RDY                    0x00008000    /*  Detected an edge on Ready indicator for flow-control */
#define BITM_SPI_STAT_CSRISE                 0x00004000    /*  Detected a rising edge on CS, in slave CON mode */
#define BITM_SPI_STAT_CSFALL                 0x00002000    /*  Detected a falling edge on CS, in slave CON mode */
#define BITM_SPI_STAT_CSERR                  0x00001000    /*  Detected a CS error condition in slave mode */

#define BITM_SPI_STAT_CS                     0x00000800    /*  CS Status */
#define BITM_SPI_STAT_RXOVR                  0x00000080    /*  SPI Rx FIFO overflow */
#define BITM_SPI_STAT_RXIRQ                  0x00000040    /*  SPI Rx IRQ */
#define BITM_SPI_STAT_TXIRQ                  0x00000020    /*  SPI Tx IRQ */
#define BITM_SPI_STAT_TXUNDR                 0x00000010    /*  SPI Tx FIFO underflow */
#define BITM_SPI_STAT_TXDONE                 0x00000008    /*  SPI Tx Done in read command mode */
#define BITM_SPI_STAT_TXEMPTY                0x00000004    /*  SPI Tx FIFO empty interrupt */
#define BITM_SPI_STAT_XFRDONE                0x00000002    /*  SPI transfer completion */
#define BITM_SPI_STAT_IRQ                    0x00000001    /*  SPI Interrupt status */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_RX                               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_RX_BYTE2                     8            /*  8-bit receive buffer, used only in DMA modes */
#define BITP_SPI_RX_BYTE1                     0            /*  8-bit receive buffer */
#define BITM_SPI_RX_BYTE2                    0x0000FF00    /*  8-bit receive buffer, used only in DMA modes */
#define BITM_SPI_RX_BYTE1                    0x000000FF    /*  8-bit receive buffer */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_TX                               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_TX_BYTE2                     8            /*  8-bit transmit buffer, used only in DMA modes */
#define BITP_SPI_TX_BYTE1                     0            /*  8-bit transmit buffer */
#define BITM_SPI_TX_BYTE2                    0x0000FF00    /*  8-bit transmit buffer, used only in DMA modes */
#define BITM_SPI_TX_BYTE1                    0x000000FF    /*  8-bit transmit buffer */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_DIV                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_DIV_VALUE                    0            /*  SPI clock divider */
#define BITM_SPI_DIV_VALUE                   0x0000003F    /*  SPI clock divider */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_CTL                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_CTL_CSRST                   14            /*  Reset Mode for CSERR */
#define BITP_SPI_CTL_TFLUSH                  13            /*  SPI Tx FIFO Flush enable */
#define BITP_SPI_CTL_RFLUSH                  12            /*  SPI Rx FIFO Flush enable */
#define BITP_SPI_CTL_CON                     11            /*  Continuous transfer enable */
#define BITP_SPI_CTL_LOOPBACK                10            /*  Loopback enable */
#define BITP_SPI_CTL_OEN                      9            /*  Slave MISO output enable */
#define BITP_SPI_CTL_RXOF                     8            /*  SPIRX overflow overwrite enable */
#define BITP_SPI_CTL_ZEN                      7            /*  Transmit zeros enable */
#define BITP_SPI_CTL_TIM                      6            /*  SPI transfer and interrupt mode */
#define BITP_SPI_CTL_LSB                      5            /*  LSB first transfer enable */
#define BITP_SPI_CTL_WOM                      4            /*  SPI Wired Or mode */
#define BITP_SPI_CTL_CPOL                     3            /*  Serial Clock Polarity */
#define BITP_SPI_CTL_CPHA                     2            /*  Serial clock phase mode */
#define BITP_SPI_CTL_MASEN                    1            /*  Master mode enable */
#define BITP_SPI_CTL_SPIEN                    0            /*  SPI enable */
#define BITM_SPI_CTL_CSRST                   0x00004000    /*  Reset Mode for CSERR */
#define BITM_SPI_CTL_TFLUSH                  0x00002000    /*  SPI Tx FIFO Flush enable */
#define BITM_SPI_CTL_RFLUSH                  0x00001000    /*  SPI Rx FIFO Flush enable */
#define BITM_SPI_CTL_CON                     0x00000800    /*  Continuous transfer enable */
#define BITM_SPI_CTL_LOOPBACK                0x00000400    /*  Loopback enable */
#define BITM_SPI_CTL_OEN                     0x00000200    /*  Slave MISO output enable */
#define BITM_SPI_CTL_RXOF                    0x00000100    /*  SPIRX overflow overwrite enable */
#define BITM_SPI_CTL_ZEN                     0x00000080    /*  Transmit zeros enable */
#define BITM_SPI_CTL_TIM                     0x00000040    /*  SPI transfer and interrupt mode */

#define BITM_SPI_CTL_LSB                     0x00000020    /*  LSB first transfer enable */

#define BITM_SPI_CTL_WOM                     0x00000010    /*  SPI Wired Or mode */

#define BITM_SPI_CTL_CPOL                    0x00000008    /*  Serial Clock Polarity */

#define BITM_SPI_CTL_CPHA                    0x00000004    /*  Serial clock phase mode */

#define BITM_SPI_CTL_MASEN                   0x00000002    /*  Master mode enable */

#define BITM_SPI_CTL_SPIEN                   0x00000001    /*  SPI enable */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_IEN                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_IEN_TXEMPTY                 14            /*  Tx-FIFO Empty interrupt enable */
#define BITP_SPI_IEN_XFRDONE                 13            /*  SPI transfer completion interrupt enable */
#define BITP_SPI_IEN_TXDONE                  12            /*  SPI transmit done interrupt enable */
#define BITP_SPI_IEN_RDY                     11            /*  Ready signal edge interrupt enable */
#define BITP_SPI_IEN_RXOVR                   10            /*  Rx-overflow interrupt enable */
#define BITP_SPI_IEN_TXUNDR                   9            /*  Tx-underflow interrupt enable */
#define BITP_SPI_IEN_CS                       8            /*  Enable interrupt on every CS edge in slave CON mode */
#define BITP_SPI_IEN_IRQMODE                  0            /*  SPI IRQ mode bits */

#define BITM_SPI_IEN_TXEMPTY                 0x00004000    /*  Tx-FIFO Empty interrupt enable */

#define BITM_SPI_IEN_XFRDONE                 0x00002000    /*  SPI transfer completion interrupt enable */

#define BITM_SPI_IEN_TXDONE                  0x00001000    /*  SPI transmit done interrupt enable */

#define BITM_SPI_IEN_RDY                     0x00000800    /*  Ready signal edge interrupt enable */

#define BITM_SPI_IEN_RXOVR                   0x00000400    /*  Rx-overflow interrupt enable */

#define BITM_SPI_IEN_TXUNDR                  0x00000200    /*  Tx-underflow interrupt enable */
#define BITM_SPI_IEN_CS                      0x00000100    /*  Enable interrupt on every CS edge in slave CON mode */

#define BITM_SPI_IEN_IRQMODE                 0x00000007    /*  SPI IRQ mode bits */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_CNT                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_CNT_FRAMECONT               15            /*  Continue frame */
#define BITP_SPI_CNT_VALUE                    0            /*  Transfer byte count */

#define BITM_SPI_CNT_FRAMECONT               0x00008000    /*  Continue frame */
#define BITM_SPI_CNT_VALUE                   0x00003FFF    /*  Transfer byte count */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_DMA                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_DMA_RXEN                     2            /*  Enable receive DMA request */
#define BITP_SPI_DMA_TXEN                     1            /*  Enable transmit DMA request */
#define BITP_SPI_DMA_EN                       0            /*  Enable DMA for data transfer */
#define BITM_SPI_DMA_RXEN                    0x00000004    /*  Enable receive DMA request */
#define BITM_SPI_DMA_TXEN                    0x00000002    /*  Enable transmit DMA request */
#define BITM_SPI_DMA_EN                      0x00000001    /*  Enable DMA for data transfer */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_FIFO_STAT                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_FIFO_STAT_RX                 8            /*  SPI Rx FIFO status */
#define BITP_SPI_FIFO_STAT_TX                 0            /*  SPI Tx FIFO status */

#define BITM_SPI_FIFO_STAT_RX                0x00000F00    /*  SPI Rx FIFO status */

#define BITM_SPI_FIFO_STAT_TX                0x0000000F    /*  SPI Tx FIFO status */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_RD_CTL                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_RD_CTL_THREEPIN              8            /*  Three pin SPI mode */
#define BITP_SPI_RD_CTL_TXBYTES               2            /*  Transmit byte count minus 1 for read command */
#define BITP_SPI_RD_CTL_OVERLAP               1            /*  Tx/Rx Overlap mode */
#define BITP_SPI_RD_CTL_CMDEN                 0            /*  Read command enable */

#define BITM_SPI_RD_CTL_THREEPIN             0x00000100    /*  Three pin SPI mode */
#define BITM_SPI_RD_CTL_TXBYTES              0x0000003C    /*  Transmit byte count minus 1 for read command */

#define BITM_SPI_RD_CTL_OVERLAP              0x00000002    /*  Tx/Rx Overlap mode */

#define BITM_SPI_RD_CTL_CMDEN                0x00000001    /*  Read command enable */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_FLOW_CTL                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_FLOW_CTL_RDBURSTSZ           8            /*  Read data burst size minus 1 */
#define BITP_SPI_FLOW_CTL_RDYPOL              4            /*  Polarity of RDY/MISO line */
#define BITP_SPI_FLOW_CTL_MODE                0            /*  Flow control mode */
#define BITM_SPI_FLOW_CTL_RDBURSTSZ          0x00000F00    /*  Read data burst size minus 1 */

#define BITM_SPI_FLOW_CTL_RDYPOL             0x00000010    /*  Polarity of RDY/MISO line */

#define BITM_SPI_FLOW_CTL_MODE               0x00000003    /*  Flow control mode */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_CS_CTL                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_CS_CTL_SEL                   0            /*  Chip-Select control */
#define BITM_SPI_CS_CTL_SEL                  0x0000000F    /*  Chip-Select control */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_CS_OVERRIDE                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_CS_OVERRIDE_CTL              0            /*  CS Override Control */

#define BITM_SPI_CS_OVERRIDE_CTL             0x00000003    /*  CS Override Control */

/* -------------------------------------------------------------------------------------------------------------------------
          SPI_XFR_CNT                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPI_XFR_CNT_BYTES                0            /*  Number of bytes transferred over SPI. */
#define BITM_SPI_XFR_CNT_BYTES               0x00003FFF    /*  Number of bytes transferred over SPI. */


/* ============================================================================================================================
        UART
   ============================================================================================================================ */

/* ============================================================================================================================
        uart
   ============================================================================================================================ */
#define MOD_UART_BASE                        0x40005000            /*  UART  */
#define MOD_UART_MASK                        0x000000FF            /*  UART  */
#define REG_UART_COMRX_RESET                 0x00000000            /*      Reset Value for COMRX  */
#define REG_UART_COMRX                       0x40005000            /*  uart Receive Buffer Register */
#define REG_UART_COMTX_RESET                 0x00000000            /*      Reset Value for COMTX  */
#define REG_UART_COMTX                       0x40005000            /*  uart Transmit Holding Register */
#define REG_UART_COMIEN_RESET                0x00000000            /*      Reset Value for COMIEN  */
#define REG_UART_COMIEN                      0x40005004            /*  uart Interrupt Enable */
#define REG_UART_COMIIR_RESET                0x00000001            /*      Reset Value for COMIIR  */
#define REG_UART_COMIIR                      0x40005008            /*  uart Interrupt ID */
#define REG_UART_COMLCR_RESET                0x00000000            /*      Reset Value for COMLCR  */
#define REG_UART_COMLCR                      0x4000500C            /*  uart Line Control */
#define REG_UART_COMMCR_RESET                0x00000000            /*      Reset Value for COMMCR  */
#define REG_UART_COMMCR                      0x40005010            /*  uart Modem Control */
#define REG_UART_COMLSR_RESET                0x00000060            /*      Reset Value for COMLSR  */
#define REG_UART_COMLSR                      0x40005014            /*  uart Line Status */
#define REG_UART_COMMSR_RESET                0x00000000            /*      Reset Value for COMMSR  */
#define REG_UART_COMMSR                      0x40005018            /*  uart Modem Status */
#define REG_UART_COMSCR_RESET                0x00000000            /*      Reset Value for COMSCR  */
#define REG_UART_COMSCR                      0x4000501C            /*  uart Scratch buffer */
#define REG_UART_COMMCFG_RESET               0x00000000            /*      Reset Value for COMMCFG  */
#define REG_UART_COMMCFG                     0x40005020            /*  uart Sout modulation configuration */
#define REG_UART_COMFBR_RESET                0x00000000            /*      Reset Value for COMFBR  */
#define REG_UART_COMFBR                      0x40005024            /*  uart Fractional Baud Rate */
#define REG_UART_COMDIV_RESET                0x00000001            /*      Reset Value for COMDIV  */
#define REG_UART_COMDIV                      0x40005028            /*  uart Baudrate divider */
#define REG_UART_COMCTL_RESET                0x00000000            /*      Reset Value for COMCTL  */
#define REG_UART_COMCTL                      0x40005030            /*  uart UART control register */

/* ============================================================================================================================
        uart Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMRX                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMRX_RBR                   0            /*  Receive Buffer Register */
#define BITM_UART_COMRX_RBR                  0x000000FF    /*  Receive Buffer Register */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMTX                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMTX_THR                   0            /*  Transmit Holding Register */
#define BITM_UART_COMTX_THR                  0x000000FF    /*  Transmit Holding Register */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMIEN                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMIEN_EDMAR                5            /*  DMA requests in receive mode */
#define BITP_UART_COMIEN_EDMAT                4            /*  DMA requests in transmit mode */
#define BITP_UART_COMIEN_EDSSI                3            /*  Modem status interrupt */
#define BITP_UART_COMIEN_ELSI                 2            /*  Rx status interrupt */
#define BITP_UART_COMIEN_ETBEI                1            /*  Transmit buffer empty interrupt */
#define BITP_UART_COMIEN_ERBFI                0            /*  Receive buffer full interrupt */

#define BITM_UART_COMIEN_EDMAR               0x00000020    /*  DMA requests in receive mode */

#define BITM_UART_COMIEN_EDMAT               0x00000010    /*  DMA requests in transmit mode */

#define BITM_UART_COMIEN_EDSSI               0x00000008    /*  Modem status interrupt */

#define BITM_UART_COMIEN_ELSI                0x00000004    /*  Rx status interrupt */

#define BITM_UART_COMIEN_ETBEI               0x00000002    /*  Transmit buffer empty interrupt */

#define BITM_UART_COMIEN_ERBFI               0x00000001    /*  Receive buffer full interrupt */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMIIR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMIIR_STA                  1            /*  Interrupt status */
#define BITP_UART_COMIIR_NIRQ                 0            /*  Interrupt flag */

#define BITM_UART_COMIIR_STA                 0x00000006    /*  Interrupt status */
#define BITM_UART_COMIIR_NIRQ                0x00000001    /*  Interrupt flag */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMLCR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMLCR_BRK                  6            /*  Set Break */
#define BITP_UART_COMLCR_SP                   5            /*  Stick Parity */
#define BITP_UART_COMLCR_EPS                  4            /*  Parity Select */
#define BITP_UART_COMLCR_PEN                  3            /*  Parity Enable */
#define BITP_UART_COMLCR_STOP                 2            /*  Stop Bit */
#define BITP_UART_COMLCR_WLS                  0            /*  Word Length Select */

#define BITM_UART_COMLCR_BRK                 0x00000040    /*  Set Break */

#define BITM_UART_COMLCR_SP                  0x00000020    /*  Stick Parity */

#define BITM_UART_COMLCR_EPS                 0x00000010    /*  Parity Select */

#define BITM_UART_COMLCR_PEN                 0x00000008    /*  Parity Enable */

#define BITM_UART_COMLCR_STOP                0x00000004    /*  Stop Bit */

#define BITM_UART_COMLCR_WLS                 0x00000003    /*  Word Length Select */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMMCR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMMCR_LOOPBACK             4            /*  Loopback mode */
#define BITP_UART_COMMCR_OUT2                 3            /*  Output 2 */
#define BITP_UART_COMMCR_OUT1                 2            /*  Output 1 */
#define BITP_UART_COMMCR_RTS                  1            /*  Request to send */
#define BITP_UART_COMMCR_DTR                  0            /*  Data Terminal Ready */

#define BITM_UART_COMMCR_LOOPBACK            0x00000010    /*  Loopback mode */

#define BITM_UART_COMMCR_OUT2                0x00000008    /*  Output 2 */

#define BITM_UART_COMMCR_OUT1                0x00000004    /*  Output 1 */

#define BITM_UART_COMMCR_RTS                 0x00000002    /*  Request to send */

#define BITM_UART_COMMCR_DTR                 0x00000001    /*  Data Terminal Ready */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMLSR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMLSR_TEMT                 6            /*  COMTX and Shift Register Empty Status */
#define BITP_UART_COMLSR_THRE                 5            /*  COMTX Empty */
#define BITP_UART_COMLSR_BI                   4            /*  Break Indicator */
#define BITP_UART_COMLSR_FE                   3            /*  Framing Error */
#define BITP_UART_COMLSR_PE                   2            /*  Parity Error */
#define BITP_UART_COMLSR_OE                   1            /*  Overrun Error */
#define BITP_UART_COMLSR_DR                   0            /*  Data Ready */

#define BITM_UART_COMLSR_TEMT                0x00000040    /*  COMTX and Shift Register Empty Status */

#define BITM_UART_COMLSR_THRE                0x00000020    /*  COMTX Empty */

#define BITM_UART_COMLSR_BI                  0x00000010    /*  Break Indicator */

#define BITM_UART_COMLSR_FE                  0x00000008    /*  Framing Error */

#define BITM_UART_COMLSR_PE                  0x00000004    /*  Parity Error */

#define BITM_UART_COMLSR_OE                  0x00000002    /*  Overrun Error */

#define BITM_UART_COMLSR_DR                  0x00000001    /*  Data Ready */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMMSR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMMSR_DCD                  7            /*  Data Carrier Detect */
#define BITP_UART_COMMSR_RI                   6            /*  Ring Indicator */
#define BITP_UART_COMMSR_DSR                  5            /*  Data Set Ready */
#define BITP_UART_COMMSR_CTS                  4            /*  Clear To Send */
#define BITP_UART_COMMSR_DDCD                 3            /*  Delta DCD */
#define BITP_UART_COMMSR_TERI                 2            /*  Trailing Edge RI */
#define BITP_UART_COMMSR_DDSR                 1            /*  Delta DSR */
#define BITP_UART_COMMSR_DCTS                 0            /*  Delta CTS */

#define BITM_UART_COMMSR_DCD                 0x00000080    /*  Data Carrier Detect */

#define BITM_UART_COMMSR_RI                  0x00000040    /*  Ring Indicator */

#define BITM_UART_COMMSR_DSR                 0x00000020    /*  Data Set Ready */

#define BITM_UART_COMMSR_CTS                 0x00000010    /*  Clear To Send */

#define BITM_UART_COMMSR_DDCD                0x00000008    /*  Delta DCD */

#define BITM_UART_COMMSR_TERI                0x00000004    /*  Trailing Edge RI */

#define BITM_UART_COMMSR_DDSR                0x00000002    /*  Delta DSR */

#define BITM_UART_COMMSR_DCTS                0x00000001    /*  Delta CTS */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMSCR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMSCR_SCR                  0            /*  Scratch */
#define BITM_UART_COMSCR_SCR                 0x000000FF    /*  Scratch */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMMCFG                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMMCFG_MODCLK_CFG          0            /*  38k modulation config */
#define BITM_UART_COMMCFG_MODCLK_CFG         0x000003FF    /*  38k modulation config */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMFBR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMFBR_FBEN                15            /*  Fractional baud rate generator enable */
#define BITP_UART_COMFBR_DIVM                11            /*  Fractional baud rate M divide bits 1 to 3 */
#define BITP_UART_COMFBR_DIVN                 0            /*  Fractional baud rate N divide bits 0 to 2047. */
#define BITM_UART_COMFBR_FBEN                0x00008000    /*  Fractional baud rate generator enable */
#define BITM_UART_COMFBR_DIVM                0x00001800    /*  Fractional baud rate M divide bits 1 to 3 */
#define BITM_UART_COMFBR_DIVN                0x000007FF    /*  Fractional baud rate N divide bits 0 to 2047. */

/* -------------------------------------------------------------------------------------------------------------------------
          uart_COMCTL                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_UART_COMCTL_FORCECLKON           1            /*  Force UCLKg on */
#define BITP_UART_COMCTL_DIS                  0            /*  UART disable control */

#define BITM_UART_COMCTL_FORCECLKON          0x00000002    /*  Force UCLKg on */

#define BITM_UART_COMCTL_DIS                 0x00000001    /*  UART disable control */


/* ============================================================================================================================
        
   ============================================================================================================================ */

/* ============================================================================================================================
        beeper
   ============================================================================================================================ */
#define MOD_BEEPER_BASE                      0x40005C00            /*    */
#define MOD_BEEPER_MASK                      0x000000FF            /*    */
#define REG_BEEPER_CFG_RESET                 0x00000000            /*      Reset Value for CFG  */
#define REG_BEEPER_CFG                       0x40005C00            /*  beeper Beeper configuration */
#define REG_BEEPER_STAT_RESET                0x00000000            /*      Reset Value for STAT  */
#define REG_BEEPER_STAT                      0x40005C04            /*  beeper Beeper status */
#define REG_BEEPER_TONE_A_RESET              0x00000001            /*      Reset Value for TONE_A  */
#define REG_BEEPER_TONE_A                    0x40005C08            /*  beeper Tone A Data */
#define REG_BEEPER_TONE_B_RESET              0x00000001            /*      Reset Value for TONE_B  */
#define REG_BEEPER_TONE_B                    0x40005C0C            /*  beeper Tone B Data */

/* ============================================================================================================================
        beeper Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          beeper_CFG                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BEEPER_CFG_IRQ_SEQ_END          15            /*  Sequence end IRQ */
#define BITP_BEEPER_CFG_IRQ_SEQ_NEAR_END     14            /*  Sequence 1 cycle from end IRQ */
#define BITP_BEEPER_CFG_IRQ_TONEB_END        13            /*  Tone B end IRQ */
#define BITP_BEEPER_CFG_IRQ_TONEB_START      12            /*  Tone B start IRQ */
#define BITP_BEEPER_CFG_IRQ_TONEA_END        11            /*  Tone A end IRQ */
#define BITP_BEEPER_CFG_IRQ_TONEA_START      10            /*  Tone A start IRQ */
#define BITP_BEEPER_CFG_BEEP_EN               8            /*  Beeper Enable */
#define BITP_BEEPER_CFG_SEQ_REPEAT            0            /*  Beeper Sequence Repeat value */

#define BITM_BEEPER_CFG_IRQ_SEQ_END          0x00008000    /*  Sequence end IRQ */

#define BITM_BEEPER_CFG_IRQ_SEQ_NEAR_END     0x00004000    /*  Sequence 1 cycle from end IRQ */

#define BITM_BEEPER_CFG_IRQ_TONEB_END        0x00002000    /*  Tone B end IRQ */

#define BITM_BEEPER_CFG_IRQ_TONEB_START      0x00001000    /*  Tone B start IRQ */

#define BITM_BEEPER_CFG_IRQ_TONEA_END        0x00000800    /*  Tone A end IRQ */

#define BITM_BEEPER_CFG_IRQ_TONEA_START      0x00000400    /*  Tone A start IRQ */

#define BITM_BEEPER_CFG_BEEP_EN              0x00000100    /*  Beeper Enable */

#define BITM_BEEPER_CFG_SEQ_REPEAT           0x000000FF    /*  Beeper Sequence Repeat value */

/* -------------------------------------------------------------------------------------------------------------------------
          beeper_STAT                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BEEPER_STAT_EVT_SEQ_END         15            /*  Sequencer has ended */
#define BITP_BEEPER_STAT_EVT_SEQ_NEAR_END    14            /*  Sequencer last tone-pair has started */
#define BITP_BEEPER_STAT_EVT_TONEB_END       13            /*  Tone B has ended */
#define BITP_BEEPER_STAT_EVT_TONEB_START     12            /*  Tone B has started */
#define BITP_BEEPER_STAT_EVT_TONEA_END       11            /*  Tone A has ended */
#define BITP_BEEPER_STAT_EVT_TONEA_START     10            /*  Tone A has started */
#define BITP_BEEPER_STAT_BEEP_BUSY            8            /*  Beeper is busy */
#define BITP_BEEPER_STAT_SEQ_REMAIN           0            /*  Remaining tone-pair sequence iterations to play in SEQ mode */
#define BITM_BEEPER_STAT_EVT_SEQ_END         0x00008000    /*  Sequencer has ended */
#define BITM_BEEPER_STAT_EVT_SEQ_NEAR_END    0x00004000    /*  Sequencer last tone-pair has started */
#define BITM_BEEPER_STAT_EVT_TONEB_END       0x00002000    /*  Tone B has ended */
#define BITM_BEEPER_STAT_EVT_TONEB_START     0x00001000    /*  Tone B has started */
#define BITM_BEEPER_STAT_EVT_TONEA_END       0x00000800    /*  Tone A has ended */
#define BITM_BEEPER_STAT_EVT_TONEA_START     0x00000400    /*  Tone A has started */

#define BITM_BEEPER_STAT_BEEP_BUSY           0x00000100    /*  Beeper is busy */
#define BITM_BEEPER_STAT_SEQ_REMAIN          0x000000FF    /*  Remaining tone-pair sequence iterations to play in SEQ mode */

/* -------------------------------------------------------------------------------------------------------------------------
          beeper_TONE_A                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BEEPER_TONE_A_DISABLE           15            /*  Output disable */
#define BITP_BEEPER_TONE_A_FREQ               8            /*  Tone frequency */
#define BITP_BEEPER_TONE_A_DUR                0            /*  Tone duration */

#define BITM_BEEPER_TONE_A_DISABLE           0x00008000    /*  Output disable */

#define BITM_BEEPER_TONE_A_FREQ              0x00007F00    /*  Tone frequency */

#define BITM_BEEPER_TONE_A_DUR               0x000000FF    /*  Tone duration */

/* -------------------------------------------------------------------------------------------------------------------------
          beeper_TONE_B                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BEEPER_TONE_B_DISABLE           15            /*  Output disable */
#define BITP_BEEPER_TONE_B_FREQ               8            /*  Tone frequency */
#define BITP_BEEPER_TONE_B_DUR                0            /*  Tone duration */

#define BITM_BEEPER_TONE_B_DISABLE           0x00008000    /*  Output disable */

#define BITM_BEEPER_TONE_B_FREQ              0x00007F00    /*  Tone frequency */

#define BITM_BEEPER_TONE_B_DUR               0x000000FF    /*  Tone duration */


/* ============================================================================================================================
        
   ============================================================================================================================ */

/* ============================================================================================================================
        RNG
   ============================================================================================================================ */
#define MOD_RNG_BASE                         0x40040400            /*    */
#define MOD_RNG_MASK                         0x000000FF            /*    */
#define REG_RNG_CTL_RESET                    0x00000000            /*      Reset Value for CTL  */
#define REG_RNG_CTL                          0x40040400            /*  RNG RNG Control Register */
#define REG_RNG_LEN_RESET                    0x00003400            /*      Reset Value for LEN  */
#define REG_RNG_LEN                          0x40040404            /*  RNG RNG Sample Length Register */
#define REG_RNG_STAT_RESET                   0x00000000            /*      Reset Value for STAT  */
#define REG_RNG_STAT                         0x40040408            /*  RNG RNG Status Register */
#define REG_RNG_DATA_RESET                   0x00000000            /*      Reset Value for DATA  */
#define REG_RNG_DATA                         0x4004040C            /*  RNG RNG Data Register */
#define REG_RNG_OSCCNT_RESET                 0x00000000            /*      Reset Value for OSCCNT  */
#define REG_RNG_OSCCNT                       0x40040410            /*  RNG Oscillator Count */
#define REG_RNG_OSCDIFFn_RESET               0x00000000            /*      Reset Value for OSCDIFF[n]  */
#define REG_RNG_OSCDIFF0                     0x40040414            /*  RNG Oscillator Difference */
#define REG_RNG_OSCDIFF1                     0x40040415            /*  RNG Oscillator Difference */
#define REG_RNG_OSCDIFF2                     0x40040416            /*  RNG Oscillator Difference */
#define REG_RNG_OSCDIFF3                     0x40040417            /*  RNG Oscillator Difference */
#define REG_RNG_OSCDIFFn(i)                  (REG_RNG_OSCDIFF0 + ((i) * 1))
#define REG_RNG_OSCDIFFn_COUNT               4

/* ============================================================================================================================
        RNG Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          RNG_CTL                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RNG_CTL_SINGLE                   3            /*  Generate a single number */
#define BITP_RNG_CTL_EN                       0            /*  RNG Enable */

#define BITM_RNG_CTL_SINGLE                  0x00000008    /*  Generate a single number */

#define BITM_RNG_CTL_EN                      0x00000001    /*  RNG Enable */
#define ENUM_RNG_CTL_WORD                    0x00000000            /*  SINGLE: Buffer Word */
#define ENUM_RNG_CTL_SINGLE                  0x00000008            /*  SINGLE: Single Byte */
#define ENUM_RNG_CTL_DISABLE                 0x00000000            /*  EN: Disable the RNG */
#define ENUM_RNG_CTL_ENABLE                  0x00000001            /*  EN: Enable the RNG */

/* -------------------------------------------------------------------------------------------------------------------------
          RNG_LEN                              Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RNG_LEN_PRE                     12            /*  Prescaler for the sample counter */
#define BITP_RNG_LEN_RLD                      0            /*  Reload value for the sample counter */
#define BITM_RNG_LEN_PRE                     0x0000F000    /*  Prescaler for the sample counter */
#define BITM_RNG_LEN_RLD                     0x00000FFF    /*  Reload value for the sample counter */

/* -------------------------------------------------------------------------------------------------------------------------
          RNG_STAT                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RNG_STAT_STUCK                   1            /*  Sampled data stuck high or low */
#define BITP_RNG_STAT_RDY                     0            /*  Random number ready */
#define BITM_RNG_STAT_STUCK                  0x00000002    /*  Sampled data stuck high or low */

#define BITM_RNG_STAT_RDY                    0x00000001    /*  Random number ready */

/* -------------------------------------------------------------------------------------------------------------------------
          RNG_DATA                             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RNG_DATA_BUFF                    8            /*  Buffer for RNG data */
#define BITP_RNG_DATA_DATA                    0            /*  Value of the CRC accumulator */
#define BITM_RNG_DATA_BUFF                   0xFFFFFF00    /*  Buffer for RNG data */
#define BITM_RNG_DATA_DATA                   0x000000FF    /*  Value of the CRC accumulator */

/* -------------------------------------------------------------------------------------------------------------------------
          RNG_OSCCNT                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_RNG_OSCCNT_OSCCNT                0            /*  Oscillator count */
#define BITM_RNG_OSCCNT_OSCCNT               0x0FFFFFFF    /*  Oscillator count */


/* ============================================================================================================================
        DMA
   ============================================================================================================================ */

/* ============================================================================================================================
        dma
   ============================================================================================================================ */
#define MOD_DMA_BASE                         0x40010000            /*  DMA  */
#define MOD_DMA_MASK                         0x00000FFF            /*  DMA  */
#define REG_DMA_DMASTA_RESET                 0x00170000            /*      Reset Value for DMASTA  */
#define REG_DMA_DMASTA                       0x40010000            /*  dma DMA Status */
#define REG_DMA_DMACFG_RESET                 0x00000000            /*      Reset Value for DMACFG  */
#define REG_DMA_DMACFG                       0x40010004            /*  dma DMA Configuration */
#define REG_DMA_DMAPDBPTR_RESET              0x00000000            /*      Reset Value for DMAPDBPTR  */
#define REG_DMA_DMAPDBPTR                    0x40010008            /*  dma DMA channel primary control data base pointer */
#define REG_DMA_DMAADBPTR_RESET              0x00000200            /*      Reset Value for DMAADBPTR  */
#define REG_DMA_DMAADBPTR                    0x4001000C            /*  dma DMA channel alternate control data base pointer */
#define REG_DMA_DMASWREQ_RESET               0x00000000            /*      Reset Value for DMASWREQ  */
#define REG_DMA_DMASWREQ                     0x40010014            /*  dma DMA channel software request */
#define REG_DMA_DMARMSKSET_RESET             0x00000000            /*      Reset Value for DMARMSKSET  */
#define REG_DMA_DMARMSKSET                   0x40010020            /*  dma DMA channel request mask set */
#define REG_DMA_DMARMSKCLR_RESET             0x00000000            /*      Reset Value for DMARMSKCLR  */
#define REG_DMA_DMARMSKCLR                   0x40010024            /*  dma DMA channel request mask clear */
#define REG_DMA_DMAENSET_RESET               0x00000000            /*      Reset Value for DMAENSET  */
#define REG_DMA_DMAENSET                     0x40010028            /*  dma DMA channel enable set */
#define REG_DMA_DMAENCLR_RESET               0x00000000            /*      Reset Value for DMAENCLR  */
#define REG_DMA_DMAENCLR                     0x4001002C            /*  dma DMA channel enable clear */
#define REG_DMA_DMAALTSET_RESET              0x00000000            /*      Reset Value for DMAALTSET  */
#define REG_DMA_DMAALTSET                    0x40010030            /*  dma DMA channel primary-alternate set */
#define REG_DMA_DMAALTCLR_RESET              0x00000000            /*      Reset Value for DMAALTCLR  */
#define REG_DMA_DMAALTCLR                    0x40010034            /*  dma DMA channel primary-alternate clear */
#define REG_DMA_DMAPRISET_RESET              0x00000000            /*      Reset Value for DMAPRISET  */
#define REG_DMA_DMAPRISET                    0x40010038            /*  dma DMA channel priority set */
#define REG_DMA_DMAPRICLR_RESET              0x00000000            /*      Reset Value for DMAPRICLR  */
#define REG_DMA_DMAPRICLR                    0x4001003C            /*  dma DMA channel priority clear */
#define REG_DMA_DMAERRCHNLCLR_RESET          0x00000000            /*      Reset Value for DMAERRCHNLCLR  */
#define REG_DMA_DMAERRCHNLCLR                0x40010048            /*  dma DMA Per Channel Error Clear */
#define REG_DMA_DMAERRCLR_RESET              0x00000000            /*      Reset Value for DMAERRCLR  */
#define REG_DMA_DMAERRCLR                    0x4001004C            /*  dma DMA bus error clear */
#define REG_DMA_DMAINVALIDDESCCLR_RESET      0x00000000            /*      Reset Value for DMAINVALIDDESCCLR  */
#define REG_DMA_DMAINVALIDDESCCLR            0x40010050            /*  dma DMA Per Channel Invalid Descriptor Clear */
#define REG_DMA_DMABSSET_RESET               0x00000000            /*      Reset Value for DMABSSET  */
#define REG_DMA_DMABSSET                     0x40010800            /*  dma DMA channel bytes swap enable set */
#define REG_DMA_DMABSCLR_RESET               0x00000000            /*      Reset Value for DMABSCLR  */
#define REG_DMA_DMABSCLR                     0x40010804            /*  dma DMA channel bytes swap enable clear */
#define REG_DMA_DMASRCADSSET_RESET           0x00000000            /*      Reset Value for DMASRCADSSET  */
#define REG_DMA_DMASRCADSSET                 0x40010810            /*  dma DMA channel source address decrement enable set */
#define REG_DMA_DMASRCADCLR_RESET            0x00000000            /*      Reset Value for DMASRCADCLR  */
#define REG_DMA_DMASRCADCLR                  0x40010814            /*  dma DMA channel source address decrement enable clear */
#define REG_DMA_DMADSTADSET_RESET            0x00000000            /*      Reset Value for DMADSTADSET  */
#define REG_DMA_DMADSTADSET                  0x40010818            /*  dma DMA channel destination address decrement enable set */
#define REG_DMA_DMADSTADCLR_RESET            0x00000000            /*      Reset Value for DMADSTADCLR  */
#define REG_DMA_DMADSTADCLR                  0x4001081C            /*  dma DMA channel destination address decrement enable clear */
#define REG_DMA_DMAREVID_RESET               0x00000002            /*      Reset Value for DMAREVID  */
#define REG_DMA_DMAREVID                     0x40010FE0            /*  dma DMA Controller Revision ID */

/* ============================================================================================================================
        dma Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMASTA                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMASTA_CHNLSM1              16            /*  Number of available DMA channels minus 1 */
#define BITP_DMA_DMASTA_STATE                 4            /*  Current state of DMA controller */
#define BITP_DMA_DMASTA_MENABLE               0            /*  Enable status of the controller */
#define BITM_DMA_DMASTA_CHNLSM1              0x001F0000    /*  Number of available DMA channels minus 1 */

#define BITM_DMA_DMASTA_STATE                0x000000F0    /*  Current state of DMA controller */

#define BITM_DMA_DMASTA_MENABLE              0x00000001    /*  Enable status of the controller */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMACFG                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMACFG_MENABLE               0            /*  Controller enable */

#define BITM_DMA_DMACFG_MENABLE              0x00000001    /*  Controller enable */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMASWREQ                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMASWREQ_CHSWREQ             0            /*  Generate software request */
#define BITM_DMA_DMASWREQ_CHSWREQ            0x00FFFFFF    /*  Generate software request */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMARMSKSET                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMARMSKSET_CHREQMSET         0            /*  Mask requests from DMA channels */
#define BITM_DMA_DMARMSKSET_CHREQMSET        0x00FFFFFF    /*  Mask requests from DMA channels */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMARMSKCLR                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMARMSKCLR_CHREQMCLR         0            /*  Clear REQ_MASK_SET bits in DMARMSKSET */
#define BITM_DMA_DMARMSKCLR_CHREQMCLR        0x00FFFFFF    /*  Clear REQ_MASK_SET bits in DMARMSKSET */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAENSET                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAENSET_CHENSET             0            /*  Enable DMA channels */
#define BITM_DMA_DMAENSET_CHENSET            0x00FFFFFF    /*  Enable DMA channels */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAENCLR                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAENCLR_CHENCLR             0            /*  Disable DMA channels */
#define BITM_DMA_DMAENCLR_CHENCLR            0x00FFFFFF    /*  Disable DMA channels */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAALTSET                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAALTSET_CHPRIALTSET        0            /*  Control struct status / select alt struct */
#define BITM_DMA_DMAALTSET_CHPRIALTSET       0x00FFFFFF    /*  Control struct status / select alt struct */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAALTCLR                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAALTCLR_CHPRIALTCLR        0            /*  Select primary data struct */
#define BITM_DMA_DMAALTCLR_CHPRIALTCLR       0x00FFFFFF    /*  Select primary data struct */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAPRISET                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAPRISET_CHPRISET           0            /*  Configure channel for high priority */
#define BITM_DMA_DMAPRISET_CHPRISET          0x00FFFFFF    /*  Configure channel for high priority */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAPRICLR                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAPRICLR_CHPRICLR           0            /*  Configure channel for default priority level */
#define BITM_DMA_DMAPRICLR_CHPRICLR          0x00FFFFFF    /*  Configure channel for default priority level */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAERRCHNLCLR                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAERRCHNLCLR_CHNL_ERR_CLR   0            /*  Per channel Bus error status/ Per channel bus error clear */
#define BITM_DMA_DMAERRCHNLCLR_CHNL_ERR_CLR  0x00FFFFFF    /*  Per channel Bus error status/ Per channel bus error clear */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAERRCLR                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAERRCLR_ERRCLR             0            /*  Bus error status */
#define BITM_DMA_DMAERRCLR_ERRCLR            0x00FFFFFF    /*  Bus error status */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAINVALIDDESCCLR                Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAINVALIDDESCCLR_CHNL_INVALID_CLR  0            /*  Per channel Invalid Descriptor status/ Per channel Invalid descriptor status clear */
#define BITM_DMA_DMAINVALIDDESCCLR_CHNL_INVALID_CLR 0x00FFFFFF    /*  Per channel Invalid Descriptor status/ Per channel Invalid descriptor status clear */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMABSSET                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMABSSET_CHBSWAPSET          0            /*  Byte swap status */
#define BITM_DMA_DMABSSET_CHBSWAPSET         0x00FFFFFF    /*  Byte swap status */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMABSCLR                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMABSCLR_CHBSWAPCLR          0            /*  Disable byte swap */
#define BITM_DMA_DMABSCLR_CHBSWAPCLR         0x00FFFFFF    /*  Disable byte swap */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMASRCADSSET                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMASRCADSSET_CHSRCADRDECSET  0            /*  Source Address decrement status / configure Source address decrement */
#define BITM_DMA_DMASRCADSSET_CHSRCADRDECSET 0x00FFFFFF    /*  Source Address decrement status / configure Source address decrement */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMASRCADCLR                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMASRCADCLR_CHADRDECCLR      0            /*  Disable source address decrement */
#define BITM_DMA_DMASRCADCLR_CHADRDECCLR     0x00FFFFFF    /*  Disable source address decrement */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMADSTADSET                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMADSTADSET_CHDSTADRDECSET   0            /*  Destination Address decrement status / configure destination address decrement */
#define BITM_DMA_DMADSTADSET_CHDSTADRDECSET  0x00FFFFFF    /*  Destination Address decrement status / configure destination address decrement */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMADSTADCLR                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMADSTADCLR_CHADRDECCLR      0            /*  Disable destination address decrement */
#define BITM_DMA_DMADSTADCLR_CHADRDECCLR     0x00FFFFFF    /*  Disable destination address decrement */

/* -------------------------------------------------------------------------------------------------------------------------
          dma_DMAREVID                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DMA_DMAREVID_DMAREVID            0            /*  DMA Controller revision ID */
#define BITM_DMA_DMAREVID_DMAREVID           0x000000FF    /*  DMA Controller revision ID */


/* ============================================================================================================================
        Flash Controller
   ============================================================================================================================ */

/* ============================================================================================================================
        FLASH
   ============================================================================================================================ */
#define MOD_FLASH_BASE                       0x40018000            /*  Flash Controller  */
#define MOD_FLASH_MASK                       0x000000FF            /*  Flash Controller  */
#define REG_FLASH_STAT_RESET                 0x00000000            /*      Reset Value for STAT  */
#define REG_FLASH_STAT                       0x40018000            /*  FLASH Status register */
#define REG_FLASH_IEN_RESET                  0x00000060            /*      Reset Value for IEN  */
#define REG_FLASH_IEN                        0x40018004            /*  FLASH Interrupt Enable register */
#define REG_FLASH_CMD_RESET                  0x00000000            /*      Reset Value for CMD  */
#define REG_FLASH_CMD                        0x40018008            /*  FLASH Command register */
#define REG_FLASH_KH_ADDR_RESET              0x00000000            /*      Reset Value for KH_ADDR  */
#define REG_FLASH_KH_ADDR                    0x4001800C            /*  FLASH Key-hole address */
#define REG_FLASH_KH_DATA0_RESET             0xFFFFFFFF            /*      Reset Value for KH_DATA0  */
#define REG_FLASH_KH_DATA0                   0x40018010            /*  FLASH Key-hole Data 0: lower word to be written on Key-hole write command */
#define REG_FLASH_KH_DATA1_RESET             0xFFFFFFFF            /*      Reset Value for KH_DATA1  */
#define REG_FLASH_KH_DATA1                   0x40018014            /*  FLASH Key-hole Data 1: upper word to be written on Key-hole write command */
#define REG_FLASH_PAGE_ADDR0_RESET           0x00000000            /*      Reset Value for PAGE_ADDR0  */
#define REG_FLASH_PAGE_ADDR0                 0x40018018            /*  FLASH Lower page address */
#define REG_FLASH_PAGE_ADDR1_RESET           0x00000000            /*      Reset Value for PAGE_ADDR1  */
#define REG_FLASH_PAGE_ADDR1                 0x4001801C            /*  FLASH Upper page address */
#define REG_FLASH_KEY_RESET                  0x00000000            /*      Reset Value for KEY  */
#define REG_FLASH_KEY                        0x40018020            /*  FLASH Flash Key register. */
#define REG_FLASH_WR_ABORT_ADDR              0x40018024            /*  FLASH Write abort address register */
#define REG_FLASH_WRPROT_RESET               0xFFFFFFFF            /*      Reset Value for WRPROT  */
#define REG_FLASH_WRPROT                     0x40018028            /*  FLASH Write protection register for flash */
#define REG_FLASH_SIGNATURE                  0x4001802C            /*  FLASH Signature register */
#define REG_FLASH_UCFG_RESET                 0x00000000            /*      Reset Value for UCFG  */
#define REG_FLASH_UCFG                       0x40018030            /*  FLASH User configuration register */
#define REG_FLASH_TIME_PARAM0_RESET          0xBB956950            /*      Reset Value for TIME_PARAM0  */
#define REG_FLASH_TIME_PARAM0                0x40018034            /*  FLASH Time parameter register 0 */
#define REG_FLASH_TIME_PARAM1_RESET          0x00000004            /*      Reset Value for TIME_PARAM1  */
#define REG_FLASH_TIME_PARAM1                0x40018038            /*  FLASH Time parameter register 1 */
#define REG_FLASH_ABORT_EN_LO_RESET          0x00000000            /*      Reset Value for ABORT_EN_LO  */
#define REG_FLASH_ABORT_EN_LO                0x4001803C            /*  FLASH Lower bits of the sys irq abort enable register. */
#define REG_FLASH_ABORT_EN_HI_RESET          0x00000000            /*      Reset Value for ABORT_EN_HI  */
#define REG_FLASH_ABORT_EN_HI                0x40018040            /*  FLASH Upper bits of the sys irq abort enable register. */
#define REG_FLASH_ECC_CFG_RESET              0x00000002            /*      Reset Value for ECC_CFG  */
#define REG_FLASH_ECC_CFG                    0x40018044            /*  FLASH ECC enable/disable and error responses */
#define REG_FLASH_ECC_ADDR_RESET             0x00000000            /*      Reset Value for ECC_ADDR  */
#define REG_FLASH_ECC_ADDR                   0x40018048            /*  FLASH Address of recent ECC error/correction which generated an IRQ */
#define REG_FLASH_ADI_POR_CFG_RESET          0x00000030            /*      Reset Value for ADI_POR_CFG  */
#define REG_FLASH_ADI_POR_CFG                0x4001804C            /*  FLASH ADI flash configuration register */
#define REG_FLASH_ADI_POR_SEC_RESET          0x00000000            /*      Reset Value for ADI_POR_SEC  */
#define REG_FLASH_ADI_POR_SEC                0x40018050            /*  FLASH ADI flash security register */
#define REG_FLASH_ADI_VOL_CFG_RESET          0x00000001            /*      Reset Value for ADI_VOL_CFG  */
#define REG_FLASH_ADI_VOL_CFG                0x40018054            /*  FLASH ADI flash configuration register */

/* ============================================================================================================================
        FLASH Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_STAT                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_STAT_CACHE_SRAM_PARITY_ERR 29            /*  SRAM parity errors in Cache Controller */
#define BITP_FLASH_STAT_ECC_DCODE            27            /*  DCode AHB error/correction status */
#define BITP_FLASH_STAT_ECC_ICODE            25            /*  ICode AHB error/correction status */
#define BITP_FLASH_STAT_ECCERRCNT            17            /*  ECC error counter */
#define BITP_FLASH_STAT_ECCINFOSIGN          15            /*  ECC error during initialization */
#define BITP_FLASH_STAT_INIT                 14            /*  Flash controller initialization in progress */
#define BITP_FLASH_STAT_SIGNERR              13            /*  Signature check failure during initialization */
#define BITP_FLASH_STAT_OVERLAP              11            /*  Overlapping Command */
#define BITP_FLASH_STAT_ECCRDERR              9            /*  ECC interrupt cause */
#define BITP_FLASH_STAT_ECCERRCMD             7            /*  ECC errors detected during SIGN command */
#define BITP_FLASH_STAT_SLEEPING              6            /*  Flash array is in low power (sleep) mode */
#define BITP_FLASH_STAT_CMDFAIL               4            /*  Provides feedback on command success/failure and identifies cause of failure (if any) */
#define BITP_FLASH_STAT_WRALCOMP              3            /*  Write almost complete */
#define BITP_FLASH_STAT_CMDCOMP               2            /*  Command complete */
#define BITP_FLASH_STAT_WRCLOSE               1            /*  Keyhole registers closed */
#define BITP_FLASH_STAT_CMDBUSY               0            /*  Command busy */
#define BITM_FLASH_STAT_CACHE_SRAM_PARITY_ERR 0x20000000    /*  SRAM parity errors in Cache Controller */

#define BITM_FLASH_STAT_ECC_DCODE            0x18000000    /*  DCode AHB error/correction status */

#define BITM_FLASH_STAT_ECC_ICODE            0x06000000    /*  ICode AHB error/correction status */
#define BITM_FLASH_STAT_ECCERRCNT            0x000E0000    /*  ECC error counter */

#define BITM_FLASH_STAT_ECCINFOSIGN          0x00018000    /*  ECC error during initialization */
#define BITM_FLASH_STAT_INIT                 0x00004000    /*  Flash controller initialization in progress */
#define BITM_FLASH_STAT_SIGNERR              0x00002000    /*  Signature check failure during initialization */
#define BITM_FLASH_STAT_OVERLAP              0x00000800    /*  Overlapping Command */

#define BITM_FLASH_STAT_ECCRDERR             0x00000600    /*  ECC interrupt cause */

#define BITM_FLASH_STAT_ECCERRCMD            0x00000180    /*  ECC errors detected during SIGN command */
#define BITM_FLASH_STAT_SLEEPING             0x00000040    /*  Flash array is in low power (sleep) mode */

#define BITM_FLASH_STAT_CMDFAIL              0x00000030    /*  Provides feedback on command success/failure and identifies cause of failure (if any) */
#define BITM_FLASH_STAT_WRALCOMP             0x00000008    /*  Write almost complete */
#define BITM_FLASH_STAT_CMDCOMP              0x00000004    /*  Command complete */
#define BITM_FLASH_STAT_WRCLOSE              0x00000002    /*  Keyhole registers closed */
#define BITM_FLASH_STAT_CMDBUSY              0x00000001    /*  Command busy */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_IEN                            Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_IEN_ECC_ERROR              6            /*  Control whether to generate bus errors, interrupts, or neither in response to ECC Error events */
#define BITP_FLASH_IEN_ECC_CORRECT            4            /*  Control whether to generate bus errors, interrupts, or neither in response to ECC Correction events */
#define BITP_FLASH_IEN_CMDFAIL                2            /*  Command fail interrupt enable */
#define BITP_FLASH_IEN_WRALCMPLT              1            /*  Write almost complete interrupt enable */
#define BITP_FLASH_IEN_CMDCMPLT               0            /*  Command complete interrupt enable */

#define BITM_FLASH_IEN_ECC_ERROR             0x000000C0    /*  Control whether to generate bus errors, interrupts, or neither in response to ECC Error events */

#define BITM_FLASH_IEN_ECC_CORRECT           0x00000030    /*  Control whether to generate bus errors, interrupts, or neither in response to ECC Correction events */
#define BITM_FLASH_IEN_CMDFAIL               0x00000004    /*  Command fail interrupt enable */
#define BITM_FLASH_IEN_WRALCMPLT             0x00000002    /*  Write almost complete interrupt enable */
#define BITM_FLASH_IEN_CMDCMPLT              0x00000001    /*  Command complete interrupt enable */
#define ENUM_FLASH_IEN_NONE_ERR              0x00000000            /*  ECC_ERROR: Do not generate a response to ECC events */
#define ENUM_FLASH_IEN_BUS_ERR_ERR           0x00000040            /*  ECC_ERROR: Generate Bus Errors in response to ECC events */
#define ENUM_FLASH_IEN_IRQ_ERR               0x00000080            /*  ECC_ERROR: Generate IRQs in response to ECC events */
#define ENUM_FLASH_IEN_NONE_COR              0x00000000            /*  ECC_CORRECT: Do not generate a response to ECC events */
#define ENUM_FLASH_IEN_BUS_ERR_COR           0x00000010            /*  ECC_CORRECT: Generate Bus Errors in response to ECC events */
#define ENUM_FLASH_IEN_IRQ_COR               0x00000020            /*  ECC_CORRECT: Generate IRQs in response to ECC events */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CMD                            Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CMD_COMMAND                0            /*  Commands */

#define BITM_FLASH_CMD_COMMAND               0x0000000F    /*  Commands */
#define ENUM_FLASH_CMD_IDLE                  0x00000000            /*  COMMAND: IDLE */
#define ENUM_FLASH_CMD_ABORT                 0x00000001            /*  COMMAND: ABORT */
#define ENUM_FLASH_CMD_SLEEP                 0x00000002            /*  COMMAND: Requests flash to enter Sleep mode */
#define ENUM_FLASH_CMD_SIGN                  0x00000003            /*  COMMAND: SIGN */
#define ENUM_FLASH_CMD_WRITE                 0x00000004            /*  COMMAND: WRITE */
#define ENUM_FLASH_CMD_BLANK_CHECK           0x00000005            /*  COMMAND: Checks all of User Space; fails if any bits in user space are cleared */
#define ENUM_FLASH_CMD_ERASEPAGE             0x00000006            /*  COMMAND: ERASEPAGE */
#define ENUM_FLASH_CMD_MASSERASE             0x00000007            /*  COMMAND: MASSERASE */
#define ENUM_FLASH_CMD_MASSERASE_INFO        0x00000008            /*  COMMAND: MASSERASE_INFO */
#define ENUM_FLASH_CMD_READ                  0x00000009            /*  COMMAND: READ (test-mode read) */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_KH_ADDR                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_KH_ADDR_KH_ADDR            3            /*  Flash key-hole write access address */
#define BITM_FLASH_KH_ADDR_KH_ADDR           0x0007FFF8    /*  Flash key-hole write access address */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_PAGE_ADDR0                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_PAGE_ADDR0_PAGE_ADDR0     10
#define BITM_FLASH_PAGE_ADDR0_PAGE_ADDR0     0x0007FC00

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_PAGE_ADDR1                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_PAGE_ADDR1_PAGE_ADDR1     10
#define BITM_FLASH_PAGE_ADDR1_PAGE_ADDR1     0x0007FC00

#define ENUM_FLASH_KEY_USERKEY               0x676C7565            /*  KEY: USERKEY */
#define ENUM_FLASH_KEY_ADIKEY                0xCE953B82            /*  KEY: ADIKEY */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_UCFG                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_UCFG_AUTOINCEN             1            /*  Auto address increment for Key hole access. */
#define BITP_FLASH_UCFG_KHDMAEN               0            /*  Key-Hole DMA enable. */
#define BITM_FLASH_UCFG_AUTOINCEN            0x00000002    /*  Auto address increment for Key hole access. */
#define BITM_FLASH_UCFG_KHDMAEN              0x00000001    /*  Key-Hole DMA enable. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_TIME_PARAM0                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_TIME_PARAM0_TNVH1         28            /*  NVSTR Hold time during Mass Erase */
#define BITP_FLASH_TIME_PARAM0_TERASE        24            /*  Erase Time */
#define BITP_FLASH_TIME_PARAM0_TRCV          20            /*  Recovery time */
#define BITP_FLASH_TIME_PARAM0_TNVH          16            /*  NVSTR Hold time */
#define BITP_FLASH_TIME_PARAM0_TPROG         12            /*  Program time */
#define BITP_FLASH_TIME_PARAM0_TPGS           8            /*  NVSTR to Program setup time */
#define BITP_FLASH_TIME_PARAM0_TNVS           4            /*  PROG/ERASE to NVSTR setup time */
#define BITP_FLASH_TIME_PARAM0_DIVREFCLK      0            /*  Divide Reference Clock (by 2) */
#define BITM_FLASH_TIME_PARAM0_TNVH1         0xF0000000    /*  NVSTR Hold time during Mass Erase */
#define BITM_FLASH_TIME_PARAM0_TERASE        0x0F000000    /*  Erase Time */
#define BITM_FLASH_TIME_PARAM0_TRCV          0x00F00000    /*  Recovery time */
#define BITM_FLASH_TIME_PARAM0_TNVH          0x000F0000    /*  NVSTR Hold time */
#define BITM_FLASH_TIME_PARAM0_TPROG         0x0000F000    /*  Program time */
#define BITM_FLASH_TIME_PARAM0_TPGS          0x00000F00    /*  NVSTR to Program setup time */
#define BITM_FLASH_TIME_PARAM0_TNVS          0x000000F0    /*  PROG/ERASE to NVSTR setup time */
#define BITM_FLASH_TIME_PARAM0_DIVREFCLK     0x00000001    /*  Divide Reference Clock (by 2) */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_TIME_PARAM1                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_TIME_PARAM1_TWK            0            /*  Wake up time */
#define BITM_FLASH_TIME_PARAM1_TWK           0x0000000F    /*  Wake up time */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_ECC_CFG                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_ECC_CFG_POINTER            8            /*  ECC start page pointer (user should write bits [31:8] of the start page address into bits [31:8] of this register) */
#define BITP_FLASH_ECC_CFG_ECCENINFO          1            /*  Info space ECC Enable bit */
#define BITP_FLASH_ECC_CFG_ECCEN              0            /*  ECC Enable */
#define BITM_FLASH_ECC_CFG_POINTER           0xFFFFFF00    /*  ECC start page pointer (user should write bits [31:8] of the start page address into bits [31:8] of this register) */
#define BITM_FLASH_ECC_CFG_ECCENINFO         0x00000002    /*  Info space ECC Enable bit */
#define BITM_FLASH_ECC_CFG_ECCEN             0x00000001    /*  ECC Enable */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_ECC_ADDR                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_ECC_ADDR_ECC_ADDR          0
#define BITM_FLASH_ECC_ADDR_ECC_ADDR         0x0007FFFF

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_ADI_POR_CFG                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_ADI_POR_CFG_CURWAITSTATES  8            /*  Current wait states[2:0] */
#define BITP_FLASH_ADI_POR_CFG_AVAIL_SIZE     4            /*  Indicates what portion of flash USER space is made available to the user */
#define BITP_FLASH_ADI_POR_CFG_PRFETCHDIS     3            /*  Disable the prefetch buffer */
#define BITP_FLASH_ADI_POR_CFG_WAITSTATES     0            /*  Number of wait states to access flash. */
#define BITM_FLASH_ADI_POR_CFG_CURWAITSTATES 0x00000700    /*  Current wait states[2:0] */
#define BITM_FLASH_ADI_POR_CFG_AVAIL_SIZE    0x00000030    /*  Indicates what portion of flash USER space is made available to the user */
#define BITM_FLASH_ADI_POR_CFG_PRFETCHDIS    0x00000008    /*  Disable the prefetch buffer */
#define BITM_FLASH_ADI_POR_CFG_WAITSTATES    0x00000007    /*  Number of wait states to access flash. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_ADI_POR_SEC                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_ADI_POR_SEC_SECURE         0            /*  Set this bit to prevent read or write access to User Space (sticky when set) */
#define BITM_FLASH_ADI_POR_SEC_SECURE        0x00000001    /*  Set this bit to prevent read or write access to User Space (sticky when set) */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_ADI_VOL_CFG                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_ADI_VOL_CFG_INFO_REMAP     0            /*  Alias the info space to the base address of user space */
#define BITM_FLASH_ADI_VOL_CFG_INFO_REMAP    0x00000001    /*  Alias the info space to the base address of user space */


/* ============================================================================================================================
        Cache Controller
   ============================================================================================================================ */

/* ============================================================================================================================
        FLASH_CACHE
   ============================================================================================================================ */
#define MOD_FLASH_CACHE_BASE                 0x40018058            /*  Cache Controller  */
#define MOD_FLASH_CACHE_MASK                 0x000000FF            /*  Cache Controller  */
#define REG_FLASH_CACHE_CACHESTAT_RESET      0x00000000            /*      Reset Value for CACHESTAT  */
#define REG_FLASH_CACHE_CACHESTAT            0x40018058            /*  FLASH_CACHE Cache Status register */
#define REG_FLASH_CACHE_CACHESETUP_RESET     0x00000000            /*      Reset Value for CACHESETUP  */
#define REG_FLASH_CACHE_CACHESETUP           0x4001805C            /*  FLASH_CACHE Cache Setup register */
#define REG_FLASH_CACHE_CACHEKEY_RESET       0x00000000            /*      Reset Value for CACHEKEY  */
#define REG_FLASH_CACHE_CACHEKEY             0x40018060            /*  FLASH_CACHE Cache Key register */
#define REG_FLASH_CACHE_CACHETMSETUP_RESET   0x00000000            /*      Reset Value for CACHETMSETUP  */
#define REG_FLASH_CACHE_CACHETMSETUP         0x40018064            /*  FLASH_CACHE Cache Test Setup Register */
#define REG_FLASH_CACHE_CACHETMSETADDR_RESET 0x00000000            /*      Reset Value for CACHETMSETADDR  */
#define REG_FLASH_CACHE_CACHETMSETADDR       0x40018068            /*  FLASH_CACHE Cache Set Address */
#define REG_FLASH_CACHE_CACHETMTAG           0x4001806C            /*  FLASH_CACHE LRU, Valid bits and Tags for Way 0 and 1 */
#define REG_FLASH_CACHE_CACHETMD0LOW         0x40018070            /*  FLASH_CACHE LSW of Data for Way 0 */
#define REG_FLASH_CACHE_CACHETMD0HIGH        0x40018074            /*  FLASH_CACHE MSW of Data for Way 0 */
#define REG_FLASH_CACHE_CACHETMD1LOW         0x40018078            /*  FLASH_CACHE LSW of Data for Way 1 */
#define REG_FLASH_CACHE_CACHETMD1HIGH        0x4001807C            /*  FLASH_CACHE MSW of Data for Way 1 */
#define REG_FLASH_CACHE_CACHEMISSCNTR_RESET  0x00000000            /*      Reset Value for CACHEMISSCNTR  */
#define REG_FLASH_CACHE_CACHEMISSCNTR        0x40018080            /*  FLASH_CACHE Cache Miss Counter */
#define REG_FLASH_CACHE_ICACHELASTADDR       0x40018084            /*  FLASH_CACHE Instruction Cache Last Address */
#define REG_FLASH_CACHE_DCACHELASTADDR       0x40018088            /*  FLASH_CACHE Data Cache Last Address */

/* ============================================================================================================================
        FLASH_CACHE Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_CACHESTAT                Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_CACHESTAT_DCACHE_ALLOWTMACCESS 18            /*  If this bit is set then TestMode accesses to D-Cache memory through APB interface are allowed. */
#define BITP_FLASH_CACHE_CACHESTAT_DCACHE_CACHELOCKSTATUS 17            /*  This bit is set when D-Cache is locked and cleared when D-cache is unlocked. */
#define BITP_FLASH_CACHE_CACHESTAT_DCACHE_CACHEENABLESTATUS 16            /*  If this bit is set then D-Cache is enabled and when cleared D-Cache is disabled. */
#define BITP_FLASH_CACHE_CACHESTAT_ICACHE_ALLOWTMACCESS  2            /*  If this bit is set then TestMode accesses to I-Cache memory through APB interface are allowed. */
#define BITP_FLASH_CACHE_CACHESTAT_ICACHE_CACHELOCKSTATUS  1            /*  This bit is set when I-Cache is locked and cleared when I-cache is unlocked. */
#define BITP_FLASH_CACHE_CACHESTAT_ICACHE_CACHEENABLESTATUS  0            /*  If this bit is set then I-Cache is enabled and when cleared I-Cache is disabled. */
#define BITM_FLASH_CACHE_CACHESTAT_DCACHE_ALLOWTMACCESS 0x00040000    /*  If this bit is set then TestMode accesses to D-Cache memory through APB interface are allowed. */
#define BITM_FLASH_CACHE_CACHESTAT_DCACHE_CACHELOCKSTATUS 0x00020000    /*  This bit is set when D-Cache is locked and cleared when D-cache is unlocked. */
#define BITM_FLASH_CACHE_CACHESTAT_DCACHE_CACHEENABLESTATUS 0x00010000    /*  If this bit is set then D-Cache is enabled and when cleared D-Cache is disabled. */
#define BITM_FLASH_CACHE_CACHESTAT_ICACHE_ALLOWTMACCESS 0x00000004    /*  If this bit is set then TestMode accesses to I-Cache memory through APB interface are allowed. */
#define BITM_FLASH_CACHE_CACHESTAT_ICACHE_CACHELOCKSTATUS 0x00000002    /*  This bit is set when I-Cache is locked and cleared when I-cache is unlocked. */
#define BITM_FLASH_CACHE_CACHESTAT_ICACHE_CACHEENABLESTATUS 0x00000001    /*  If this bit is set then I-Cache is enabled and when cleared I-Cache is disabled. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_CACHESETUP               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_CACHESETUP_DCACHEHITBUFENABLE_MMR 19            /*  If this bit is set, then temporary buffer is used to store the data from data memory. If cleared, hit is taken directly from data memory. */
#define BITP_FLASH_CACHE_CACHESETUP_DCACHEBUFDISABLE_MMR 18            /*  If this bit is set, then for every AHB access, hit from Temporary Buffer is not checked. Every access on DCODE AHB will lead to new access on Flash. */
#define BITP_FLASH_CACHE_CACHESETUP_DCACHELOCK_MMR 17            /*  If this bit is set, then D-cache contents are locked. Any new misses won't be replaced in D-Cache. */
#define BITP_FLASH_CACHE_CACHESETUP_DCACHEENABLE_MMR 16            /*  If this bit set, then D-Cache is enabled for AHB accesses. If 0, then D-cache is disabled, and all AHB accesses will be via Flash memory. */
#define BITP_FLASH_CACHE_CACHESETUP_ICACHEBUFDISABLE_MMR  2            /*  If this bit is set, then for every AHB access, hit from Temporary Buffer is not checked. Every access on ICODE AHB will lead to new access on Flash. */
#define BITP_FLASH_CACHE_CACHESETUP_ICACHELOCK_MMR  1            /*  If this bit is set, then I-cache contents are locked. Any new misses won't be replaced in I-Cache. */
#define BITP_FLASH_CACHE_CACHESETUP_ICACHEENABLE_MMR  0            /*  If this bit set, then I-Cache is enabled for AHB accesses. If 0, then I-cache is disabled, and all AHB accesses will be via Flash memory. */
#define BITM_FLASH_CACHE_CACHESETUP_DCACHEHITBUFENABLE_MMR 0x00080000    /*  If this bit is set, then temporary buffer is used to store the data from data memory. If cleared, hit is taken directly from data memory. */
#define BITM_FLASH_CACHE_CACHESETUP_DCACHEBUFDISABLE_MMR 0x00040000    /*  If this bit is set, then for every AHB access, hit from Temporary Buffer is not checked. Every access on DCODE AHB will lead to new access on Flash. */
#define BITM_FLASH_CACHE_CACHESETUP_DCACHELOCK_MMR 0x00020000    /*  If this bit is set, then D-cache contents are locked. Any new misses won't be replaced in D-Cache. */
#define BITM_FLASH_CACHE_CACHESETUP_DCACHEENABLE_MMR 0x00010000    /*  If this bit set, then D-Cache is enabled for AHB accesses. If 0, then D-cache is disabled, and all AHB accesses will be via Flash memory. */
#define BITM_FLASH_CACHE_CACHESETUP_ICACHEBUFDISABLE_MMR 0x00000004    /*  If this bit is set, then for every AHB access, hit from Temporary Buffer is not checked. Every access on ICODE AHB will lead to new access on Flash. */
#define BITM_FLASH_CACHE_CACHESETUP_ICACHELOCK_MMR 0x00000002    /*  If this bit is set, then I-cache contents are locked. Any new misses won't be replaced in I-Cache. */
#define BITM_FLASH_CACHE_CACHESETUP_ICACHEENABLE_MMR 0x00000001    /*  If this bit set, then I-Cache is enabled for AHB accesses. If 0, then I-cache is disabled, and all AHB accesses will be via Flash memory. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_CACHETMSETUP             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_CACHETMSETUP_DCACHE_START_MISS_CNTR 18            /*  Setting this bit clears the Data Cache Miss Counter. And then starts counting number reads serviced by Flash controller. */
#define BITP_FLASH_CACHE_CACHETMSETUP_DCACHE_STOP_MISS_CNTR 17            /*  Setting this bit stops the Data Cache Miss Counter. Value of Miss Count is available until it is re-started. */
#define BITP_FLASH_CACHE_CACHETMSETUP_DCACHETMACCESS_MMR 16            /*  This bit must be set to 1'b1, so that TestMode accesses to D-Cache memory through APB interface are allowed. */
#define BITP_FLASH_CACHE_CACHETMSETUP_ICACHE_START_MISS_CNTR  2            /*  Setting this bit clears the Instruction Cache Miss Counter. And then starts counting number reads serviced by Flash controller. Single Miss may lead 2 or 4 reads to flash controller depending on Cache line size (128 or 256 respectively) */
#define BITP_FLASH_CACHE_CACHETMSETUP_ICACHE_STOP_MISS_CNTR  1            /*  Setting this bit stops the Instruction Cache Miss Counter. Value of Miss Count is available until it is re-started. */
#define BITP_FLASH_CACHE_CACHETMSETUP_ICACHETMACCESS_MMR  0            /*  This bit must be set to 1'b1, so that TestMode accesses to I-Cache memory through APB interface are allowed. */
#define BITM_FLASH_CACHE_CACHETMSETUP_DCACHE_START_MISS_CNTR 0x00040000    /*  Setting this bit clears the Data Cache Miss Counter. And then starts counting number reads serviced by Flash controller. */
#define BITM_FLASH_CACHE_CACHETMSETUP_DCACHE_STOP_MISS_CNTR 0x00020000    /*  Setting this bit stops the Data Cache Miss Counter. Value of Miss Count is available until it is re-started. */
#define BITM_FLASH_CACHE_CACHETMSETUP_DCACHETMACCESS_MMR 0x00010000    /*  This bit must be set to 1'b1, so that TestMode accesses to D-Cache memory through APB interface are allowed. */
#define BITM_FLASH_CACHE_CACHETMSETUP_ICACHE_START_MISS_CNTR 0x00000004    /*  Setting this bit clears the Instruction Cache Miss Counter. And then starts counting number reads serviced by Flash controller. Single Miss may lead 2 or 4 reads to flash controller depending on Cache line size (128 or 256 respectively) */
#define BITM_FLASH_CACHE_CACHETMSETUP_ICACHE_STOP_MISS_CNTR 0x00000002    /*  Setting this bit stops the Instruction Cache Miss Counter. Value of Miss Count is available until it is re-started. */
#define BITM_FLASH_CACHE_CACHETMSETUP_ICACHETMACCESS_MMR 0x00000001    /*  This bit must be set to 1'b1, so that TestMode accesses to I-Cache memory through APB interface are allowed. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_CACHETMSETADDR           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_CACHETMSETADDR_CACHESETADDR  0            /*  This register is used to specific the set address of the Cache to be accessed for read/write. Set MSB bit (31) for accessing D-Cache else I-Cache is accessed through this mode. */
#define BITM_FLASH_CACHE_CACHETMSETADDR_CACHESETADDR 0x0000003F    /*  This register is used to specific the set address of the Cache to be accessed for read/write. Set MSB bit (31) for accessing D-Cache else I-Cache is accessed through this mode. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_CACHETMTAG               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_CACHETMTAG_CACHETAG  0            /*  When read the controller will return {LRU,Valid1,Tag1,Valid0,Tag0} for the set address provided in CacheSetAddr register. When write to this register occurs then {LRU,Valid1,Tag1,Valid0,Tag0} will be updated for the set address provided in CacheSetAddr register. */
#define BITM_FLASH_CACHE_CACHETMTAG_CACHETAG 0x7FFFFFFF    /*  When read the controller will return {LRU,Valid1,Tag1,Valid0,Tag0} for the set address provided in CacheSetAddr register. When write to this register occurs then {LRU,Valid1,Tag1,Valid0,Tag0} will be updated for the set address provided in CacheSetAddr register. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_CACHEMISSCNTR            Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_CACHEMISSCNTR_DCACHEMISSCOUNT 16            /*  Number of reads issued by Data Cache to flash counter from the point at which it was started via DCache_Start_Miss_Cntr. Saturates once it reaches 16'hFFFF. */
#define BITP_FLASH_CACHE_CACHEMISSCNTR_ICACHEMISSCOUNT  0            /*  Number of reads issued by Instruction Cache to flash counter till that point from the point at which it was started via ICache_Start_Miss_Cntr. Saturates once it reaches 16'hFFFF. */
#define BITM_FLASH_CACHE_CACHEMISSCNTR_DCACHEMISSCOUNT 0xFFFF0000    /*  Number of reads issued by Data Cache to flash counter from the point at which it was started via DCache_Start_Miss_Cntr. Saturates once it reaches 16'hFFFF. */
#define BITM_FLASH_CACHE_CACHEMISSCNTR_ICACHEMISSCOUNT 0x0000FFFF    /*  Number of reads issued by Instruction Cache to flash counter till that point from the point at which it was started via ICache_Start_Miss_Cntr. Saturates once it reaches 16'hFFFF. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_ICACHELASTADDR           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_ICACHELASTADDR_ISATURATED_ADDR  0            /*  Stores the flash address for which the Instruction Miss counter saturated. */
#define BITM_FLASH_CACHE_ICACHELASTADDR_ISATURATED_ADDR 0x0007FFFF    /*  Stores the flash address for which the Instruction Miss counter saturated. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_CACHE_DCACHELASTADDR           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_CACHE_DCACHELASTADDR_DSATURATED_ADDR  0            /*  Stores the flash address for which the Data Miss counter saturated. */
#define BITM_FLASH_CACHE_DCACHELASTADDR_DSATURATED_ADDR 0x0007FFFF    /*  Stores the flash address for which the Data Miss counter saturated. */


/* ============================================================================================================================
        DFT Controller
   ============================================================================================================================ */

/* ============================================================================================================================
        FLASH_DFT
   ============================================================================================================================ */
#define MOD_FLASH_DFT_BASE                   0x4001808C            /*  DFT Controller  */
#define MOD_FLASH_DFT_MASK                   0x000000FF            /*  DFT Controller  */
#define REG_FLASH_DFT_DFT_STAT_RESET         0x00000000            /*      Reset Value for DFT_STAT  */
#define REG_FLASH_DFT_DFT_STAT               0x4001808C            /*  FLASH_DFT Status register */
#define REG_FLASH_DFT_DFT_CTRL_RESET         0x00000100            /*      Reset Value for DFT_CTRL  */
#define REG_FLASH_DFT_DFT_CTRL               0x40018090            /*  FLASH_DFT Control register */
#define REG_FLASH_DFT_DFT_CMD_RESET          0x00000000            /*      Reset Value for DFT_CMD  */
#define REG_FLASH_DFT_DFT_CMD                0x40018094            /*  FLASH_DFT Command register */
#define REG_FLASH_DFT_DFT_PIN_REG_RESET      0x00000000            /*      Reset Value for DFT_PIN_REG  */
#define REG_FLASH_DFT_DFT_PIN_REG            0x40018098            /*  FLASH_DFT Used to control IFREN, MAS1, and SLM signals during command execution */
#define REG_FLASH_DFT_DFT_XADR_REG_RESET     0x00000000            /*      Reset Value for DFT_XADR_REG  */
#define REG_FLASH_DFT_DFT_XADR_REG           0x4001809C            /*  FLASH_DFT Used to setup initial XADR value to be used at the start of a command (note: some commands modify the internal XADR value during execution) */
#define REG_FLASH_DFT_DFT_YADR_REG_RESET     0x00000000            /*      Reset Value for DFT_YADR_REG  */
#define REG_FLASH_DFT_DFT_YADR_REG           0x400180A0            /*  FLASH_DFT Used to setup initial YADR value to be used at the start of a command (note: some commands modify the internal YADR value during execution) */
#define REG_FLASH_DFT_DFT_DATA_L_REG_RESET   0x00000000            /*      Reset Value for DFT_DATA_L_REG  */
#define REG_FLASH_DFT_DFT_DATA_L_REG         0x400180A4            /*  FLASH_DFT Used to setup initial lower 32 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) */
#define REG_FLASH_DFT_DFT_DATA_H_REG_RESET   0x00000000            /*      Reset Value for DFT_DATA_H_REG  */
#define REG_FLASH_DFT_DFT_DATA_H_REG         0x400180A8            /*  FLASH_DFT Used to setup initial upper 4 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) */
#define REG_FLASH_DFT_DFT_CTRL_REG_RESET     0x00000000            /*      Reset Value for DFT_CTRL_REG  */
#define REG_FLASH_DFT_DFT_CTRL_REG           0x400180AC            /*  FLASH_DFT Used to select different data and address patterns for program/read operations */
#define REG_FLASH_DFT_DFT_GRP_REG_RESET      0x00000000            /*      Reset Value for DFT_GRP_REG  */
#define REG_FLASH_DFT_DFT_GRP_REG            0x400180B0            /*  FLASH_DFT Used to define which groups of data bits will be selected for program/read operations */
#define REG_FLASH_DFT_DFT_IP_REG_RESET       0x00000000            /*      Reset Value for DFT_IP_REG  */
#define REG_FLASH_DFT_DFT_IP_REG             0x400180B4            /*  FLASH_DFT Used to control the IP select signal */
#define REG_FLASH_DFT_DFT_BIT_REG_RESET      0x00000000            /*      Reset Value for DFT_BIT_REG  */
#define REG_FLASH_DFT_DFT_BIT_REG            0x400180B8            /*  FLASH_DFT Debug feature; used to enable bit operation and select just one bit for read comparison during failure-bit map collection */
#define REG_FLASH_DFT_DFT_PEND_RESET         0x00000000            /*      Reset Value for DFT_PEND  */
#define REG_FLASH_DFT_DFT_PEND               0x400180BC            /*  FLASH_DFT DFT Writes Pending */
#define REG_FLASH_DFT_DFT_PROBE_RESET        0x00000000            /*      Reset Value for DFT_PROBE  */
#define REG_FLASH_DFT_DFT_PROBE              0x400180C0            /*  FLASH_DFT Used in DFT Probe Mode only */

/* ============================================================================================================================
        FLASH_DFT Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_STAT                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_STAT_IT_CNT_REM    8            /*  Indicates remaining iterations for any currently executing command */
#define BITP_FLASH_DFT_DFT_STAT_CMD_RES       7            /*  Indicates the result of DFT READ command; 1=fail */
#define BITP_FLASH_DFT_DFT_STAT_CMD_STATE     4            /*  Indicates the currently executing COMMAND */
#define BITP_FLASH_DFT_DFT_STAT_MODE          2            /*  Indicates current operating mode */
#define BITP_FLASH_DFT_DFT_STAT_PEND          1            /*  Indicates that a Serial Wire transaction is pending (or ongoing) or that a Command is pending (or ongoing) */
#define BITP_FLASH_DFT_DFT_STAT_EN            0            /*  Indicates that DFT Controller has control over the Flash IP (sets automatically after writing DFT_CTRL once the Flash Controller releases access) */
#define BITM_FLASH_DFT_DFT_STAT_IT_CNT_REM   0xFFFFFF00    /*  Indicates remaining iterations for any currently executing command */
#define BITM_FLASH_DFT_DFT_STAT_CMD_RES      0x00000080    /*  Indicates the result of DFT READ command; 1=fail */
#define BITM_FLASH_DFT_DFT_STAT_CMD_STATE    0x00000070    /*  Indicates the currently executing COMMAND */

#define BITM_FLASH_DFT_DFT_STAT_MODE         0x0000000C    /*  Indicates current operating mode */
#define BITM_FLASH_DFT_DFT_STAT_PEND         0x00000002    /*  Indicates that a Serial Wire transaction is pending (or ongoing) or that a Command is pending (or ongoing) */
#define BITM_FLASH_DFT_DFT_STAT_EN           0x00000001    /*  Indicates that DFT Controller has control over the Flash IP (sets automatically after writing DFT_CTRL once the Flash Controller releases access) */
#define ENUM_FLASH_DFT_DFT_STAT_DIS          0x00000000            /*  MODE: Disabled */
#define ENUM_FLASH_DFT_DFT_STAT_GPIO         0x00000004            /*  MODE: DFT Enabled for direct access via GPIO */
#define ENUM_FLASH_DFT_DFT_STAT_PROBE        0x00000008            /*  MODE: DFT Enabled for direct access via PROBE */
#define ENUM_FLASH_DFT_DFT_STAT_CMD          0x0000000C            /*  MODE: DFT Enabled for indirect access via APB COMMANDS */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_CTRL                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_CTRL_IT_CNT        8            /*  Used to set a number of iterations for any requested command */
#define BITP_FLASH_DFT_DFT_CTRL_MODE          2            /*  Indicates current operating mode */
#define BITP_FLASH_DFT_DFT_CTRL_EN            0            /*  Enable DFT (valid only when the Flash is not in a protected state or when required keys have been asserted) */
#define BITM_FLASH_DFT_DFT_CTRL_IT_CNT       0xFFFFFF00    /*  Used to set a number of iterations for any requested command */

#define BITM_FLASH_DFT_DFT_CTRL_MODE         0x0000000C    /*  Indicates current operating mode */
#define BITM_FLASH_DFT_DFT_CTRL_EN           0x00000001    /*  Enable DFT (valid only when the Flash is not in a protected state or when required keys have been asserted) */
#define ENUM_FLASH_DFT_DFT_CTRL_DIS          0x00000000            /*  MODE: Disabled */
#define ENUM_FLASH_DFT_DFT_CTRL_GPIO         0x00000004            /*  MODE: DFT Enabled for direct access via GPIO */
#define ENUM_FLASH_DFT_DFT_CTRL_PROBE        0x00000008            /*  MODE: DFT Enabled for direct access via PROBE */
#define ENUM_FLASH_DFT_DFT_CTRL_CMD          0x0000000C            /*  MODE: DFT Enabled for indirect access via APB COMMANDS */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_CMD                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_CMD_CMD            0            /*  Asserted by user code to select the next command to be executed (may be written at any time) */

#define BITM_FLASH_DFT_DFT_CMD_CMD           0x00000007    /*  Asserted by user code to select the next command to be executed (may be written at any time) */
#define ENUM_FLASH_DFT_DFT_CMD_IDLE_CMD      0x00000000            /*  CMD: Idle command */
#define ENUM_FLASH_DFT_DFT_CMD_READ_CMD      0x00000001            /*  CMD: Read command */
#define ENUM_FLASH_DFT_DFT_CMD_PROG_CMD      0x00000002            /*  CMD: Program command */
#define ENUM_FLASH_DFT_DFT_CMD_ERASE_CMD     0x00000003            /*  CMD: Erase command */
#define ENUM_FLASH_DFT_DFT_CMD_TMRSET_CMD    0x00000004            /*  CMD: Test Mode Register Set command (note: this command provides Erase Reference Cell functionality) */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_PIN_REG                Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_PIN_REG_SLM        2            /*  If set IP will enter SLEEP MODE; user must not request any command while set; user must wait 7us after clearing this bit before starting any new command */
#define BITP_FLASH_DFT_DFT_PIN_REG_MAS1       1            /*  If set erase operations will be MASS ERASE; if cleared erasures will be PAGE ERASE */
#define BITP_FLASH_DFT_DFT_PIN_REG_IFREN      0            /*  If set, DFT will interact with INFO space of Flash IP; if cleared DFT will interact with USER space */
#define BITM_FLASH_DFT_DFT_PIN_REG_SLM       0x00000004    /*  If set IP will enter SLEEP MODE; user must not request any command while set; user must wait 7us after clearing this bit before starting any new command */
#define BITM_FLASH_DFT_DFT_PIN_REG_MAS1      0x00000002    /*  If set erase operations will be MASS ERASE; if cleared erasures will be PAGE ERASE */
#define BITM_FLASH_DFT_DFT_PIN_REG_IFREN     0x00000001    /*  If set, DFT will interact with INFO space of Flash IP; if cleared DFT will interact with USER space */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_XADR_REG               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_XADR_REG_XADR      0            /*  Initial XADR value to be used by any future commands */
#define BITM_FLASH_DFT_DFT_XADR_REG_XADR     0x000003FF    /*  Initial XADR value to be used by any future commands */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_YADR_REG               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_YADR_REG_YADR      0            /*  Initial YADR value to be used by any future commands */
#define BITM_FLASH_DFT_DFT_YADR_REG_YADR     0x0000001F    /*  Initial YADR value to be used by any future commands */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_DATA_H_REG             Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_DATA_H_REG_DATA    0            /*  Initial DATA value to be used by any future commands */
#define BITM_FLASH_DFT_DFT_DATA_H_REG_DATA   0x0000000F    /*  Initial DATA value to be used by any future commands */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_CTRL_REG               Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_CTRL_REG_TEST     15            /*  DFT self-test mode */
#define BITP_FLASH_DFT_DFT_CTRL_REG_WAIT_STATES 12            /*  Define the number of waitstates for a read cycle */
#define BITP_FLASH_DFT_DFT_CTRL_REG_DATA_PTRN  8            /*  Set pattern DFT will use to modify DATA during command execution */
#define BITP_FLASH_DFT_DFT_CTRL_REG_YADR_PTRN  4            /*  Set pattern DFT will use to modify YADR during command execution */
#define BITP_FLASH_DFT_DFT_CTRL_REG_XADR_PTRN  0            /*  Set pattern DFT will use to modify XADR during command execution */
#define BITM_FLASH_DFT_DFT_CTRL_REG_TEST     0x00008000    /*  DFT self-test mode */
#define BITM_FLASH_DFT_DFT_CTRL_REG_WAIT_STATES 0x00007000    /*  Define the number of waitstates for a read cycle */

#define BITM_FLASH_DFT_DFT_CTRL_REG_DATA_PTRN 0x00000F00    /*  Set pattern DFT will use to modify DATA during command execution */

#define BITM_FLASH_DFT_DFT_CTRL_REG_YADR_PTRN 0x000000F0    /*  Set pattern DFT will use to modify YADR during command execution */

#define BITM_FLASH_DFT_DFT_CTRL_REG_XADR_PTRN 0x0000000F    /*  Set pattern DFT will use to modify XADR during command execution */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_CKBD   0x00000000            /*  DATA_PTRN: For READs and PROGs, used to generate CKBD pattern */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_ICKBD  0x00000100            /*  DATA_PTRN: For READs and PROGs, used to generate ICKBD pattern */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_DIAG   0x00000200            /*  DATA_PTRN: Used for PROG-DIAGONAL only */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_FIXED  0x00000300            /*  DATA_PTRN: DATA is fixed; will not change during command execution */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_RAND   0x00000400            /*  DATA_PTRN: For READs and PROGs, used to generate RANDOM pattern */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_GRP    0x00000500            /*  DATA_PTRN: For READs, only latch (and compare) the data GROUP selected in DFT_GRP_SEL */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_INV    0x00000600            /*  DATA_PTRN: For READs and PROGs, data written/compared is generated from DFT_DATA_REG when XADR[0]==YADR[0], else generated from ~DFT_DATA_REG */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_SCAN   0x00000700            /*  DATA_PTRN: Use SCAN I/O for data pattern generation (see TSMC DFT spec for details) */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_DEFECT 0x00000800            /*  DATA_PTRN: Utilize TSMCs Defect programming data generator logic (see TSMC DFT spec for details) */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_D_REPAIR 0x00000900            /*  DATA_PTRN: Utilize TSMCs Repair programming data generator logic (see TSMC DFT spec for details) */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_FIXED  0x00000000            /*  YADR_PTRN: YADR is fixed; will not change during command execution */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_ICKBD  0x00000010            /*  YADR_PTRN: For READs and PROGs, used to generate ICKBD pattern */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_CKBD   0x00000020            /*  YADR_PTRN: For READs and PROGs, used to generate CKBD pattern */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_INCR   0x00000030            /*  YADR_PTRN: For READs increment by one for each read cycle; for PROGs increase by 1 after YE drops (1 word program) */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_DIAG   0x00000040            /*  YADR_PTRN: Used for PROG-DIAGONAL only */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_INV    0x00000050            /*  YADR_PTRN: Invert value after each read or program of one word */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_INVLSB 0x00000060            /*  YADR_PTRN: Invert YADR[0] after reading or programming one word */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_INCR_READ 0x00000070            /*  YADR_PTRN: For READs only; increment by 1 after XADR reaches last XADR value. Intended to work with XADR_PTRN set to same value. */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_DECR_Y0_READ 0x00000080            /*  YADR_PTRN: For READs only; decrement by 1 after each read cycle. Intended to work with XADR_PTRN set to same value. */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_Y_DECR_X0_READ 0x00000090            /*  YADR_PTRN: For READs only; decrement by 1 after each read cycle only when XADR==0. Intended to work with XADR_PTRN set to same value. */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_FIXED  0x00000000            /*  XADR_PTRN: XADR is fixed; will not change during command execution */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_INCR_ROW 0x00000001            /*  XADR_PTRN: For READs increment by 1 after reading the last word of a row. For PROGs increment by 1 when NVSTR drops. */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_DIAG   0x00000002            /*  XADR_PTRN: Diagonal pattern used for PROG-DIAGONAL only */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_ERASE_ROW 0x00000003            /*  XADR_PTRN: For ERASE operation only; increment by # of rows per page when NVSTR drops */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_INV_WORD 0x00000004            /*  XADR_PTRN: For READs Invert value after reading one word; for PROGs invert value when NVSTR drops */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_INCR2_ROW 0x00000005            /*  XADR_PTRN: For READs increment by 2 after reading the last word of a row; for PROGs increment by 2 when NVSTR drops */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_INVLSB_WORD 0x00000006            /*  XADR_PTRN: For READs invert XADR[0] after reading one word; for PROG invert XADR[0] when NVSTR drops */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_INCR_READ 0x00000007            /*  XADR_PTRN: For READs only; increment by 1 after each read cycle. Intended to work with YADR_PTRN set to same value. */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_DECR_Y0_READ 0x00000008            /*  XADR_PTRN: For READs only; decrement by 1 after each read cycle only when YADR==0. Intended to work with YADR_PTRN set to same value. */
#define ENUM_FLASH_DFT_DFT_CTRL_REG_X_DECR_X0_READ 0x00000009            /*  XADR_PTRN: For READs only; decrement by 1 after each read cycle. Intended to work with YADR_PTRN set to same value. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_GRP_REG                Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_GRP_REG_GRP_SEL    0

#define BITM_FLASH_DFT_DFT_GRP_REG_GRP_SEL   0x00000003
#define ENUM_FLASH_DFT_DFT_GRP_REG_NONE      0x00000000            /*  GRP_SEL: Select neither upper nor lower 36 bit group */
#define ENUM_FLASH_DFT_DFT_GRP_REG_LOW       0x00000001            /*  GRP_SEL: Select the lower 36 bit group */
#define ENUM_FLASH_DFT_DFT_GRP_REG_HIGH      0x00000002            /*  GRP_SEL: Select the upper 36 bit group */
#define ENUM_FLASH_DFT_DFT_GRP_REG_ALL       0x00000003            /*  GRP_SEL: Select both upper and lower 36 bit groups */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_IP_REG                 Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_IP_REG_IPSEL       0

#define BITM_FLASH_DFT_DFT_IP_REG_IPSEL      0x00000003
#define ENUM_FLASH_DFT_DFT_IP_REG_NONE       0x00000000            /*  IPSEL: None */
#define ENUM_FLASH_DFT_DFT_IP_REG_HV         0x00000001            /*  IPSEL: HV */
#define ENUM_FLASH_DFT_DFT_IP_REG_NORM       0x00000002            /*  IPSEL: NORM */
#define ENUM_FLASH_DFT_DFT_IP_REG_REPAIR     0x00000003            /*  IPSEL: REPAIR */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_BIT_REG                Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_BIT_REG_BIT_SEL    1            /*  0=compare data[0] only; n=compare data[n] only; max is 71 */
#define BITP_FLASH_DFT_DFT_BIT_REG_EN         0            /*  If set enables single-bit comparisons; when cleared full data bus will be compared on READ operations */
#define BITM_FLASH_DFT_DFT_BIT_REG_BIT_SEL   0x000000FE    /*  0=compare data[0] only; n=compare data[n] only; max is 71 */
#define BITM_FLASH_DFT_DFT_BIT_REG_EN        0x00000001    /*  If set enables single-bit comparisons; when cleared full data bus will be compared on READ operations */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_PEND                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_PEND_CTRL          9            /*  When set indicates a write to CTRL is pending */
#define BITP_FLASH_DFT_DFT_PEND_CMD           8            /*  When set indicates a write to CMD is pending */
#define BITP_FLASH_DFT_DFT_PEND_PIN_REG       7            /*  When set indicates a write to PIN_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_XADR_REG      6            /*  When set indicates a write to XADR_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_YADR_REG      5            /*  When set indicates a write to YADR_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_DATA_REG      4            /*  When set indicates a write to DATA_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_CTRL_REG      3            /*  When set indicates a write to CTRL_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_GRP_REG       2            /*  When set indicates a write to GRP_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_IP_REG        1            /*  When set indicates a write to IP_REG is pending */
#define BITP_FLASH_DFT_DFT_PEND_BIT_REG       0            /*  When set indicates a write to BIT_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_CTRL         0x00000200    /*  When set indicates a write to CTRL is pending */
#define BITM_FLASH_DFT_DFT_PEND_CMD          0x00000100    /*  When set indicates a write to CMD is pending */
#define BITM_FLASH_DFT_DFT_PEND_PIN_REG      0x00000080    /*  When set indicates a write to PIN_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_XADR_REG     0x00000040    /*  When set indicates a write to XADR_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_YADR_REG     0x00000020    /*  When set indicates a write to YADR_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_DATA_REG     0x00000010    /*  When set indicates a write to DATA_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_CTRL_REG     0x00000008    /*  When set indicates a write to CTRL_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_GRP_REG      0x00000004    /*  When set indicates a write to GRP_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_IP_REG       0x00000002    /*  When set indicates a write to IP_REG is pending */
#define BITM_FLASH_DFT_DFT_PEND_BIT_REG      0x00000001    /*  When set indicates a write to BIT_REG is pending */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_DFT_DFT_PROBE                  Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_STAT     8            /*  Probe Status/Data */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_CLK      5            /*  Probe Clock */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_SFT      4            /*  Probe SFT Mode */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_P3       3            /*  Probe P3 */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_P2       2            /*  Probe P2 */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_P1       1            /*  Probe P1 */
#define BITP_FLASH_DFT_DFT_PROBE_PRB_P0       0            /*  Probe P0 */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_STAT    0x00000100    /*  Probe Status/Data */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_CLK     0x00000020    /*  Probe Clock */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_SFT     0x00000010    /*  Probe SFT Mode */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_P3      0x00000008    /*  Probe P3 */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_P2      0x00000004    /*  Probe P2 */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_P1      0x00000002    /*  Probe P1 */
#define BITM_FLASH_DFT_DFT_PROBE_PRB_P0      0x00000001    /*  Probe P0 */


/* ============================================================================================================================
        Flash Controller
   ============================================================================================================================ */

/* ============================================================================================================================
        FLASH_TEST
   ============================================================================================================================ */
#define MOD_FLASH_TEST_BASE                  0x400180C4            /*  Flash Controller  */
#define MOD_FLASH_TEST_MASK                  0x000000FF            /*  Flash Controller  */
#define REG_FLASH_TEST_TST_CFG_RESET         0x00000000            /*      Reset Value for TST_CFG  */
#define REG_FLASH_TEST_TST_CFG               0x400180C4            /*  FLASH_TEST Testmode Configuration Register */
#define REG_FLASH_TEST_TST_CMD_KEY_RESET     0x00000000            /*      Reset Value for TST_CMD_KEY  */
#define REG_FLASH_TEST_TST_CMD_KEY           0x400180C8            /*  FLASH_TEST Write the proper Test Key value here to enable test mode reads and writes */
#define REG_FLASH_TEST_TM_DATA0              0x400180CC            /*  FLASH_TEST Lower 32 bits testmode flash data - [31:0] */
#define REG_FLASH_TEST_TM_DATA1              0x400180D0            /*  FLASH_TEST Middle 32 bits testmode flash data - [63:32] */
#define REG_FLASH_TEST_TM_DATA2              0x400180D4            /*  FLASH_TEST Upper 8 bits testmode flash data - [71:64] */
#define REG_FLASH_TEST_KH_DATA2_RESET        0x000000FF            /*      Reset Value for KH_DATA2  */
#define REG_FLASH_TEST_KH_DATA2              0x400180D8            /*  FLASH_TEST Flash data register - key-hole interface (top 8 bit ECC - [71:64]) */
#define REG_FLASH_TEST_FLSH_TC               0x400180DC            /*  FLASH_TEST Direct output from flash IP Test Code (TC) bus */

/* ============================================================================================================================
        FLASH_TEST Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_TEST_TST_CFG                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_TEST_TST_CFG_WRSEL         0            /*  Selects either dualword, lowerword, or upper word write access. Requires that the ECC engine is disabled (using ECCDisable config bit in ECCConfig register) else writes will result in the command fail flag being set in the FEESTA register. */

#define BITM_FLASH_TEST_TST_CFG_WRSEL        0x00000003    /*  Selects either dualword, lowerword, or upper word write access. Requires that the ECC engine is disabled (using ECCDisable config bit in ECCConfig register) else writes will result in the command fail flag being set in the FEESTA register. */
#define ENUM_FLASH_TEST_TST_CFG_DEFAULT      0x00000000            /*  WRSEL: Write all 72 bits. */
#define ENUM_FLASH_TEST_TST_CFG_LOW          0x00000001            /*  WRSEL: write only Data0 to the flash */
#define ENUM_FLASH_TEST_TST_CFG_HIGH         0x00000002            /*  WRSEL: Write only Data1 to the flash */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_TEST_TM_DATA2                  Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_TEST_TM_DATA2_TM_DATA2     0            /*  After a read cycle is executed using the  ReadCommand, the long word from flash can be read here.   This register will only return data if the Read request command was to unprotected user or info space. Otherwise it returns 0x0. This forms [71:64] of flash location. */
#define BITM_FLASH_TEST_TM_DATA2_TM_DATA2    0x000000FF    /*  After a read cycle is executed using the  ReadCommand, the long word from flash can be read here.   This register will only return data if the Read request command was to unprotected user or info space. Otherwise it returns 0x0. This forms [71:64] of flash location. */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_TEST_KH_DATA2                  Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_TEST_KH_DATA2_KH_DATA2     0            /*  FLData2 forms the top 8 bit of 72 bit data (8bit ECC) to be written to flash */
#define BITM_FLASH_TEST_KH_DATA2_KH_DATA2    0x000000FF    /*  FLData2 forms the top 8 bit of 72 bit data (8bit ECC) to be written to flash */

/* -------------------------------------------------------------------------------------------------------------------------
          FLASH_TEST_FLSH_TC                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FLASH_TEST_FLSH_TC_FLSH_TC       0
#define BITM_FLASH_TEST_FLSH_TC_FLSH_TC      0x000003FF


/* ============================================================================================================================
        
   ============================================================================================================================ */

/* ============================================================================================================================
        gpio
   ============================================================================================================================ */
#define MOD_GPIO_BASE                        0x40020000            /*    */
#define MOD_GPIO_MASK                        0x00003FFF            /*    */
#define REG_GPIO_GP0CON_RESET                0x00000000            /*      Reset Value for GP0CON  */
#define REG_GPIO_GP0CON                      0x40020000            /*  gpio GPIO Port 0  Configuration */
#define REG_GPIO_GP0OEN_RESET                0x00000000            /*      Reset Value for GP0OEN  */
#define REG_GPIO_GP0OEN                      0x40020004            /*  gpio GPIO Port 0 output enable */
#define REG_GPIO_GP0PE_RESET                 0x000000C0            /*      Reset Value for GP0PE  */
#define REG_GPIO_GP0PE                       0x40020008            /*  gpio GPIO Port 0 output pullup/pulldown enable */
#define REG_GPIO_GP0IEN_RESET                0x00000000            /*      Reset Value for GP0IEN  */
#define REG_GPIO_GP0IEN                      0x4002000C            /*  gpio GPIO  Port 0 Input Path Enable */
#define REG_GPIO_GP0IN                       0x40020010            /*  gpio GPIO  Port 0 registered data input */
#define REG_GPIO_GP0OUT_RESET                0x00000000            /*      Reset Value for GP0OUT  */
#define REG_GPIO_GP0OUT                      0x40020014            /*  gpio GPIO Port 0 data output */
#define REG_GPIO_GP0SET_RESET                0x00000000            /*      Reset Value for GP0SET  */
#define REG_GPIO_GP0SET                      0x40020018            /*  gpio GPIO Port 0 data out set */
#define REG_GPIO_GP0CLR_RESET                0x00000000            /*      Reset Value for GP0CLR  */
#define REG_GPIO_GP0CLR                      0x4002001C            /*  gpio GPIO Port 0 data out clear */
#define REG_GPIO_GP0TGL_RESET                0x00000000            /*      Reset Value for GP0TGL  */
#define REG_GPIO_GP0TGL                      0x40020020            /*  gpio GPIO Port 0  pin toggle */
#define REG_GPIO_GP0POL_RESET                0x00000000            /*      Reset Value for GP0POL  */
#define REG_GPIO_GP0POL                      0x40020024            /*  gpio GPIO Port 0 interrupt polarity */
#define REG_GPIO_GP0IENA_RESET               0x00000000            /*      Reset Value for GP0IENA  */
#define REG_GPIO_GP0IENA                     0x40020028            /*  gpio GPIO Port 0  interrupt A enable */
#define REG_GPIO_GP0IENB_RESET               0x00000000            /*      Reset Value for GP0IENB  */
#define REG_GPIO_GP0IENB                     0x4002002C            /*  gpio GPIO Port 0 interrupt B enable */
#define REG_GPIO_GP0INT_RESET                0x00000000            /*      Reset Value for GP0INT  */
#define REG_GPIO_GP0INT                      0x40020030            /*  gpio GPIO Port 0 interrupt Status */
#define REG_GPIO_GP0DS_RESET                 0x00000000            /*      Reset Value for GP0DS  */
#define REG_GPIO_GP0DS                       0x40020034            /*  gpio GPIO Port 0  drive strength select */
#define REG_GPIO_GP1CON_RESET                0x00000000            /*      Reset Value for GP1CON  */
#define REG_GPIO_GP1CON                      0x40020040            /*  gpio GPIO Port 1 configuration */
#define REG_GPIO_GP1OEN_RESET                0x00000000            /*      Reset Value for GP1OEN  */
#define REG_GPIO_GP1OEN                      0x40020044            /*  gpio GPIO Port 1 output enable */
#define REG_GPIO_GP1PE_RESET                 0x00000002            /*      Reset Value for GP1PE  */
#define REG_GPIO_GP1PE                       0x40020048            /*  gpio GPIO Port 1 output pullup/pulldown enable */
#define REG_GPIO_GP1IEN_RESET                0x00000000            /*      Reset Value for GP1IEN  */
#define REG_GPIO_GP1IEN                      0x4002004C            /*  gpio GPIO Port 1 Input Path Enable */
#define REG_GPIO_GP1IN                       0x40020050            /*  gpio GPIO Port 1  registered data input */
#define REG_GPIO_GP1OUT_RESET                0x00000000            /*      Reset Value for GP1OUT  */
#define REG_GPIO_GP1OUT                      0x40020054            /*  gpio GPIO Port 1 data output */
#define REG_GPIO_GP1SET_RESET                0x00000000            /*      Reset Value for GP1SET  */
#define REG_GPIO_GP1SET                      0x40020058            /*  gpio GPIO Port 1 data out set */
#define REG_GPIO_GP1CLR_RESET                0x00000000            /*      Reset Value for GP1CLR  */
#define REG_GPIO_GP1CLR                      0x4002005C            /*  gpio GPIO Port 1 data out clear */
#define REG_GPIO_GP1TGL_RESET                0x00000000            /*      Reset Value for GP1TGL  */
#define REG_GPIO_GP1TGL                      0x40020060            /*  gpio GPIO Port 1 pin toggle */
#define REG_GPIO_GP1POL_RESET                0x00000000            /*      Reset Value for GP1POL  */
#define REG_GPIO_GP1POL                      0x40020064            /*  gpio GPIO Port 1 interrupt polarity */
#define REG_GPIO_GP1IENA_RESET               0x00000000            /*      Reset Value for GP1IENA  */
#define REG_GPIO_GP1IENA                     0x40020068            /*  gpio GPIO Port 1 interrupt A enable */
#define REG_GPIO_GP1IENB_RESET               0x00000000            /*      Reset Value for GP1IENB  */
#define REG_GPIO_GP1IENB                     0x4002006C            /*  gpio GPIO Port 1interrupt B enable */
#define REG_GPIO_GP1INT_RESET                0x00000000            /*      Reset Value for GP1INT  */
#define REG_GPIO_GP1INT                      0x40020070            /*  gpio GPIO Port 1 interrupt Status */
#define REG_GPIO_GP1DS_RESET                 0x00000000            /*      Reset Value for GP1DS  */
#define REG_GPIO_GP1DS                       0x40020074            /*  gpio GPIO Port 1  drive strength select */
#define REG_GPIO_GP2CON_RESET                0x00000000            /*      Reset Value for GP2CON  */
#define REG_GPIO_GP2CON                      0x40020080            /*  gpio GPIO Port 2 configuration */
#define REG_GPIO_GP2OEN_RESET                0x00000000            /*      Reset Value for GP2OEN  */
#define REG_GPIO_GP2OEN                      0x40020084            /*  gpio GPIO Port 2 output enable */
#define REG_GPIO_GP2PE_RESET                 0x00000000            /*      Reset Value for GP2PE  */
#define REG_GPIO_GP2PE                       0x40020088            /*  gpio GPIO Port 2  output pullup/pulldown enable */
#define REG_GPIO_GP2IEN_RESET                0x00000000            /*      Reset Value for GP2IEN  */
#define REG_GPIO_GP2IEN                      0x4002008C            /*  gpio GPIO Port 2 Input Path Enable */
#define REG_GPIO_GP2IN                       0x40020090            /*  gpio GPIO Port 2 registered data input */
#define REG_GPIO_GP2OUT_RESET                0x00000000            /*      Reset Value for GP2OUT  */
#define REG_GPIO_GP2OUT                      0x40020094            /*  gpio GPIO Port 2  data output */
#define REG_GPIO_GP2SET_RESET                0x00000000            /*      Reset Value for GP2SET  */
#define REG_GPIO_GP2SET                      0x40020098            /*  gpio GPIO Port 2 data out set */
#define REG_GPIO_GP2CLR_RESET                0x00000000            /*      Reset Value for GP2CLR  */
#define REG_GPIO_GP2CLR                      0x4002009C            /*  gpio GPIO Port 2 data out clear */
#define REG_GPIO_GP2TGL_RESET                0x00000000            /*      Reset Value for GP2TGL  */
#define REG_GPIO_GP2TGL                      0x400200A0            /*  gpio GPIO Port 2 pin toggle */
#define REG_GPIO_GP2POL_RESET                0x00000000            /*      Reset Value for GP2POL  */
#define REG_GPIO_GP2POL                      0x400200A4            /*  gpio GPIO Port 2 interrupt polarity */
#define REG_GPIO_GP2IENA_RESET               0x00000000            /*      Reset Value for GP2IENA  */
#define REG_GPIO_GP2IENA                     0x400200A8            /*  gpio GPIO Port 2 interrupt A enable */
#define REG_GPIO_GP2IENB_RESET               0x00000000            /*      Reset Value for GP2IENB  */
#define REG_GPIO_GP2IENB                     0x400200AC            /*  gpio GPIO Port 2 interrupt B enable */
#define REG_GPIO_GP2INT_RESET                0x00000000            /*      Reset Value for GP2INT  */
#define REG_GPIO_GP2INT                      0x400200B0            /*  gpio GPIO Port 2  interrupt Status */
#define REG_GPIO_GP2DS_RESET                 0x00000000            /*      Reset Value for GP2DS  */
#define REG_GPIO_GP2DS                       0x400200B4            /*  gpio GPIO Port 2  drive strength select */

/* ============================================================================================================================
        gpio Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP0CON                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP0CON_PIN15_CFG           30            /*  p0.15  configuration bits */
#define BITP_GPIO_GP0CON_PIN14_CFG           28            /*  p0.14  configuration bits */
#define BITP_GPIO_GP0CON_PIN13_CFG           26            /*  p0.13  configuration bits */
#define BITP_GPIO_GP0CON_PIN12_CFG           24            /*  p0.12  configuration bits */
#define BITP_GPIO_GP0CON_PIN11_CFG           22            /*  p0.11  configuration bits */
#define BITP_GPIO_GP0CON_PIN10_CFG           20            /*  p0.10  configuration bits */
#define BITP_GPIO_GP0CON_PIN9_CFG            18            /*  p0.9  configuration bits */
#define BITP_GPIO_GP0CON_PIN8_CFG            16            /*  p0.8  configuration bits */
#define BITP_GPIO_GP0CON_PIN7_CFG            14            /*  p0.7  configuration bits */
#define BITP_GPIO_GP0CON_PIN6_CFG            12            /*  p0.6  configuration bits */
#define BITP_GPIO_GP0CON_PIN5_CFG            10            /*  p0.5  configuration bits */
#define BITP_GPIO_GP0CON_PIN4_CFG             8            /*  p0.4  configuration bits */
#define BITP_GPIO_GP0CON_PIN3_CFG             6            /*  p0.3  configuration bits */
#define BITP_GPIO_GP0CON_PIN2_CFG             4            /*  p0.2  configuration bits */
#define BITP_GPIO_GP0CON_PIN1_CFG             2            /*  p0.1  configuration bits */
#define BITP_GPIO_GP0CON_PIN0_CFG             0            /*  p0.0  configuration bits */

#define BITM_GPIO_GP0CON_PIN15_CFG           0xC0000000    /*  p0.15  configuration bits */

#define BITM_GPIO_GP0CON_PIN14_CFG           0x30000000    /*  p0.14  configuration bits */

#define BITM_GPIO_GP0CON_PIN13_CFG           0x0C000000    /*  p0.13  configuration bits */

#define BITM_GPIO_GP0CON_PIN12_CFG           0x03000000    /*  p0.12  configuration bits */

#define BITM_GPIO_GP0CON_PIN11_CFG           0x00C00000    /*  p0.11  configuration bits */

#define BITM_GPIO_GP0CON_PIN10_CFG           0x00300000    /*  p0.10  configuration bits */

#define BITM_GPIO_GP0CON_PIN9_CFG            0x000C0000    /*  p0.9  configuration bits */

#define BITM_GPIO_GP0CON_PIN8_CFG            0x00030000    /*  p0.8  configuration bits */

#define BITM_GPIO_GP0CON_PIN7_CFG            0x0000C000    /*  p0.7  configuration bits */

#define BITM_GPIO_GP0CON_PIN6_CFG            0x00003000    /*  p0.6  configuration bits */

#define BITM_GPIO_GP0CON_PIN5_CFG            0x00000C00    /*  p0.5  configuration bits */

#define BITM_GPIO_GP0CON_PIN4_CFG            0x00000300    /*  p0.4  configuration bits */

#define BITM_GPIO_GP0CON_PIN3_CFG            0x000000C0    /*  p0.3  configuration bits */

#define BITM_GPIO_GP0CON_PIN2_CFG            0x00000030    /*  p0.2  configuration bits */

#define BITM_GPIO_GP0CON_PIN1_CFG            0x0000000C    /*  p0.1  configuration bits */

#define BITM_GPIO_GP0CON_PIN0_CFG            0x00000003    /*  p0.0  configuration bits */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP1CON                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP1CON_PIN_15_CFG          30            /*  p1.15 configuration bits */
#define BITP_GPIO_GP1CON_PIN_14_CFG          28            /*  p1.14 configuration bits */
#define BITP_GPIO_GP1CON_PIN13_CFG           26            /*  p1.13 configuration bits */
#define BITP_GPIO_GP1CON_PIN12_CFG           24            /*  p1.12 configuration bits */
#define BITP_GPIO_GP1CON_PIN11_CFG           22            /*  p1.11 configuration bits */
#define BITP_GPIO_GP1CON_PIN10_CFG           20            /*  p1.10 configuration bits */
#define BITP_GPIO_GP1CON_PIN9_CFG            18            /*  p1.9 configuration bits */
#define BITP_GPIO_GP1CON_PIN8_CFG            16            /*  p1.8 configuration bits */
#define BITP_GPIO_GP1CON_PIN7_CFG            14            /*  p1.7 configuration bits */
#define BITP_GPIO_GP1CON_PIN6_CFG            12            /*  p1.6 configuration bits */
#define BITP_GPIO_GP1CON_PIN5_CFG            10            /*  p1.5 configuration bits */
#define BITP_GPIO_GP1CON_PIN4_CFG             8            /*  p1.4 configuration bits */
#define BITP_GPIO_GP1CON_PIN3_CFG             6            /*  p1.3 configuration bits */
#define BITP_GPIO_GP1CON_PIN2_CFG             4            /*  p1.2 configuration bits */
#define BITP_GPIO_GP1CON_PIN1_CFG             2            /*  p1.1 configuration bits */
#define BITP_GPIO_GP1CON_PIN0_CFG             0            /*  p1.0 configuration bits */

#define BITM_GPIO_GP1CON_PIN_15_CFG          0xC0000000    /*  p1.15 configuration bits */

#define BITM_GPIO_GP1CON_PIN_14_CFG          0x30000000    /*  p1.14 configuration bits */

#define BITM_GPIO_GP1CON_PIN13_CFG           0x0C000000    /*  p1.13 configuration bits */

#define BITM_GPIO_GP1CON_PIN12_CFG           0x03000000    /*  p1.12 configuration bits */

#define BITM_GPIO_GP1CON_PIN11_CFG           0x00C00000    /*  p1.11 configuration bits */

#define BITM_GPIO_GP1CON_PIN10_CFG           0x00300000    /*  p1.10 configuration bits */

#define BITM_GPIO_GP1CON_PIN9_CFG            0x000C0000    /*  p1.9 configuration bits */

#define BITM_GPIO_GP1CON_PIN8_CFG            0x00030000    /*  p1.8 configuration bits */

#define BITM_GPIO_GP1CON_PIN7_CFG            0x0000C000    /*  p1.7 configuration bits */

#define BITM_GPIO_GP1CON_PIN6_CFG            0x00003000    /*  p1.6 configuration bits */

#define BITM_GPIO_GP1CON_PIN5_CFG            0x00000C00    /*  p1.5 configuration bits */

#define BITM_GPIO_GP1CON_PIN4_CFG            0x00000300    /*  p1.4 configuration bits */

#define BITM_GPIO_GP1CON_PIN3_CFG            0x000000C0    /*  p1.3 configuration bits */

#define BITM_GPIO_GP1CON_PIN2_CFG            0x00000030    /*  p1.2 configuration bits */

#define BITM_GPIO_GP1CON_PIN1_CFG            0x0000000C    /*  p1.1 configuration bits */

#define BITM_GPIO_GP1CON_PIN0_CFG            0x00000003    /*  p1.0 configuration bits */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2CON                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2CON_PIN11_CFG           22            /*  P2.11 configuration bits */
#define BITP_GPIO_GP2CON_PIN10_CFG           20            /*  P2.10 configuration bits */
#define BITP_GPIO_GP2CON_PIN9_CFG            18            /*  P2.9 configuration bits */
#define BITP_GPIO_GP2CON_PIN8_CFG            16            /*  P2.8 configuration bits */
#define BITP_GPIO_GP2CON_PIN7_CFG            14            /*  P2.7 configuration bits */
#define BITP_GPIO_GP2CON_PIN6_CFG            12            /*  P2.6 configuration bits */
#define BITP_GPIO_GP2CON_PIN5_CFG            10            /*  P2.5 configuration bits */
#define BITP_GPIO_GP2CON_PIN4_CFG             8            /*  P2.4 configuration bits */
#define BITP_GPIO_GP2CON_PIN3_CFG             6            /*  P2.3 configuration bits */
#define BITP_GPIO_GP2CON_PIN2_CFG             4            /*  P2.2 configuration bits */
#define BITP_GPIO_GP2CON_PIN1_CFG             2            /*  P2.1 configuration bits */
#define BITP_GPIO_GP2CON_PIN0_CFG             0            /*  P2.0 configuration bits */

#define BITM_GPIO_GP2CON_PIN11_CFG           0x00C00000    /*  P2.11 configuration bits */

#define BITM_GPIO_GP2CON_PIN10_CFG           0x00300000    /*  P2.10 configuration bits */

#define BITM_GPIO_GP2CON_PIN9_CFG            0x000C0000    /*  P2.9 configuration bits */

#define BITM_GPIO_GP2CON_PIN8_CFG            0x00030000    /*  P2.8 configuration bits */

#define BITM_GPIO_GP2CON_PIN7_CFG            0x0000C000    /*  P2.7 configuration bits */

#define BITM_GPIO_GP2CON_PIN6_CFG            0x00003000    /*  P2.6 configuration bits */

#define BITM_GPIO_GP2CON_PIN5_CFG            0x00000C00    /*  P2.5 configuration bits */

#define BITM_GPIO_GP2CON_PIN4_CFG            0x00000300    /*  P2.4 configuration bits */

#define BITM_GPIO_GP2CON_PIN3_CFG            0x000000C0    /*  P2.3 configuration bits */

#define BITM_GPIO_GP2CON_PIN2_CFG            0x00000030    /*  P2.2 configuration bits */

#define BITM_GPIO_GP2CON_PIN1_CFG            0x0000000C    /*  P2.1 configuration bits */

#define BITM_GPIO_GP2CON_PIN0_CFG            0x00000003    /*  P2.0 configuration bits */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2OEN                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2OEN_OEN                  0            /*  Pin Output Drive enable */
#define BITM_GPIO_GP2OEN_OEN                 0x00000FFF    /*  Pin Output Drive enable */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2PE                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2PE_PE                    0            /*  Pin Pull enable */
#define BITM_GPIO_GP2PE_PE                   0x00000FFF    /*  Pin Pull enable */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2IEN                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2IEN_IEN                  0            /*  Input path enable */
#define BITM_GPIO_GP2IEN_IEN                 0x00000FFF    /*  Input path enable */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2IN                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2IN_IN                    0            /*  Registered data input */
#define BITM_GPIO_GP2IN_IN                   0x00000FFF    /*  Registered data input */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2OUT                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2OUT_OUT                  0            /*  Data out */
#define BITM_GPIO_GP2OUT_OUT                 0x00000FFF    /*  Data out */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2SET                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2SET_SET                  0            /*  Set the output HIGH for the pin */
#define BITM_GPIO_GP2SET_SET                 0x00000FFF    /*  Set the output HIGH for the pin */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2CLR                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2CLR_CLR                  0            /*  Set the output low  for the port pin */
#define BITM_GPIO_GP2CLR_CLR                 0x00000FFF    /*  Set the output low  for the port pin */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2TGL                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2TGL_TGL                  0            /*  Toggle the output of the port pin */
#define BITM_GPIO_GP2TGL_TGL                 0x00000FFF    /*  Toggle the output of the port pin */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2POL                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2POL_INTPOL               0            /*  Interrupt polarity. */
#define BITM_GPIO_GP2POL_INTPOL              0x00000FFF    /*  Interrupt polarity. */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2IENA                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2IENA_INTAEN              0            /*  Interrupt A enable. */
#define BITM_GPIO_GP2IENA_INTAEN             0x00000FFF    /*  Interrupt A enable. */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2IENB                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2IENB_INTBEN              0            /*  Interrupt B enable. */
#define BITM_GPIO_GP2IENB_INTBEN             0x00000FFF    /*  Interrupt B enable. */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2INT                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2INT_INTSTATUS            0            /*  Interrupt Status */
#define BITM_GPIO_GP2INT_INTSTATUS           0x00000FFF    /*  Interrupt Status */

/* -------------------------------------------------------------------------------------------------------------------------
          gpio_GP2DS                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GP2DS_DS                    0            /*  Drive strength select */
#define BITM_GPIO_GP2DS_DS                   0x00000FFF    /*  Drive strength select */


/* ============================================================================================================================
        crypto
   ============================================================================================================================ */

/* ============================================================================================================================
        crypto
   ============================================================================================================================ */
#define MOD_CRYPTO_BASE                      0x40044000            /*  Crypto  */
#define MOD_CRYPTO_MASK                      0x0000007F            /*  Crypto  */
#define REG_CRYPTO_CFG_RESET                 0x00000000            /*      Reset Value for CFG  */
#define REG_CRYPTO_CFG                       0x40044000            /*  crypto Configuration Register */
#define REG_CRYPTO_DATALEN_RESET             0x00000000            /*      Reset Value for DATALEN  */
#define REG_CRYPTO_DATALEN                   0x40044004            /*  crypto Payload Data Length */
#define REG_CRYPTO_PREFIXLEN_RESET           0x00000000            /*      Reset Value for PREFIXLEN  */
#define REG_CRYPTO_PREFIXLEN                 0x40044008            /*  crypto Authentication Data Length */
#define REG_CRYPTO_INTEN_RESET               0x00000000            /*      Reset Value for INTEN  */
#define REG_CRYPTO_INTEN                     0x4004400C            /*  crypto Interrupt Enable Register */
#define REG_CRYPTO_STAT_RESET                0x00000001            /*      Reset Value for STAT  */
#define REG_CRYPTO_STAT                      0x40044010            /*  crypto Status Register */
#define REG_CRYPTO_INBUF_RESET               0x00000000            /*      Reset Value for INBUF  */
#define REG_CRYPTO_INBUF                     0x40044014            /*  crypto Input Buffer */
#define REG_CRYPTO_OUTBUF_RESET              0x00000000            /*      Reset Value for OUTBUF  */
#define REG_CRYPTO_OUTBUF                    0x40044018            /*  crypto Output Buffer */
#define REG_CRYPTO_NONCE0_RESET              0x00000000            /*      Reset Value for NONCE0  */
#define REG_CRYPTO_NONCE0                    0x4004401C            /*  crypto Nonce Bits [31:0] */
#define REG_CRYPTO_NONCE1_RESET              0x00000000            /*      Reset Value for NONCE1  */
#define REG_CRYPTO_NONCE1                    0x40044020            /*  crypto Nonce Bits [63:32] */
#define REG_CRYPTO_NONCE2_RESET              0x00000000            /*      Reset Value for NONCE2  */
#define REG_CRYPTO_NONCE2                    0x40044024            /*  crypto Nonce Bits [95:64] */
#define REG_CRYPTO_NONCE3_RESET              0x00000000            /*      Reset Value for NONCE3  */
#define REG_CRYPTO_NONCE3                    0x40044028            /*  crypto Nonce Bits [127:96] */
#define REG_CRYPTO_AESKEY0_RESET             0x00000000            /*      Reset Value for AESKEY0  */
#define REG_CRYPTO_AESKEY0                   0x4004402C            /*  crypto Key Bits[ 31:0 ] */
#define REG_CRYPTO_AESKEY1_RESET             0x00000000            /*      Reset Value for AESKEY1  */
#define REG_CRYPTO_AESKEY1                   0x40044030            /*  crypto Key Bits [ 63:32 ] */
#define REG_CRYPTO_AESKEY2_RESET             0x00000000            /*      Reset Value for AESKEY2  */
#define REG_CRYPTO_AESKEY2                   0x40044034            /*  crypto Key Bits [ 95:64 ] */
#define REG_CRYPTO_AESKEY3_RESET             0x00000000            /*      Reset Value for AESKEY3  */
#define REG_CRYPTO_AESKEY3                   0x40044038            /*  crypto Key Bits [ 127:96 ] */
#define REG_CRYPTO_AESKEY4_RESET             0x00000000            /*      Reset Value for AESKEY4  */
#define REG_CRYPTO_AESKEY4                   0x4004403C            /*  crypto Key Bits [ 159:128 ] */
#define REG_CRYPTO_AESKEY5_RESET             0x00000000            /*      Reset Value for AESKEY5  */
#define REG_CRYPTO_AESKEY5                   0x40044040            /*  crypto Key Bits [ 191:160 ] */
#define REG_CRYPTO_AESKEY6_RESET             0x00000000            /*      Reset Value for AESKEY6  */
#define REG_CRYPTO_AESKEY6                   0x40044044            /*  crypto Key Bits [ 223:192 ] */
#define REG_CRYPTO_AESKEY7_RESET             0x00000000            /*      Reset Value for AESKEY7  */
#define REG_CRYPTO_AESKEY7                   0x40044048            /*  crypto Key Bits [ 255:224 ] */
#define REG_CRYPTO_CNTRINIT_RESET            0x00000000            /*      Reset Value for CNTRINIT  */
#define REG_CRYPTO_CNTRINIT                  0x4004404C            /*  crypto Counter Initialization Vector */
#define REG_CRYPTO_SHAH0_RESET               0x6A09E667            /*      Reset Value for SHAH0  */
#define REG_CRYPTO_SHAH0                     0x40044050            /*  crypto SHA Bits [ 31:0 ] */
#define REG_CRYPTO_SHAH1_RESET               0xBB67AE85            /*      Reset Value for SHAH1  */
#define REG_CRYPTO_SHAH1                     0x40044054            /*  crypto SHA Bits [ 63:32 ] */
#define REG_CRYPTO_SHAH2_RESET               0x3C6EF372            /*      Reset Value for SHAH2  */
#define REG_CRYPTO_SHAH2                     0x40044058            /*  crypto SHA Bits [ 95:64 ] */
#define REG_CRYPTO_SHAH3_RESET               0xA54FF53A            /*      Reset Value for SHAH3  */
#define REG_CRYPTO_SHAH3                     0x4004405C            /*  crypto SHA Bits [ 127:96 ] */
#define REG_CRYPTO_SHAH4_RESET               0x510E527F            /*      Reset Value for SHAH4  */
#define REG_CRYPTO_SHAH4                     0x40044060            /*  crypto SHA Bits [ 159:128 ] */
#define REG_CRYPTO_SHAH5_RESET               0x9B05688C            /*      Reset Value for SHAH5  */
#define REG_CRYPTO_SHAH5                     0x40044064            /*  crypto SHA Bits [ 191:160 ] */
#define REG_CRYPTO_SHAH6_RESET               0x1F83D9AB            /*      Reset Value for SHAH6  */
#define REG_CRYPTO_SHAH6                     0x40044068            /*  crypto SHA Bits [ 223:192] */
#define REG_CRYPTO_SHAH7_RESET               0x5BE0CD19            /*      Reset Value for SHAH7  */
#define REG_CRYPTO_SHAH7                     0x4004406C            /*  crypto SHA Bits [ 255:224 ] */

/* ============================================================================================================================
        crypto Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          crypto_CFG                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRYPTO_CFG_SHADATSRC            27            /*  Select data input to SHA block */
#define BITP_CRYPTO_CFG_SHAINIT              26            /*  Restarts SHA Computation */
#define BITP_CRYPTO_CFG_SHA256EN             25            /*  Enable SHA-256 Operation */
#define BITP_CRYPTO_CFG_SHA224EN             24            /*  Enable SHA-224 Operation */
#define BITP_CRYPTO_CFG_CMACEN               20            /*  Enable CMAC Mode Operation */
#define BITP_CRYPTO_CFG_CCMEN                19            /*  Enable CCM/CCM* Mode Operation */
#define BITP_CRYPTO_CFG_CBCEN                18            /*  Enable CBC Mode Operation */
#define BITP_CRYPTO_CFG_CTREN                17            /*  Enable CTR Mode Operation */
#define BITP_CRYPTO_CFG_ECBEN                16            /*  Enable ECB Mode Operation */
#define BITP_CRYPTO_CFG_KEYLEN                8            /*  Select Key Length for AES Cipher */
#define BITP_CRYPTO_CFG_KEYSEL                7            /*  Select Key Source */
#define BITP_CRYPTO_CFG_ENDIAN                6            /*  Endianness */
#define BITP_CRYPTO_CFG_OUTFLUSH              5            /*  Output Buffer Flush */
#define BITP_CRYPTO_CFG_INFLUSH               4            /*  Input Buffer Flush */
#define BITP_CRYPTO_CFG_OUTDMAEN              3            /*  Enable DMA for Output Buffer */
#define BITP_CRYPTO_CFG_INDMAEN               2            /*  Enable DMA for Input Buffer */
#define BITP_CRYPTO_CFG_ENCR                  1            /*  Encrypt or Decrypt */
#define BITP_CRYPTO_CFG_BLKEN                 0            /*  Enable bit for the Crypto Block */

#define BITM_CRYPTO_CFG_SHADATSRC            0x08000000    /*  Select data input to SHA block */
#define BITM_CRYPTO_CFG_SHAINIT              0x04000000    /*  Restarts SHA Computation */
#define BITM_CRYPTO_CFG_SHA256EN             0x02000000    /*  Enable SHA-256 Operation */
#define BITM_CRYPTO_CFG_SHA224EN             0x01000000    /*  Enable SHA-224 Operation */
#define BITM_CRYPTO_CFG_CMACEN               0x00100000    /*  Enable CMAC Mode Operation */
#define BITM_CRYPTO_CFG_CCMEN                0x00080000    /*  Enable CCM/CCM* Mode Operation */
#define BITM_CRYPTO_CFG_CBCEN                0x00040000    /*  Enable CBC Mode Operation */
#define BITM_CRYPTO_CFG_CTREN                0x00020000    /*  Enable CTR Mode Operation */
#define BITM_CRYPTO_CFG_ECBEN                0x00010000    /*  Enable ECB Mode Operation */

#define BITM_CRYPTO_CFG_KEYLEN               0x00000300    /*  Select Key Length for AES Cipher */

#define BITM_CRYPTO_CFG_KEYSEL               0x00000080    /*  Select Key Source */

#define BITM_CRYPTO_CFG_ENDIAN               0x00000040    /*  Endianness */
#define BITM_CRYPTO_CFG_OUTFLUSH             0x00000020    /*  Output Buffer Flush */
#define BITM_CRYPTO_CFG_INFLUSH              0x00000010    /*  Input Buffer Flush */

#define BITM_CRYPTO_CFG_OUTDMAEN             0x00000008    /*  Enable DMA for Output Buffer */

#define BITM_CRYPTO_CFG_INDMAEN              0x00000004    /*  Enable DMA for Input Buffer */

#define BITM_CRYPTO_CFG_ENCR                 0x00000002    /*  Encrypt or Decrypt */

#define BITM_CRYPTO_CFG_BLKEN                0x00000001    /*  Enable bit for the Crypto Block */
#define ENUM_CRYPTO_CFG_INBUF                0x00000000            /*  SHADATSRC: SHA takes input from input buffer */
#define ENUM_CRYPTO_CFG_OPBUF                0x08000000            /*  SHADATSRC: SHA takes input from output buffer */
#define ENUM_CRYPTO_CFG_LITTLE_ENDIAN        0x00000000            /*  ENDIAN: Little Endian Format */
#define ENUM_CRYPTO_CFG_BIG_ENDIAN           0x00000040            /*  ENDIAN: Big Endian Format */
#define ENUM_CRYPTO_CFG_DMA_DISABLE_OUTBUF   0x00000000            /*  OUTDMAEN: Disable DMA Requesting for Output Buffer */
#define ENUM_CRYPTO_CFG_DMA_ENABLE_OUTBUF    0x00000008            /*  OUTDMAEN: Enable DMA Requesting for Output Buffer */
#define ENUM_CRYPTO_CFG_DMA_DISABLE_INBUF    0x00000000            /*  INDMAEN: Disable DMA Requesting for Input Buffer */
#define ENUM_CRYPTO_CFG_DMA_ENABLE_INBUF     0x00000004            /*  INDMAEN: Enable DMA Requesting for Input Buffer */
#define ENUM_CRYPTO_CFG_ENABLE               0x00000000            /*  BLKEN: Enable Crypto Block */
#define ENUM_CRYPTO_CFG_DISABLE              0x00000001            /*  BLKEN: Disable Crypto Block */

/* -------------------------------------------------------------------------------------------------------------------------
          crypto_DATALEN                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRYPTO_DATALEN_VALUE             0            /*  Length of Payload Data */
#define BITM_CRYPTO_DATALEN_VALUE            0x000FFFFF    /*  Length of Payload Data */

/* -------------------------------------------------------------------------------------------------------------------------
          crypto_PREFIXLEN                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRYPTO_PREFIXLEN_VALUE           0            /*  Length of Associated Data */
#define BITM_CRYPTO_PREFIXLEN_VALUE          0x0000FFFF    /*  Length of Associated Data */

/* -------------------------------------------------------------------------------------------------------------------------
          crypto_INTEN                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRYPTO_INTEN_SHADONEN            5            /*  Enable SHA_Done Interrupt */
#define BITP_CRYPTO_INTEN_OUTUNDREN           3            /*  Enable the Output Underflow Interrupt */
#define BITP_CRYPTO_INTEN_INOVREN             2            /*  Enable Input Overflow Interrupt. */
#define BITP_CRYPTO_INTEN_OUTRDYEN            1            /*  Enables the Output Ready Interrupt. */
#define BITP_CRYPTO_INTEN_INRDYEN             0            /*  Enable Input Ready Interrupt */
#define BITM_CRYPTO_INTEN_SHADONEN           0x00000020    /*  Enable SHA_Done Interrupt */
#define BITM_CRYPTO_INTEN_OUTUNDREN          0x00000008    /*  Enable the Output Underflow Interrupt */
#define BITM_CRYPTO_INTEN_INOVREN            0x00000004    /*  Enable Input Overflow Interrupt. */
#define BITM_CRYPTO_INTEN_OUTRDYEN           0x00000002    /*  Enables the Output Ready Interrupt. */
#define BITM_CRYPTO_INTEN_INRDYEN            0x00000001    /*  Enable Input Ready Interrupt */

/* -------------------------------------------------------------------------------------------------------------------------
          crypto_STAT                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRYPTO_STAT_OUTWORDS            10            /*  Number of words in the Output Buffer */
#define BITP_CRYPTO_STAT_INWORDS              7            /*  Number of words in the Input Buffer */
#define BITP_CRYPTO_STAT_SHABUSY              6            /*  SHA Busy. Computations are ongoing */
#define BITP_CRYPTO_STAT_SHADONE              5            /*  SHA Computation complete */
#define BITP_CRYPTO_STAT_OUTUNDR              3            /*  Underflow Interrupt in the Output */
#define BITP_CRYPTO_STAT_INOVR                2            /*  Overflow in the input buffer. */
#define BITP_CRYPTO_STAT_OUTRDY               1            /*  Output Data ready to be read */
#define BITP_CRYPTO_STAT_INRDY                0            /*  Input buffer requires more data before computation can begin. Remains set till the Buffer is filled. */
#define BITM_CRYPTO_STAT_OUTWORDS            0x00001C00    /*  Number of words in the Output Buffer */
#define BITM_CRYPTO_STAT_INWORDS             0x00000380    /*  Number of words in the Input Buffer */
#define BITM_CRYPTO_STAT_SHABUSY             0x00000040    /*  SHA Busy. Computations are ongoing */
#define BITM_CRYPTO_STAT_SHADONE             0x00000020    /*  SHA Computation complete */
#define BITM_CRYPTO_STAT_OUTUNDR             0x00000008    /*  Underflow Interrupt in the Output */
#define BITM_CRYPTO_STAT_INOVR               0x00000004    /*  Overflow in the input buffer. */
#define BITM_CRYPTO_STAT_OUTRDY              0x00000002    /*  Output Data ready to be read */
#define BITM_CRYPTO_STAT_INRDY               0x00000001    /*  Input buffer requires more data before computation can begin. Remains set till the Buffer is filled. */

/* -------------------------------------------------------------------------------------------------------------------------
          crypto_CNTRINIT                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRYPTO_CNTRINIT_VALUE            0            /*  Counter Initialization Value */
#define BITM_CRYPTO_CNTRINIT_VALUE           0x000FFFFF    /*  Counter Initialization Value */


/* ============================================================================================================================
        
   ============================================================================================================================ */

/* ============================================================================================================================
        sport
   ============================================================================================================================ */
#define MOD_SPORT_BASE                       0x40038000            /*    */
#define MOD_SPORT_MASK                       0x000000FF            /*    */
#define REG_SPORT_CTL_A_RESET                0x00000000            /*      Reset Value for CTL_A  */
#define REG_SPORT_CTL_A                      0x40038000            /*  sport Half SPORT 'A' Control Register */
#define REG_SPORT_DIV_A_RESET                0x00000000            /*      Reset Value for DIV_A  */
#define REG_SPORT_DIV_A                      0x40038004            /*  sport Half SPORT 'A' Divisor Register */
#define REG_SPORT_INT_EN_A_RESET             0x00000000            /*      Reset Value for INT_EN_A  */
#define REG_SPORT_INT_EN_A                   0x40038008            /*  sport Half SPORT A's Interrupt Enable register */
#define REG_SPORT_STAT_A_RESET               0x00000000            /*      Reset Value for STAT_A  */
#define REG_SPORT_STAT_A                     0x4003800C            /*  sport Half SPORT A's Status register */
#define REG_SPORT_NUM_TRAN_A_RESET           0x00000000            /*      Reset Value for NUM_TRAN_A  */
#define REG_SPORT_NUM_TRAN_A                 0x40038010            /*  sport Half SPORT A Number of transfers register */
#define REG_SPORT_TIM_CONVT_A_RESET          0x00000000            /*      Reset Value for TIM_CONVT_A  */
#define REG_SPORT_TIM_CONVT_A                0x40038014            /*  sport Half SPORT A's register to be programmed with the desired CONVT pulse width */
#define REG_SPORT_TX_A_RESET                 0x00000000            /*      Reset Value for TX_A  */
#define REG_SPORT_TX_A                       0x40038020            /*  sport Half SPORT 'A' Tx Buffer Register */
#define REG_SPORT_RX_A_RESET                 0x00000000            /*      Reset Value for RX_A  */
#define REG_SPORT_RX_A                       0x40038028            /*  sport Half SPORT 'A' Rx Buffer Register */
#define REG_SPORT_NUMTRAN_CNT_A_RESET        0x00000000            /*      Reset Value for NUMTRAN_CNT_A  */
#define REG_SPORT_NUMTRAN_CNT_A              0x40038038            /*  sport Half SPORT A Number of transfers counter */
#define REG_SPORT_CTL_B_RESET                0x00000000            /*      Reset Value for CTL_B  */
#define REG_SPORT_CTL_B                      0x40038040            /*  sport Half SPORT 'B' Control Register */
#define REG_SPORT_DIV_B_RESET                0x00000000            /*      Reset Value for DIV_B  */
#define REG_SPORT_DIV_B                      0x40038044            /*  sport Half SPORT 'B' Divisor Register */
#define REG_SPORT_INT_EN_B_RESET             0x00000000            /*      Reset Value for INT_EN_B  */
#define REG_SPORT_INT_EN_B                   0x40038048            /*  sport Half SPORT A's Interrupt Enable register */
#define REG_SPORT_STAT_B_RESET               0x00000000            /*      Reset Value for STAT_B  */
#define REG_SPORT_STAT_B                     0x4003804C            /*  sport Half SPORT B's Status register */
#define REG_SPORT_NUM_TRAN_B_RESET           0x00000000            /*      Reset Value for NUM_TRAN_B  */
#define REG_SPORT_NUM_TRAN_B                 0x40038050            /*  sport Half SPORT B Number of transfers register */
#define REG_SPORT_TIM_CONVT_B_RESET          0x00000000            /*      Reset Value for TIM_CONVT_B  */
#define REG_SPORT_TIM_CONVT_B                0x40038054            /*  sport Half SPORT B's register to be programmed with the desired CONVT pulse width */
#define REG_SPORT_TX_B_RESET                 0x00000000            /*      Reset Value for TX_B  */
#define REG_SPORT_TX_B                       0x40038060            /*  sport Half SPORT 'B' Tx Buffer Register */
#define REG_SPORT_RX_B_RESET                 0x00000000            /*      Reset Value for RX_B  */
#define REG_SPORT_RX_B                       0x40038068            /*  sport Half SPORT 'B' Rx Buffer Register */
#define REG_SPORT_NUMTRAN_CNT_B_RESET        0x00000000            /*      Reset Value for NUMTRAN_CNT_B  */
#define REG_SPORT_NUMTRAN_CNT_B              0x40038078            /*  sport Half SPORT B Number of transfers counter */

/* ============================================================================================================================
        sport Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          sport_CTL_A                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_CTL_A_DMAEN               26            /*  DMA Enable */
#define BITP_SPORT_CTL_A_SPTRAN              25            /*  Serial Port Transfer Direction */
#define BITP_SPORT_CTL_A_GCLKEN              21            /*  Gated Clock Enable */
#define BITP_SPORT_CTL_A_FSERROPRN           20            /*  Frame Sync Error Operation */
#define BITP_SPORT_CTL_A_PACK                18            /*  Packing Enable */
#define BITP_SPORT_CTL_A_LAFS                17            /*  Late Frame Sync */
#define BITP_SPORT_CTL_A_LFS                 16            /*  Active-Low Frame Sync */
#define BITP_SPORT_CTL_A_DIFS                15            /*  Data-Independent Frame Sync */
#define BITP_SPORT_CTL_A_IFS                 14            /*  Internal Frame Sync */
#define BITP_SPORT_CTL_A_FSR                 13            /*  Frame Sync Required */
#define BITP_SPORT_CTL_A_CKRE                12            /*  Clock Rising Edge */
#define BITP_SPORT_CTL_A_OPMODE              11            /*  Operation mode */
#define BITP_SPORT_CTL_A_ICLK                10            /*  Internal Clock */
#define BITP_SPORT_CTL_A_SLEN                 4            /*  Serial Word Length */
#define BITP_SPORT_CTL_A_LSBF                 3            /*  Least-Significant Bit First */
#define BITP_SPORT_CTL_A_CKMUXSEL             2            /*  Clock Multiplexer Select */
#define BITP_SPORT_CTL_A_FSMUXSEL             1            /*  Frame Sync Multiplexer Select */
#define BITP_SPORT_CTL_A_SPEN                 0            /*  Serial Port Enable */

#define BITM_SPORT_CTL_A_DMAEN               0x04000000    /*  DMA Enable */

#define BITM_SPORT_CTL_A_SPTRAN              0x02000000    /*  Serial Port Transfer Direction */

#define BITM_SPORT_CTL_A_GCLKEN              0x00200000    /*  Gated Clock Enable */

#define BITM_SPORT_CTL_A_FSERROPRN           0x00100000    /*  Frame Sync Error Operation */

#define BITM_SPORT_CTL_A_PACK                0x000C0000    /*  Packing Enable */

#define BITM_SPORT_CTL_A_LAFS                0x00020000    /*  Late Frame Sync */

#define BITM_SPORT_CTL_A_LFS                 0x00010000    /*  Active-Low Frame Sync */

#define BITM_SPORT_CTL_A_DIFS                0x00008000    /*  Data-Independent Frame Sync */

#define BITM_SPORT_CTL_A_IFS                 0x00004000    /*  Internal Frame Sync */

#define BITM_SPORT_CTL_A_FSR                 0x00002000    /*  Frame Sync Required */

#define BITM_SPORT_CTL_A_CKRE                0x00001000    /*  Clock Rising Edge */

#define BITM_SPORT_CTL_A_OPMODE              0x00000800    /*  Operation mode */

#define BITM_SPORT_CTL_A_ICLK                0x00000400    /*  Internal Clock */
#define BITM_SPORT_CTL_A_SLEN                0x000001F0    /*  Serial Word Length */

#define BITM_SPORT_CTL_A_LSBF                0x00000008    /*  Least-Significant Bit First */

#define BITM_SPORT_CTL_A_CKMUXSEL            0x00000004    /*  Clock Multiplexer Select */

#define BITM_SPORT_CTL_A_FSMUXSEL            0x00000002    /*  Frame Sync Multiplexer Select */

#define BITM_SPORT_CTL_A_SPEN                0x00000001    /*  Serial Port Enable */
#define ENUM_SPORT_CTL_A_CTL_RX              0x00000000            /*  SPTRAN: Receive */
#define ENUM_SPORT_CTL_A_CTL_TX              0x02000000            /*  SPTRAN: Transmit */
#define ENUM_SPORT_CTL_A_CTL_GCLK_DIS        0x00000000            /*  GCLKEN: Disable */
#define ENUM_SPORT_CTL_A_CTL_GCLK_EN         0x00200000            /*  GCLKEN: Enable */
#define ENUM_SPORT_CTL_A_CTL_PACK_DIS        0x00000000            /*  PACK: Disable */
#define ENUM_SPORT_CTL_A_CTL_PACK_8BIT       0x00040000            /*  PACK: 8-bit packing enable */
#define ENUM_SPORT_CTL_A_CTL_PACK_16BIT      0x00080000            /*  PACK: 16-bit packing enable */
#define ENUM_SPORT_CTL_A_CTL_EARLY_FS        0x00000000            /*  LAFS: Early frame sync */
#define ENUM_SPORT_CTL_A_CTL_LATE_FS         0x00020000            /*  LAFS: Late frame sync */
#define ENUM_SPORT_CTL_A_CTL_FS_LO           0x00000000            /*  LFS: Active high frame sync (DSP standard mode) */
#define ENUM_SPORT_CTL_A_CTL_FS_HI           0x00010000            /*  LFS: Active low frame sync (DSP standard mode) */
#define ENUM_SPORT_CTL_A_CTL_DATA_DEP_FS     0x00000000            /*  DIFS: Data-dependent frame sync */
#define ENUM_SPORT_CTL_A_CTL_DATA_INDP_FS    0x00008000            /*  DIFS: Data-independent frame sync */
#define ENUM_SPORT_CTL_A_CTL_EXTERNAL_FS     0x00000000            /*  IFS: External frame sync */
#define ENUM_SPORT_CTL_A_CTL_INTERNAL_FS     0x00004000            /*  IFS: Internal frame sync */
#define ENUM_SPORT_CTL_A_CTL_FS_NOT_REQ      0x00000000            /*  FSR: No frame sync required */
#define ENUM_SPORT_CTL_A_CTL_FS_REQ          0x00002000            /*  FSR: Frame sync required */
#define ENUM_SPORT_CTL_A_CTL_CLK_FALL_EDGE   0x00000000            /*  CKRE: Clock falling edge */
#define ENUM_SPORT_CTL_A_CTL_CLK_RISE_EDGE   0x00001000            /*  CKRE: Clock rising edge */
#define ENUM_SPORT_CTL_A_CTL_SERIAL          0x00000000            /*  OPMODE: DSP standard */
#define ENUM_SPORT_CTL_A_CTL_TIMER_EN_MODE   0x00000800            /*  OPMODE: Timer_enable mode */
#define ENUM_SPORT_CTL_A_CTL_EXTERNAL_CLK    0x00000000            /*  ICLK: External clock */
#define ENUM_SPORT_CTL_A_CTL_INTERNAL_CLK    0x00000400            /*  ICLK: Internal clock */
#define ENUM_SPORT_CTL_A_CTL_MSB_FIRST       0x00000000            /*  LSBF: MSB first sent/received */
#define ENUM_SPORT_CTL_A_CTL_LSB_FIRST       0x00000008            /*  LSBF: LSB first sent/received */
#define ENUM_SPORT_CTL_A_CTL_CLK_MUX_DIS     0x00000000            /*  CKMUXSEL: Disable serial clock multiplexing */
#define ENUM_SPORT_CTL_A_CTL_CLK_MUX_EN      0x00000004            /*  CKMUXSEL: Enable serial clock multiplexing */
#define ENUM_SPORT_CTL_A_CTL_FS_MUX_DIS      0x00000000            /*  FSMUXSEL: Disable frame sync multiplexing */
#define ENUM_SPORT_CTL_A_CTL_FS_MUX_EN       0x00000002            /*  FSMUXSEL: Enable frame sync multiplexing */
#define ENUM_SPORT_CTL_A_CTL_DIS             0x00000000            /*  SPEN: Disable */
#define ENUM_SPORT_CTL_A_CTL_EN              0x00000001            /*  SPEN: Enable */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_DIV_A                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_DIV_A_FSDIV               16            /*  Frame Sync Divisor */
#define BITP_SPORT_DIV_A_CLKDIV               0            /*  Clock Divisor */
#define BITM_SPORT_DIV_A_FSDIV               0x00FF0000    /*  Frame Sync Divisor */
#define BITM_SPORT_DIV_A_CLKDIV              0x0000FFFF    /*  Clock Divisor */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_INT_EN_A                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_INT_EN_A_SYSDTERR          4            /*  Data error for system writes or reads */
#define BITP_SPORT_INT_EN_A_DATAINT           3            /*  Data request interrupt to the core */
#define BITP_SPORT_INT_EN_A_FSERRMSK          2            /*  Frame Sync Error (Interrupt) Mask */
#define BITP_SPORT_INT_EN_A_DERRMSK           1            /*  Data Error (Interrupt) Mask */
#define BITP_SPORT_INT_EN_A_TFIEN             0            /*  Transfer Finish Interrupt Enable */

#define BITM_SPORT_INT_EN_A_SYSDTERR         0x00000010    /*  Data error for system writes or reads */

#define BITM_SPORT_INT_EN_A_DATAINT          0x00000008    /*  Data request interrupt to the core */

#define BITM_SPORT_INT_EN_A_FSERRMSK         0x00000004    /*  Frame Sync Error (Interrupt) Mask */

#define BITM_SPORT_INT_EN_A_DERRMSK          0x00000002    /*  Data Error (Interrupt) Mask */

#define BITM_SPORT_INT_EN_A_TFIEN            0x00000001    /*  Transfer Finish Interrupt Enable */
#define ENUM_SPORT_INT_EN_A_CTL_TXFIN_DIS    0x00000000            /*  TFIEN: Transfer finish Interrupt is disabled */
#define ENUM_SPORT_INT_EN_A_CTL_TXFIN_EN     0x00000001            /*  TFIEN: Transfer Finish Interrupt is Enabled */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_STAT_A                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_STAT_A_DXS                 8            /*  Data Transfer Buffer Status */
#define BITP_SPORT_STAT_A_SYSDTERRSTAT        4            /*  System Data Error Status */
#define BITP_SPORT_STAT_A_DATASTAT            3            /*  Data Buffer status */
#define BITP_SPORT_STAT_A_FSERRSTAT           2            /*  Frame Sync Error Status */
#define BITP_SPORT_STAT_A_DERRSTAT            1            /*  Data Error Status */
#define BITP_SPORT_STAT_A_TFISTAT             0            /*  Transmit Finish Interrupt Status */

#define BITM_SPORT_STAT_A_DXS                0x00000300    /*  Data Transfer Buffer Status */

#define BITM_SPORT_STAT_A_SYSDTERRSTAT       0x00000010    /*  System Data Error Status */

#define BITM_SPORT_STAT_A_DATASTAT           0x00000008    /*  Data Buffer status */

#define BITM_SPORT_STAT_A_FSERRSTAT          0x00000004    /*  Frame Sync Error Status */

#define BITM_SPORT_STAT_A_DERRSTAT           0x00000002    /*  Data Error Status */

#define BITM_SPORT_STAT_A_TFISTAT            0x00000001    /*  Transmit Finish Interrupt Status */
#define ENUM_SPORT_STAT_A_CTL_EMPTY          0x00000000            /*  DXS: Empty */
#define ENUM_SPORT_STAT_A_CTL_PART_FULL      0x00000200            /*  DXS: Partially full */
#define ENUM_SPORT_STAT_A_CTL_FULL           0x00000300            /*  DXS: Full */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_NUM_TRAN_A                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_NUM_TRAN_A_NUMTRAN         0            /*  Number of transfers (Half SPORT A) */
#define BITM_SPORT_NUM_TRAN_A_NUMTRAN        0x00000FFF    /*  Number of transfers (Half SPORT A) */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_TIM_CONVT_A                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_TIM_CONVT_A_CONVT_FS_DURTN 16            /*  CONVT to FS duration: Half SPORT A */
#define BITP_SPORT_TIM_CONVT_A_CONVT_POL      8            /*  Polarity of the Convt signal */
#define BITP_SPORT_TIM_CONVT_A_CONVT_WIDTH    0            /*  CONVT signal width: Half SPORT A */
#define BITM_SPORT_TIM_CONVT_A_CONVT_FS_DURTN 0x00FF0000    /*  CONVT to FS duration: Half SPORT A */

#define BITM_SPORT_TIM_CONVT_A_CONVT_POL     0x00000100    /*  Polarity of the Convt signal */
#define BITM_SPORT_TIM_CONVT_A_CONVT_WIDTH   0x0000000F    /*  CONVT signal width: Half SPORT A */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_NUMTRAN_CNT_A                  Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_NUMTRAN_CNT_A_NUMTRAN_CNT  0            /*  Number of transfers counter value */
#define BITM_SPORT_NUMTRAN_CNT_A_NUMTRAN_CNT 0x00000FFF    /*  Number of transfers counter value */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_CTL_B                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_CTL_B_DMAEN               26            /*  DMA Enable */
#define BITP_SPORT_CTL_B_SPTRAN              25            /*  Serial Port Transfer Direction */
#define BITP_SPORT_CTL_B_GCLKEN              21            /*  Gated Clock Enable */
#define BITP_SPORT_CTL_B_FSERROPRN           20            /*  Frame Sync Error Operation */
#define BITP_SPORT_CTL_B_PACK                18            /*  Packing Enable */
#define BITP_SPORT_CTL_B_LAFS                17            /*  Late Frame Sync */
#define BITP_SPORT_CTL_B_LFS                 16            /*  Active-Low Frame Sync / L_FIRST / PLFS */
#define BITP_SPORT_CTL_B_DIFS                15            /*  Data-Independent Frame Sync */
#define BITP_SPORT_CTL_B_IFS                 14            /*  Internal Frame Sync */
#define BITP_SPORT_CTL_B_FSR                 13            /*  Frame Sync Required */
#define BITP_SPORT_CTL_B_CKRE                12            /*  Clock Rising Edge */
#define BITP_SPORT_CTL_B_OPMODE              11            /*  Operation mode */
#define BITP_SPORT_CTL_B_ICLK                10            /*  Internal Clock */
#define BITP_SPORT_CTL_B_SLEN                 4            /*  Serial Word Length */
#define BITP_SPORT_CTL_B_LSBF                 3            /*  Least-Significant Bit First */
#define BITP_SPORT_CTL_B_SPEN                 0            /*  Serial Port Enable */

#define BITM_SPORT_CTL_B_DMAEN               0x04000000    /*  DMA Enable */

#define BITM_SPORT_CTL_B_SPTRAN              0x02000000    /*  Serial Port Transfer Direction */

#define BITM_SPORT_CTL_B_GCLKEN              0x00200000    /*  Gated Clock Enable */

#define BITM_SPORT_CTL_B_FSERROPRN           0x00100000    /*  Frame Sync Error Operation */

#define BITM_SPORT_CTL_B_PACK                0x000C0000    /*  Packing Enable */

#define BITM_SPORT_CTL_B_LAFS                0x00020000    /*  Late Frame Sync */

#define BITM_SPORT_CTL_B_LFS                 0x00010000    /*  Active-Low Frame Sync / L_FIRST / PLFS */

#define BITM_SPORT_CTL_B_DIFS                0x00008000    /*  Data-Independent Frame Sync */

#define BITM_SPORT_CTL_B_IFS                 0x00004000    /*  Internal Frame Sync */

#define BITM_SPORT_CTL_B_FSR                 0x00002000    /*  Frame Sync Required */

#define BITM_SPORT_CTL_B_CKRE                0x00001000    /*  Clock Rising Edge */

#define BITM_SPORT_CTL_B_OPMODE              0x00000800    /*  Operation mode */

#define BITM_SPORT_CTL_B_ICLK                0x00000400    /*  Internal Clock */
#define BITM_SPORT_CTL_B_SLEN                0x000001F0    /*  Serial Word Length */

#define BITM_SPORT_CTL_B_LSBF                0x00000008    /*  Least-Significant Bit First */

#define BITM_SPORT_CTL_B_SPEN                0x00000001    /*  Serial Port Enable */
#define ENUM_SPORT_CTL_B_CTL_PACK_DIS        0x00000000            /*  PACK: Disable */
#define ENUM_SPORT_CTL_B_CTL_PACK_8BIT       0x00040000            /*  PACK: 8-bit packing enable */
#define ENUM_SPORT_CTL_B_CTL_PACK_16BIT      0x00080000            /*  PACK: 16-bit packing enable */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_DIV_B                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_DIV_B_FSDIV               16            /*  Frame Sync Divisor */
#define BITP_SPORT_DIV_B_CLKDIV               0            /*  Clock Divisor */
#define BITM_SPORT_DIV_B_FSDIV               0x00FF0000    /*  Frame Sync Divisor */
#define BITM_SPORT_DIV_B_CLKDIV              0x0000FFFF    /*  Clock Divisor */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_INT_EN_B                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_INT_EN_B_SYSDTERR          4            /*  Data error for system writes or reads */
#define BITP_SPORT_INT_EN_B_DATAINT           3            /*  Data request interrupt to the core */
#define BITP_SPORT_INT_EN_B_FSERRMSK          2            /*  Frame Sync Error (Interrupt) Mask */
#define BITP_SPORT_INT_EN_B_DERRMSK           1            /*  Data Error (Interrupt) Mask */
#define BITP_SPORT_INT_EN_B_TFIEN             0            /*  Transmit Finish Interrupt Enable */

#define BITM_SPORT_INT_EN_B_SYSDTERR         0x00000010    /*  Data error for system writes or reads */

#define BITM_SPORT_INT_EN_B_DATAINT          0x00000008    /*  Data request interrupt to the core */

#define BITM_SPORT_INT_EN_B_FSERRMSK         0x00000004    /*  Frame Sync Error (Interrupt) Mask */

#define BITM_SPORT_INT_EN_B_DERRMSK          0x00000002    /*  Data Error (Interrupt) Mask */

#define BITM_SPORT_INT_EN_B_TFIEN            0x00000001    /*  Transmit Finish Interrupt Enable */
#define ENUM_SPORT_INT_EN_B_CTL_TXFIN_DIS    0x00000000            /*  TFIEN: Transfer Finish Interrupt is disabled */
#define ENUM_SPORT_INT_EN_B_CTL_TXFIN_EN     0x00000001            /*  TFIEN: Transfer Finish Interrupt is Enabled */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_STAT_B                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_STAT_B_DXS                 8            /*  Data Transfer Buffer Status */
#define BITP_SPORT_STAT_B_SYSDTERRSTAT        4            /*  System Data Error Status */
#define BITP_SPORT_STAT_B_DATASTAT            3            /*  Data Buffer status */
#define BITP_SPORT_STAT_B_FSERRSTAT           2            /*  Frame Sync Error Status */
#define BITP_SPORT_STAT_B_DERRSTAT            1            /*  Data Error Status */
#define BITP_SPORT_STAT_B_TFISTAT             0            /*  Transmit Finish Interrupt Status */

#define BITM_SPORT_STAT_B_DXS                0x00000300    /*  Data Transfer Buffer Status */

#define BITM_SPORT_STAT_B_SYSDTERRSTAT       0x00000010    /*  System Data Error Status */

#define BITM_SPORT_STAT_B_DATASTAT           0x00000008    /*  Data Buffer status */

#define BITM_SPORT_STAT_B_FSERRSTAT          0x00000004    /*  Frame Sync Error Status */

#define BITM_SPORT_STAT_B_DERRSTAT           0x00000002    /*  Data Error Status */

#define BITM_SPORT_STAT_B_TFISTAT            0x00000001    /*  Transmit Finish Interrupt Status */
#define ENUM_SPORT_STAT_B_CTL_EMPTY          0x00000000            /*  DXS: Empty */
#define ENUM_SPORT_STAT_B_CTL_PART_FULL      0x00000200            /*  DXS: Partially full */
#define ENUM_SPORT_STAT_B_CTL_FULL           0x00000300            /*  DXS: Full */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_NUM_TRAN_B                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_NUM_TRAN_B_NUMTRAN         0            /*  Number of transfers (Half SPORT A) */
#define BITM_SPORT_NUM_TRAN_B_NUMTRAN        0x00000FFF    /*  Number of transfers (Half SPORT A) */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_TIM_CONVT_B                    Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_TIM_CONVT_B_CONVT_FS_DURTN 16            /*  CONVT to FS duration: Half SPORT B */
#define BITP_SPORT_TIM_CONVT_B_CONVT_POL      8            /*  Polarity of the Convt signal */
#define BITP_SPORT_TIM_CONVT_B_CONVT_WIDTH    0            /*  CONVT signal width: Half SPORT B */
#define BITM_SPORT_TIM_CONVT_B_CONVT_FS_DURTN 0x00FF0000    /*  CONVT to FS duration: Half SPORT B */

#define BITM_SPORT_TIM_CONVT_B_CONVT_POL     0x00000100    /*  Polarity of the Convt signal */
#define BITM_SPORT_TIM_CONVT_B_CONVT_WIDTH   0x0000000F    /*  CONVT signal width: Half SPORT B */

/* -------------------------------------------------------------------------------------------------------------------------
          sport_NUMTRAN_CNT_B                  Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SPORT_NUMTRAN_CNT_B_NUMTRAN_CNT  0            /*  Number of transfers counter value */
#define BITM_SPORT_NUMTRAN_CNT_B_NUMTRAN_CNT 0x00000FFF    /*  Number of transfers counter value */


/* ============================================================================================================================
        CRC
   ============================================================================================================================ */

/* ============================================================================================================================
        crc
   ============================================================================================================================ */
#define MOD_CRC_BASE                         0x40040000            /*  CRC  */
#define MOD_CRC_MASK                         0x000000FF            /*  CRC  */
#define REG_CRC_CRC_CTL_RESET                0x00000000            /*      Reset Value for CRC_CTL  */
#define REG_CRC_CRC_CTL                      0x40040000            /*  crc CRC Control Register */
#define REG_CRC_CRC_IPDATA_RESET             0x00000000            /*      Reset Value for CRC_IPDATA  */
#define REG_CRC_CRC_IPDATA                   0x40040004            /*  crc Input Data Register */
#define REG_CRC_CRC_RESULT_RESET             0x00000000            /*      Reset Value for CRC_RESULT  */
#define REG_CRC_CRC_RESULT                   0x40040008            /*  crc CRC Result Register */
#define REG_CRC_CRC_POLY_RESET               0x04C11DB7            /*      Reset Value for CRC_POLY  */
#define REG_CRC_CRC_POLY                     0x4004000C            /*  crc Programmable CRC Polynomial */

/* ============================================================================================================================
        crc Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          crc_CRC_CTL                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CRC_CRC_CTL_W16SWP               4            /*  Word16 Swap */
#define BITP_CRC_CRC_CTL_BYTMIRR              3            /*  Byte Mirroring */
#define BITP_CRC_CRC_CTL_BITMIRR              2            /*  Bit Mirroring */
#define BITP_CRC_CRC_CTL_LSB_FIRST            1            /*  LSB First CRC calculation enable */
#define BITP_CRC_CRC_CTL_BLKEN                0            /*  CRC peripheral enable */

#define BITM_CRC_CRC_CTL_W16SWP              0x00000010    /*  Word16 Swap */

#define BITM_CRC_CRC_CTL_BYTMIRR             0x00000008    /*  Byte Mirroring */

#define BITM_CRC_CRC_CTL_BITMIRR             0x00000004    /*  Bit Mirroring */

#define BITM_CRC_CRC_CTL_LSB_FIRST           0x00000002    /*  LSB First CRC calculation enable */

#define BITM_CRC_CRC_CTL_BLKEN               0x00000001    /*  CRC peripheral enable */


/* ============================================================================================================================
        Power Management Registers
   ============================================================================================================================ */

/* ============================================================================================================================
        PMG
   ============================================================================================================================ */
#define MOD_PMG_BASE                         0x4004C000            /*  Power Management Registers  */
#define MOD_PMG_MASK                         0x00003FFF            /*  Power Management Registers  */
#define REG_PMG_INTR_CNTRL0_RESET            0x00000000            /*      Reset Value for INTR_CNTRL0  */
#define REG_PMG_INTR_CNTRL0                  0x4004C000            /*  PMG Power Supply Monitor Interrupt Enable */
#define REG_PMG_PSM_STATUS_RESET             0x00000000            /*      Reset Value for PSM_STATUS  */
#define REG_PMG_PSM_STATUS                   0x4004C004            /*  PMG Power supply monitor status */
#define REG_PMG_PWRMOD_RESET                 0x00000000            /*      Reset Value for PWRMOD  */
#define REG_PMG_PWRMOD                       0x4004C008            /*  PMG Power Mode Register */
#define REG_PMG_PWRKEY_RESET                 0x00000000            /*      Reset Value for PWRKEY  */
#define REG_PMG_PWRKEY                       0x4004C00C            /*  PMG Key protection for PWRMOD */
#define REG_PMG_SHUTDOWN_STATUS_RESET        0x00000000            /*      Reset Value for SHUTDOWN_STATUS  */
#define REG_PMG_SHUTDOWN_STATUS              0x4004C010            /*  PMG SHUTDOWN Status Register */
#define REG_PMG_SRAMRET_RESET                0x00000000            /*      Reset Value for SRAMRET  */
#define REG_PMG_SRAMRET                      0x4004C014            /*  PMG Control for Retention SRAM during HIBERNATE Mode */
#define REG_PMG_SW_TST_LV0_RESET             0x00000001            /*      Reset Value for SW_TST_LV0  */
#define REG_PMG_SW_TST_LV0                   0x4004C024            /*  PMG LV Switch config */
#define REG_PMG_SW_TST_LV1_RESET             0x00000003            /*      Reset Value for SW_TST_LV1  */
#define REG_PMG_SW_TST_LV1                   0x4004C028            /*  PMG LV Switch config2 (test) */
#define REG_PMG_SW_TST_HV_RESET              0x00000021            /*      Reset Value for SW_TST_HV  */
#define REG_PMG_SW_TST_HV                    0x4004C02C            /*  PMG HV Switch config */
#define REG_PMG_TESTPROT_RESET               0x00000000            /*      Reset Value for TESTPROT  */
#define REG_PMG_TESTPROT                     0x4004C030            /*  PMG Test register lock */
#define REG_PMG_LP_TST_REF0_RESET            0x00008000            /*      Reset Value for LP_TST_REF0  */
#define REG_PMG_LP_TST_REF0                  0x4004C034            /*  PMG Low Power Reference Test Register 0 */
#define REG_PMG_PMG_TRIM_RESET               0x0000C155            /*      Reset Value for PMG_TRIM  */
#define REG_PMG_PMG_TRIM                     0x4004C038            /*  PMG Trimming bits for the power management */
#define REG_PMG_RSTSTA                       0x4004C040            /*  PMG Reset status */
#define REG_PMG_CNTRL1_RESET                 0x00000000            /*      Reset Value for CNTRL1  */
#define REG_PMG_CNTRL1                       0x4004C044            /*  PMG HPBUCK control */
#define REG_PMG_WK_TST_RESET                 0x00000000            /*      Reset Value for WK_TST  */
#define REG_PMG_WK_TST                       0x4004C048            /*  PMG Test mode for wake up options */
#define REG_PMG_ANA_TST1_RESET               0x00000000            /*      Reset Value for ANA_TST1  */
#define REG_PMG_ANA_TST1                     0x4004C04C            /*  PMG Analog test */
#define REG_PMG_ANA_TST2_RESET               0x00000000            /*      Reset Value for ANA_TST2  */
#define REG_PMG_ANA_TST2                     0x4004C050            /*  PMG Analog Test control for digital signals */
#define REG_PMG_DIG_TST1_RESET               0x00000000            /*      Reset Value for DIG_TST1  */
#define REG_PMG_DIG_TST1                     0x4004C054            /*  PMG Digital Test Control */
#define REG_PMG_HP_LDO_TST_RESET             0x00000005            /*      Reset Value for HP_LDO_TST  */
#define REG_PMG_HP_LDO_TST                   0x4004C058            /*  PMG High Power LDO Test Register */

/* ============================================================================================================================
        PMG Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          PMG_INTR_CNTRL0                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_INTR_CNTRL0_VBAT_RANGE_IRQ_EN 10            /*  Interrupt enable for VBAT range */
#define BITP_PMG_INTR_CNTRL0_VBAT_RANGE       8            /*  Battery Monitor Range */
#define BITP_PMG_INTR_CNTRL0_VREG_IRQ_OV_EN   2            /*  Enable Interrupt when VREG over-voltage: over- 1.32V */
#define BITP_PMG_INTR_CNTRL0_VREG_IRQ_UN_EN   1            /*  Enable Interrupt when VREG under-voltage: below 1V */
#define BITP_PMG_INTR_CNTRL0_VBAT_ALARM_IRQ_EN  0            /*  Enable Interrupt for VBAT */
#define BITM_PMG_INTR_CNTRL0_VBAT_RANGE_IRQ_EN 0x00000400    /*  Interrupt enable for VBAT range */

#define BITM_PMG_INTR_CNTRL0_VBAT_RANGE      0x00000300    /*  Battery Monitor Range */
#define BITM_PMG_INTR_CNTRL0_VREG_IRQ_OV_EN  0x00000004    /*  Enable Interrupt when VREG over-voltage: over- 1.32V */
#define BITM_PMG_INTR_CNTRL0_VREG_IRQ_UN_EN  0x00000002    /*  Enable Interrupt when VREG under-voltage: below 1V */
#define BITM_PMG_INTR_CNTRL0_VBAT_ALARM_IRQ_EN 0x00000001    /*  Enable Interrupt for VBAT */
#define ENUM_PMG_INTR_CNTRL0_REGION1         0x00000000            /*  VBAT_RANGE: Configure to generate interrupt if VBAT > 2.75V */
#define ENUM_PMG_INTR_CNTRL0_REGION2         0x00000100            /*  VBAT_RANGE: Configure to generate interrupt if VBAT between 2.75V - 1.6V */
#define ENUM_PMG_INTR_CNTRL0_REGION3         0x00000200            /*  VBAT_RANGE: Configure to generate interrupt if VBAT between 2.3V - 1.6V */
#define ENUM_PMG_INTR_CNTRL0_NA              0x00000300            /*  VBAT_RANGE: N/A */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_PSM_STATUS                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_PSM_STATUS_RO_VBAT_RANGE3   15            /*  VBAT range3 (2.3v - 1.6v) */
#define BITP_PMG_PSM_STATUS_RO_VBAT_RANGE2   14            /*  VBAT range2 (2.75v - 2.3v) */
#define BITP_PMG_PSM_STATUS_RO_VBAT_RANGE1   13            /*  VBAT range1 (> 2.75v) */
#define BITP_PMG_PSM_STATUS_VBAT_RANGE3      10            /*  VBAT range3 (2.3v - 1.6v) */
#define BITP_PMG_PSM_STATUS_VBAT_RANGE2       9            /*  VBAT range2 (2.75v - 2.3v) */
#define BITP_PMG_PSM_STATUS_VBAT_RANGE1       8            /*  VBAT range1 (> 2.75v) */
#define BITP_PMG_PSM_STATUS_WICEN_ACK         7            /*  WIC Enable Acknowledge from Cortex */
#define BITP_PMG_PSM_STATUS_PSM_VREG_OV       2            /*  Status bit for alarm indicating Overvoltage for VREG */
#define BITP_PMG_PSM_STATUS_PSM_REG_UN        1            /*  Status bit for Alarm indicating VREG is below 1V. */
#define BITP_PMG_PSM_STATUS_PSM_VBAT          0            /*  Status bit indicating an Alarm that battery is below 1.8V. */

#define BITM_PMG_PSM_STATUS_RO_VBAT_RANGE3   0x00008000    /*  VBAT range3 (2.3v - 1.6v) */

#define BITM_PMG_PSM_STATUS_RO_VBAT_RANGE2   0x00004000    /*  VBAT range2 (2.75v - 2.3v) */

#define BITM_PMG_PSM_STATUS_RO_VBAT_RANGE1   0x00002000    /*  VBAT range1 (> 2.75v) */

#define BITM_PMG_PSM_STATUS_VBAT_RANGE3      0x00000400    /*  VBAT range3 (2.3v - 1.6v) */

#define BITM_PMG_PSM_STATUS_VBAT_RANGE2      0x00000200    /*  VBAT range2 (2.75v - 2.3v) */

#define BITM_PMG_PSM_STATUS_VBAT_RANGE1      0x00000100    /*  VBAT range1 (> 2.75v) */
#define BITM_PMG_PSM_STATUS_WICEN_ACK        0x00000080    /*  WIC Enable Acknowledge from Cortex */
#define BITM_PMG_PSM_STATUS_PSM_VREG_OV      0x00000004    /*  Status bit for alarm indicating Overvoltage for VREG */
#define BITM_PMG_PSM_STATUS_PSM_REG_UN       0x00000002    /*  Status bit for Alarm indicating VREG is below 1V. */
#define BITM_PMG_PSM_STATUS_PSM_VBAT         0x00000001    /*  Status bit indicating an Alarm that battery is below 1.8V. */
#define ENUM_PMG_PSM_STATUS_BATSTAT1         0x00000000            /*  RO_VBAT_Range1: VBAT NOT in the range specified */
#define ENUM_PMG_PSM_STATUS_BATSTAT0         0x00002000            /*  RO_VBAT_Range1: VBAT in the range specified */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_PWRMOD                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_PWRMOD_PMG_FULL_SPEED        4            /*  Keep PMG at full speed - 32KHz */
#define BITP_PMG_PWRMOD_MONITOR_VBAT_N        3            /*  Monitor VBAT during HIBERNATE Mode. Monitors VBAT by default */
#define BITP_PMG_PWRMOD_REDUCE_PMG_CLK        2            /*  Reduce Speed for the PMG */
#define BITP_PMG_PWRMOD_PW_MD                 0            /*  Power Mode Bits */
#define BITM_PMG_PWRMOD_PMG_FULL_SPEED       0x00000010    /*  Keep PMG at full speed - 32KHz */
#define BITM_PMG_PWRMOD_MONITOR_VBAT_N       0x00000008    /*  Monitor VBAT during HIBERNATE Mode. Monitors VBAT by default */
#define BITM_PMG_PWRMOD_REDUCE_PMG_CLK       0x00000004    /*  Reduce Speed for the PMG */

#define BITM_PMG_PWRMOD_PW_MD                0x00000003    /*  Power Mode Bits */
#define ENUM_PMG_PWRMOD_FLEXI                0x00000000            /*  pw_md: FLEXI Mode */
#define ENUM_PMG_PWRMOD_SYSSLEEP             0x00000001            /*  pw_md: SYSSLEEP Mode */
#define ENUM_PMG_PWRMOD_HIBERNATE            0x00000002            /*  pw_md: HIBERNATE Mode */
#define ENUM_PMG_PWRMOD_SHUTDOWN             0x00000003            /*  pw_md: SHUTDOWN Mode */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_PWRKEY                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_PWRKEY_PWRKEY                0            /*  Power control key register */
#define BITM_PMG_PWRKEY_PWRKEY               0x0000FFFF    /*  Power control key register */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_SHUTDOWN_STATUS                  Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_SHUTDOWN_STATUS_RTC          3            /*  Interrupt from RTC */
#define BITP_PMG_SHUTDOWN_STATUS_EXTINT2      2            /*  Interrupt from External Interrupt 2 */
#define BITP_PMG_SHUTDOWN_STATUS_EXTINT1      1            /*  Interrupt from External Interrupt 1 */
#define BITP_PMG_SHUTDOWN_STATUS_EXTINT0      0            /*  Interrupt from External Interrupt 0 */
#define BITM_PMG_SHUTDOWN_STATUS_RTC         0x00000008    /*  Interrupt from RTC */
#define BITM_PMG_SHUTDOWN_STATUS_EXTINT2     0x00000004    /*  Interrupt from External Interrupt 2 */
#define BITM_PMG_SHUTDOWN_STATUS_EXTINT1     0x00000002    /*  Interrupt from External Interrupt 1 */
#define BITM_PMG_SHUTDOWN_STATUS_EXTINT0     0x00000001    /*  Interrupt from External Interrupt 0 */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_SRAMRET                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_SRAMRET_SW_FLASH_EN          2            /*  Enable HV logic for HIBERNATE Mode */
#define BITP_PMG_SRAMRET_SRAM_RET2_EN         1            /*  Enable retention bank 2 (16kB) */
#define BITP_PMG_SRAMRET_SRAM_RET1_EN         0            /*  Enable retention bank 1 (8kB) */
#define BITM_PMG_SRAMRET_SW_FLASH_EN         0x00000004    /*  Enable HV logic for HIBERNATE Mode */
#define BITM_PMG_SRAMRET_SRAM_RET2_EN        0x00000002    /*  Enable retention bank 2 (16kB) */
#define BITM_PMG_SRAMRET_SRAM_RET1_EN        0x00000001    /*  Enable retention bank 1 (8kB) */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_SW_TST_LV0                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_SW_TST_LV0_PG_AN_TESTBUS    13            /*  Test Bus */
#define BITP_PMG_SW_TST_LV0_PG_MIN_OP_LV8K   12            /*  OK signal from the LV Switch for 16K block */
#define BITP_PMG_SW_TST_LV0_PG_MIN_OP_LV16K  11            /*  OK signal from the LV Switch for 16K block */
#define BITP_PMG_SW_TST_LV0_PG_SW_POR_LV     10            /*  POR from the digital logic SW */
#define BITP_PMG_SW_TST_LV0_PG_MIN_OP_LV      9            /*  OK from the digital logic SW */
#define BITP_PMG_SW_TST_LV0_TEST_SEL_PGSW_LV  7            /*  Test mode select */
#define BITP_PMG_SW_TST_LV0_TEST_EN_PGSW_LV   6            /*  Test mode enable */
#define BITP_PMG_SW_TST_LV0_PG_FINE_TRIM_LV   3            /*  2 bit fine trim for comparator trip points */
#define BITP_PMG_SW_TST_LV0_PG_VPOR_SEL_LV    2            /*  POR resistive divider trimming */
#define BITP_PMG_SW_TST_LV0_PG_VMIN_SEL_LV    1            /*  OK and dvdd monitor resistive divider trimmings */
#define BITP_PMG_SW_TST_LV0_PG_DOUBLE_SWITCH_LV  0            /*  Allow for a double switch for the PG Switch to reduce voltage drop */

#define BITM_PMG_SW_TST_LV0_PG_AN_TESTBUS    0x00006000    /*  Test Bus */
#define BITM_PMG_SW_TST_LV0_PG_MIN_OP_LV8K   0x00001000    /*  OK signal from the LV Switch for 16K block */
#define BITM_PMG_SW_TST_LV0_PG_MIN_OP_LV16K  0x00000800    /*  OK signal from the LV Switch for 16K block */
#define BITM_PMG_SW_TST_LV0_PG_SW_POR_LV     0x00000400    /*  POR from the digital logic SW */
#define BITM_PMG_SW_TST_LV0_PG_MIN_OP_LV     0x00000200    /*  OK from the digital logic SW */
#define BITM_PMG_SW_TST_LV0_TEST_SEL_PGSW_LV 0x00000180    /*  Test mode select */
#define BITM_PMG_SW_TST_LV0_TEST_EN_PGSW_LV  0x00000040    /*  Test mode enable */
#define BITM_PMG_SW_TST_LV0_PG_FINE_TRIM_LV  0x00000018    /*  2 bit fine trim for comparator trip points */
#define BITM_PMG_SW_TST_LV0_PG_VPOR_SEL_LV   0x00000004    /*  POR resistive divider trimming */
#define BITM_PMG_SW_TST_LV0_PG_VMIN_SEL_LV   0x00000002    /*  OK and dvdd monitor resistive divider trimmings */
#define BITM_PMG_SW_TST_LV0_PG_DOUBLE_SWITCH_LV 0x00000001    /*  Allow for a double switch for the PG Switch to reduce voltage drop */
#define ENUM_PMG_SW_TST_LV0_VDDMONITOR       0x00000000            /*  pg_an_testbus: Core dvdd monitor, core por comparator */
#define ENUM_PMG_SW_TST_LV0_COREPOR          0x00002000            /*  pg_an_testbus: Core POR comparator, sram1 ok comparator */
#define ENUM_PMG_SW_TST_LV0_UNUSEDSRAM       0x00004000            /*  pg_an_testbus: Unused, sram2 ok comparator */
#define ENUM_PMG_SW_TST_LV0_UNUSED2          0x00006000            /*  pg_an_testbus: Unused */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_SW_TST_LV1                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_SW_TST_LV1_PG_FAST_WAKEUP_VDD  2            /*  Power switch (digital) Fast wakeup mode enable */
#define BITP_PMG_SW_TST_LV1_PG_RES_DIV_HYST_TRIM_VDD  0            /*  power gate hyst trim */
#define BITM_PMG_SW_TST_LV1_PG_FAST_WAKEUP_VDD 0x00000004    /*  Power switch (digital) Fast wakeup mode enable */
#define BITM_PMG_SW_TST_LV1_PG_RES_DIV_HYST_TRIM_VDD 0x00000003    /*  power gate hyst trim */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_SW_TST_HV                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_SW_TST_HV_PG_RES_TRM_HV_VBAT 15            /*  res trm hv vbat */
#define BITP_PMG_SW_TST_HV_PG_MIN_OP_HV_VBAT 10            /*  OK comparator output */
#define BITP_PMG_SW_TST_HV_PG_SW_LIM_HV_VBAT  8            /*  vbat comparator output */
#define BITP_PMG_SW_TST_HV_PG_SW_OK_TRM_HV_VBAT  6            /*  OK comparator output - pre latch */
#define BITP_PMG_SW_TST_HV_PG_DOUBLE_SWITCH_HV_VBAT  5            /*  Allow for double switch */
#define BITP_PMG_SW_TST_HV_PG_VMIN_SEL_HV_VBAT  4            /*  1 bit coarse trim for OK and vbat comparators */
#define BITP_PMG_SW_TST_HV_PG_FINE_TRIM_HV_VBAT  1            /*  2 bit fine trim for comparator trip points */
#define BITP_PMG_SW_TST_HV_PG_HYST_TRIM_N_HV_VBAT  0            /*  used to trim hysteresis in comparators */
#define BITM_PMG_SW_TST_HV_PG_RES_TRM_HV_VBAT 0x00018000    /*  res trm hv vbat */
#define BITM_PMG_SW_TST_HV_PG_MIN_OP_HV_VBAT 0x00000400    /*  OK comparator output */
#define BITM_PMG_SW_TST_HV_PG_SW_LIM_HV_VBAT 0x00000100    /*  vbat comparator output */
#define BITM_PMG_SW_TST_HV_PG_SW_OK_TRM_HV_VBAT 0x00000040    /*  OK comparator output - pre latch */
#define BITM_PMG_SW_TST_HV_PG_DOUBLE_SWITCH_HV_VBAT 0x00000020    /*  Allow for double switch */
#define BITM_PMG_SW_TST_HV_PG_VMIN_SEL_HV_VBAT 0x00000010    /*  1 bit coarse trim for OK and vbat comparators */
#define BITM_PMG_SW_TST_HV_PG_FINE_TRIM_HV_VBAT 0x00000006    /*  2 bit fine trim for comparator trip points */
#define BITM_PMG_SW_TST_HV_PG_HYST_TRIM_N_HV_VBAT 0x00000001    /*  used to trim hysteresis in comparators */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_LP_TST_REF0                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_LP_TST_REF0_LPBUCK_EN       15            /*  Enable Bit for the LP Buck */
#define BITP_PMG_LP_TST_REF0_BG_TRIM          1            /*  Low Power Reference Trimming Bits */
#define BITP_PMG_LP_TST_REF0_BG_PD            0            /*  Low Power Reference Power Down Bit */
#define BITM_PMG_LP_TST_REF0_LPBUCK_EN       0x00008000    /*  Enable Bit for the LP Buck */
#define BITM_PMG_LP_TST_REF0_BG_TRIM         0x000001FE    /*  Low Power Reference Trimming Bits */
#define BITM_PMG_LP_TST_REF0_BG_PD           0x00000001    /*  Low Power Reference Power Down Bit */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_PMG_TRIM                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_PMG_TRIM_LPBUCK_MEMORY      16            /*  Trimming bits for the LP Reference */
#define BITP_PMG_PMG_TRIM_PMG_TRIM            0            /*  Trimming bits for the LP Reference */
#define BITM_PMG_PMG_TRIM_LPBUCK_MEMORY      0x00010000    /*  Trimming bits for the LP Reference */
#define BITM_PMG_PMG_TRIM_PMG_TRIM           0x0000FFFF    /*  Trimming bits for the LP Reference */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_RSTSTA                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_RSTSTA_POR_SRC               4            /*  Power on reset Source (pmg_rst_src) */
#define BITP_PMG_RSTSTA_SWRST                 3            /*  Software reset */
#define BITP_PMG_RSTSTA_WDRST                 2            /*  Watchdog timeout */
#define BITP_PMG_RSTSTA_EXTRST                1            /*  External reset */
#define BITP_PMG_RSTSTA_POR                   0            /*  Power-on reset */

#define BITM_PMG_RSTSTA_POR_SRC              0x00000030    /*  Power on reset Source (pmg_rst_src) */
#define BITM_PMG_RSTSTA_SWRST                0x00000008    /*  Software reset */
#define BITM_PMG_RSTSTA_WDRST                0x00000004    /*  Watchdog timeout */
#define BITM_PMG_RSTSTA_EXTRST               0x00000002    /*  External reset */
#define BITM_PMG_RSTSTA_POR                  0x00000001    /*  Power-on reset */
#define ENUM_PMG_RSTSTA_FAILSAFE_HV          0x00000000            /*  POR_SRC: POR triggered because VBAT drops below Fail Safe */
#define ENUM_PMG_RSTSTA_RST_VBAT             0x00000010            /*  POR_SRC: POR trigger because VBAT supply (VBAT<1.7v) */
#define ENUM_PMG_RSTSTA_RST_VREG             0x00000020            /*  POR_SRC: POR triggered because VDD supply (VDD < 1.08v) */
#define ENUM_PMG_RSTSTA_FAILSAFE_LV          0x00000030            /*  POR_SRC: POR triggered because VREG drops below Fail Safe */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_CNTRL1                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_CNTRL1_HPBUCK_EN             0            /*  Enable HP Buck */
#define BITM_PMG_CNTRL1_HPBUCK_EN            0x00000001    /*  Enable HP Buck */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_WK_TST                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_WK_TST_SUPER_FAST_WK         1            /*  Faster Mode than fast mode for HF OSC */
#define BITP_PMG_WK_TST_FAST_WK               0            /*  Fast Wake Mode for HF OSC */
#define BITM_PMG_WK_TST_SUPER_FAST_WK        0x00000002    /*  Faster Mode than fast mode for HF OSC */
#define BITM_PMG_WK_TST_FAST_WK              0x00000001    /*  Fast Wake Mode for HF OSC */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_ANA_TST1                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_ANA_TST1_SEL_EXT_REF_VBAT   21            /*  debug : external ref */
#define BITP_PMG_ANA_TST1_EN_BGBUF_IBIAS_VBAT 20            /*  debug : bg bias related */
#define BITP_PMG_ANA_TST1_EN_LP_REF_TO_PIN_VBAT 19            /*  lpref to pin */
#define BITP_PMG_ANA_TST1_EN_EXT_REF_TO_PIN_VBAT 18            /*  external ref to pin */
#define BITP_PMG_ANA_TST1_EN_CENBIAS_REF_TO_PIN_VBAT 17            /*  central bias ref to pin */
#define BITP_PMG_ANA_TST1_EN_BGBUF_VBAT      16            /*  enable bg buffer */
#define BITP_PMG_ANA_TST1_ATEST4_TSEL_VBAT   13            /*  ana test select 4 */
#define BITP_PMG_ANA_TST1_ATEST3_TSEL_VBAT   10            /*  ana test select 3 */
#define BITP_PMG_ANA_TST1_ATEST2_TSEL_VBAT    7            /*  ana test select 2 */
#define BITP_PMG_ANA_TST1_ATEST1_TSEL_VBAT    4            /*  ana test select 1 */
#define BITP_PMG_ANA_TST1_ANATST_EN_VBAT      0            /*  analog test enable */
#define BITM_PMG_ANA_TST1_SEL_EXT_REF_VBAT   0x00200000    /*  debug : external ref */
#define BITM_PMG_ANA_TST1_EN_BGBUF_IBIAS_VBAT 0x00100000    /*  debug : bg bias related */
#define BITM_PMG_ANA_TST1_EN_LP_REF_TO_PIN_VBAT 0x00080000    /*  lpref to pin */
#define BITM_PMG_ANA_TST1_EN_EXT_REF_TO_PIN_VBAT 0x00040000    /*  external ref to pin */
#define BITM_PMG_ANA_TST1_EN_CENBIAS_REF_TO_PIN_VBAT 0x00020000    /*  central bias ref to pin */
#define BITM_PMG_ANA_TST1_EN_BGBUF_VBAT      0x00010000    /*  enable bg buffer */
#define BITM_PMG_ANA_TST1_ATEST4_TSEL_VBAT   0x0000E000    /*  ana test select 4 */
#define BITM_PMG_ANA_TST1_ATEST3_TSEL_VBAT   0x00001C00    /*  ana test select 3 */
#define BITM_PMG_ANA_TST1_ATEST2_TSEL_VBAT   0x00000380    /*  ana test select 2 */
#define BITM_PMG_ANA_TST1_ATEST1_TSEL_VBAT   0x00000070    /*  ana test select 1 */
#define BITM_PMG_ANA_TST1_ANATST_EN_VBAT     0x00000001    /*  analog test enable */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_ANA_TST2                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_ANA_TST2_ANA_DTST3_SEL      16            /*  DTEST3 Mux Select */
#define BITP_PMG_ANA_TST2_ANA_DTST2_SEL      12            /*  DTEST2 Mux Select */
#define BITP_PMG_ANA_TST2_ANA_DTST1_SEL       8            /*  DTEST1 Mux Select */
#define BITP_PMG_ANA_TST2_ANA_DTST0_SEL       4            /*  DTEST0 Mux Select */
#define BITP_PMG_ANA_TST2_ANA_DTST_EN         0            /*  Enable the digital test signals output on GPIOs. */
#define BITM_PMG_ANA_TST2_ANA_DTST3_SEL      0x00070000    /*  DTEST3 Mux Select */
#define BITM_PMG_ANA_TST2_ANA_DTST2_SEL      0x00007000    /*  DTEST2 Mux Select */
#define BITM_PMG_ANA_TST2_ANA_DTST1_SEL      0x00000700    /*  DTEST1 Mux Select */
#define BITM_PMG_ANA_TST2_ANA_DTST0_SEL      0x00000070    /*  DTEST0 Mux Select */
#define BITM_PMG_ANA_TST2_ANA_DTST_EN        0x00000001    /*  Enable the digital test signals output on GPIOs. */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_DIG_TST1                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_DIG_TST1_DIG_TEST_RSVD3      7            /*  RESERVED DIG_TEST CONTROL 3 */
#define BITP_PMG_DIG_TST1_DIG_TEST_RSVD2      6            /*  RESERVED DIG_TEST CONTROL 2 */
#define BITP_PMG_DIG_TST1_DIG_TEST_RSVD1      5            /*  RESERVED DIG_TEST CONTROL 1 */
#define BITP_PMG_DIG_TST1_DIG_TEST_RSVD0      4            /*  RESERVED DIG_TEST CONTROL 0 */
#define BITP_PMG_DIG_TST1_MBIST_MODE_EN       3            /*  Enable MBIST mode */
#define BITP_PMG_DIG_TST1_SIP_DIRECT_TEST_EN  2            /*  SiP Direct Test Enable */
#define BITP_PMG_DIG_TST1_SIP_DC_TEST_EN      1            /*  DC Test enable for dedicated SiP pads */
#define BITP_PMG_DIG_TST1_DC_TEST_EN          0            /*  DC Test Enable for GPIO pads */
#define BITM_PMG_DIG_TST1_DIG_TEST_RSVD3     0x00000080    /*  RESERVED DIG_TEST CONTROL 3 */
#define BITM_PMG_DIG_TST1_DIG_TEST_RSVD2     0x00000040    /*  RESERVED DIG_TEST CONTROL 2 */
#define BITM_PMG_DIG_TST1_DIG_TEST_RSVD1     0x00000020    /*  RESERVED DIG_TEST CONTROL 1 */
#define BITM_PMG_DIG_TST1_DIG_TEST_RSVD0     0x00000010    /*  RESERVED DIG_TEST CONTROL 0 */
#define BITM_PMG_DIG_TST1_MBIST_MODE_EN      0x00000008    /*  Enable MBIST mode */
#define BITM_PMG_DIG_TST1_SIP_DIRECT_TEST_EN 0x00000004    /*  SiP Direct Test Enable */
#define BITM_PMG_DIG_TST1_SIP_DC_TEST_EN     0x00000002    /*  DC Test enable for dedicated SiP pads */
#define BITM_PMG_DIG_TST1_DC_TEST_EN         0x00000001    /*  DC Test Enable for GPIO pads */

/* -------------------------------------------------------------------------------------------------------------------------
          PMG_HP_LDO_TST                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMG_HP_LDO_TST_LDO_TRIM          0            /*  Trimming bits for the LDO */
#define BITM_PMG_HP_LDO_TST_LDO_TRIM         0x0000000F    /*  Trimming bits for the LDO */


/* ============================================================================================================================
        External interrupt configuration
   ============================================================================================================================ */

/* ============================================================================================================================
        EXTINT
   ============================================================================================================================ */
#define MOD_EXTINT_BASE                      0x4004C080            /*  External interrupt configuration  */
#define MOD_EXTINT_MASK                      0x00003FFF            /*  External interrupt configuration  */
#define REG_EXTINT_EI0CFG_RESET              0x00000000            /*      Reset Value for EI0CFG  */
#define REG_EXTINT_EI0CFG                    0x4004C080            /*  EXTINT External Interrupt configuration 0 */
#define REG_EXTINT_NMICFG_RESET              0x00008000            /*      Reset Value for NMICFG  */
#define REG_EXTINT_NMICFG                    0x4004C08C            /*  EXTINT NMI Interrupt configuration */
#define REG_EXTINT_EICLR_RESET               0x00000000            /*      Reset Value for EICLR  */
#define REG_EXTINT_EICLR                     0x4004C090            /*  EXTINT External Interrupt clear */
#define REG_EXTINT_NMICLR_RESET              0x00000000            /*      Reset Value for NMICLR  */
#define REG_EXTINT_NMICLR                    0x4004C094            /*  EXTINT Non-maskable interrupt clear */

/* ============================================================================================================================
        EXTINT Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          EXTINT_EI0CFG                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_EXTINT_EI0CFG_SIPMDE            17            /*  External Interrupt using SIP_UPDATE Mode registers */
#define BITP_EXTINT_EI0CFG_SIPEN             16            /*  External Interrupt using SIP_UPDATE enable bit */
#define BITP_EXTINT_EI0CFG_IRQ3EN            15            /*  External Interrupt 3 enable bit */
#define BITP_EXTINT_EI0CFG_IRQ3MDE           12            /*  External Interrupt 3 Mode registers */
#define BITP_EXTINT_EI0CFG_IRQ2EN            11            /*  External Interrupt 2 Enable bit */
#define BITP_EXTINT_EI0CFG_IRQ2MDE            8            /*  External Interrupt 2 Mode registers */
#define BITP_EXTINT_EI0CFG_IRQ1EN             7            /*  External Interrupt 1 Enable bit */
#define BITP_EXTINT_EI0CFG_IRQ1MDE            4            /*  External Interrupt 1 Mode registers */
#define BITP_EXTINT_EI0CFG_IRQ0EN             3            /*  External Interrupt 0 Enable bit */
#define BITP_EXTINT_EI0CFG_IRQ0MDE            0            /*  External Interrupt 0 Mode registers */

#define BITM_EXTINT_EI0CFG_SIPMDE            0x000E0000    /*  External Interrupt using SIP_UPDATE Mode registers */

#define BITM_EXTINT_EI0CFG_SIPEN             0x00010000    /*  External Interrupt using SIP_UPDATE enable bit */

#define BITM_EXTINT_EI0CFG_IRQ3EN            0x00008000    /*  External Interrupt 3 enable bit */

#define BITM_EXTINT_EI0CFG_IRQ3MDE           0x00007000    /*  External Interrupt 3 Mode registers */

#define BITM_EXTINT_EI0CFG_IRQ2EN            0x00000800    /*  External Interrupt 2 Enable bit */

#define BITM_EXTINT_EI0CFG_IRQ2MDE           0x00000700    /*  External Interrupt 2 Mode registers */

#define BITM_EXTINT_EI0CFG_IRQ1EN            0x00000080    /*  External Interrupt 1 Enable bit */

#define BITM_EXTINT_EI0CFG_IRQ1MDE           0x00000070    /*  External Interrupt 1 Mode registers */

#define BITM_EXTINT_EI0CFG_IRQ0EN            0x00000008    /*  External Interrupt 0 Enable bit */

#define BITM_EXTINT_EI0CFG_IRQ0MDE           0x00000007    /*  External Interrupt 0 Mode registers */

/* -------------------------------------------------------------------------------------------------------------------------
          EXTINT_NMICFG                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_EXTINT_NMICFG_WR_EN             15            /*  indicating if this register is allowed to write */
#define BITP_EXTINT_NMICFG_NMIEN              3            /*  NMI enable bit */
#define BITP_EXTINT_NMICFG_NMIMDE             0            /*  NMI Mode registers */

#define BITM_EXTINT_NMICFG_WR_EN             0x00008000    /*  indicating if this register is allowed to write */

#define BITM_EXTINT_NMICFG_NMIEN             0x00000008    /*  NMI enable bit */

#define BITM_EXTINT_NMICFG_NMIMDE            0x00000007    /*  NMI Mode registers */

/* -------------------------------------------------------------------------------------------------------------------------
          EXTINT_EICLR                         Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_EXTINT_EICLR_SIP_CLR             4            /*  External interrupt Clear for SIP_UPDATE */
#define BITP_EXTINT_EICLR_IRQ3                3            /*  External interrupt 3 */
#define BITP_EXTINT_EICLR_IRQ2                2            /*  External interrupt 2 */
#define BITP_EXTINT_EICLR_IRQ1                1            /*  External interrupt 1 */
#define BITP_EXTINT_EICLR_IRQ0                0            /*  External interrupt 0 */
#define BITM_EXTINT_EICLR_SIP_CLR            0x00000010    /*  External interrupt Clear for SIP_UPDATE */
#define BITM_EXTINT_EICLR_IRQ3               0x00000008    /*  External interrupt 3 */
#define BITM_EXTINT_EICLR_IRQ2               0x00000004    /*  External interrupt 2 */
#define BITM_EXTINT_EICLR_IRQ1               0x00000002    /*  External interrupt 1 */
#define BITM_EXTINT_EICLR_IRQ0               0x00000001    /*  External interrupt 0 */

/* -------------------------------------------------------------------------------------------------------------------------
          EXTINT_NMICLR                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_EXTINT_NMICLR_CLEAR              0            /*  NMI clear */
#define BITM_EXTINT_NMICLR_CLEAR             0x00000001    /*  NMI clear */


/* ============================================================================================================================
        Clocking registers
   ============================================================================================================================ */

/* ============================================================================================================================
        CLK
   ============================================================================================================================ */
#define MOD_CLK_BASE                         0x4004C100            /*  Clocking registers  */
#define MOD_CLK_MASK                         0x00003FFF            /*  Clocking registers  */
#define REG_CLK_OSCKEY_RESET                 0x00000000            /*      Reset Value for OSCKEY  */
#define REG_CLK_OSCKEY                       0x4004C10C            /*  CLK Key protection for OSCCTRL */
#define REG_CLK_OSCCTRL_RESET                0x00000002            /*      Reset Value for OSCCTRL  */
#define REG_CLK_OSCCTRL                      0x4004C110            /*  CLK Oscillator control */
#define REG_CLK_TOSCCTRL0_RESET              0x08202125            /*      Reset Value for TOSCCTRL0  */
#define REG_CLK_TOSCCTRL0                    0x4004C114            /*  CLK Oscillator control for test */

/* ============================================================================================================================
        CLK Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          CLK_OSCKEY                           Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLK_OSCKEY_OSCKEY                0            /*  Oscillator key */
#define BITM_CLK_OSCKEY_OSCKEY               0x0000FFFF    /*  Oscillator key */

/* -------------------------------------------------------------------------------------------------------------------------
          CLK_OSCCTRL                          Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLK_OSCCTRL_HFXTALOK            11            /*  Status of HFXTAL oscillator */
#define BITP_CLK_OSCCTRL_LFXTALOK            10            /*  Status of LFXTAL oscillator */
#define BITP_CLK_OSCCTRL_HFOSCOK              9            /*  Status of HFOSC oscillator */
#define BITP_CLK_OSCCTRL_LFOSCOK              8            /*  Status of LFOSC oscillator */
#define BITP_CLK_OSCCTRL_HFXTALEN             3            /*  High frequency crystal oscillator enable */
#define BITP_CLK_OSCCTRL_LFXTALEN             2            /*  Low frequency crystal oscillator enable */
#define BITP_CLK_OSCCTRL_HFOSCEN              1            /*  High frequency internal oscillator enable */
#define BITP_CLK_OSCCTRL_LFCLKMUX             0            /*  32 KHz clock select mux */

#define BITM_CLK_OSCCTRL_HFXTALOK            0x00000800    /*  Status of HFXTAL oscillator */

#define BITM_CLK_OSCCTRL_LFXTALOK            0x00000400    /*  Status of LFXTAL oscillator */

#define BITM_CLK_OSCCTRL_HFOSCOK             0x00000200    /*  Status of HFOSC oscillator */

#define BITM_CLK_OSCCTRL_LFOSCOK             0x00000100    /*  Status of LFOSC oscillator */

#define BITM_CLK_OSCCTRL_HFXTALEN            0x00000008    /*  High frequency crystal oscillator enable */

#define BITM_CLK_OSCCTRL_LFXTALEN            0x00000004    /*  Low frequency crystal oscillator enable */

#define BITM_CLK_OSCCTRL_HFOSCEN             0x00000002    /*  High frequency internal oscillator enable */

#define BITM_CLK_OSCCTRL_LFCLKMUX            0x00000001    /*  32 KHz clock select mux */

/* -------------------------------------------------------------------------------------------------------------------------
          CLK_TOSCCTRL0                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLK_TOSCCTRL0_HFOSC_TRIM_VDD    16            /*  testmode trim for high frequency oscillator */
#define BITP_CLK_TOSCCTRL0_HFOSC_TRIM_LOCK_CNT 14            /*  HF oscillator lock counter select configuration */
#define BITP_CLK_TOSCCTRL0_LPOSC_ZTAT_BYPASS_N_VMX 13            /*  LP Oscillator ZTAT bypass */
#define BITP_CLK_TOSCCTRL0_LPOSC_TEMPCO_TRIM 11            /*  LP Oscillator temperature compensation trim */
#define BITP_CLK_TOSCCTRL0_LPOSC_PD_TEST      9            /*  LPOSC enable / disable bit in test-mode */
#define BITP_CLK_TOSCCTRL0_HFOSC_START_CNTRL  8            /*  TestMode : Start HF OSC */
#define BITP_CLK_TOSCCTRL0_LPOSC_TRIM_VMX     0            /*  Low frequency oscillator (lposc) trim register */
#define BITM_CLK_TOSCCTRL0_HFOSC_TRIM_VDD    0x3FFF0000    /*  testmode trim for high frequency oscillator */
#define BITM_CLK_TOSCCTRL0_HFOSC_TRIM_LOCK_CNT 0x0000C000    /*  HF oscillator lock counter select configuration */
#define BITM_CLK_TOSCCTRL0_LPOSC_ZTAT_BYPASS_N_VMX 0x00002000    /*  LP Oscillator ZTAT bypass */
#define BITM_CLK_TOSCCTRL0_LPOSC_TEMPCO_TRIM 0x00001800    /*  LP Oscillator temperature compensation trim */
#define BITM_CLK_TOSCCTRL0_LPOSC_PD_TEST     0x00000200    /*  LPOSC enable / disable bit in test-mode */
#define BITM_CLK_TOSCCTRL0_HFOSC_START_CNTRL 0x00000100    /*  TestMode : Start HF OSC */
#define BITM_CLK_TOSCCTRL0_LPOSC_TRIM_VMX    0x0000003F    /*  Low frequency oscillator (lposc) trim register */


/* ============================================================================================================================
        Power Management Registers
   ============================================================================================================================ */

/* ============================================================================================================================
        PMGT
   ============================================================================================================================ */
#define MOD_PMGT_BASE                        0x4004C200            /*  Power Management Registers  */
#define MOD_PMGT_MASK                        0x00003FFF            /*  Power Management Registers  */
#define REG_PMGT_VREG_TST_RESET              0x00000008            /*      Reset Value for VREG_TST  */
#define REG_PMGT_VREG_TST                    0x4004C230            /*  PMGT Test Register for Regulated Supply */
#define REG_PMGT_LP_TST_REF1_RESET           0x00000000            /*      Reset Value for LP_TST_REF1  */
#define REG_PMGT_LP_TST_REF1                 0x4004C238            /*  PMGT Low Power Reference Test 1 */
#define REG_PMGT_LP_TST_BLOCK0_RESET         0x00000085            /*      Reset Value for LP_TST_BLOCK0  */
#define REG_PMGT_LP_TST_BLOCK0               0x4004C23C            /*  PMGT Bits to control the LP Test Block */
#define REG_PMGT_LP_TST_BLOCK1_RESET         0x00000001            /*      Reset Value for LP_TST_BLOCK1  */
#define REG_PMGT_LP_TST_BLOCK1               0x4004C240            /*  PMGT Bits to control the LP Test Block */
#define REG_PMGT_SRAMCNTRL_RESET             0x80000000            /*      Reset Value for SRAMCNTRL  */
#define REG_PMGT_SRAMCNTRL                   0x4004C260            /*  PMGT Control for SRAM parity and instruction SRAM */
#define REG_PMGT_SRAM_INIT_STATUS_RESET      0x00000000            /*      Reset Value for SRAM_INIT_STATUS  */
#define REG_PMGT_SRAM_INIT_STATUS            0x4004C264            /*  PMGT Initialization Status Register */
#define REG_PMGT_CLEAR_LATCH_GPIOS_RESET     0x00000000            /*      Reset Value for CLEAR_LATCH_GPIOS  */
#define REG_PMGT_CLEAR_LATCH_GPIOS           0x4004C268            /*  PMGT When 0x58FA is written, then the GPIO releases the latched values after shutdown mode */
#define REG_PMGT_SCRATCHPAD_IMAGE_RESET      0x00000000            /*      Reset Value for SCRATCHPAD_IMAGE  */
#define REG_PMGT_SCRATCHPAD_IMAGE            0x4004C26C            /*  PMGT The values written in this register will be saved in 3V when going to shutdown mode */
#define REG_PMGT_SCRATCHPAD_3V_READ_RESET    0x00000000            /*      Reset Value for SCRATCHPAD_3V_READ  */
#define REG_PMGT_SCRATCHPAD_3V_READ          0x4004C270            /*  PMGT Read-Only register. The user can read the 3V value stored during shutdown mode */

/* ============================================================================================================================
        PMGT Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          PMGT_VREG_TST                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMGT_VREG_TST_LDO_OK             6            /*  Read Only bit to read OK from HP LDO */
#define BITP_PMGT_VREG_TST_P40                5            /*  Control for delay for HP LDO OK. Positive 40% delay */
#define BITP_PMGT_VREG_TST_N40                4            /*  Control for delay for HP LDO OK. Negative 40% delay */
#define BITP_PMGT_VREG_TST_BIAS_EN            3            /*  Bias Enable Bit for Central Bias Block */
#define BITP_PMGT_VREG_TST_HP_LDO_OVR         2            /*  HP LDO overwrite OK signal */
#define BITP_PMGT_VREG_TST_HLDO_PD_REG        1            /*  HP LDO power down signal */
#define BITM_PMGT_VREG_TST_LDO_OK            0x00000040    /*  Read Only bit to read OK from HP LDO */
#define BITM_PMGT_VREG_TST_P40               0x00000020    /*  Control for delay for HP LDO OK. Positive 40% delay */
#define BITM_PMGT_VREG_TST_N40               0x00000010    /*  Control for delay for HP LDO OK. Negative 40% delay */
#define BITM_PMGT_VREG_TST_BIAS_EN           0x00000008    /*  Bias Enable Bit for Central Bias Block */
#define BITM_PMGT_VREG_TST_HP_LDO_OVR        0x00000004    /*  HP LDO overwrite OK signal */

#define BITM_PMGT_VREG_TST_HLDO_PD_REG       0x00000002    /*  HP LDO power down signal */
#define ENUM_PMGT_VREG_TST_HP_LDOENABLE      0x00000000            /*  hldo_pd_reg: HP LDO is Enabled when LOW */
#define ENUM_PMGT_VREG_TST_HP_LDODISABLE     0x00000002            /*  hldo_pd_reg: HP LDO is disabled when HIGH */

/* -------------------------------------------------------------------------------------------------------------------------
          PMGT_LP_TST_REF1                     Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMGT_LP_TST_REF1_BG_TEST         0            /*  Test Bits for the LP Ref */
#define BITM_PMGT_LP_TST_REF1_BG_TEST        0x000000FF    /*  Test Bits for the LP Ref */

/* -------------------------------------------------------------------------------------------------------------------------
          PMGT_LP_TST_BLOCK0                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMGT_LP_TST_BLOCK0_BGTST_TRIM    0            /*  Trimming for the LP Test Block */
#define BITM_PMGT_LP_TST_BLOCK0_BGTST_TRIM   0x000000FF    /*  Trimming for the LP Test Block */

/* -------------------------------------------------------------------------------------------------------------------------
          PMGT_LP_TST_BLOCK1                   Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMGT_LP_TST_BLOCK1_BGTST_TEST    8            /*  Test for the LP Test Block */
#define BITP_PMGT_LP_TST_BLOCK1_BGTST_PD      0            /*  Power down for LP Test Block */
#define BITM_PMGT_LP_TST_BLOCK1_BGTST_TEST   0x0000FF00    /*  Test for the LP Test Block */
#define BITM_PMGT_LP_TST_BLOCK1_BGTST_PD     0x00000001    /*  Power down for LP Test Block */

/* -------------------------------------------------------------------------------------------------------------------------
          PMGT_SRAMCNTRL                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMGT_SRAMCNTRL_INSTRUCTION_SRAM_EN 31            /*  Enables instruction SRAM */
#define BITP_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_5 21            /*  Enable parity check */
#define BITP_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_4 20            /*  Enable parity check */
#define BITP_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_3 19            /*  Enable parity check */
#define BITP_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_2 18            /*  Enable parity check */
#define BITP_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_1 17            /*  Enable parity check */
#define BITP_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_0 16            /*  Enable parity check */
#define BITP_PMGT_SRAMCNTRL_ABORT_INIT       15            /*  Abort current initialization. Self-cleared */
#define BITP_PMGT_SRAMCNTRL_AUTOMATIC_INIT_ON 14            /*  Automatic initialization on wake up from Hibernate mode */
#define BITP_PMGT_SRAMCNTRL_START_MANUAL_INIT 13            /*  Write one to trigger initialization. Self-cleared */
#define BITP_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_5  5            /*  Enable initialization */
#define BITP_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_4  4            /*  Enable initialization */
#define BITP_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_3  3            /*  Enable initialization */
#define BITP_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_2  2            /*  Enable initialization */
#define BITP_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_1  1            /*  Enable initialization */
#define BITP_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_0  0            /*  Enable initialization */
#define BITM_PMGT_SRAMCNTRL_INSTRUCTION_SRAM_EN 0x80000000    /*  Enables instruction SRAM */
#define BITM_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_5 0x00200000    /*  Enable parity check */
#define BITM_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_4 0x00100000    /*  Enable parity check */
#define BITM_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_3 0x00080000    /*  Enable parity check */
#define BITM_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_2 0x00040000    /*  Enable parity check */
#define BITM_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_1 0x00020000    /*  Enable parity check */
#define BITM_PMGT_SRAMCNTRL_PARITY_EN_SRAM_BANK_0 0x00010000    /*  Enable parity check */
#define BITM_PMGT_SRAMCNTRL_ABORT_INIT       0x00008000    /*  Abort current initialization. Self-cleared */
#define BITM_PMGT_SRAMCNTRL_AUTOMATIC_INIT_ON 0x00004000    /*  Automatic initialization on wake up from Hibernate mode */
#define BITM_PMGT_SRAMCNTRL_START_MANUAL_INIT 0x00002000    /*  Write one to trigger initialization. Self-cleared */
#define BITM_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_5 0x00000020    /*  Enable initialization */
#define BITM_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_4 0x00000010    /*  Enable initialization */
#define BITM_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_3 0x00000008    /*  Enable initialization */
#define BITM_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_2 0x00000004    /*  Enable initialization */
#define BITM_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_1 0x00000002    /*  Enable initialization */
#define BITM_PMGT_SRAMCNTRL_INIT_EN_SRAM_BANK_0 0x00000001    /*  Enable initialization */

/* -------------------------------------------------------------------------------------------------------------------------
          PMGT_SRAM_INIT_STATUS                Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PMGT_SRAM_INIT_STATUS_TST_MAP_INSTR_SRAM_AT_0 31            /*  force instruction SRAM mapped at 0x0000_0000 */
#define BITP_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_5  5            /*  0:Not initialized; 1:Initialization completed */
#define BITP_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_4  4            /*  0:Not initialized; 1:Initialization completed */
#define BITP_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_3  3            /*  0:Not initialized; 1:Initialization completed */
#define BITP_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_2  2            /*  0:Not initialized; 1:Initialization completed */
#define BITP_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_1  1            /*  0:Not initialized; 1:Initialization completed */
#define BITP_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_0  0            /*  0:Not initialized; 1:Initialization completed */
#define BITM_PMGT_SRAM_INIT_STATUS_TST_MAP_INSTR_SRAM_AT_0 0x80000000    /*  force instruction SRAM mapped at 0x0000_0000 */
#define BITM_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_5 0x00000020    /*  0:Not initialized; 1:Initialization completed */
#define BITM_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_4 0x00000010    /*  0:Not initialized; 1:Initialization completed */
#define BITM_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_3 0x00000008    /*  0:Not initialized; 1:Initialization completed */
#define BITM_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_2 0x00000004    /*  0:Not initialized; 1:Initialization completed */
#define BITM_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_1 0x00000002    /*  0:Not initialized; 1:Initialization completed */
#define BITM_PMGT_SRAM_INIT_STATUS_INIT_DONE_SRAM_BANK_0 0x00000001    /*  0:Not initialized; 1:Initialization completed */


/* ============================================================================================================================
        Clocking registers
   ============================================================================================================================ */

/* ============================================================================================================================
        CLKGT
   ============================================================================================================================ */
#define MOD_CLKGT_BASE                       0x4004C300            /*  Clocking registers  */
#define MOD_CLKGT_MASK                       0x00003FFF            /*  Clocking registers  */
#define REG_CLKGT_CLKCON0_RESET              0x00000078            /*      Reset Value for CLKCON0  */
#define REG_CLKGT_CLKCON0                    0x4004C300            /*  CLKGT Misc clock settings */
#define REG_CLKGT_CLKCON1_RESET              0x00100404            /*      Reset Value for CLKCON1  */
#define REG_CLKGT_CLKCON1                    0x4004C304            /*  CLKGT Clock dividers */
#define REG_CLKGT_CLKCON3_RESET              0x0000691A            /*      Reset Value for CLKCON3  */
#define REG_CLKGT_CLKCON3                    0x4004C30C            /*  CLKGT System PLL */
#define REG_CLKGT_CLKCON5_RESET              0x0000001F            /*      Reset Value for CLKCON5  */
#define REG_CLKGT_CLKCON5                    0x4004C314            /*  CLKGT User clock gating control */
#define REG_CLKGT_CLKSTAT0_RESET             0x00000000            /*      Reset Value for CLKSTAT0  */
#define REG_CLKGT_CLKSTAT0                   0x4004C318            /*  CLKGT Clocking status */
#define REG_CLKGT_TCLKTEST_RESET             0x00006900            /*      Reset Value for TCLKTEST  */
#define REG_CLKGT_TCLKTEST                   0x4004C31C            /*  CLKGT Clock test control */
#define REG_CLKGT_TOSCCTRL1_RESET            0x00000210            /*      Reset Value for TOSCCTRL1  */
#define REG_CLKGT_TOSCCTRL1                  0x4004C320            /*  CLKGT Oscillator test/trim register */
#define REG_CLKGT_TOSCCNFG0_RESET            0x00000000            /*      Reset Value for TOSCCNFG0  */
#define REG_CLKGT_TOSCCNFG0                  0x4004C324            /*  CLKGT Oscillator config register (Test) */
#define REG_CLKGT_TPLLCNFG0_RESET            0x00009005            /*      Reset Value for TPLLCNFG0  */
#define REG_CLKGT_TPLLCNFG0                  0x4004C32C            /*  CLKGT PLL config register (Test) */
#define REG_CLKGT_THFRING_RESET              0x00004000            /*      Reset Value for THFRING  */
#define REG_CLKGT_THFRING                    0x4004C330            /*  CLKGT High frequency ring oscillator2 test register */

/* ============================================================================================================================
        CLKGT Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_CLKCON0                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_CLKCON0_HFXTALIE          15            /*  High frequency crystal interrupt enable */
#define BITP_CLKGT_CLKCON0_LFXTALIE          14            /*  Low frequency crystal interrupt enable */
#define BITP_CLKGT_CLKCON0_PLL_IPSEL         11            /*  SPLL source select mux */
#define BITP_CLKGT_CLKCON0_FIXMASTERTYPE     10            /*  Force MasterType for debugger */
#define BITP_CLKGT_CLKCON0_RCLKMUX            8            /*  Flash reference clock and HPBUCK clock source mux */
#define BITP_CLKGT_CLKCON0_CLKCOUT            3            /*  GPIO clk out select */
#define BITP_CLKGT_CLKCON0_CLKMUX             0            /*  Clock mux select */

#define BITM_CLKGT_CLKCON0_HFXTALIE          0x00008000    /*  High frequency crystal interrupt enable */

#define BITM_CLKGT_CLKCON0_LFXTALIE          0x00004000    /*  Low frequency crystal interrupt enable */

#define BITM_CLKGT_CLKCON0_PLL_IPSEL         0x00000800    /*  SPLL source select mux */
#define BITM_CLKGT_CLKCON0_FIXMASTERTYPE     0x00000400    /*  Force MasterType for debugger */

#define BITM_CLKGT_CLKCON0_RCLKMUX           0x00000300    /*  Flash reference clock and HPBUCK clock source mux */

#define BITM_CLKGT_CLKCON0_CLKCOUT           0x00000078    /*  GPIO clk out select */

#define BITM_CLKGT_CLKCON0_CLKMUX            0x00000003    /*  Clock mux select */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_CLKCON1                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_CLKCON1_ACLKDIVCNT        16            /*  ACLK divide count */
#define BITP_CLKGT_CLKCON1_PCLKDIVCNT         8            /*  PCLK divide count */
#define BITP_CLKGT_CLKCON1_HCLKDIVCNT         0            /*  HCLK divide count */
#define BITM_CLKGT_CLKCON1_ACLKDIVCNT        0x003F0000    /*  ACLK divide count */
#define BITM_CLKGT_CLKCON1_PCLKDIVCNT        0x00003F00    /*  PCLK divide count */
#define BITM_CLKGT_CLKCON1_HCLKDIVCNT        0x0000003F    /*  HCLK divide count */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_CLKCON3                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_CLKCON3_SPLLMUL2          16            /*  system PLL multiply by 2 */
#define BITP_CLKGT_CLKCON3_SPLLMSEL          11            /*  System PLL M Divider */
#define BITP_CLKGT_CLKCON3_SPLLIE            10            /*  System PLL interrupt enable */
#define BITP_CLKGT_CLKCON3_SPLLEN             9            /*  System PLL enable */
#define BITP_CLKGT_CLKCON3_SPLLDIV2           8            /*  System PLL division by 2 */
#define BITP_CLKGT_CLKCON3_SPLLNSEL           0            /*  System PLL N multiplier */

#define BITM_CLKGT_CLKCON3_SPLLMUL2          0x00010000    /*  system PLL multiply by 2 */
#define BITM_CLKGT_CLKCON3_SPLLMSEL          0x00007800    /*  System PLL M Divider */

#define BITM_CLKGT_CLKCON3_SPLLIE            0x00000400    /*  System PLL interrupt enable */

#define BITM_CLKGT_CLKCON3_SPLLEN            0x00000200    /*  System PLL enable */

#define BITM_CLKGT_CLKCON3_SPLLDIV2          0x00000100    /*  System PLL division by 2 */
#define BITM_CLKGT_CLKCON3_SPLLNSEL          0x0000001F    /*  System PLL N multiplier */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_CLKCON5                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_CLKCON5_PERCLKOFF          5            /*  This bit is used to disable all clocks connected to all peripherals */
#define BITP_CLKGT_CLKCON5_ACLKOFF            4            /*  ADC clock user control */
#define BITP_CLKGT_CLKCON5_UCLKI2COFF         3            /*  I2C clock user control */
#define BITP_CLKGT_CLKCON5_GPTMRCLK2OFF       2            /*  GP timer 2 user control */
#define BITP_CLKGT_CLKCON5_GPTMRCLK1OFF       1            /*  GP timer 1 user control */
#define BITP_CLKGT_CLKCON5_GPTMRCLK0OFF       0            /*  GP timer 0 user control */
#define BITM_CLKGT_CLKCON5_PERCLKOFF         0x00000020    /*  This bit is used to disable all clocks connected to all peripherals */

#define BITM_CLKGT_CLKCON5_ACLKOFF           0x00000010    /*  ADC clock user control */

#define BITM_CLKGT_CLKCON5_UCLKI2COFF        0x00000008    /*  I2C clock user control */

#define BITM_CLKGT_CLKCON5_GPTMRCLK2OFF      0x00000004    /*  GP timer 2 user control */

#define BITM_CLKGT_CLKCON5_GPTMRCLK1OFF      0x00000002    /*  GP timer 1 user control */

#define BITM_CLKGT_CLKCON5_GPTMRCLK0OFF      0x00000001    /*  GP timer 0 user control */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_CLKSTAT0                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_CLKSTAT0_HFXTALNOK        14            /*  HF crystal not stable */
#define BITP_CLKGT_CLKSTAT0_HFXTALOK         13            /*  HF crystal stable */
#define BITP_CLKGT_CLKSTAT0_HFXTALSTATUS     12            /*  HF crystal status */
#define BITP_CLKGT_CLKSTAT0_LFXTALNOK        10            /*  LF crystal not stable */
#define BITP_CLKGT_CLKSTAT0_LFXTALOK          9            /*  LF crystal stable */
#define BITP_CLKGT_CLKSTAT0_LFXTALSTATUS      8            /*  LF crystal status */
#define BITP_CLKGT_CLKSTAT0_SPLLUNLOCK        2            /*  System PLL unlock */
#define BITP_CLKGT_CLKSTAT0_SPLLLOCK          1            /*  System PLL lock */
#define BITP_CLKGT_CLKSTAT0_SPLLSTATUS        0            /*  System PLL status */

#define BITM_CLKGT_CLKSTAT0_HFXTALNOK        0x00004000    /*  HF crystal not stable */

#define BITM_CLKGT_CLKSTAT0_HFXTALOK         0x00002000    /*  HF crystal stable */

#define BITM_CLKGT_CLKSTAT0_HFXTALSTATUS     0x00001000    /*  HF crystal status */

#define BITM_CLKGT_CLKSTAT0_LFXTALNOK        0x00000400    /*  LF crystal not stable */

#define BITM_CLKGT_CLKSTAT0_LFXTALOK         0x00000200    /*  LF crystal stable */

#define BITM_CLKGT_CLKSTAT0_LFXTALSTATUS     0x00000100    /*  LF crystal status */

#define BITM_CLKGT_CLKSTAT0_SPLLUNLOCK       0x00000004    /*  System PLL unlock */

#define BITM_CLKGT_CLKSTAT0_SPLLLOCK         0x00000002    /*  System PLL lock */

#define BITM_CLKGT_CLKSTAT0_SPLLSTATUS       0x00000001    /*  System PLL status */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_TCLKTEST                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_TCLKTEST_HPBUCKCLKDIVCNT  10            /*  HP BUCK clock divide count */
#define BITP_CLKGT_TCLKTEST_DELAY_SEL         8            /*  clock delay amount selection */
#define BITP_CLKGT_TCLKTEST_HPBUCKDIV_OV      5            /*  Override for HP buck clock divider */
#define BITP_CLKGT_TCLKTEST_PLL_TEST_MUX      2            /*  PLL test clock source mux */
#define BITM_CLKGT_TCLKTEST_HPBUCKCLKDIVCNT  0x0003FC00    /*  HP BUCK clock divide count */

#define BITM_CLKGT_TCLKTEST_DELAY_SEL        0x00000300    /*  clock delay amount selection */
#define BITM_CLKGT_TCLKTEST_HPBUCKDIV_OV     0x00000020    /*  Override for HP buck clock divider */

#define BITM_CLKGT_TCLKTEST_PLL_TEST_MUX     0x00000004    /*  PLL test clock source mux */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_TOSCCTRL1                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_TOSCCTRL1_HFOSC_FORCE_LOCK_VDD 15            /*  force lock high frequency oscillator */
#define BITP_CLKGT_TOSCCTRL1_HFOSC_DIV2_VDD  14            /*  enable divide by 2 ckt for High frequency oscillator */
#define BITP_CLKGT_TOSCCTRL1_XO32K_TSTSEL_VDD 11            /*  Low frequency crystal oscillator Test select */
#define BITP_CLKGT_TOSCCTRL1_XO32K_TSTEN_VBAT 10            /*  low frequency crystal oscillator test enable */
#define BITP_CLKGT_TOSCCTRL1_RB_XO32K_VBAT    9            /*  low frequency crystal oscillator reset bit for lock detect circuit */
#define BITP_CLKGT_TOSCCTRL1_XO26_TSTSEL_VDD  6            /*  high frequency crystal oscillator Test select */
#define BITP_CLKGT_TOSCCTRL1_XO26_TSTEN_VDD   5            /*  high frequency crystal oscillator test enable */
#define BITP_CLKGT_TOSCCTRL1_RB_XO26M_VDD     4            /*  high frequency crystal oscillator reset bit for lock detect circuit */
#define BITP_CLKGT_TOSCCTRL1_LPOSC_TEST_SEL_VMX  1            /*  Testmode low frequency oscillator (lposc) test select */
#define BITP_CLKGT_TOSCCTRL1_LPOSC_TEST_EN_VMX  0            /*  Testmode low frequency oscillator (lposc) enable */
#define BITM_CLKGT_TOSCCTRL1_HFOSC_FORCE_LOCK_VDD 0x00008000    /*  force lock high frequency oscillator */

#define BITM_CLKGT_TOSCCTRL1_HFOSC_DIV2_VDD  0x00004000    /*  enable divide by 2 ckt for High frequency oscillator */
#define BITM_CLKGT_TOSCCTRL1_XO32K_TSTSEL_VDD 0x00003800    /*  Low frequency crystal oscillator Test select */
#define BITM_CLKGT_TOSCCTRL1_XO32K_TSTEN_VBAT 0x00000400    /*  low frequency crystal oscillator test enable */
#define BITM_CLKGT_TOSCCTRL1_RB_XO32K_VBAT   0x00000200    /*  low frequency crystal oscillator reset bit for lock detect circuit */
#define BITM_CLKGT_TOSCCTRL1_XO26_TSTSEL_VDD 0x000001C0    /*  high frequency crystal oscillator Test select */
#define BITM_CLKGT_TOSCCTRL1_XO26_TSTEN_VDD  0x00000020    /*  high frequency crystal oscillator test enable */
#define BITM_CLKGT_TOSCCTRL1_RB_XO26M_VDD    0x00000010    /*  high frequency crystal oscillator reset bit for lock detect circuit */
#define BITM_CLKGT_TOSCCTRL1_LPOSC_TEST_SEL_VMX 0x0000000E    /*  Testmode low frequency oscillator (lposc) test select */
#define BITM_CLKGT_TOSCCTRL1_LPOSC_TEST_EN_VMX 0x00000001    /*  Testmode low frequency oscillator (lposc) enable */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_TOSCCNFG0                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_TOSCCNFG0_HFOSC_TMIN_VDD   0            /*  testmode input for high frequency oscillator */
#define BITM_CLKGT_TOSCCNFG0_HFOSC_TMIN_VDD  0x000000FF    /*  testmode input for high frequency oscillator */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_TPLLCNFG0                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_TPLLCNFG0_PLL_RSTB_LD_VDD 15            /*  resets lock detector logic in PLL */
#define BITP_CLKGT_TPLLCNFG0_PLL_KV_CAL_VDD  10            /*  VCO gain calibration */
#define BITP_CLKGT_TPLLCNFG0_PLL_PFD_DSEL_VDD  8            /*  PFD reset delay select */
#define BITP_CLKGT_TPLLCNFG0_PLL_TEST_SEL_VDD  4            /*  PLL test modes configuration */
#define BITP_CLKGT_TPLLCNFG0_PLL_TEST_EN_VDD  3            /*  PLL test mode enable */
#define BITP_CLKGT_TPLLCNFG0_PLL_RSTB_CNTRL_VDD  2            /*  resets PLL only */
#define BITP_CLKGT_TPLLCNFG0_PLL_BYP_VDD      1            /*  used to bypass the pll output clock */
#define BITP_CLKGT_TPLLCNFG0_PLL_BWINC_VDD    0            /*  PLL test bit */
#define BITM_CLKGT_TPLLCNFG0_PLL_RSTB_LD_VDD 0x00008000    /*  resets lock detector logic in PLL */
#define BITM_CLKGT_TPLLCNFG0_PLL_KV_CAL_VDD  0x00001C00    /*  VCO gain calibration */
#define BITM_CLKGT_TPLLCNFG0_PLL_PFD_DSEL_VDD 0x00000300    /*  PFD reset delay select */
#define BITM_CLKGT_TPLLCNFG0_PLL_TEST_SEL_VDD 0x000000F0    /*  PLL test modes configuration */
#define BITM_CLKGT_TPLLCNFG0_PLL_TEST_EN_VDD 0x00000008    /*  PLL test mode enable */
#define BITM_CLKGT_TPLLCNFG0_PLL_RSTB_CNTRL_VDD 0x00000004    /*  resets PLL only */
#define BITM_CLKGT_TPLLCNFG0_PLL_BYP_VDD     0x00000002    /*  used to bypass the pll output clock */
#define BITM_CLKGT_TPLLCNFG0_PLL_BWINC_VDD   0x00000001    /*  PLL test bit */

/* -------------------------------------------------------------------------------------------------------------------------
          CLKGT_THFRING                        Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CLKGT_THFRING_HFRING_TRIM_BIAS_VDD  8            /*  High frequency ring oscillator2 trim bias configuration */
#define BITP_CLKGT_THFRING_HFRING_TEST_SEL_VDD  2            /*  High frequency ring oscillator2 testmode select configuration */
#define BITP_CLKGT_THFRING_PDN_HFRING_VDD     1            /*  power down hfring oscillator */
#define BITP_CLKGT_THFRING_HFRING_TEST_EN_VDD  0            /*  High frequency ring oscillator2 testmode enable */
#define BITM_CLKGT_THFRING_HFRING_TRIM_BIAS_VDD 0x0000FF00    /*  High frequency ring oscillator2 trim bias configuration */
#define BITM_CLKGT_THFRING_HFRING_TEST_SEL_VDD 0x0000003C    /*  High frequency ring oscillator2 testmode select configuration */
#define BITM_CLKGT_THFRING_PDN_HFRING_VDD    0x00000002    /*  power down hfring oscillator */
#define BITM_CLKGT_THFRING_HFRING_TEST_EN_VDD 0x00000001    /*  High frequency ring oscillator2 testmode enable */


/* ============================================================================================================================
        Parallel Test Interface
   ============================================================================================================================ */

/* ============================================================================================================================
        PTI
   ============================================================================================================================ */
#define MOD_PTI_BASE                         0x4004CD00            /*  Parallel Test Interface  */
#define MOD_PTI_MASK                         0x00003FFF            /*  Parallel Test Interface  */
#define REG_PTI_RST_ISR_STARTADDR_RESET      0x00000000            /*      Reset Value for RST_ISR_STARTADDR  */
#define REG_PTI_RST_ISR_STARTADDR            0x4004CD00            /*  PTI Reset ISR Start Address */
#define REG_PTI_RST_STACK_POINTER_RESET      0x00000000            /*      Reset Value for RST_STACK_POINTER  */
#define REG_PTI_RST_STACK_POINTER            0x4004CD04            /*  PTI Reset Stack Pointer */
#define REG_PTI_PTI_CONTROL_RESET            0x00000000            /*      Reset Value for PTI_CONTROL  */
#define REG_PTI_PTI_CONTROL                  0x4004CD08            /*  PTI Parallel Test Interface Control Register */

/* ============================================================================================================================
        PTI Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          PTI_PTI_CONTROL                      Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PTI_PTI_CONTROL_PTI_ENABLE       0
#define BITM_PTI_PTI_CONTROL_PTI_ENABLE      0x00000001


/* ============================================================================================================================
        Cortex-M3 Interrupt Controller
   ============================================================================================================================ */

/* ============================================================================================================================
        cortex
   ============================================================================================================================ */
#define MOD_CORTEX_BASE                      0xE000E000            /*  Cortex-M3 Interrupt Controller  */
#define MOD_CORTEX_MASK                      0x00000FFF            /*  Cortex-M3 Interrupt Controller  */
#define REG_CORTEX_INTNUM_RESET              0x00000000            /*      Reset Value for INTNUM  */
#define REG_CORTEX_INTNUM                    0xE000E004            /*  cortex Interrupt Control Type */
#define REG_CORTEX_STKSTA_RESET              0x00000000            /*      Reset Value for STKSTA  */
#define REG_CORTEX_STKSTA                    0xE000E010            /*  cortex Systick Control and Status */
#define REG_CORTEX_STKLD_RESET               0x00000000            /*      Reset Value for STKLD  */
#define REG_CORTEX_STKLD                     0xE000E014            /*  cortex Systick Reload Value */
#define REG_CORTEX_STKVAL_RESET              0x00000000            /*      Reset Value for STKVAL  */
#define REG_CORTEX_STKVAL                    0xE000E018            /*  cortex Systick Current Value */
#define REG_CORTEX_STKCAL_RESET              0x00000000            /*      Reset Value for STKCAL  */
#define REG_CORTEX_STKCAL                    0xE000E01C            /*  cortex Systick Calibration Value */
#define REG_CORTEX_INTSETE0_RESET            0x00000000            /*      Reset Value for INTSETE0  */
#define REG_CORTEX_INTSETE0                  0xE000E100            /*  cortex IRQ0..31 Set_Enable */
#define REG_CORTEX_INTSETE1_RESET            0x00000000            /*      Reset Value for INTSETE1  */
#define REG_CORTEX_INTSETE1                  0xE000E104            /*  cortex IRQ32..63 Set_Enable */
#define REG_CORTEX_INTCLRE0_RESET            0x00000000            /*      Reset Value for INTCLRE0  */
#define REG_CORTEX_INTCLRE0                  0xE000E180            /*  cortex IRQ0..31 Clear_Enable */
#define REG_CORTEX_INTCLRE1_RESET            0x00000000            /*      Reset Value for INTCLRE1  */
#define REG_CORTEX_INTCLRE1                  0xE000E184            /*  cortex IRQ32..63 Clear_Enable */
#define REG_CORTEX_INTSETP0_RESET            0x00000000            /*      Reset Value for INTSETP0  */
#define REG_CORTEX_INTSETP0                  0xE000E200            /*  cortex IRQ0..31 Set_Pending */
#define REG_CORTEX_INTSETP1_RESET            0x00000000            /*      Reset Value for INTSETP1  */
#define REG_CORTEX_INTSETP1                  0xE000E204            /*  cortex IRQ32..63 Set_Pending */
#define REG_CORTEX_INTCLRP0_RESET            0x00000000            /*      Reset Value for INTCLRP0  */
#define REG_CORTEX_INTCLRP0                  0xE000E280            /*  cortex IRQ0..31 Clear_Pending */
#define REG_CORTEX_INTCLRP1_RESET            0x00000000            /*      Reset Value for INTCLRP1  */
#define REG_CORTEX_INTCLRP1                  0xE000E284            /*  cortex IRQ32..63 Clear_Pending */
#define REG_CORTEX_INTACT0_RESET             0x00000000            /*      Reset Value for INTACT0  */
#define REG_CORTEX_INTACT0                   0xE000E300            /*  cortex IRQ0..31 Active Bit */
#define REG_CORTEX_INTACT1_RESET             0x00000000            /*      Reset Value for INTACT1  */
#define REG_CORTEX_INTACT1                   0xE000E304            /*  cortex IRQ32..63 Active Bit */
#define REG_CORTEX_INTPRI0_RESET             0x00000000            /*      Reset Value for INTPRI0  */
#define REG_CORTEX_INTPRI0                   0xE000E400            /*  cortex IRQ0..3 Priority */
#define REG_CORTEX_INTPRI1_RESET             0x00000000            /*      Reset Value for INTPRI1  */
#define REG_CORTEX_INTPRI1                   0xE000E404            /*  cortex IRQ4..7 Priority */
#define REG_CORTEX_INTPRI2_RESET             0x00000000            /*      Reset Value for INTPRI2  */
#define REG_CORTEX_INTPRI2                   0xE000E408            /*  cortex IRQ8..11 Priority */
#define REG_CORTEX_INTPRI3_RESET             0x00000000            /*      Reset Value for INTPRI3  */
#define REG_CORTEX_INTPRI3                   0xE000E40C            /*  cortex IRQ12..15 Priority */
#define REG_CORTEX_INTPRI4_RESET             0x00000000            /*      Reset Value for INTPRI4  */
#define REG_CORTEX_INTPRI4                   0xE000E410            /*  cortex IRQ16..19 Priority */
#define REG_CORTEX_INTPRI5_RESET             0x00000000            /*      Reset Value for INTPRI5  */
#define REG_CORTEX_INTPRI5                   0xE000E414            /*  cortex IRQ20..23 Priority */
#define REG_CORTEX_INTPRI6_RESET             0x00000000            /*      Reset Value for INTPRI6  */
#define REG_CORTEX_INTPRI6                   0xE000E418            /*  cortex IRQ24..27 Priority */
#define REG_CORTEX_INTPRI7_RESET             0x00000000            /*      Reset Value for INTPRI7  */
#define REG_CORTEX_INTPRI7                   0xE000E41C            /*  cortex IRQ28..31 Priority */
#define REG_CORTEX_INTPRI8_RESET             0x00000000            /*      Reset Value for INTPRI8  */
#define REG_CORTEX_INTPRI8                   0xE000E420            /*  cortex IRQ32..35 Priority */
#define REG_CORTEX_INTPRI9_RESET             0x00000000            /*      Reset Value for INTPRI9  */
#define REG_CORTEX_INTPRI9                   0xE000E424            /*  cortex IRQ36..39 Priority */
#define REG_CORTEX_INTPRI10_RESET            0x00000000            /*      Reset Value for INTPRI10  */
#define REG_CORTEX_INTPRI10                  0xE000E428            /*  cortex IRQ40..43 Priority */
#define REG_CORTEX_INTCPID_RESET             0x00000000            /*      Reset Value for INTCPID  */
#define REG_CORTEX_INTCPID                   0xE000ED00            /*  cortex CPUID Base */
#define REG_CORTEX_INTSTA_RESET              0x00000000            /*      Reset Value for INTSTA  */
#define REG_CORTEX_INTSTA                    0xE000ED04            /*  cortex Interrupt Control State */
#define REG_CORTEX_INTVEC_RESET              0x00000000            /*      Reset Value for INTVEC  */
#define REG_CORTEX_INTVEC                    0xE000ED08            /*  cortex Vector Table Offset */
#define REG_CORTEX_INTAIRC_RESET             0x00000000            /*      Reset Value for INTAIRC  */
#define REG_CORTEX_INTAIRC                   0xE000ED0C            /*  cortex Application Interrupt/Reset Control */
#define REG_CORTEX_INTCON0_RESET             0x00000000            /*      Reset Value for INTCON0  */
#define REG_CORTEX_INTCON0                   0xE000ED10            /*  cortex System Control */
#define REG_CORTEX_INTCON1_RESET             0x00000000            /*      Reset Value for INTCON1  */
#define REG_CORTEX_INTCON1                   0xE000ED14            /*  cortex Configuration Control */
#define REG_CORTEX_INTSHPRIO0_RESET          0x00000000            /*      Reset Value for INTSHPRIO0  */
#define REG_CORTEX_INTSHPRIO0                0xE000ED18            /*  cortex System Handlers 4-7 Priority */
#define REG_CORTEX_INTSHPRIO1_RESET          0x00000000            /*      Reset Value for INTSHPRIO1  */
#define REG_CORTEX_INTSHPRIO1                0xE000ED1C            /*  cortex System Handlers 8-11 Priority */
#define REG_CORTEX_INTSHPRIO3_RESET          0x00000000            /*      Reset Value for INTSHPRIO3  */
#define REG_CORTEX_INTSHPRIO3                0xE000ED20            /*  cortex System Handlers 12-15 Priority */
#define REG_CORTEX_INTSHCSR_RESET            0x00000000            /*      Reset Value for INTSHCSR  */
#define REG_CORTEX_INTSHCSR                  0xE000ED24            /*  cortex System Handler Control and State */
#define REG_CORTEX_INTCFSR_RESET             0x00000000            /*      Reset Value for INTCFSR  */
#define REG_CORTEX_INTCFSR                   0xE000ED28            /*  cortex Configurable Fault Status */
#define REG_CORTEX_INTHFSR_RESET             0x00000000            /*      Reset Value for INTHFSR  */
#define REG_CORTEX_INTHFSR                   0xE000ED2C            /*  cortex Hard Fault Status */
#define REG_CORTEX_INTDFSR_RESET             0x00000000            /*      Reset Value for INTDFSR  */
#define REG_CORTEX_INTDFSR                   0xE000ED30            /*  cortex Debug Fault Status */
#define REG_CORTEX_INTMMAR_RESET             0x00000000            /*      Reset Value for INTMMAR  */
#define REG_CORTEX_INTMMAR                   0xE000ED34            /*  cortex Mem Mge Address */
#define REG_CORTEX_INTBFAR_RESET             0x00000000            /*      Reset Value for INTBFAR  */
#define REG_CORTEX_INTBFAR                   0xE000ED38            /*  cortex Bus Fault Address */
#define REG_CORTEX_INTAFSR_RESET             0x00000000            /*      Reset Value for INTAFSR  */
#define REG_CORTEX_INTAFSR                   0xE000ED3C            /*  cortex Auxiliary Fault Status */
#define REG_CORTEX_INTPFR0_RESET             0x00000000            /*      Reset Value for INTPFR0  */
#define REG_CORTEX_INTPFR0                   0xE000ED40            /*  cortex Processor Feature Register 0 */
#define REG_CORTEX_INTPFR1_RESET             0x00000000            /*      Reset Value for INTPFR1  */
#define REG_CORTEX_INTPFR1                   0xE000ED44            /*  cortex Processor Feature Register 1 */
#define REG_CORTEX_INTDFR0_RESET             0x00000000            /*      Reset Value for INTDFR0  */
#define REG_CORTEX_INTDFR0                   0xE000ED48            /*  cortex Debug Feature Register 0 */
#define REG_CORTEX_INTAFR0_RESET             0x00000000            /*      Reset Value for INTAFR0  */
#define REG_CORTEX_INTAFR0                   0xE000ED4C            /*  cortex Auxiliary Feature Register 0 */
#define REG_CORTEX_INTMMFR0_RESET            0x00000000            /*      Reset Value for INTMMFR0  */
#define REG_CORTEX_INTMMFR0                  0xE000ED50            /*  cortex Memory Model Feature Register 0 */
#define REG_CORTEX_INTMMFR1_RESET            0x00000000            /*      Reset Value for INTMMFR1  */
#define REG_CORTEX_INTMMFR1                  0xE000ED54            /*  cortex Memory Model Feature Register 1 */
#define REG_CORTEX_INTMMFR2_RESET            0x00000000            /*      Reset Value for INTMMFR2  */
#define REG_CORTEX_INTMMFR2                  0xE000ED58            /*  cortex Memory Model Feature Register 2 */
#define REG_CORTEX_INTMMFR3_RESET            0x00000000            /*      Reset Value for INTMMFR3  */
#define REG_CORTEX_INTMMFR3                  0xE000ED5C            /*  cortex Memory Model Feature Register 3 */
#define REG_CORTEX_INTISAR0_RESET            0x00000000            /*      Reset Value for INTISAR0  */
#define REG_CORTEX_INTISAR0                  0xE000ED60            /*  cortex ISA Feature Register 0 */
#define REG_CORTEX_INTISAR1_RESET            0x00000000            /*      Reset Value for INTISAR1  */
#define REG_CORTEX_INTISAR1                  0xE000ED64            /*  cortex ISA Feature Register 1 */
#define REG_CORTEX_INTISAR2_RESET            0x00000000            /*      Reset Value for INTISAR2  */
#define REG_CORTEX_INTISAR2                  0xE000ED68            /*  cortex ISA Feature Register 2 */
#define REG_CORTEX_INTISAR3_RESET            0x00000000            /*      Reset Value for INTISAR3  */
#define REG_CORTEX_INTISAR3                  0xE000ED6C            /*  cortex ISA Feature Register 3 */
#define REG_CORTEX_INTISAR4_RESET            0x00000000            /*      Reset Value for INTISAR4  */
#define REG_CORTEX_INTISAR4                  0xE000ED70            /*  cortex ISA Feature Register 4 */
#define REG_CORTEX_INTTRGI_RESET             0x00000000            /*      Reset Value for INTTRGI  */
#define REG_CORTEX_INTTRGI                   0xE000EF00            /*  cortex Software Trigger Interrupt Register */
#define REG_CORTEX_INTPID4_RESET             0x00000000            /*      Reset Value for INTPID4  */
#define REG_CORTEX_INTPID4                   0xE000EFD0            /*  cortex Peripheral Identification Register 4 */
#define REG_CORTEX_INTPID5_RESET             0x00000000            /*      Reset Value for INTPID5  */
#define REG_CORTEX_INTPID5                   0xE000EFD4            /*  cortex Peripheral Identification Register 5 */
#define REG_CORTEX_INTPID6_RESET             0x00000000            /*      Reset Value for INTPID6  */
#define REG_CORTEX_INTPID6                   0xE000EFD8            /*  cortex Peripheral Identification Register 6 */
#define REG_CORTEX_INTPID7_RESET             0x00000000            /*      Reset Value for INTPID7  */
#define REG_CORTEX_INTPID7                   0xE000EFDC            /*  cortex Peripheral Identification Register 7 */
#define REG_CORTEX_INTPID0_RESET             0x00000000            /*      Reset Value for INTPID0  */
#define REG_CORTEX_INTPID0                   0xE000EFE0            /*  cortex Peripheral Identification Bits7:0 */
#define REG_CORTEX_INTPID1_RESET             0x00000000            /*      Reset Value for INTPID1  */
#define REG_CORTEX_INTPID1                   0xE000EFE4            /*  cortex Peripheral Identification Bits15:8 */
#define REG_CORTEX_INTPID2_RESET             0x00000000            /*      Reset Value for INTPID2  */
#define REG_CORTEX_INTPID2                   0xE000EFE8            /*  cortex Peripheral Identification Bits16:23 */
#define REG_CORTEX_INTPID3_RESET             0x00000000            /*      Reset Value for INTPID3  */
#define REG_CORTEX_INTPID3                   0xE000EFEC            /*  cortex Peripheral Identification Bits24:31 */
#define REG_CORTEX_INTCID0_RESET             0x00000000            /*      Reset Value for INTCID0  */
#define REG_CORTEX_INTCID0                   0xE000EFF0            /*  cortex Component Identification Bits7:0 */
#define REG_CORTEX_INTCID1_RESET             0x00000000            /*      Reset Value for INTCID1  */
#define REG_CORTEX_INTCID1                   0xE000EFF4            /*  cortex Component Identification Bits15:8 */
#define REG_CORTEX_INTCID2_RESET             0x00000000            /*      Reset Value for INTCID2  */
#define REG_CORTEX_INTCID2                   0xE000EFF8            /*  cortex Component Identification Bits16:23 */
#define REG_CORTEX_INTCID3_RESET             0x00000000            /*      Reset Value for INTCID3  */
#define REG_CORTEX_INTCID3                   0xE000EFFC            /*  cortex Component Identification Bits24:31 */

/* ============================================================================================================================
        cortex Register BitMasks, Positions & Enumerations 
   ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
          cortex_INTCON0                       Pos/Masks         Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CORTEX_INTCON0_SLEEPDEEP         2            /*  deep sleep flag for HIBERNATE mode */
#define BITP_CORTEX_INTCON0_SLEEPONEXIT       1            /*  Sleeps the core on exit from an ISR */

#define BITM_CORTEX_INTCON0_SLEEPDEEP        0x00000004    /*  deep sleep flag for HIBERNATE mode */

#define BITM_CORTEX_INTCON0_SLEEPONEXIT      0x00000002    /*  Sleeps the core on exit from an ISR */


/* Flash Controller Parameters */

/***** FLASH  */
#define PARAM_FLASH_ARRAYED                 0

/* CacheFlash Parameters */

/***** CacheFlash  */
#define PARAM_CACHEFLASH_ARRAYED            0

/* Cache Controller Parameters */

/***** FLASH_CACHE  */
#define PARAM_FLASH_CACHE_ARRAYED           0

/* DFT Controller Parameters */

/***** FLASH_DFT  */
#define PARAM_FLASH_DFT_ARRAYED             0

/* Flash Controller Parameters */

/***** FLASH_TEST  */
#define PARAM_FLASH_TEST_ARRAYED            0

/* crypto Parameters */

/***** crypto  */
#define PARAM_CRYPTO_INCLUDE_CNTR           1
#define PARAM_CRYPTO_INCLUDE_CBC            1
#define PARAM_CRYPTO_INCLUDE_CCM            1
#define PARAM_CRYPTO_INCLUDE_MAC            1
#define PARAM_CRYPTO_INCLUDE_SHA            1
#define PARAM_CRYPTO_INCLUDE_192KEY          1
#define PARAM_CRYPTO_INCLUDE_256KEY          1
#define PARAM_CRYPTO_INCLUDE_EXTKEY          1

/* sport Parameters */

/***** sport  */
#define PARAM_SPORT_REVID_REV               0
#define PARAM_SPORT_REVID_MAJOR             0
#define PARAM_SPORT_APB_DELAY_CFG           0

/* PowerManagement_AON Parameters */

/***** PMG  */
#define PARAM_PMG_ARRAYED                   0

/* Power Management Registers Parameters */

/***** PMG  */
#define PARAM_PMG_ARRAYED                   0

/* Clocking registers Parameters */

/***** CLK  */
#define PARAM_CLK_STRIP_DETECT_ENABLED          1
#define PARAM_CLK_ARRAYED                   0

/* CLKG Parameters */

/***** clocking  */
#define PARAM_CLOCKING_STRIP_DETECT_ENABLED          1
#define PARAM_CLOCKING_ARRAYED              0

/* Power Management Registers Parameters */

/***** PMGT  */
#define PARAM_PMGT_ARRAYED                  0

/* Clocking registers Parameters */

/***** CLKGT  */
#define PARAM_CLKGT_STRIP_DETECT_ENABLED          1
#define PARAM_CLKGT_ARRAYED                 0
/* -------------------------------------------------------------------------------------------------------------------------
 *
 *  Your module description, here. (microglue) Parameters
 *
 * ------------------------------------------------------------------------------------------------------------------------- */
#define PARAM_microglue_ARM_CORE             M3 
#define PARAM_microglue_DESIGN_VIEW          0x1 
#define PARAM_microglue_OUTPUT_FILENAMES     microglue 

#endif	/* end ifndef _DEF_MICROGLUE_H */
