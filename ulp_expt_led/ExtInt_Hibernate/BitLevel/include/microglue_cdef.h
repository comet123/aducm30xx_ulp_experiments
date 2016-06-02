/* ================================================================================

     Created by   :   gsulliva
     Created on   :   2014 Jun 30, 12:47 EDT

     Project      :   microglue
     File         :   microglue_cdef.h
     Description  :   C MMR Pointer Definitions

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

#ifndef _microglue_CDEF_H
#define _microglue_CDEF_H

#include <stdint.h>

/* pickup register bitfield and bit masks */
#include "microglue.h"


/*  =================================================================================
 *       (bus_matrix)
 *  ================================================================================= */
#define pREG_BUS_MATRIX_ARBIT0           ((volatile  uint32_t *) REG_BUS_MATRIX_ARBIT0)           /*  Arbitration Priority Configuration for FLASH and SRAM0 */
#define pREG_BUS_MATRIX_ARBIT1           ((volatile  uint32_t *) REG_BUS_MATRIX_ARBIT1)           /*  Arbitration Priority Configuration for SRAM1 and SIP */
#define pREG_BUS_MATRIX_ARBIT2           ((volatile  uint32_t *) REG_BUS_MATRIX_ARBIT2)           /*  Arbitration Priority Configuration for APB32 and APB16 */
#define pREG_BUS_MATRIX_ARBIT3           ((volatile  uint32_t *) REG_BUS_MATRIX_ARBIT3)           /*  Arbitration Priority Configuration for APB16 priority for core and for DMA1 */

/*  =================================================================================
 *      General Purpose Timer (TMR0)
 *  ================================================================================= */
#define pREG_TMR0_LD                     ( (volatile  int16_t *) REG_TMR0_LD)                     /*  16-bit load value */
#define pREG_TMR0_VAL                    ( (volatile  int16_t *) REG_TMR0_VAL)                    /*  16-bit timer value */
#define pREG_TMR0_CON                    ((volatile  uint16_t *) REG_TMR0_CON)                    /*  Control */
#define pREG_TMR0_CLRI                   ((volatile  uint16_t *) REG_TMR0_CLRI)                   /*  Clear Interrupt */
#define pREG_TMR0_CAP                    ( (volatile  int16_t *) REG_TMR0_CAP)                    /*  Capture */
#define pREG_TMR0_ALD                    ( (volatile  int16_t *) REG_TMR0_ALD)                    /*  16-bit load value, asynchronous */
#define pREG_TMR0_AVAL                   ( (volatile  int16_t *) REG_TMR0_AVAL)                   /*  16-bit timer value, asynchronous */
#define pREG_TMR0_STA                    ((volatile  uint16_t *) REG_TMR0_STA)                    /*  Status */
#define pREG_TMR0_PCON                   ((volatile  uint16_t *) REG_TMR0_PCON)                   /*  PWM Control Register */
#define pREG_TMR0_PMAT                   ( (volatile  int16_t *) REG_TMR0_PMAT)                   /*  PWM Match Value */

/*  =================================================================================
 *      General Purpose Timer (TMR1)
 *  ================================================================================= */
#define pREG_TMR1_LD                     ( (volatile  int16_t *) REG_TMR1_LD)                     /*  16-bit load value */
#define pREG_TMR1_VAL                    ( (volatile  int16_t *) REG_TMR1_VAL)                    /*  16-bit timer value */
#define pREG_TMR1_CON                    ((volatile  uint16_t *) REG_TMR1_CON)                    /*  Control */
#define pREG_TMR1_CLRI                   ((volatile  uint16_t *) REG_TMR1_CLRI)                   /*  Clear Interrupt */
#define pREG_TMR1_CAP                    ( (volatile  int16_t *) REG_TMR1_CAP)                    /*  Capture */
#define pREG_TMR1_ALD                    ( (volatile  int16_t *) REG_TMR1_ALD)                    /*  16-bit load value, asynchronous */
#define pREG_TMR1_AVAL                   ( (volatile  int16_t *) REG_TMR1_AVAL)                   /*  16-bit timer value, asynchronous */
#define pREG_TMR1_STA                    ((volatile  uint16_t *) REG_TMR1_STA)                    /*  Status */
#define pREG_TMR1_PCON                   ((volatile  uint16_t *) REG_TMR1_PCON)                   /*  PWM Control Register */
#define pREG_TMR1_PMAT                   ( (volatile  int16_t *) REG_TMR1_PMAT)                   /*  PWM Match Value */

/*  =================================================================================
 *      General Purpose Timer (TMR2)
 *  ================================================================================= */
#define pREG_TMR2_LD                     ( (volatile  int16_t *) REG_TMR2_LD)                     /*  16-bit load value */
#define pREG_TMR2_VAL                    ( (volatile  int16_t *) REG_TMR2_VAL)                    /*  16-bit timer value */
#define pREG_TMR2_CON                    ((volatile  uint16_t *) REG_TMR2_CON)                    /*  Control */
#define pREG_TMR2_CLRI                   ((volatile  uint16_t *) REG_TMR2_CLRI)                   /*  Clear Interrupt */
#define pREG_TMR2_CAP                    ( (volatile  int16_t *) REG_TMR2_CAP)                    /*  Capture */
#define pREG_TMR2_ALD                    ( (volatile  int16_t *) REG_TMR2_ALD)                    /*  16-bit load value, asynchronous */
#define pREG_TMR2_AVAL                   ( (volatile  int16_t *) REG_TMR2_AVAL)                   /*  16-bit timer value, asynchronous */
#define pREG_TMR2_STA                    ((volatile  uint16_t *) REG_TMR2_STA)                    /*  Status */
#define pREG_TMR2_PCON                   ((volatile  uint16_t *) REG_TMR2_PCON)                   /*  PWM Control Register */
#define pREG_TMR2_PMAT                   ( (volatile  int16_t *) REG_TMR2_PMAT)                   /*  PWM Match Value */

/*  =================================================================================
 *      Real-Time Clock (rtc0)
 *  ================================================================================= */
#define pREG_RTC0_CR0                    ((volatile  uint32_t *) REG_RTC0_CR0)                    /*  RTC Control 0 */
#define pREG_RTC0_SR0                    ((volatile  uint32_t *) REG_RTC0_SR0)                    /*  RTC Status 0 */
#define pREG_RTC0_SR1                    ((volatile  uint32_t *) REG_RTC0_SR1)                    /*  RTC Status 1 */
#define pREG_RTC0_CNT0                   ((volatile  uint32_t *) REG_RTC0_CNT0)                   /*  RTC Count 0 */
#define pREG_RTC0_CNT1                   ( (volatile  int16_t *) REG_RTC0_CNT1)                   /*  RTC Count 1 */
#define pREG_RTC0_ALM0                   ((volatile  uint32_t *) REG_RTC0_ALM0)                   /*  RTC Alarm 0 */
#define pREG_RTC0_ALM1                   ( (volatile  int16_t *) REG_RTC0_ALM1)                   /*  RTC Alarm 1 */
#define pREG_RTC0_TRM                    ((volatile  uint16_t *) REG_RTC0_TRM)                    /*  RTC Trim */
#define pREG_RTC0_GWY                    ( (volatile  int16_t *) REG_RTC0_GWY)                    /*  RTC Gateway */
#define pREG_RTC0_DBG                    ( (volatile  int16_t *) REG_RTC0_DBG)                    /*  RTC Debug Access : ADI Factory Use Only */
#define pREG_RTC0_CR1                    ((volatile  uint16_t *) REG_RTC0_CR1)                    /*  RTC Control 1 */
#define pREG_RTC0_SR2                    ((volatile  uint16_t *) REG_RTC0_SR2)                    /*  RTC Status 2 */
#define pREG_RTC0_SNAP0                  ((volatile  uint32_t *) REG_RTC0_SNAP0)                  /*  RTC Snapshot 0 */
#define pREG_RTC0_SNAP1                  ( (volatile  int16_t *) REG_RTC0_SNAP1)                  /*  RTC Snapshot 1 */
#define pREG_RTC0_SNAP2                  ((volatile  uint32_t *) REG_RTC0_SNAP2)                  /*  RTC Snapshot 2 */
#define pREG_RTC0_MOD                    ((volatile  uint32_t *) REG_RTC0_MOD)                    /*  RTC Modulo */
#define pREG_RTC0_CNT2                   ((volatile  uint32_t *) REG_RTC0_CNT2)                   /*  RTC Count 2 */
#define pREG_RTC0_ALM2                   ((volatile  uint32_t *) REG_RTC0_ALM2)                   /*  RTC Alarm 2 */

/*  =================================================================================
 *      Real-Time Clock (rtc1)
 *  ================================================================================= */
#define pREG_RTC1_CR0                    ((volatile  uint32_t *) REG_RTC1_CR0)                    /*  RTC Control 0 */
#define pREG_RTC1_SR0                    ((volatile  uint32_t *) REG_RTC1_SR0)                    /*  RTC Status 0 */
#define pREG_RTC1_SR1                    ((volatile  uint32_t *) REG_RTC1_SR1)                    /*  RTC Status 1 */
#define pREG_RTC1_CNT0                   ((volatile  uint32_t *) REG_RTC1_CNT0)                   /*  RTC Count 0 */
#define pREG_RTC1_CNT1                   ( (volatile  int16_t *) REG_RTC1_CNT1)                   /*  RTC Count 1 */
#define pREG_RTC1_ALM0                   ((volatile  uint32_t *) REG_RTC1_ALM0)                   /*  RTC Alarm 0 */
#define pREG_RTC1_ALM1                   ( (volatile  int16_t *) REG_RTC1_ALM1)                   /*  RTC Alarm 1 */
#define pREG_RTC1_TRM                    ((volatile  uint16_t *) REG_RTC1_TRM)                    /*  RTC Trim */
#define pREG_RTC1_GWY                    ( (volatile  int16_t *) REG_RTC1_GWY)                    /*  RTC Gateway */
#define pREG_RTC1_DBG                    ( (volatile  int16_t *) REG_RTC1_DBG)                    /*  RTC Debug Access : ADI Factory Use Only */
#define pREG_RTC1_CR1                    ((volatile  uint16_t *) REG_RTC1_CR1)                    /*  RTC Control 1 */
#define pREG_RTC1_SR2                    ((volatile  uint16_t *) REG_RTC1_SR2)                    /*  RTC Status 2 */
#define pREG_RTC1_SNAP0                  ((volatile  uint32_t *) REG_RTC1_SNAP0)                  /*  RTC Snapshot 0 */
#define pREG_RTC1_SNAP1                  ( (volatile  int16_t *) REG_RTC1_SNAP1)                  /*  RTC Snapshot 1 */
#define pREG_RTC1_SNAP2                  ((volatile  uint32_t *) REG_RTC1_SNAP2)                  /*  RTC Snapshot 2 */
#define pREG_RTC1_MOD                    ((volatile  uint32_t *) REG_RTC1_MOD)                    /*  RTC Modulo */
#define pREG_RTC1_CNT2                   ((volatile  uint32_t *) REG_RTC1_CNT2)                   /*  RTC Count 2 */
#define pREG_RTC1_ALM2                   ((volatile  uint32_t *) REG_RTC1_ALM2)                   /*  RTC Alarm 2 */

/*  =================================================================================
 *      System Identification and Debug Enable (sys)
 *  ================================================================================= */
#define pREG_SYS_ADIID                   ((volatile  uint16_t *) REG_SYS_ADIID)                   /*  ADI Identification */
#define pREG_SYS_CHIPID                  ((volatile  uint16_t *) REG_SYS_CHIPID)                  /*  Chip Identifier */
#define pREG_SYS_SWDEN                   ((volatile  uint16_t *) REG_SYS_SWDEN)                   /*  Serial Wire Debug Enable */

/*  =================================================================================
 *      Watchdog Timer (wdt)
 *  ================================================================================= */
#define pREG_WDT_LOAD                    ( (volatile  int16_t *) REG_WDT_LOAD)                    /*  Load value */
#define pREG_WDT_CCOUNT                  ( (volatile  int16_t *) REG_WDT_CCOUNT)                  /*  Current count value */
#define pREG_WDT_CTRL                    ((volatile  uint16_t *) REG_WDT_CTRL)                    /*  Control */
#define pREG_WDT_RESTART                 ( (volatile  int16_t *) REG_WDT_RESTART)                 /*  Clear interrupt */
#define pREG_WDT_RESETCTRL               ((volatile  uint16_t *) REG_WDT_RESETCTRL)               /*  Reset Control Register */
#define pREG_WDT_ACOUNT                  ( (volatile  int16_t *) REG_WDT_ACOUNT)                  /*  Value Register Async */
#define pREG_WDT_STATUS                  ((volatile  uint16_t *) REG_WDT_STATUS)                  /*  Status */

/*  =================================================================================
 *      I2C Master/Slave (i2cf)
 *  ================================================================================= */
#define pREG_I2CF_I2CFMCON               ((volatile  uint16_t *) REG_I2CF_I2CFMCON)               /*  Master control */
#define pREG_I2CF_I2CFMSTA               ((volatile  uint16_t *) REG_I2CF_I2CFMSTA)               /*  Master status */
#define pREG_I2CF_I2CFMRX                ((volatile  uint16_t *) REG_I2CF_I2CFMRX)                /*  Master receive data */
#define pREG_I2CF_I2CFMTX                ((volatile  uint16_t *) REG_I2CF_I2CFMTX)                /*  Master transmit data */
#define pREG_I2CF_I2CFMRXCNT             ((volatile  uint16_t *) REG_I2CF_I2CFMRXCNT)             /*  Master receive data count */
#define pREG_I2CF_I2CFMCRXCNT            ((volatile  uint16_t *) REG_I2CF_I2CFMCRXCNT)            /*  Master current receive data count */
#define pREG_I2CF_I2CFADR1               ((volatile  uint16_t *) REG_I2CF_I2CFADR1)               /*  1st master address byte */
#define pREG_I2CF_I2CFADR2               ((volatile  uint16_t *) REG_I2CF_I2CFADR2)               /*  2nd master address byte */
#define pREG_I2CF_I2CFBYT                ((volatile  uint16_t *) REG_I2CF_I2CFBYT)                /*  Start byte */
#define pREG_I2CF_I2CFDIV                ((volatile  uint16_t *) REG_I2CF_I2CFDIV)                /*  Serial clock period divisor */
#define pREG_I2CF_I2CFSCON               ((volatile  uint16_t *) REG_I2CF_I2CFSCON)               /*  Slave control */
#define pREG_I2CF_I2CFSSTA               ((volatile  uint16_t *) REG_I2CF_I2CFSSTA)               /*  Slave I2C Status/Error/IRQ */
#define pREG_I2CF_I2CFSRX                ((volatile  uint16_t *) REG_I2CF_I2CFSRX)                /*  Slave receive */
#define pREG_I2CF_I2CFSTX                ((volatile  uint16_t *) REG_I2CF_I2CFSTX)                /*  Slave transmit */
#define pREG_I2CF_I2CFALT                ((volatile  uint16_t *) REG_I2CF_I2CFALT)                /*  Hardware general call ID */
#define pREG_I2CF_I2CFID0                ((volatile  uint16_t *) REG_I2CF_I2CFID0)                /*  1st slave address device ID */
#define pREG_I2CF_I2CFID1                ((volatile  uint16_t *) REG_I2CF_I2CFID1)                /*  2nd slave address device ID */
#define pREG_I2CF_I2CFID2                ((volatile  uint16_t *) REG_I2CF_I2CFID2)                /*  3rd slave address device ID */
#define pREG_I2CF_I2CFID3                ((volatile  uint16_t *) REG_I2CF_I2CFID3)                /*  4th slave address device ID */
#define pREG_I2CF_I2CFSTA                ((volatile  uint16_t *) REG_I2CF_I2CFSTA)                /*  Master and slave FIFO status */
#define pREG_I2CF_I2CFSHCON              ((volatile  uint16_t *) REG_I2CF_I2CFSHCON)              /*  Shared control */
#define pREG_I2CF_I2CFTCTL               ((volatile  uint16_t *) REG_I2CF_I2CFTCTL)               /*  Timing Control Register */
#define pREG_I2CF_I2CFASSCL              ((volatile  uint16_t *) REG_I2CF_I2CFASSCL)              /*  Automatic stretch SCL register */

/*  =================================================================================
 *       (SPIH)
 *  ================================================================================= */
#define pREG_SPIH_STAT                   ((volatile  uint16_t *) REG_SPIH_STAT)                   /*  Status */
#define pREG_SPIH_RX                     ((volatile  uint16_t *) REG_SPIH_RX)                     /*  Receive */
#define pREG_SPIH_TX                     ((volatile  uint16_t *) REG_SPIH_TX)                     /*  Transmit */
#define pREG_SPIH_DIV                    ((volatile  uint16_t *) REG_SPIH_DIV)                    /*  SPI baud rate selection */
#define pREG_SPIH_CTL                    ((volatile  uint16_t *) REG_SPIH_CTL)                    /*  SPI configuration 1 */
#define pREG_SPIH_IEN                    ((volatile  uint16_t *) REG_SPIH_IEN)                    /*  SPI configuration 2 */
#define pREG_SPIH_CNT                    ((volatile  uint16_t *) REG_SPIH_CNT)                    /*  Transfer byte count */
#define pREG_SPIH_DMA                    ((volatile  uint16_t *) REG_SPIH_DMA)                    /*  SPI DMA enable */
#define pREG_SPIH_FIFO_STAT              ((volatile  uint16_t *) REG_SPIH_FIFO_STAT)              /*  FIFO Status */
#define pREG_SPIH_RD_CTL                 ((volatile  uint16_t *) REG_SPIH_RD_CTL)                 /*  Read Control */
#define pREG_SPIH_FLOW_CTL               ((volatile  uint16_t *) REG_SPIH_FLOW_CTL)               /*  Flow Control */
#define pREG_SPIH_WAIT_TMR               ((volatile  uint16_t *) REG_SPIH_WAIT_TMR)               /*  Wait timer for flow control */
#define pREG_SPIH_CS_CTL                 ((volatile  uint16_t *) REG_SPIH_CS_CTL)                 /*  Chip-Select control for multi-slave connections */
#define pREG_SPIH_CS_OVERRIDE            ((volatile  uint16_t *) REG_SPIH_CS_OVERRIDE)            /*  Chip-Select Override */
#define pREG_SPIH_XFR_CNT                ((volatile  uint16_t *) REG_SPIH_XFR_CNT)                /*  Transferred Count */

/*  =================================================================================
 *       (SPI0)
 *  ================================================================================= */
#define pREG_SPI0_STAT                   ((volatile  uint16_t *) REG_SPI0_STAT)                   /*  Status */
#define pREG_SPI0_RX                     ((volatile  uint16_t *) REG_SPI0_RX)                     /*  Receive */
#define pREG_SPI0_TX                     ((volatile  uint16_t *) REG_SPI0_TX)                     /*  Transmit */
#define pREG_SPI0_DIV                    ((volatile  uint16_t *) REG_SPI0_DIV)                    /*  SPI baud rate selection */
#define pREG_SPI0_CTL                    ((volatile  uint16_t *) REG_SPI0_CTL)                    /*  SPI configuration 1 */
#define pREG_SPI0_IEN                    ((volatile  uint16_t *) REG_SPI0_IEN)                    /*  SPI configuration 2 */
#define pREG_SPI0_CNT                    ((volatile  uint16_t *) REG_SPI0_CNT)                    /*  Transfer byte count */
#define pREG_SPI0_DMA                    ((volatile  uint16_t *) REG_SPI0_DMA)                    /*  SPI DMA enable */
#define pREG_SPI0_FIFO_STAT              ((volatile  uint16_t *) REG_SPI0_FIFO_STAT)              /*  FIFO Status */
#define pREG_SPI0_RD_CTL                 ((volatile  uint16_t *) REG_SPI0_RD_CTL)                 /*  Read Control */
#define pREG_SPI0_FLOW_CTL               ((volatile  uint16_t *) REG_SPI0_FLOW_CTL)               /*  Flow Control */
#define pREG_SPI0_WAIT_TMR               ((volatile  uint16_t *) REG_SPI0_WAIT_TMR)               /*  Wait timer for flow control */
#define pREG_SPI0_CS_CTL                 ((volatile  uint16_t *) REG_SPI0_CS_CTL)                 /*  Chip-Select control for multi-slave connections */
#define pREG_SPI0_CS_OVERRIDE            ((volatile  uint16_t *) REG_SPI0_CS_OVERRIDE)            /*  Chip-Select Override */
#define pREG_SPI0_XFR_CNT                ((volatile  uint16_t *) REG_SPI0_XFR_CNT)                /*  Transferred Count */

/*  =================================================================================
 *       (SPI1)
 *  ================================================================================= */
#define pREG_SPI1_STAT                   ((volatile  uint16_t *) REG_SPI1_STAT)                   /*  Status */
#define pREG_SPI1_RX                     ((volatile  uint16_t *) REG_SPI1_RX)                     /*  Receive */
#define pREG_SPI1_TX                     ((volatile  uint16_t *) REG_SPI1_TX)                     /*  Transmit */
#define pREG_SPI1_DIV                    ((volatile  uint16_t *) REG_SPI1_DIV)                    /*  SPI baud rate selection */
#define pREG_SPI1_CTL                    ((volatile  uint16_t *) REG_SPI1_CTL)                    /*  SPI configuration 1 */
#define pREG_SPI1_IEN                    ((volatile  uint16_t *) REG_SPI1_IEN)                    /*  SPI configuration 2 */
#define pREG_SPI1_CNT                    ((volatile  uint16_t *) REG_SPI1_CNT)                    /*  Transfer byte count */
#define pREG_SPI1_DMA                    ((volatile  uint16_t *) REG_SPI1_DMA)                    /*  SPI DMA enable */
#define pREG_SPI1_FIFO_STAT              ((volatile  uint16_t *) REG_SPI1_FIFO_STAT)              /*  FIFO Status */
#define pREG_SPI1_RD_CTL                 ((volatile  uint16_t *) REG_SPI1_RD_CTL)                 /*  Read Control */
#define pREG_SPI1_FLOW_CTL               ((volatile  uint16_t *) REG_SPI1_FLOW_CTL)               /*  Flow Control */
#define pREG_SPI1_WAIT_TMR               ((volatile  uint16_t *) REG_SPI1_WAIT_TMR)               /*  Wait timer for flow control */
#define pREG_SPI1_CS_CTL                 ((volatile  uint16_t *) REG_SPI1_CS_CTL)                 /*  Chip-Select control for multi-slave connections */
#define pREG_SPI1_CS_OVERRIDE            ((volatile  uint16_t *) REG_SPI1_CS_OVERRIDE)            /*  Chip-Select Override */
#define pREG_SPI1_XFR_CNT                ((volatile  uint16_t *) REG_SPI1_XFR_CNT)                /*  Transferred Count */

/*  =================================================================================
 *      UART (uart)
 *  ================================================================================= */
#define pREG_UART_COMTX                  ((volatile  uint16_t *) REG_UART_COMTX)                  /*  Transmit Holding Register */
#define pREG_UART_COMRX                  ((volatile  uint16_t *) REG_UART_COMRX)                  /*  Receive Buffer Register */
#define pREG_UART_COMIEN                 ((volatile  uint16_t *) REG_UART_COMIEN)                 /*  Interrupt Enable */
#define pREG_UART_COMIIR                 ((volatile  uint16_t *) REG_UART_COMIIR)                 /*  Interrupt ID */
#define pREG_UART_COMLCR                 ((volatile  uint16_t *) REG_UART_COMLCR)                 /*  Line Control */
#define pREG_UART_COMMCR                 ((volatile  uint16_t *) REG_UART_COMMCR)                 /*  Modem Control */
#define pREG_UART_COMLSR                 ((volatile  uint16_t *) REG_UART_COMLSR)                 /*  Line Status */
#define pREG_UART_COMMSR                 ((volatile  uint16_t *) REG_UART_COMMSR)                 /*  Modem Status */
#define pREG_UART_COMSCR                 ((volatile  uint16_t *) REG_UART_COMSCR)                 /*  Scratch buffer */
#define pREG_UART_COMMCFG                ((volatile  uint16_t *) REG_UART_COMMCFG)                /*  sout modulation configuration */
#define pREG_UART_COMFBR                 ((volatile  uint16_t *) REG_UART_COMFBR)                 /*  Fractional Baud Rate */
#define pREG_UART_COMDIV                 ( (volatile  int16_t *) REG_UART_COMDIV)                 /*  Baudrate divider */
#define pREG_UART_COMCTL                 ((volatile  uint16_t *) REG_UART_COMCTL)                 /*  UART control register */

/*  =================================================================================
 *       (beeper)
 *  ================================================================================= */
#define pREG_BEEPER_CFG                  ((volatile  uint16_t *) REG_BEEPER_CFG)                  /*  Beeper configuration */
#define pREG_BEEPER_STAT                 ((volatile  uint16_t *) REG_BEEPER_STAT)                 /*  Beeper status */
#define pREG_BEEPER_TONE_A               ((volatile  uint16_t *) REG_BEEPER_TONE_A)               /*  Tone A Data */
#define pREG_BEEPER_TONE_B               ((volatile  uint16_t *) REG_BEEPER_TONE_B)               /*  Tone B Data */

/*  =================================================================================
 *       (RNG)
 *  ================================================================================= */
#define pREG_RNG_CTL                     ((volatile  uint16_t *) REG_RNG_CTL)                     /*  RNG Control Register */
#define pREG_RNG_LEN                     ((volatile  uint16_t *) REG_RNG_LEN)                     /*  RNG Sample Length Register */
#define pREG_RNG_STAT                    ((volatile  uint16_t *) REG_RNG_STAT)                    /*  RNG Status Register */
#define pREG_RNG_DATA                    ((volatile  uint32_t *) REG_RNG_DATA)                    /*  RNG Data Register */
#define pREG_RNG_OSCCNT                  ((volatile  uint32_t *) REG_RNG_OSCCNT)                  /*  Oscillator Count */
#define pREG_RNG_OSCDIFF0                ( (volatile   int8_t *) REG_RNG_OSCDIFF0)                /*  Oscillator Difference */
#define pREG_RNG_OSCDIFF1                ( (volatile   int8_t *) REG_RNG_OSCDIFF1)                /*  Oscillator Difference */
#define pREG_RNG_OSCDIFF2                ( (volatile   int8_t *) REG_RNG_OSCDIFF2)                /*  Oscillator Difference */
#define pREG_RNG_OSCDIFF3                ( (volatile   int8_t *) REG_RNG_OSCDIFF3)                /*  Oscillator Difference */

/*  =================================================================================
 *      DMA (dma)
 *  ================================================================================= */
#define pREG_DMA_DMASTA                  ((volatile  uint32_t *) REG_DMA_DMASTA)                  /*  DMA Status */
#define pREG_DMA_DMACFG                  ((volatile  uint32_t *) REG_DMA_DMACFG)                  /*  DMA Configuration */
#define pREG_DMA_DMAPDBPTR               ( (volatile  int32_t *) REG_DMA_DMAPDBPTR)               /*  DMA channel primary control data base pointer */
#define pREG_DMA_DMAADBPTR               ( (volatile  int32_t *) REG_DMA_DMAADBPTR)               /*  DMA channel alternate control data base pointer */
#define pREG_DMA_DMASWREQ                ((volatile  uint32_t *) REG_DMA_DMASWREQ)                /*  DMA channel software request */
#define pREG_DMA_DMARMSKSET              ((volatile  uint32_t *) REG_DMA_DMARMSKSET)              /*  DMA channel request mask set */
#define pREG_DMA_DMARMSKCLR              ((volatile  uint32_t *) REG_DMA_DMARMSKCLR)              /*  DMA channel request mask clear */
#define pREG_DMA_DMAENSET                ((volatile  uint32_t *) REG_DMA_DMAENSET)                /*  DMA channel enable set */
#define pREG_DMA_DMAENCLR                ((volatile  uint32_t *) REG_DMA_DMAENCLR)                /*  DMA channel enable clear */
#define pREG_DMA_DMAALTSET               ((volatile  uint32_t *) REG_DMA_DMAALTSET)               /*  DMA channel primary-alternate set */
#define pREG_DMA_DMAALTCLR               ((volatile  uint32_t *) REG_DMA_DMAALTCLR)               /*  DMA channel primary-alternate clear */
#define pREG_DMA_DMAPRISET               ((volatile  uint32_t *) REG_DMA_DMAPRISET)               /*  DMA channel priority set */
#define pREG_DMA_DMAPRICLR               ((volatile  uint32_t *) REG_DMA_DMAPRICLR)               /*  DMA channel priority clear */
#define pREG_DMA_DMAERRCHNLCLR           ((volatile  uint32_t *) REG_DMA_DMAERRCHNLCLR)           /*  DMA Per Channel Error Clear */
#define pREG_DMA_DMAERRCLR               ((volatile  uint32_t *) REG_DMA_DMAERRCLR)               /*  DMA bus error clear */
#define pREG_DMA_DMAINVALIDDESCCLR       ((volatile  uint32_t *) REG_DMA_DMAINVALIDDESCCLR)       /*  DMA Per Channel Invalid Descriptor Clear */
#define pREG_DMA_DMABSSET                ((volatile  uint32_t *) REG_DMA_DMABSSET)                /*  DMA channel bytes swap enable set */
#define pREG_DMA_DMABSCLR                ((volatile  uint32_t *) REG_DMA_DMABSCLR)                /*  DMA channel bytes swap enable clear */
#define pREG_DMA_DMASRCADSSET            ((volatile  uint32_t *) REG_DMA_DMASRCADSSET)            /*  DMA channel source address decrement enable set */
#define pREG_DMA_DMASRCADCLR             ((volatile  uint32_t *) REG_DMA_DMASRCADCLR)             /*  DMA channel source address decrement enable clear */
#define pREG_DMA_DMADSTADSET             ((volatile  uint32_t *) REG_DMA_DMADSTADSET)             /*  DMA channel destination address decrement enable set */
#define pREG_DMA_DMADSTADCLR             ((volatile  uint32_t *) REG_DMA_DMADSTADCLR)             /*  DMA channel destination address decrement enable clear */
#define pREG_DMA_DMAREVID                ((volatile  uint32_t *) REG_DMA_DMAREVID)                /*  DMA Controller Revision ID */

/*  =================================================================================
 *      Flash Controller (FLASH)
 *  ================================================================================= */
#define pREG_FLASH_STAT                  ((volatile  uint32_t *) REG_FLASH_STAT)                  /*  Status register */
#define pREG_FLASH_IEN                   ((volatile  uint32_t *) REG_FLASH_IEN)                   /*  Interrupt Enable register */
#define pREG_FLASH_CMD                   ((volatile  uint32_t *) REG_FLASH_CMD)                   /*  Command register */
#define pREG_FLASH_KH_ADDR               ((volatile  uint32_t *) REG_FLASH_KH_ADDR)               /*  Key-hole address */
#define pREG_FLASH_KH_DATA0              ( (volatile  int32_t *) REG_FLASH_KH_DATA0)              /*  Key-hole Data 0: lower word to be written on Key-hole write command */
#define pREG_FLASH_KH_DATA1              ( (volatile  int32_t *) REG_FLASH_KH_DATA1)              /*  Key-hole Data 1: upper word to be written on Key-hole write command */
#define pREG_FLASH_PAGE_ADDR0            ((volatile  uint32_t *) REG_FLASH_PAGE_ADDR0)            /*  Lower page address */
#define pREG_FLASH_PAGE_ADDR1            ((volatile  uint32_t *) REG_FLASH_PAGE_ADDR1)            /*  Upper page address */
#define pREG_FLASH_KEY                   ( (volatile  int32_t *) REG_FLASH_KEY)                   /*  Flash Key register. */
#define pREG_FLASH_WR_ABORT_ADDR         ( (volatile  int32_t *) REG_FLASH_WR_ABORT_ADDR)         /*  Write abort address register */
#define pREG_FLASH_WRPROT                ( (volatile  int32_t *) REG_FLASH_WRPROT)                /*  Write protection register for flash */
#define pREG_FLASH_SIGNATURE             ( (volatile  int32_t *) REG_FLASH_SIGNATURE)             /*  Signature register */
#define pREG_FLASH_UCFG                  ((volatile  uint32_t *) REG_FLASH_UCFG)                  /*  User configuration register */
#define pREG_FLASH_TIME_PARAM0           ((volatile  uint32_t *) REG_FLASH_TIME_PARAM0)           /*  Time parameter register 0 */
#define pREG_FLASH_TIME_PARAM1           ((volatile  uint32_t *) REG_FLASH_TIME_PARAM1)           /*  Time parameter register 1 */
#define pREG_FLASH_ABORT_EN_LO           ( (volatile  int32_t *) REG_FLASH_ABORT_EN_LO)           /*  Lower bits of the sys irq abort enable register. */
#define pREG_FLASH_ABORT_EN_HI           ( (volatile  int32_t *) REG_FLASH_ABORT_EN_HI)           /*  Upper bits of the sys irq abort enable register. */
#define pREG_FLASH_ECC_CFG               ((volatile  uint32_t *) REG_FLASH_ECC_CFG)               /*  ECC enable/disable and error responses */
#define pREG_FLASH_ECC_ADDR              ((volatile  uint32_t *) REG_FLASH_ECC_ADDR)              /*  Address of recent ECC error/correction which generated an IRQ */
#define pREG_FLASH_ADI_POR_CFG           ((volatile  uint32_t *) REG_FLASH_ADI_POR_CFG)           /*  ADI flash configuration register */
#define pREG_FLASH_ADI_POR_SEC           ((volatile  uint32_t *) REG_FLASH_ADI_POR_SEC)           /*  ADI flash security register */
#define pREG_FLASH_ADI_VOL_CFG           ((volatile  uint32_t *) REG_FLASH_ADI_VOL_CFG)           /*  ADI flash configuration register */

/*  =================================================================================
 *      Cache Controller (FLASH_CACHE)
 *  ================================================================================= */
#define pREG_FLASH_CACHE_CACHESTAT       ((volatile  uint32_t *) REG_FLASH_CACHE_CACHESTAT)       /*  Cache Status register */
#define pREG_FLASH_CACHE_CACHESETUP      ((volatile  uint32_t *) REG_FLASH_CACHE_CACHESETUP)      /*  Cache Setup register */
#define pREG_FLASH_CACHE_CACHEKEY        ( (volatile  int32_t *) REG_FLASH_CACHE_CACHEKEY)        /*  Cache Key register */
#define pREG_FLASH_CACHE_CACHETMSETUP    ((volatile  uint32_t *) REG_FLASH_CACHE_CACHETMSETUP)    /*  Cache Test Setup Register */
#define pREG_FLASH_CACHE_CACHETMSETADDR  ((volatile  uint32_t *) REG_FLASH_CACHE_CACHETMSETADDR)  /*  Cache Set Address */
#define pREG_FLASH_CACHE_CACHETMTAG      ((volatile  uint32_t *) REG_FLASH_CACHE_CACHETMTAG)      /*  LRU, Valid bits and Tags for Way 0 and 1 */
#define pREG_FLASH_CACHE_CACHETMD0LOW    ( (volatile  int32_t *) REG_FLASH_CACHE_CACHETMD0LOW)    /*  LSW of Data for Way 0 */
#define pREG_FLASH_CACHE_CACHETMD0HIGH   ( (volatile  int32_t *) REG_FLASH_CACHE_CACHETMD0HIGH)   /*  MSW of Data for Way 0 */
#define pREG_FLASH_CACHE_CACHETMD1LOW    ( (volatile  int32_t *) REG_FLASH_CACHE_CACHETMD1LOW)    /*  LSW of Data for Way 1 */
#define pREG_FLASH_CACHE_CACHETMD1HIGH   ( (volatile  int32_t *) REG_FLASH_CACHE_CACHETMD1HIGH)   /*  MSW of Data for Way 1 */
#define pREG_FLASH_CACHE_CACHEMISSCNTR   ((volatile  uint32_t *) REG_FLASH_CACHE_CACHEMISSCNTR)   /*  Cache Miss Counter */
#define pREG_FLASH_CACHE_ICACHELASTADDR  ((volatile  uint32_t *) REG_FLASH_CACHE_ICACHELASTADDR)  /*  Instruction Cache Last Address */
#define pREG_FLASH_CACHE_DCACHELASTADDR  ((volatile  uint32_t *) REG_FLASH_CACHE_DCACHELASTADDR)  /*  Data Cache Last Address */

/*  =================================================================================
 *      DFT Controller (FLASH_DFT)
 *  ================================================================================= */
#define pREG_FLASH_DFT_DFT_STAT          ((volatile  uint32_t *) REG_FLASH_DFT_DFT_STAT)          /*  Status register */
#define pREG_FLASH_DFT_DFT_CTRL          ((volatile  uint32_t *) REG_FLASH_DFT_DFT_CTRL)          /*  Control register */
#define pREG_FLASH_DFT_DFT_CMD           ((volatile  uint32_t *) REG_FLASH_DFT_DFT_CMD)           /*  Command register */
#define pREG_FLASH_DFT_DFT_PIN_REG       ((volatile  uint32_t *) REG_FLASH_DFT_DFT_PIN_REG)       /*  Used to control IFREN, MAS1, and SLM signals during command execution */
#define pREG_FLASH_DFT_DFT_XADR_REG      ((volatile  uint32_t *) REG_FLASH_DFT_DFT_XADR_REG)      /*  Used to setup initial XADR value to be used at the start of a command (note: some commands modify the internal XADR value during execution) */
#define pREG_FLASH_DFT_DFT_YADR_REG      ((volatile  uint32_t *) REG_FLASH_DFT_DFT_YADR_REG)      /*  Used to setup initial YADR value to be used at the start of a command (note: some commands modify the internal YADR value during execution) */
#define pREG_FLASH_DFT_DFT_DATA_L_REG    ((volatile  uint32_t *) REG_FLASH_DFT_DFT_DATA_L_REG)    /*  Used to setup initial lower 32 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) */
#define pREG_FLASH_DFT_DFT_DATA_H_REG    ((volatile  uint32_t *) REG_FLASH_DFT_DFT_DATA_H_REG)    /*  Used to setup initial upper 4 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) */
#define pREG_FLASH_DFT_DFT_CTRL_REG      ((volatile  uint32_t *) REG_FLASH_DFT_DFT_CTRL_REG)      /*  Used to select different data and address patterns for program/read operations */
#define pREG_FLASH_DFT_DFT_GRP_REG       ((volatile  uint32_t *) REG_FLASH_DFT_DFT_GRP_REG)       /*  Used to define which groups of data bits will be selected for program/read operations */
#define pREG_FLASH_DFT_DFT_IP_REG        ((volatile  uint32_t *) REG_FLASH_DFT_DFT_IP_REG)        /*  Used to control the IP select signal */
#define pREG_FLASH_DFT_DFT_BIT_REG       ((volatile  uint32_t *) REG_FLASH_DFT_DFT_BIT_REG)       /*  Debug feature; used to enable bit operation and select just one bit for read comparison during failure-bit map collection */
#define pREG_FLASH_DFT_DFT_PEND          ((volatile  uint32_t *) REG_FLASH_DFT_DFT_PEND)          /*  DFT Writes Pending */
#define pREG_FLASH_DFT_DFT_PROBE         ((volatile  uint32_t *) REG_FLASH_DFT_DFT_PROBE)         /*  Used in DFT Probe Mode only */

/*  =================================================================================
 *      Flash Controller (FLASH_TEST)
 *  ================================================================================= */
#define pREG_FLASH_TEST_TST_CFG          ((volatile  uint32_t *) REG_FLASH_TEST_TST_CFG)          /*  Testmode Configuration Register */
#define pREG_FLASH_TEST_TST_CMD_KEY      ( (volatile  int32_t *) REG_FLASH_TEST_TST_CMD_KEY)      /*  Write the proper Test Key value here to enable test mode reads and writes */
#define pREG_FLASH_TEST_TM_DATA0         ( (volatile  int32_t *) REG_FLASH_TEST_TM_DATA0)         /*  Lower 32 bits testmode flash data - [31:0] */
#define pREG_FLASH_TEST_TM_DATA1         ( (volatile  int32_t *) REG_FLASH_TEST_TM_DATA1)         /*  Middle 32 bits testmode flash data - [63:32] */
#define pREG_FLASH_TEST_TM_DATA2         ((volatile  uint32_t *) REG_FLASH_TEST_TM_DATA2)         /*  Upper 8 bits testmode flash data - [71:64] */
#define pREG_FLASH_TEST_KH_DATA2         ((volatile  uint32_t *) REG_FLASH_TEST_KH_DATA2)         /*  Flash data register - key-hole interface (top 8 bit ECC - [71:64]) */
#define pREG_FLASH_TEST_FLSH_TC          ((volatile  uint32_t *) REG_FLASH_TEST_FLSH_TC)          /*  Direct output from flash IP Test Code (TC) bus */

/*  =================================================================================
 *       (gpio)
 *  ================================================================================= */
#define pREG_GPIO_GP0CON                 ((volatile  uint32_t *) REG_GPIO_GP0CON)                 /*  GPIO Port 0  Configuration */
#define pREG_GPIO_GP0OEN                 ( (volatile  int16_t *) REG_GPIO_GP0OEN)                 /*  GPIO Port 0 output enable */
#define pREG_GPIO_GP0PE                  ( (volatile  int16_t *) REG_GPIO_GP0PE)                  /*  GPIO Port 0 output pullup/pulldown enable */
#define pREG_GPIO_GP0IEN                 ( (volatile  int16_t *) REG_GPIO_GP0IEN)                 /*  GPIO  Port 0 Input Path Enable */
#define pREG_GPIO_GP0IN                  ( (volatile  int16_t *) REG_GPIO_GP0IN)                  /*  GPIO  Port 0 registered data input */
#define pREG_GPIO_GP0OUT                 ( (volatile  int16_t *) REG_GPIO_GP0OUT)                 /*  GPIO Port 0 data output */
#define pREG_GPIO_GP0SET                 ( (volatile  int16_t *) REG_GPIO_GP0SET)                 /*  GPIO Port 0 data out set */
#define pREG_GPIO_GP0CLR                 ( (volatile  int16_t *) REG_GPIO_GP0CLR)                 /*  GPIO Port 0 data out clear */
#define pREG_GPIO_GP0TGL                 ( (volatile  int16_t *) REG_GPIO_GP0TGL)                 /*  GPIO Port 0  pin toggle */
#define pREG_GPIO_GP0POL                 ( (volatile  int16_t *) REG_GPIO_GP0POL)                 /*  GPIO Port 0 interrupt polarity */
#define pREG_GPIO_GP0IENA                ( (volatile  int16_t *) REG_GPIO_GP0IENA)                /*  GPIO Port 0  interrupt A enable */
#define pREG_GPIO_GP0IENB                ( (volatile  int16_t *) REG_GPIO_GP0IENB)                /*  GPIO Port 0 interrupt B enable */
#define pREG_GPIO_GP0INT                 ( (volatile  int16_t *) REG_GPIO_GP0INT)                 /*  GPIO Port 0 interrupt Status */
#define pREG_GPIO_GP0DS                  ( (volatile  int16_t *) REG_GPIO_GP0DS)                  /*  GPIO Port 0  drive strength select */
#define pREG_GPIO_GP1CON                 ((volatile  uint32_t *) REG_GPIO_GP1CON)                 /*  GPIO Port 1 configuration */
#define pREG_GPIO_GP1OEN                 ( (volatile  int16_t *) REG_GPIO_GP1OEN)                 /*  GPIO Port 1 output enable */
#define pREG_GPIO_GP1PE                  ( (volatile  int16_t *) REG_GPIO_GP1PE)                  /*  GPIO Port 1 output pullup/pulldown enable */
#define pREG_GPIO_GP1IEN                 ( (volatile  int16_t *) REG_GPIO_GP1IEN)                 /*  GPIO Port 1 Input Path Enable */
#define pREG_GPIO_GP1IN                  ( (volatile  int16_t *) REG_GPIO_GP1IN)                  /*  GPIO Port 1  registered data input */
#define pREG_GPIO_GP1OUT                 ( (volatile  int16_t *) REG_GPIO_GP1OUT)                 /*  GPIO Port 1 data output */
#define pREG_GPIO_GP1SET                 ( (volatile  int16_t *) REG_GPIO_GP1SET)                 /*  GPIO Port 1 data out set */
#define pREG_GPIO_GP1CLR                 ( (volatile  int16_t *) REG_GPIO_GP1CLR)                 /*  GPIO Port 1 data out clear */
#define pREG_GPIO_GP1TGL                 ( (volatile  int16_t *) REG_GPIO_GP1TGL)                 /*  GPIO Port 1 pin toggle */
#define pREG_GPIO_GP1POL                 ( (volatile  int16_t *) REG_GPIO_GP1POL)                 /*  GPIO Port 1 interrupt polarity */
#define pREG_GPIO_GP1IENA                ( (volatile  int16_t *) REG_GPIO_GP1IENA)                /*  GPIO Port 1 interrupt A enable */
#define pREG_GPIO_GP1IENB                ( (volatile  int16_t *) REG_GPIO_GP1IENB)                /*  GPIO Port 1interrupt B enable */
#define pREG_GPIO_GP1INT                 ( (volatile  int16_t *) REG_GPIO_GP1INT)                 /*  GPIO Port 1 interrupt Status */
#define pREG_GPIO_GP1DS                  ( (volatile  int16_t *) REG_GPIO_GP1DS)                  /*  GPIO Port 1  drive strength select */
#define pREG_GPIO_GP2CON                 ((volatile  uint32_t *) REG_GPIO_GP2CON)                 /*  GPIO Port 2 configuration */
#define pREG_GPIO_GP2OEN                 ((volatile  uint16_t *) REG_GPIO_GP2OEN)                 /*  GPIO Port 2 output enable */
#define pREG_GPIO_GP2PE                  ((volatile  uint16_t *) REG_GPIO_GP2PE)                  /*  GPIO Port 2  output pullup/pulldown enable */
#define pREG_GPIO_GP2IEN                 ((volatile  uint16_t *) REG_GPIO_GP2IEN)                 /*  GPIO Port 2 Input Path Enable */
#define pREG_GPIO_GP2IN                  ((volatile  uint16_t *) REG_GPIO_GP2IN)                  /*  GPIO Port 2 registered data input */
#define pREG_GPIO_GP2OUT                 ((volatile  uint16_t *) REG_GPIO_GP2OUT)                 /*  GPIO Port 2  data output */
#define pREG_GPIO_GP2SET                 ((volatile  uint16_t *) REG_GPIO_GP2SET)                 /*  GPIO Port 2 data out set */
#define pREG_GPIO_GP2CLR                 ((volatile  uint16_t *) REG_GPIO_GP2CLR)                 /*  GPIO Port 2 data out clear */
#define pREG_GPIO_GP2TGL                 ((volatile  uint16_t *) REG_GPIO_GP2TGL)                 /*  GPIO Port 2 pin toggle */
#define pREG_GPIO_GP2POL                 ((volatile  uint16_t *) REG_GPIO_GP2POL)                 /*  GPIO Port 2 interrupt polarity */
#define pREG_GPIO_GP2IENA                ((volatile  uint16_t *) REG_GPIO_GP2IENA)                /*  GPIO Port 2 interrupt A enable */
#define pREG_GPIO_GP2IENB                ((volatile  uint16_t *) REG_GPIO_GP2IENB)                /*  GPIO Port 2 interrupt B enable */
#define pREG_GPIO_GP2INT                 ((volatile  uint16_t *) REG_GPIO_GP2INT)                 /*  GPIO Port 2  interrupt Status */
#define pREG_GPIO_GP2DS                  ((volatile  uint16_t *) REG_GPIO_GP2DS)                  /*  GPIO Port 2  drive strength select */

/*  =================================================================================
 *      crypto (crypto)
 *  ================================================================================= */
#define pREG_CRYPTO_CFG                  ((volatile  uint32_t *) REG_CRYPTO_CFG)                  /*  Configuration Register */
#define pREG_CRYPTO_DATALEN              ((volatile  uint32_t *) REG_CRYPTO_DATALEN)              /*  Payload Data Length */
#define pREG_CRYPTO_PREFIXLEN            ((volatile  uint32_t *) REG_CRYPTO_PREFIXLEN)            /*  Authentication Data Length */
#define pREG_CRYPTO_INTEN                ((volatile  uint32_t *) REG_CRYPTO_INTEN)                /*  Interrupt Enable Register */
#define pREG_CRYPTO_STAT                 ((volatile  uint32_t *) REG_CRYPTO_STAT)                 /*  Status Register */
#define pREG_CRYPTO_INBUF                ( (volatile  int32_t *) REG_CRYPTO_INBUF)                /*  Input Buffer */
#define pREG_CRYPTO_OUTBUF               ( (volatile  int32_t *) REG_CRYPTO_OUTBUF)               /*  Output Buffer */
#define pREG_CRYPTO_NONCE0               ((volatile  uint32_t *) REG_CRYPTO_NONCE0)               /*  Nonce Bits [31:0] */
#define pREG_CRYPTO_NONCE1               ((volatile  uint32_t *) REG_CRYPTO_NONCE1)               /*  Nonce Bits [63:32] */
#define pREG_CRYPTO_NONCE2               ((volatile  uint32_t *) REG_CRYPTO_NONCE2)               /*  Nonce Bits [95:64] */
#define pREG_CRYPTO_NONCE3               ((volatile  uint32_t *) REG_CRYPTO_NONCE3)               /*  Nonce Bits [127:96] */
#define pREG_CRYPTO_AESKEY0              ((volatile  uint32_t *) REG_CRYPTO_AESKEY0)              /*  Key Bits[ 31:0 ] */
#define pREG_CRYPTO_AESKEY1              ((volatile  uint32_t *) REG_CRYPTO_AESKEY1)              /*  Key Bits [ 63:32 ] */
#define pREG_CRYPTO_AESKEY2              ((volatile  uint32_t *) REG_CRYPTO_AESKEY2)              /*  Key Bits [ 95:64 ] */
#define pREG_CRYPTO_AESKEY3              ((volatile  uint32_t *) REG_CRYPTO_AESKEY3)              /*  Key Bits [ 127:96 ] */
#define pREG_CRYPTO_AESKEY4              ((volatile  uint32_t *) REG_CRYPTO_AESKEY4)              /*  Key Bits [ 159:128 ] */
#define pREG_CRYPTO_AESKEY5              ((volatile  uint32_t *) REG_CRYPTO_AESKEY5)              /*  Key Bits [ 191:160 ] */
#define pREG_CRYPTO_AESKEY6              ((volatile  uint32_t *) REG_CRYPTO_AESKEY6)              /*  Key Bits [ 223:192 ] */
#define pREG_CRYPTO_AESKEY7              ((volatile  uint32_t *) REG_CRYPTO_AESKEY7)              /*  Key Bits [ 255:224 ] */
#define pREG_CRYPTO_CNTRINIT             ((volatile  uint32_t *) REG_CRYPTO_CNTRINIT)             /*  Counter Initialization Vector */
#define pREG_CRYPTO_SHAH0                ((volatile  uint32_t *) REG_CRYPTO_SHAH0)                /*  SHA Bits [ 31:0 ] */
#define pREG_CRYPTO_SHAH1                ((volatile  uint32_t *) REG_CRYPTO_SHAH1)                /*  SHA Bits [ 63:32 ] */
#define pREG_CRYPTO_SHAH2                ((volatile  uint32_t *) REG_CRYPTO_SHAH2)                /*  SHA Bits [ 95:64 ] */
#define pREG_CRYPTO_SHAH3                ((volatile  uint32_t *) REG_CRYPTO_SHAH3)                /*  SHA Bits [ 127:96 ] */
#define pREG_CRYPTO_SHAH4                ((volatile  uint32_t *) REG_CRYPTO_SHAH4)                /*  SHA Bits [ 159:128 ] */
#define pREG_CRYPTO_SHAH5                ((volatile  uint32_t *) REG_CRYPTO_SHAH5)                /*  SHA Bits [ 191:160 ] */
#define pREG_CRYPTO_SHAH6                ((volatile  uint32_t *) REG_CRYPTO_SHAH6)                /*  SHA Bits [ 223:192] */
#define pREG_CRYPTO_SHAH7                ((volatile  uint32_t *) REG_CRYPTO_SHAH7)                /*  SHA Bits [ 255:224 ] */

/*  =================================================================================
 *       (sport)
 *  ================================================================================= */
#define pREG_SPORT_CTL_A                 ((volatile  uint32_t *) REG_SPORT_CTL_A)                 /*  Half SPORT 'A' Control Register */
#define pREG_SPORT_DIV_A                 ((volatile  uint32_t *) REG_SPORT_DIV_A)                 /*  Half SPORT 'A' Divisor Register */
#define pREG_SPORT_INT_EN_A              ((volatile  uint32_t *) REG_SPORT_INT_EN_A)              /*  Half SPORT A's Interrupt Enable register */
#define pREG_SPORT_STAT_A                ((volatile  uint32_t *) REG_SPORT_STAT_A)                /*  Half SPORT A's Status register */
#define pREG_SPORT_NUM_TRAN_A            ((volatile  uint32_t *) REG_SPORT_NUM_TRAN_A)            /*  Half SPORT A Number of transfers register */
#define pREG_SPORT_TIM_CONVT_A           ((volatile  uint32_t *) REG_SPORT_TIM_CONVT_A)           /*  Half SPORT A's register to be programmed with the desired CONVT pulse width */
#define pREG_SPORT_TX_A                  ((volatile  uint32_t *) REG_SPORT_TX_A)                  /*  Half SPORT 'A' Tx Buffer Register */
#define pREG_SPORT_RX_A                  ((volatile  uint32_t *) REG_SPORT_RX_A)                  /*  Half SPORT 'A' Rx Buffer Register */
#define pREG_SPORT_NUMTRAN_CNT_A         ((volatile  uint32_t *) REG_SPORT_NUMTRAN_CNT_A)         /*  Half SPORT A Number of transfers counter */
#define pREG_SPORT_CTL_B                 ((volatile  uint32_t *) REG_SPORT_CTL_B)                 /*  Half SPORT 'B' Control Register */
#define pREG_SPORT_DIV_B                 ((volatile  uint32_t *) REG_SPORT_DIV_B)                 /*  Half SPORT 'B' Divisor Register */
#define pREG_SPORT_INT_EN_B              ((volatile  uint32_t *) REG_SPORT_INT_EN_B)              /*  Half SPORT A's Interrupt Enable register */
#define pREG_SPORT_STAT_B                ((volatile  uint32_t *) REG_SPORT_STAT_B)                /*  Half SPORT B's Status register */
#define pREG_SPORT_NUM_TRAN_B            ((volatile  uint32_t *) REG_SPORT_NUM_TRAN_B)            /*  Half SPORT B Number of transfers register */
#define pREG_SPORT_TIM_CONVT_B           ((volatile  uint32_t *) REG_SPORT_TIM_CONVT_B)           /*  Half SPORT B's register to be programmed with the desired CONVT pulse width */
#define pREG_SPORT_TX_B                  ((volatile  uint32_t *) REG_SPORT_TX_B)                  /*  Half SPORT 'B' Tx Buffer Register */
#define pREG_SPORT_RX_B                  ((volatile  uint32_t *) REG_SPORT_RX_B)                  /*  Half SPORT 'B' Rx Buffer Register */
#define pREG_SPORT_NUMTRAN_CNT_B         ((volatile  uint32_t *) REG_SPORT_NUMTRAN_CNT_B)         /*  Half SPORT B Number of transfers counter */

/*  =================================================================================
 *      CRC (crc)
 *  ================================================================================= */
#define pREG_CRC_CRC_CTL                 ((volatile  uint32_t *) REG_CRC_CRC_CTL)                 /*  CRC Control Register */
#define pREG_CRC_CRC_IPDATA              ( (volatile  int32_t *) REG_CRC_CRC_IPDATA)              /*  Input Data Register */
#define pREG_CRC_CRC_RESULT              ( (volatile  int32_t *) REG_CRC_CRC_RESULT)              /*  CRC Result Register */
#define pREG_CRC_CRC_POLY                ((volatile  uint32_t *) REG_CRC_CRC_POLY)                /*  Programmable CRC Polynomial */

/*  =================================================================================
 *      Power Management  (PMG)
 *  ================================================================================= */
#define pREG_PMG_INTR_CNTRL0             ((volatile  uint32_t *) REG_PMG_INTR_CNTRL0)             /*  Power Supply Monitor Interrupt Enable */
#define pREG_PMG_PSM_STATUS              ((volatile  uint32_t *) REG_PMG_PSM_STATUS)              /*  Power supply monitor status */
#define pREG_PMG_PWRMOD                  ((volatile  uint32_t *) REG_PMG_PWRMOD)                  /*  Power Mode Register */
#define pREG_PMG_PWRKEY                  ((volatile  uint32_t *) REG_PMG_PWRKEY)                  /*  Key protection for PWRMOD */
#define pREG_PMG_SHUTDOWN_STATUS         ((volatile  uint32_t *) REG_PMG_SHUTDOWN_STATUS)         /*  SHUTDOWN Status Register */
#define pREG_PMG_SRAMRET                 ((volatile  uint32_t *) REG_PMG_SRAMRET)                 /*  Control for Retention SRAM during HIBERNATE Mode */
#define pREG_PMG_SW_TST_LV0              ((volatile  uint32_t *) REG_PMG_SW_TST_LV0)              /*  LV Switch config */
#define pREG_PMG_SW_TST_LV1              ((volatile  uint32_t *) REG_PMG_SW_TST_LV1)              /*  LV Switch config2 (test) */
#define pREG_PMG_SW_TST_HV               ((volatile  uint32_t *) REG_PMG_SW_TST_HV)               /*  HV Switch config */
#define pREG_PMG_TESTPROT                ( (volatile  int32_t *) REG_PMG_TESTPROT)                /*  Test register lock */
#define pREG_PMG_LP_TST_REF0             ((volatile  uint32_t *) REG_PMG_LP_TST_REF0)             /*  Low Power Reference Test Register 0 */
#define pREG_PMG_PMG_TRIM                ((volatile  uint32_t *) REG_PMG_PMG_TRIM)                /*  Trimming bits for the power management */
#define pREG_PMG_RSTSTA                  ((volatile  uint32_t *) REG_PMG_RSTSTA)                  /*  Reset status */
#define pREG_PMG_CNTRL1                  ((volatile  uint32_t *) REG_PMG_CNTRL1)                  /*  HPBUCK control */
#define pREG_PMG_WK_TST                  ((volatile  uint32_t *) REG_PMG_WK_TST)                  /*  test mode for wake up options */
#define pREG_PMG_ANA_TST1                ((volatile  uint32_t *) REG_PMG_ANA_TST1)                /*  Analog test */
#define pREG_PMG_ANA_TST2                ((volatile  uint32_t *) REG_PMG_ANA_TST2)                /*  Analog Test control for digital signals */
#define pREG_PMG_DIG_TST1                ((volatile  uint32_t *) REG_PMG_DIG_TST1)                /*  Digital Test Control */
#define pREG_PMG_HP_LDO_TST              ((volatile  uint32_t *) REG_PMG_HP_LDO_TST)              /*  High Power LDO Test Register */

/*  =================================================================================
 *      External interrupt configuration (EXTINT)
 *  ================================================================================= */
#define pREG_EXTINT_EI0CFG               ((volatile  uint32_t *) REG_EXTINT_EI0CFG)               /*  External Interrupt configuration 0 */
#define pREG_EXTINT_NMICFG               ((volatile  uint32_t *) REG_EXTINT_NMICFG)               /*  NMI Interrupt configuration */
#define pREG_EXTINT_EICLR                ((volatile  uint32_t *) REG_EXTINT_EICLR)                /*  External Interrupt clear */
#define pREG_EXTINT_NMICLR               ((volatile  uint32_t *) REG_EXTINT_NMICLR)               /*  Non-maskable interrupt clear */

/*  =================================================================================
 *      Clocking  (CLK)
 *  ================================================================================= */
#define pREG_CLK_OSCKEY                  ((volatile  uint32_t *) REG_CLK_OSCKEY)                  /*  Key protection for OSCCTRL */
#define pREG_CLK_OSCCTRL                 ((volatile  uint32_t *) REG_CLK_OSCCTRL)                 /*  Oscillator control */
#define pREG_CLK_TOSCCTRL0               ((volatile  uint32_t *) REG_CLK_TOSCCTRL0)               /*  Oscillator control for test */

/*  =================================================================================
 *      Power Management  (PMGT)
 *  ================================================================================= */
#define pREG_PMGT_VREG_TST               ((volatile  uint32_t *) REG_PMGT_VREG_TST)               /*  Test Register for Regulated Supply */
#define pREG_PMGT_LP_TST_REF1            ((volatile  uint32_t *) REG_PMGT_LP_TST_REF1)            /*  Low Power Reference Test 1 */
#define pREG_PMGT_LP_TST_BLOCK0          ((volatile  uint32_t *) REG_PMGT_LP_TST_BLOCK0)          /*  Bits to control the LP Test Block */
#define pREG_PMGT_LP_TST_BLOCK1          ((volatile  uint32_t *) REG_PMGT_LP_TST_BLOCK1)          /*  Bits to control the LP Test Block */
#define pREG_PMGT_SRAMCNTRL              ((volatile  uint32_t *) REG_PMGT_SRAMCNTRL)              /*  Control for SRAM parity and instruction SRAM */
#define pREG_PMGT_SRAM_INIT_STATUS       ((volatile  uint32_t *) REG_PMGT_SRAM_INIT_STATUS)       /*  Initialization Status Register */
#define pREG_PMGT_CLEAR_LATCH_GPIOS      ((volatile  uint16_t *) REG_PMGT_CLEAR_LATCH_GPIOS)      /*  when 0x58FA is written, then the GPIO releases the latched values after shutdown mode */
#define pREG_PMGT_SCRATCHPAD_IMAGE       ((volatile  uint32_t *) REG_PMGT_SCRATCHPAD_IMAGE)       /*  The values written in this register will be saved in 3V when going to shutdown mode */
#define pREG_PMGT_SCRATCHPAD_3V_READ     ((volatile  uint32_t *) REG_PMGT_SCRATCHPAD_3V_READ)     /*  Read-Only register. The user can read the 3V value stored during shutdown mode */

/*  =================================================================================
 *      Clocking  (CLKGT)
 *  ================================================================================= */
#define pREG_CLKGT_CLKCON0               ((volatile  uint32_t *) REG_CLKGT_CLKCON0)               /*  Misc clock settings */
#define pREG_CLKGT_CLKCON1               ((volatile  uint32_t *) REG_CLKGT_CLKCON1)               /*  Clock dividers */
#define pREG_CLKGT_CLKCON3               ((volatile  uint32_t *) REG_CLKGT_CLKCON3)               /*  System PLL */
#define pREG_CLKGT_CLKCON5               ((volatile  uint32_t *) REG_CLKGT_CLKCON5)               /*  User clock gating control */
#define pREG_CLKGT_CLKSTAT0              ((volatile  uint32_t *) REG_CLKGT_CLKSTAT0)              /*  Clocking status */
#define pREG_CLKGT_TCLKTEST              ((volatile  uint32_t *) REG_CLKGT_TCLKTEST)              /*  Clock test control */
#define pREG_CLKGT_TOSCCTRL1             ((volatile  uint32_t *) REG_CLKGT_TOSCCTRL1)             /*  Oscillator test/trim register */
#define pREG_CLKGT_TOSCCNFG0             ((volatile  uint32_t *) REG_CLKGT_TOSCCNFG0)             /*  Oscillator config register (Test) */
#define pREG_CLKGT_TPLLCNFG0             ((volatile  uint32_t *) REG_CLKGT_TPLLCNFG0)             /*  PLL config register (Test) */
#define pREG_CLKGT_THFRING               ((volatile  uint32_t *) REG_CLKGT_THFRING)               /*  high frequency ring oscillator2 test register */

/*  =================================================================================
 *      Parallel Test Interface (PTI)
 *  ================================================================================= */
#define pREG_PTI_RST_ISR_STARTADDR       ( (volatile  int32_t *) REG_PTI_RST_ISR_STARTADDR)       /*  Reset ISR Start Address */
#define pREG_PTI_RST_STACK_POINTER       ( (volatile  int32_t *) REG_PTI_RST_STACK_POINTER)       /*  Reset Stack Pointer */
#define pREG_PTI_PTI_CONTROL             ((volatile  uint32_t *) REG_PTI_PTI_CONTROL)             /*  Parallel Test Interface Control Register */

/*  =================================================================================
 *      Cortex-M3 Interrupt Controller (cortex)
 *  ================================================================================= */
#define pREG_CORTEX_INTNUM               ((volatile  uint32_t *) REG_CORTEX_INTNUM)               /*  Interrupt Control Type */
#define pREG_CORTEX_STKSTA               ((volatile  uint32_t *) REG_CORTEX_STKSTA)               /*  Systick Control and Status */
#define pREG_CORTEX_STKLD                ((volatile  uint32_t *) REG_CORTEX_STKLD)                /*  Systick Reload Value */
#define pREG_CORTEX_STKVAL               ((volatile  uint32_t *) REG_CORTEX_STKVAL)               /*  Systick Current Value */
#define pREG_CORTEX_STKCAL               ((volatile  uint32_t *) REG_CORTEX_STKCAL)               /*  Systick Calibration Value */
#define pREG_CORTEX_INTSETE0             ((volatile  uint32_t *) REG_CORTEX_INTSETE0)             /*  IRQ0..31 Set_Enable */
#define pREG_CORTEX_INTSETE1             ((volatile  uint32_t *) REG_CORTEX_INTSETE1)             /*  IRQ32..63 Set_Enable */
#define pREG_CORTEX_INTCLRE0             ((volatile  uint32_t *) REG_CORTEX_INTCLRE0)             /*  IRQ0..31 Clear_Enable */
#define pREG_CORTEX_INTCLRE1             ((volatile  uint32_t *) REG_CORTEX_INTCLRE1)             /*  IRQ32..63 Clear_Enable */
#define pREG_CORTEX_INTSETP0             ((volatile  uint32_t *) REG_CORTEX_INTSETP0)             /*  IRQ0..31 Set_Pending */
#define pREG_CORTEX_INTSETP1             ((volatile  uint32_t *) REG_CORTEX_INTSETP1)             /*  IRQ32..63 Set_Pending */
#define pREG_CORTEX_INTCLRP0             ((volatile  uint32_t *) REG_CORTEX_INTCLRP0)             /*  IRQ0..31 Clear_Pending */
#define pREG_CORTEX_INTCLRP1             ((volatile  uint32_t *) REG_CORTEX_INTCLRP1)             /*  IRQ32..63 Clear_Pending */
#define pREG_CORTEX_INTACT0              ((volatile  uint32_t *) REG_CORTEX_INTACT0)              /*  IRQ0..31 Active Bit */
#define pREG_CORTEX_INTACT1              ((volatile  uint32_t *) REG_CORTEX_INTACT1)              /*  IRQ32..63 Active Bit */
#define pREG_CORTEX_INTPRI0              ((volatile  uint32_t *) REG_CORTEX_INTPRI0)              /*  IRQ0..3 Priority */
#define pREG_CORTEX_INTPRI1              ((volatile  uint32_t *) REG_CORTEX_INTPRI1)              /*  IRQ4..7 Priority */
#define pREG_CORTEX_INTPRI2              ((volatile  uint32_t *) REG_CORTEX_INTPRI2)              /*  IRQ8..11 Priority */
#define pREG_CORTEX_INTPRI3              ((volatile  uint32_t *) REG_CORTEX_INTPRI3)              /*  IRQ12..15 Priority */
#define pREG_CORTEX_INTPRI4              ((volatile  uint32_t *) REG_CORTEX_INTPRI4)              /*  IRQ16..19 Priority */
#define pREG_CORTEX_INTPRI5              ((volatile  uint32_t *) REG_CORTEX_INTPRI5)              /*  IRQ20..23 Priority */
#define pREG_CORTEX_INTPRI6              ((volatile  uint32_t *) REG_CORTEX_INTPRI6)              /*  IRQ24..27 Priority */
#define pREG_CORTEX_INTPRI7              ((volatile  uint32_t *) REG_CORTEX_INTPRI7)              /*  IRQ28..31 Priority */
#define pREG_CORTEX_INTPRI8              ((volatile  uint32_t *) REG_CORTEX_INTPRI8)              /*  IRQ32..35 Priority */
#define pREG_CORTEX_INTPRI9              ((volatile  uint32_t *) REG_CORTEX_INTPRI9)              /*  IRQ36..39 Priority */
#define pREG_CORTEX_INTPRI10             ((volatile  uint32_t *) REG_CORTEX_INTPRI10)             /*  IRQ40..43 Priority */
#define pREG_CORTEX_INTCPID              ((volatile  uint32_t *) REG_CORTEX_INTCPID)              /*  CPUID Base */
#define pREG_CORTEX_INTSTA               ((volatile  uint32_t *) REG_CORTEX_INTSTA)               /*  Interrupt Control State */
#define pREG_CORTEX_INTVEC               ((volatile  uint32_t *) REG_CORTEX_INTVEC)               /*  Vector Table Offset */
#define pREG_CORTEX_INTAIRC              ((volatile  uint32_t *) REG_CORTEX_INTAIRC)              /*  Application Interrupt/Reset Control */
#define pREG_CORTEX_INTCON0              ((volatile  uint16_t *) REG_CORTEX_INTCON0)              /*  System Control */
#define pREG_CORTEX_INTCON1              ((volatile  uint32_t *) REG_CORTEX_INTCON1)              /*  Configuration Control */
#define pREG_CORTEX_INTSHPRIO0           ((volatile  uint32_t *) REG_CORTEX_INTSHPRIO0)           /*  System Handlers 4-7 Priority */
#define pREG_CORTEX_INTSHPRIO1           ((volatile  uint32_t *) REG_CORTEX_INTSHPRIO1)           /*  System Handlers 8-11 Priority */
#define pREG_CORTEX_INTSHPRIO3           ((volatile  uint32_t *) REG_CORTEX_INTSHPRIO3)           /*  System Handlers 12-15 Priority */
#define pREG_CORTEX_INTSHCSR             ((volatile  uint32_t *) REG_CORTEX_INTSHCSR)             /*  System Handler Control and State */
#define pREG_CORTEX_INTCFSR              ((volatile  uint32_t *) REG_CORTEX_INTCFSR)              /*  Configurable Fault Status */
#define pREG_CORTEX_INTHFSR              ((volatile  uint32_t *) REG_CORTEX_INTHFSR)              /*  Hard Fault Status */
#define pREG_CORTEX_INTDFSR              ((volatile  uint32_t *) REG_CORTEX_INTDFSR)              /*  Debug Fault Status */
#define pREG_CORTEX_INTMMAR              ((volatile  uint32_t *) REG_CORTEX_INTMMAR)              /*  Mem Manage Address */
#define pREG_CORTEX_INTBFAR              ((volatile  uint32_t *) REG_CORTEX_INTBFAR)              /*  Bus Fault Address */
#define pREG_CORTEX_INTAFSR              ((volatile  uint32_t *) REG_CORTEX_INTAFSR)              /*  Auxiliary Fault Status */
#define pREG_CORTEX_INTPFR0              ((volatile  uint32_t *) REG_CORTEX_INTPFR0)              /*  Processor Feature Register 0 */
#define pREG_CORTEX_INTPFR1              ((volatile  uint32_t *) REG_CORTEX_INTPFR1)              /*  Processor Feature Register 1 */
#define pREG_CORTEX_INTDFR0              ((volatile  uint32_t *) REG_CORTEX_INTDFR0)              /*  Debug Feature Register 0 */
#define pREG_CORTEX_INTAFR0              ((volatile  uint32_t *) REG_CORTEX_INTAFR0)              /*  Auxiliary Feature Register 0 */
#define pREG_CORTEX_INTMMFR0             ((volatile  uint32_t *) REG_CORTEX_INTMMFR0)             /*  Memory Model Feature Register 0 */
#define pREG_CORTEX_INTMMFR1             ((volatile  uint32_t *) REG_CORTEX_INTMMFR1)             /*  Memory Model Feature Register 1 */
#define pREG_CORTEX_INTMMFR2             ((volatile  uint32_t *) REG_CORTEX_INTMMFR2)             /*  Memory Model Feature Register 2 */
#define pREG_CORTEX_INTMMFR3             ((volatile  uint32_t *) REG_CORTEX_INTMMFR3)             /*  Memory Model Feature Register 3 */
#define pREG_CORTEX_INTISAR0             ((volatile  uint32_t *) REG_CORTEX_INTISAR0)             /*  ISA Feature Register 0 */
#define pREG_CORTEX_INTISAR1             ((volatile  uint32_t *) REG_CORTEX_INTISAR1)             /*  ISA Feature Register 1 */
#define pREG_CORTEX_INTISAR2             ((volatile  uint32_t *) REG_CORTEX_INTISAR2)             /*  ISA Feature Register 2 */
#define pREG_CORTEX_INTISAR3             ((volatile  uint32_t *) REG_CORTEX_INTISAR3)             /*  ISA Feature Register 3 */
#define pREG_CORTEX_INTISAR4             ((volatile  uint32_t *) REG_CORTEX_INTISAR4)             /*  ISA Feature Register 4 */
#define pREG_CORTEX_INTTRGI              ((volatile  uint32_t *) REG_CORTEX_INTTRGI)              /*  Software Trigger Interrupt Register */
#define pREG_CORTEX_INTPID4              ((volatile  uint32_t *) REG_CORTEX_INTPID4)              /*  Peripheral Identification Register 4 */
#define pREG_CORTEX_INTPID5              ((volatile  uint32_t *) REG_CORTEX_INTPID5)              /*  Peripheral Identification Register 5 */
#define pREG_CORTEX_INTPID6              ((volatile  uint32_t *) REG_CORTEX_INTPID6)              /*  Peripheral Identification Register 6 */
#define pREG_CORTEX_INTPID7              ((volatile  uint32_t *) REG_CORTEX_INTPID7)              /*  Peripheral Identification Register 7 */
#define pREG_CORTEX_INTPID0              ((volatile  uint32_t *) REG_CORTEX_INTPID0)              /*  Peripheral Identification Bits7:0 */
#define pREG_CORTEX_INTPID1              ((volatile  uint32_t *) REG_CORTEX_INTPID1)              /*  Peripheral Identification Bits15:8 */
#define pREG_CORTEX_INTPID2              ((volatile  uint32_t *) REG_CORTEX_INTPID2)              /*  Peripheral Identification Bits16:23 */
#define pREG_CORTEX_INTPID3              ((volatile  uint32_t *) REG_CORTEX_INTPID3)              /*  Peripheral Identification Bits24:31 */
#define pREG_CORTEX_INTCID0              ((volatile  uint32_t *) REG_CORTEX_INTCID0)              /*  Component Identification Bits7:0 */
#define pREG_CORTEX_INTCID1              ((volatile  uint32_t *) REG_CORTEX_INTCID1)              /*  Component Identification Bits15:8 */
#define pREG_CORTEX_INTCID2              ((volatile  uint32_t *) REG_CORTEX_INTCID2)              /*  Component Identification Bits16:23 */
#define pREG_CORTEX_INTCID3              ((volatile  uint32_t *) REG_CORTEX_INTCID3)              /*  Component Identification Bits24:31 */

#endif

