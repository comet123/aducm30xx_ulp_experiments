/* ================================================================================

     Created by   :   gsulliva
     Created on   :   2014 Jun 30, 12:47 EDT

     Project      :   microglue
     File         :   microglue_device.h
     Description  :   C Register Definitions

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

#ifndef _microglue_DEVICE_H
#define _microglue_DEVICE_H

/* pickup integer types */
#include <stdint.h>

/* pickup register bitfield and bit masks */
#include "microglue_typedefs.h"

#ifndef __IO
  #ifdef __cplusplus
    #define     __I     volatile      /* read-only */
    #define     __C
  #else
    #define     __I     volatile      /* read-only */
    #define     __C     const
  #endif
  #define       __O     volatile      /* write-only */
  #define       __IO    volatile      /* read-write */
#endif

/** @defgroup bus_matrix  (bus_matrix) Module
 *  
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_bus_matrix_TypeDef
 *  \brief  
 *  ========================================================================== */
typedef struct _ADI_bus_matrix_TypeDef
{
    __IO     uint32_t ARBIT0;                        /*!< Arbitration Priority Configuration for FLASH and SRAM0 */
    __IO     uint32_t ARBIT1;                        /*!< Arbitration Priority Configuration for SRAM1 and SIP */
    __IO     uint32_t ARBIT2;                        /*!< Arbitration Priority Configuration for APB32 and APB16 */
    __IO     uint32_t ARBIT3;                        /*!< Arbitration Priority Configuration for APB16 priority for core and for DMA1 */
} ADI_bus_matrix_TypeDef;

/*!@}*/

/** @defgroup TMR General Purpose Timer (TMR) Module
 *  General Purpose Timer
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_TMR_TypeDef
 *  \brief  General Purpose Timer
 *  ========================================================================== */
typedef struct _ADI_TMR_TypeDef
{
    __IO     uint16_t LD;                            /*!< 16-bit load value */
    __I __C  uint8_t  RESERVED0[2];
    __I __C  uint16_t VAL;                           /*!< 16-bit timer value */
    __I __C  uint8_t  RESERVED1[2];
    __IO     uint16_t CON;                           /*!< Control */
    __I __C  uint8_t  RESERVED2[2];
    __O      uint16_t CLRI;                          /*!< Clear Interrupt */
    __I __C  uint8_t  RESERVED3[2];
    __I __C  uint16_t CAP;                           /*!< Capture */
    __I __C  uint8_t  RESERVED4[2];
    __IO     uint16_t ALD;                           /*!< 16-bit load value, asynchronous */
    __I __C  uint8_t  RESERVED5[2];
    __I __C  uint16_t AVAL;                          /*!< 16-bit timer value, asynchronous */
    __I __C  uint8_t  RESERVED6[2];
    __I __C  uint16_t STA;                           /*!< Status */
    __I __C  uint8_t  RESERVED7[2];
    __IO     uint16_t PCON;                          /*!< PWM Control Register */
    __I __C  uint8_t  RESERVED8[2];
    __IO     uint16_t PMAT;                          /*!< PWM Match Value */
} ADI_TMR_TypeDef;

/*!@}*/

/** @defgroup rtc Real-Time Clock (rtc) Module
 *  Real-Time Clock
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_rtc_TypeDef
 *  \brief  Real-Time Clock
 *  ========================================================================== */
typedef struct _ADI_rtc_TypeDef
{
    __IO     uint32_t CR0;                           /*!< RTC Control 0 */
    __IO     uint32_t SR0;                           /*!< RTC Status 0 */
    __I __C  uint32_t SR1;                           /*!< RTC Status 1 */
    __IO     uint32_t CNT0;                          /*!< RTC Count 0 */
    __IO     uint16_t CNT1;                          /*!< RTC Count 1 */
    __I __C  uint8_t  RESERVED0[2];
    __IO     uint32_t ALM0;                          /*!< RTC Alarm 0 */
    __IO     uint16_t ALM1;                          /*!< RTC Alarm 1 */
    __I __C  uint8_t  RESERVED1[2];
    __IO     uint16_t TRM;                           /*!< RTC Trim */
    __I __C  uint8_t  RESERVED2[2];
    __O      uint16_t GWY;                           /*!< RTC Gateway */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint16_t DBG;                           /*!< RTC Debug Access : ADI Factory Use Only */
    __I __C  uint8_t  RESERVED4[2];
    __IO     uint16_t CR1;                           /*!< RTC Control 1 */
    __I __C  uint8_t  RESERVED5[2];
    __IO     uint16_t SR2;                           /*!< RTC Status 2 */
    __I __C  uint8_t  RESERVED6[2];
    __I __C  uint32_t SNAP0;                         /*!< RTC Snapshot 0 */
    __I __C  uint16_t SNAP1;                         /*!< RTC Snapshot 1 */
    __I __C  uint8_t  RESERVED7[2];
    __I __C  uint32_t SNAP2;                         /*!< RTC Snapshot 2 */
    __I __C  uint32_t MOD;                           /*!< RTC Modulo */
    __I __C  uint32_t CNT2;                          /*!< RTC Count 2 */
    __IO     uint32_t ALM2;                          /*!< RTC Alarm 2 */
} ADI_rtc_TypeDef;

/*!@}*/

/** @defgroup sys System Identification and Debug Enable (sys) Module
 *  System Identification and Debug Enable
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_sys_TypeDef
 *  \brief  System Identification and Debug Enable
 *  ========================================================================== */
typedef struct _ADI_sys_TypeDef
{
    __I __C  uint8_t  RESERVED0[32];
    __I __C  uint16_t ADIID;                         /*!< ADI Identification */
    __I __C  uint8_t  RESERVED1[2];
    __I __C  uint16_t CHIPID;                        /*!< Chip Identifier */
    __I __C  uint8_t  RESERVED2[26];
    __O      uint16_t SWDEN;                         /*!< Serial Wire Debug Enable */
} ADI_sys_TypeDef;

/*!@}*/

/** @defgroup wdt Watchdog Timer (wdt) Module
 *  Watchdog Timer
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_wdt_TypeDef
 *  \brief  Watchdog Timer
 *  ========================================================================== */
typedef struct _ADI_wdt_TypeDef
{
    __IO     uint16_t LOAD;                          /*!< Load value */
    __I __C  uint8_t  RESERVED0[2];
    __I __C  uint16_t CCOUNT;                        /*!< Current count value */
    __I __C  uint8_t  RESERVED1[2];
    __IO     uint16_t CTRL;                          /*!< Control */
    __I __C  uint8_t  RESERVED2[2];
    __O      uint16_t RESTART;                       /*!< Clear interrupt */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint16_t RESETCTRL;                     /*!< Reset Control Register */
    __I __C  uint8_t  RESERVED4[2];
    __I __C  uint16_t ACOUNT;                        /*!< Value Register Async */
    __I __C  uint8_t  RESERVED5[2];
    __I __C  uint16_t STATUS;                        /*!< Status */
} ADI_wdt_TypeDef;

/*!@}*/

/** @defgroup i2cf I2C Master/Slave (i2cf) Module
 *  I2C Master/Slave
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_i2cf_TypeDef
 *  \brief  I2C Master/Slave
 *  ========================================================================== */
typedef struct _ADI_i2cf_TypeDef
{
    __IO     uint16_t I2CFMCON;                      /*!< Master control */
    __I __C  uint8_t  RESERVED0[2];
    __IO     uint16_t I2CFMSTA;                      /*!< Master status */
    __I __C  uint8_t  RESERVED1[2];
    __I __C  uint16_t I2CFMRX;                       /*!< Master receive data */
    __I __C  uint8_t  RESERVED2[2];
    __IO     uint16_t I2CFMTX;                       /*!< Master transmit data */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint16_t I2CFMRXCNT;                    /*!< Master receive data count */
    __I __C  uint8_t  RESERVED4[2];
    __I __C  uint16_t I2CFMCRXCNT;                   /*!< Master current receive data count */
    __I __C  uint8_t  RESERVED5[2];
    __IO     uint16_t I2CFADR1;                      /*!< 1st master address byte */
    __I __C  uint8_t  RESERVED6[2];
    __IO     uint16_t I2CFADR2;                      /*!< 2nd master address byte */
    __I __C  uint8_t  RESERVED7[2];
    __IO     uint16_t I2CFBYT;                       /*!< Start byte */
    __I __C  uint8_t  RESERVED8[2];
    __IO     uint16_t I2CFDIV;                       /*!< Serial clock period divisor */
    __I __C  uint8_t  RESERVED9[2];
    __IO     uint16_t I2CFSCON;                      /*!< Slave control */
    __I __C  uint8_t  RESERVED10[2];
    __IO     uint16_t I2CFSSTA;                      /*!< Slave I2C Status/Error/IRQ */
    __I __C  uint8_t  RESERVED11[2];
    __I __C  uint16_t I2CFSRX;                       /*!< Slave receive */
    __I __C  uint8_t  RESERVED12[2];
    __IO     uint16_t I2CFSTX;                       /*!< Slave transmit */
    __I __C  uint8_t  RESERVED13[2];
    __IO     uint16_t I2CFALT;                       /*!< Hardware general call ID */
    __I __C  uint8_t  RESERVED14[2];
    __IO     uint16_t I2CFID0;                       /*!< 1st slave address device ID */
    __I __C  uint8_t  RESERVED15[2];
    __IO     uint16_t I2CFID1;                       /*!< 2nd slave address device ID */
    __I __C  uint8_t  RESERVED16[2];
    __IO     uint16_t I2CFID2;                       /*!< 3rd slave address device ID */
    __I __C  uint8_t  RESERVED17[2];
    __IO     uint16_t I2CFID3;                       /*!< 4th slave address device ID */
    __I __C  uint8_t  RESERVED18[2];
    __IO     uint16_t I2CFSTA;                       /*!< Master and slave FIFO status */
    __I __C  uint8_t  RESERVED19[2];
    __O      uint16_t I2CFSHCON;                     /*!< Shared control */
    __I __C  uint8_t  RESERVED20[2];
    __IO     uint16_t I2CFTCTL;                      /*!< Timing Control Register */
    __I __C  uint8_t  RESERVED21[2];
    __IO     uint16_t I2CFASSCL;                     /*!< Automatic stretch SCL register */
} ADI_i2cf_TypeDef;

/*!@}*/

/** @defgroup SPI  (SPI) Module
 *  
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_SPI_TypeDef
 *  \brief  
 *  ========================================================================== */
typedef struct _ADI_SPI_TypeDef
{
    __IO     uint16_t STAT;                          /*!< Status */
    __I __C  uint8_t  RESERVED0[2];
    __I __C  uint16_t RX;                            /*!< Receive */
    __I __C  uint8_t  RESERVED1[2];
    __O      uint16_t TX;                            /*!< Transmit */
    __I __C  uint8_t  RESERVED2[2];
    __IO     uint16_t DIV;                           /*!< SPI baud rate selection */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint16_t CTL;                           /*!< SPI configuration 1 */
    __I __C  uint8_t  RESERVED4[2];
    __IO     uint16_t IEN;                           /*!< SPI configuration 2 */
    __I __C  uint8_t  RESERVED5[2];
    __IO     uint16_t CNT;                           /*!< Transfer byte count */
    __I __C  uint8_t  RESERVED6[2];
    __IO     uint16_t DMA;                           /*!< SPI DMA enable */
    __I __C  uint8_t  RESERVED7[2];
    __I __C  uint16_t FIFO_STAT;                     /*!< FIFO Status */
    __I __C  uint8_t  RESERVED8[2];
    __IO     uint16_t RD_CTL;                        /*!< Read Control */
    __I __C  uint8_t  RESERVED9[2];
    __IO     uint16_t FLOW_CTL;                      /*!< Flow Control */
    __I __C  uint8_t  RESERVED10[2];
    __IO     uint16_t WAIT_TMR;                      /*!< Wait timer for flow control */
    __I __C  uint8_t  RESERVED11[2];
    __IO     uint16_t CS_CTL;                        /*!< Chip-Select control for multi-slave connections */
    __I __C  uint8_t  RESERVED12[2];
    __IO     uint16_t CS_OVERRIDE;                   /*!< Chip-Select Override */
    __I __C  uint8_t  RESERVED13[2];
    __I __C  uint16_t XFR_CNT;                       /*!< Transferred Count */
} ADI_SPI_TypeDef;

/*!@}*/

/** @defgroup uart UART (uart) Module
 *  UART
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_uart_TypeDef
 *  \brief  UART
 *  ========================================================================== */
typedef struct _ADI_uart_TypeDef
{
    union {
    __O      uint16_t COMTX;                         /*!< Transmit Holding Register */
    __I __C  uint16_t COMRX;                         /*!< Receive Buffer Register */
   };
    __I __C  uint8_t  RESERVED0[2];
    __IO     uint16_t COMIEN;                        /*!< Interrupt Enable */
    __I __C  uint8_t  RESERVED1[2];
    __I __C  uint16_t COMIIR;                        /*!< Interrupt ID */
    __I __C  uint8_t  RESERVED2[2];
    __IO     uint16_t COMLCR;                        /*!< Line Control */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint16_t COMMCR;                        /*!< Modem Control */
    __I __C  uint8_t  RESERVED4[2];
    __I __C  uint16_t COMLSR;                        /*!< Line Status */
    __I __C  uint8_t  RESERVED5[2];
    __I __C  uint16_t COMMSR;                        /*!< Modem Status */
    __I __C  uint8_t  RESERVED6[2];
    __IO     uint16_t COMSCR;                        /*!< Scratch buffer */
    __I __C  uint8_t  RESERVED7[2];
    __IO     uint16_t COMMCFG;                       /*!< sout modulation configuration */
    __I __C  uint8_t  RESERVED8[2];
    __IO     uint16_t COMFBR;                        /*!< Fractional Baud Rate */
    __I __C  uint8_t  RESERVED9[2];
    __IO     uint16_t COMDIV;                        /*!< Baudrate divider */
    __I __C  uint8_t  RESERVED10[6];
    __IO     uint16_t COMCTL;                        /*!< UART control register */
} ADI_uart_TypeDef;

/*!@}*/

/** @defgroup beeper  (beeper) Module
 *  
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_beeper_TypeDef
 *  \brief  
 *  ========================================================================== */
typedef struct _ADI_beeper_TypeDef
{
    __IO     uint16_t CFG;                           /*!< Beeper configuration */
    __I __C  uint8_t  RESERVED0[2];
    __IO     uint16_t STAT;                          /*!< Beeper status */
    __I __C  uint8_t  RESERVED1[2];
    __IO     uint16_t TONE_A;                        /*!< Tone A Data */
    __I __C  uint8_t  RESERVED2[2];
    __IO     uint16_t TONE_B;                        /*!< Tone B Data */
} ADI_beeper_TypeDef;

/*!@}*/

/** @defgroup RNG  (RNG) Module
 *  
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_RNG_TypeDef
 *  \brief  
 *  ========================================================================== */
typedef struct _ADI_RNG_TypeDef
{
    __IO     uint16_t CTL;                           /*!< RNG Control Register */
    __I __C  uint8_t  RESERVED0[2];
    __IO     uint16_t LEN;                           /*!< RNG Sample Length Register */
    __I __C  uint8_t  RESERVED1[2];
    __IO     uint16_t STAT;                          /*!< RNG Status Register */
    __I __C  uint8_t  RESERVED2[2];
    __I __C  uint32_t DATA;                          /*!< RNG Data Register */
    __I __C  uint32_t OSCCNT;                        /*!< Oscillator Count */
    __I __C   int8_t OSCDIFF[4];                    /*!< Oscillator Difference */
} ADI_RNG_TypeDef;

/*!@}*/

/** @defgroup dma DMA (dma) Module
 *  DMA
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_dma_TypeDef
 *  \brief  DMA
 *  ========================================================================== */
typedef struct _ADI_dma_TypeDef
{
    __I __C  uint32_t DMASTA;                        /*!< DMA Status */
    __O      uint32_t DMACFG;                        /*!< DMA Configuration */
    __IO     uint32_t DMAPDBPTR;                     /*!< DMA channel primary control data base pointer */
    __I __C  uint32_t DMAADBPTR;                     /*!< DMA channel alternate control data base pointer */
    __I __C  uint8_t  RESERVED0[4];
    __O      uint32_t DMASWREQ;                      /*!< DMA channel software request */
    __I __C  uint8_t  RESERVED1[8];
    __IO     uint32_t DMARMSKSET;                    /*!< DMA channel request mask set */
    __O      uint32_t DMARMSKCLR;                    /*!< DMA channel request mask clear */
    __IO     uint32_t DMAENSET;                      /*!< DMA channel enable set */
    __O      uint32_t DMAENCLR;                      /*!< DMA channel enable clear */
    __IO     uint32_t DMAALTSET;                     /*!< DMA channel primary-alternate set */
    __O      uint32_t DMAALTCLR;                     /*!< DMA channel primary-alternate clear */
    __O      uint32_t DMAPRISET;                     /*!< DMA channel priority set */
    __O      uint32_t DMAPRICLR;                     /*!< DMA channel priority clear */
    __I __C  uint8_t  RESERVED2[8];
    __IO     uint32_t DMAERRCHNLCLR;                 /*!< DMA Per Channel Error Clear */
    __IO     uint32_t DMAERRCLR;                     /*!< DMA bus error clear */
    __IO     uint32_t DMAINVALIDDESCCLR;             /*!< DMA Per Channel Invalid Descriptor Clear */
    __I __C  uint8_t  RESERVED3[1964];
    __IO     uint32_t DMABSSET;                      /*!< DMA channel bytes swap enable set */
    __O      uint32_t DMABSCLR;                      /*!< DMA channel bytes swap enable clear */
    __I __C  uint8_t  RESERVED4[8];
    __IO     uint32_t DMASRCADSSET;                  /*!< DMA channel source address decrement enable set */
    __O      uint32_t DMASRCADCLR;                   /*!< DMA channel source address decrement enable clear */
    __IO     uint32_t DMADSTADSET;                   /*!< DMA channel destination address decrement enable set */
    __O      uint32_t DMADSTADCLR;                   /*!< DMA channel destination address decrement enable clear */
    __I __C  uint8_t  RESERVED5[1984];
    __I __C  uint32_t DMAREVID;                      /*!< DMA Controller Revision ID */
} ADI_dma_TypeDef;

/*!@}*/

/** @defgroup FLASH Flash Controller (FLASH) Module
 *  Flash Controller
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_FLASH_TypeDef
 *  \brief  Flash Controller
 *  ========================================================================== */
typedef struct _ADI_FLASH_TypeDef
{
    __IO     uint32_t STAT;                          /*!< Status register */
    __IO     uint32_t IEN;                           /*!< Interrupt Enable register */
    __IO     uint32_t CMD;                           /*!< Command register */
    __IO     uint32_t KH_ADDR;                       /*!< Key-hole address */
    __IO     uint32_t KH_DATA0;                      /*!< Key-hole Data 0: lower word to be written on Key-hole write command */
    __IO     uint32_t KH_DATA1;                      /*!< Key-hole Data 1: upper word to be written on Key-hole write command */
    __IO     uint32_t PAGE_ADDR0;                    /*!< Lower page address */
    __IO     uint32_t PAGE_ADDR1;                    /*!< Upper page address */
    __O      uint32_t KEY;                           /*!< Flash Key register. */
    __I __C  uint32_t WR_ABORT_ADDR;                 /*!< Write abort address register */
    __IO     uint32_t WRPROT;                        /*!< Write protection register for flash */
    __I __C  uint32_t SIGNATURE;                     /*!< Signature register */
    __IO     uint32_t UCFG;                          /*!< User configuration register */
    __IO     uint32_t TIME_PARAM0;                   /*!< Time parameter register 0 */
    __IO     uint32_t TIME_PARAM1;                   /*!< Time parameter register 1 */
    __IO     uint32_t ABORT_EN_LO;                   /*!< Lower bits of the sys irq abort enable register. */
    __IO     uint32_t ABORT_EN_HI;                   /*!< Upper bits of the sys irq abort enable register. */
    __IO     uint32_t ECC_CFG;                       /*!< ECC enable/disable and error responses */
    __I __C  uint32_t ECC_ADDR;                      /*!< Address of recent ECC error/correction which generated an IRQ */
    __IO     uint32_t ADI_POR_CFG;                   /*!< ADI flash configuration register */
    __IO     uint32_t ADI_POR_SEC;                   /*!< ADI flash security register */
    __IO     uint32_t ADI_VOL_CFG;                   /*!< ADI flash configuration register */
} ADI_FLASH_TypeDef;

/*!@}*/

/** @defgroup FLASH_CACHE Cache Controller (FLASH_CACHE) Module
 *  Cache Controller
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_FLASH_CACHE_TypeDef
 *  \brief  Cache Controller
 *  ========================================================================== */
typedef struct _ADI_FLASH_CACHE_TypeDef
{
    __I __C  uint32_t CACHESTAT;                     /*!< Cache Status register */
    __IO     uint32_t CACHESETUP;                    /*!< Cache Setup register */
    __O      uint32_t CACHEKEY;                      /*!< Cache Key register */
    __IO     uint32_t CACHETMSETUP;                  /*!< Cache Test Setup Register */
    __IO     uint32_t CACHETMSETADDR;                /*!< Cache Set Address */
    __IO     uint32_t CACHETMTAG;                    /*!< LRU, Valid bits and Tags for Way 0 and 1 */
    __IO     uint32_t CACHETMD0LOW;                  /*!< LSW of Data for Way 0 */
    __IO     uint32_t CACHETMD0HIGH;                 /*!< MSW of Data for Way 0 */
    __IO     uint32_t CACHETMD1LOW;                  /*!< LSW of Data for Way 1 */
    __IO     uint32_t CACHETMD1HIGH;                 /*!< MSW of Data for Way 1 */
    __I __C  uint32_t CACHEMISSCNTR;                 /*!< Cache Miss Counter */
    __I __C  uint32_t ICACHELASTADDR;                /*!< Instruction Cache Last Address */
    __I __C  uint32_t DCACHELASTADDR;                /*!< Data Cache Last Address */
} ADI_FLASH_CACHE_TypeDef;

/*!@}*/

/** @defgroup FLASH_DFT DFT Controller (FLASH_DFT) Module
 *  DFT Controller
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_FLASH_DFT_TypeDef
 *  \brief  DFT Controller
 *  ========================================================================== */
typedef struct _ADI_FLASH_DFT_TypeDef
{
    __I __C  uint32_t DFT_STAT;                      /*!< Status register */
    __IO     uint32_t DFT_CTRL;                      /*!< Control register */
    __IO     uint32_t DFT_CMD;                       /*!< Command register */
    __IO     uint32_t DFT_PIN_REG;                   /*!< Used to control IFREN, MAS1, and SLM signals during command execution */
    __IO     uint32_t DFT_XADR_REG;                  /*!< Used to setup initial XADR value to be used at the start of a command (note: some commands modify the internal XADR value during execution) */
    __IO     uint32_t DFT_YADR_REG;                  /*!< Used to setup initial YADR value to be used at the start of a command (note: some commands modify the internal YADR value during execution) */
    __IO     uint32_t DFT_DATA_L_REG;                /*!< Used to setup initial lower 32 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) */
    __IO     uint32_t DFT_DATA_H_REG;                /*!< Used to setup initial upper 4 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) */
    __IO     uint32_t DFT_CTRL_REG;                  /*!< Used to select different data and address patterns for program/read operations */
    __IO     uint32_t DFT_GRP_REG;                   /*!< Used to define which groups of data bits will be selected for program/read operations */
    __IO     uint32_t DFT_IP_REG;                    /*!< Used to control the IP select signal */
    __IO     uint32_t DFT_BIT_REG;                   /*!< Debug feature; used to enable bit operation and select just one bit for read comparison during failure-bit map collection */
    __I __C  uint32_t DFT_PEND;                      /*!< DFT Writes Pending */
    __IO     uint32_t DFT_PROBE;                     /*!< Used in DFT Probe Mode only */
} ADI_FLASH_DFT_TypeDef;

/*!@}*/

/** @defgroup FLASH_TEST Flash Controller (FLASH_TEST) Module
 *  Flash Controller
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_FLASH_TEST_TypeDef
 *  \brief  Flash Controller
 *  ========================================================================== */
typedef struct _ADI_FLASH_TEST_TypeDef
{
    __IO     uint32_t TST_CFG;                       /*!< Testmode Configuration Register */
    __O      uint32_t TST_CMD_KEY;                   /*!< Write the proper Test Key value here to enable test mode reads and writes */
    __I __C  uint32_t TM_DATA0;                      /*!< Lower 32 bits testmode flash data - [31:0] */
    __I __C  uint32_t TM_DATA1;                      /*!< Middle 32 bits testmode flash data - [63:32] */
    __I __C  uint32_t TM_DATA2;                      /*!< Upper 8 bits testmode flash data - [71:64] */
    __IO     uint32_t KH_DATA2;                      /*!< Flash data register - key-hole interface (top 8 bit ECC - [71:64]) */
    __I __C  uint32_t FLSH_TC;                       /*!< Direct output from flash IP Test Code (TC) bus */
} ADI_FLASH_TEST_TypeDef;

/*!@}*/

/** @defgroup gpio  (gpio) Module
 *  
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_gpio_TypeDef
 *  \brief  
 *  ========================================================================== */
typedef struct _ADI_gpio_TypeDef
{
    __IO     uint32_t GP0CON;                        /*!< GPIO Port 0  Configuration */
    __IO     uint16_t GP0OEN;                        /*!< GPIO Port 0 output enable */
    __I __C  uint8_t  RESERVED0[2];
    __IO     uint16_t GP0PE;                         /*!< GPIO Port 0 output pullup/pulldown enable */
    __I __C  uint8_t  RESERVED1[2];
    __IO     uint16_t GP0IEN;                        /*!< GPIO  Port 0 Input Path Enable */
    __I __C  uint8_t  RESERVED2[2];
    __I __C  uint16_t GP0IN;                         /*!< GPIO  Port 0 registered data input */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint16_t GP0OUT;                        /*!< GPIO Port 0 data output */
    __I __C  uint8_t  RESERVED4[2];
    __O      uint16_t GP0SET;                        /*!< GPIO Port 0 data out set */
    __I __C  uint8_t  RESERVED5[2];
    __O      uint16_t GP0CLR;                        /*!< GPIO Port 0 data out clear */
    __I __C  uint8_t  RESERVED6[2];
    __O      uint16_t GP0TGL;                        /*!< GPIO Port 0  pin toggle */
    __I __C  uint8_t  RESERVED7[2];
    __IO     uint16_t GP0POL;                        /*!< GPIO Port 0 interrupt polarity */
    __I __C  uint8_t  RESERVED8[2];
    __IO     uint16_t GP0IENA;                       /*!< GPIO Port 0  interrupt A enable */
    __I __C  uint8_t  RESERVED9[2];
    __IO     uint16_t GP0IENB;                       /*!< GPIO Port 0 interrupt B enable */
    __I __C  uint8_t  RESERVED10[2];
    __IO     uint16_t GP0INT;                        /*!< GPIO Port 0 interrupt Status */
    __I __C  uint8_t  RESERVED11[2];
    __IO     uint16_t GP0DS;                         /*!< GPIO Port 0  drive strength select */
    __I __C  uint8_t  RESERVED12[10];
    __IO     uint32_t GP1CON;                        /*!< GPIO Port 1 configuration */
    __IO     uint16_t GP1OEN;                        /*!< GPIO Port 1 output enable */
    __I __C  uint8_t  RESERVED13[2];
    __IO     uint16_t GP1PE;                         /*!< GPIO Port 1 output pullup/pulldown enable */
    __I __C  uint8_t  RESERVED14[2];
    __IO     uint16_t GP1IEN;                        /*!< GPIO Port 1 Input Path Enable */
    __I __C  uint8_t  RESERVED15[2];
    __I __C  uint16_t GP1IN;                         /*!< GPIO Port 1  registered data input */
    __I __C  uint8_t  RESERVED16[2];
    __IO     uint16_t GP1OUT;                        /*!< GPIO Port 1 data output */
    __I __C  uint8_t  RESERVED17[2];
    __O      uint16_t GP1SET;                        /*!< GPIO Port 1 data out set */
    __I __C  uint8_t  RESERVED18[2];
    __O      uint16_t GP1CLR;                        /*!< GPIO Port 1 data out clear */
    __I __C  uint8_t  RESERVED19[2];
    __O      uint16_t GP1TGL;                        /*!< GPIO Port 1 pin toggle */
    __I __C  uint8_t  RESERVED20[2];
    __IO     uint16_t GP1POL;                        /*!< GPIO Port 1 interrupt polarity */
    __I __C  uint8_t  RESERVED21[2];
    __IO     uint16_t GP1IENA;                       /*!< GPIO Port 1 interrupt A enable */
    __I __C  uint8_t  RESERVED22[2];
    __IO     uint16_t GP1IENB;                       /*!< GPIO Port 1interrupt B enable */
    __I __C  uint8_t  RESERVED23[2];
    __IO     uint16_t GP1INT;                        /*!< GPIO Port 1 interrupt Status */
    __I __C  uint8_t  RESERVED24[2];
    __IO     uint16_t GP1DS;                         /*!< GPIO Port 1  drive strength select */
    __I __C  uint8_t  RESERVED25[10];
    __IO     uint32_t GP2CON;                        /*!< GPIO Port 2 configuration */
    __IO     uint16_t GP2OEN;                        /*!< GPIO Port 2 output enable */
    __I __C  uint8_t  RESERVED26[2];
    __IO     uint16_t GP2PE;                         /*!< GPIO Port 2  output pullup/pulldown enable */
    __I __C  uint8_t  RESERVED27[2];
    __IO     uint16_t GP2IEN;                        /*!< GPIO Port 2 Input Path Enable */
    __I __C  uint8_t  RESERVED28[2];
    __I __C  uint16_t GP2IN;                         /*!< GPIO Port 2 registered data input */
    __I __C  uint8_t  RESERVED29[2];
    __IO     uint16_t GP2OUT;                        /*!< GPIO Port 2  data output */
    __I __C  uint8_t  RESERVED30[2];
    __O      uint16_t GP2SET;                        /*!< GPIO Port 2 data out set */
    __I __C  uint8_t  RESERVED31[2];
    __O      uint16_t GP2CLR;                        /*!< GPIO Port 2 data out clear */
    __I __C  uint8_t  RESERVED32[2];
    __O      uint16_t GP2TGL;                        /*!< GPIO Port 2 pin toggle */
    __I __C  uint8_t  RESERVED33[2];
    __IO     uint16_t GP2POL;                        /*!< GPIO Port 2 interrupt polarity */
    __I __C  uint8_t  RESERVED34[2];
    __IO     uint16_t GP2IENA;                       /*!< GPIO Port 2 interrupt A enable */
    __I __C  uint8_t  RESERVED35[2];
    __IO     uint16_t GP2IENB;                       /*!< GPIO Port 2 interrupt B enable */
    __I __C  uint8_t  RESERVED36[2];
    __IO     uint16_t GP2INT;                        /*!< GPIO Port 2  interrupt Status */
    __I __C  uint8_t  RESERVED37[2];
    __IO     uint16_t GP2DS;                         /*!< GPIO Port 2  drive strength select */
} ADI_gpio_TypeDef;

/*!@}*/

/** @defgroup crypto crypto (crypto) Module
 *  crypto
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_crypto_TypeDef
 *  \brief  crypto
 *  ========================================================================== */
typedef struct _ADI_crypto_TypeDef
{
    __IO     uint32_t CFG;                           /*!< Configuration Register */
    __IO     uint32_t DATALEN;                       /*!< Payload Data Length */
    __IO     uint32_t PREFIXLEN;                     /*!< Authentication Data Length */
    __IO     uint32_t INTEN;                         /*!< Interrupt Enable Register */
    __IO     uint32_t STAT;                          /*!< Status Register */
    __O      uint32_t INBUF;                         /*!< Input Buffer */
    __I __C  uint32_t OUTBUF;                        /*!< Output Buffer */
    __IO     uint32_t NONCE[4];                        /*!< Nonce Bits [31:0] */
    __IO     uint32_t AESKEY[8];                       /*!< Key Bits[ 31:0 ] */
    __IO     uint32_t CNTRINIT;                      /*!< Counter Initialization Vector */
    __IO     uint32_t SHAH[8];                         /*!< SHA Bits [ 31:0 ] */
} ADI_crypto_TypeDef;

/*!@}*/

/** @defgroup sport  (sport) Module
 *  
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_sport_TypeDef
 *  \brief  
 *  ========================================================================== */
typedef struct _ADI_sport_TypeDef
{
    __IO     uint32_t CTL_A;                         /*!< Half SPORT 'A' Control Register */
    __IO     uint32_t DIV_A;                         /*!< Half SPORT 'A' Divisor Register */
    __IO     uint32_t INT_EN_A;                      /*!< Half SPORT A's Interrupt Enable register */
    __IO     uint32_t STAT_A;                        /*!< Half SPORT A's Status register */
    __IO     uint32_t NUM_TRAN_A;                    /*!< Half SPORT A Number of transfers register */
    __IO     uint32_t TIM_CONVT_A;                   /*!< Half SPORT A's register to be programmed with the desired CONVT pulse width */
    __I __C  uint8_t  RESERVED0[8];
    __O      uint32_t TX_A;                          /*!< Half SPORT 'A' Tx Buffer Register */
    __I __C  uint8_t  RESERVED1[4];
    __I __C  uint32_t RX_A;                          /*!< Half SPORT 'A' Rx Buffer Register */
    __I __C  uint8_t  RESERVED2[12];
    __I __C  uint32_t NUMTRAN_CNT_A;                 /*!< Half SPORT A Number of transfers counter */
    __I __C  uint8_t  RESERVED3[4];
    __IO     uint32_t CTL_B;                         /*!< Half SPORT 'B' Control Register */
    __IO     uint32_t DIV_B;                         /*!< Half SPORT 'B' Divisor Register */
    __IO     uint32_t INT_EN_B;                      /*!< Half SPORT A's Interrupt Enable register */
    __IO     uint32_t STAT_B;                        /*!< Half SPORT B's Status register */
    __IO     uint32_t NUM_TRAN_B;                    /*!< Half SPORT B Number of transfers register */
    __IO     uint32_t TIM_CONVT_B;                   /*!< Half SPORT B's register to be programmed with the desired CONVT pulse width */
    __I __C  uint8_t  RESERVED4[8];
    __O      uint32_t TX_B;                          /*!< Half SPORT 'B' Tx Buffer Register */
    __I __C  uint8_t  RESERVED5[4];
    __I __C  uint32_t RX_B;                          /*!< Half SPORT 'B' Rx Buffer Register */
    __I __C  uint8_t  RESERVED6[12];
    __I __C  uint32_t NUMTRAN_CNT_B;                 /*!< Half SPORT B Number of transfers counter */
} ADI_sport_TypeDef;

/*!@}*/

/** @defgroup crc CRC (crc) Module
 *  CRC
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_crc_TypeDef
 *  \brief  CRC
 *  ========================================================================== */
typedef struct _ADI_crc_TypeDef
{
    __IO     uint32_t CRC_CTL;                       /*!< CRC Control Register */
    __IO     uint32_t CRC_IPDATA;                    /*!< Input Data Register */
    __IO     uint32_t CRC_RESULT;                    /*!< CRC Result Register */
    __IO     uint32_t CRC_POLY;                      /*!< Programmable CRC Polynomial */
} ADI_crc_TypeDef;

/*!@}*/

/** @defgroup EXTINT External interrupt configuration (EXTINT) Module
 *  External interrupt configuration
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_EXTINT_TypeDef
 *  \brief  External interrupt configuration
 *  ========================================================================== */
typedef struct _ADI_EXTINT_TypeDef
{
    __IO     uint32_t EI0CFG;                        /*!< External Interrupt configuration 0 */
    __I __C  uint8_t  RESERVED0[8];
    __IO     uint32_t NMICFG;                        /*!< NMI Interrupt configuration */
    __IO     uint32_t EICLR;                         /*!< External Interrupt clear */
    __IO     uint32_t NMICLR;                        /*!< Non-maskable interrupt clear */
} ADI_EXTINT_TypeDef;

/*!@}*/

/** @defgroup PMG Power Management  (PMG) Module
 *  Power Management 
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_PMG_TypeDef
 *  \brief  Power Management 
 *  ========================================================================== */
typedef struct _ADI_PMG_TypeDef
{
    __IO     uint32_t INTR_CNTRL0;                   /*!< Power Supply Monitor Interrupt Enable */
    __IO     uint32_t PSM_STATUS;                    /*!< Power supply monitor status */
    __IO     uint32_t PWRMOD;                        /*!< Power Mode Register */
    __O      uint32_t PWRKEY;                        /*!< Key protection for PWRMOD */
    __I __C  uint32_t SHUTDOWN_STATUS;               /*!< SHUTDOWN Status Register */
    __IO     uint32_t SRAMRET;                       /*!< Control for Retention SRAM during HIBERNATE Mode */
    __I __C  uint8_t  RESERVED0[12];
    __IO     uint32_t SW_TST_LV0;                    /*!< LV Switch config */
    __IO     uint32_t SW_TST_LV1;                    /*!< LV Switch config2 (test) */
    __IO     uint32_t SW_TST_HV;                     /*!< HV Switch config */
    __IO     uint32_t TESTPROT;                      /*!< Test register lock */
    __IO     uint32_t LP_TST_REF0;                   /*!< Low Power Reference Test Register 0 */
    __IO     uint32_t PMG_TRIM;                      /*!< Trimming bits for the power management */
    __I __C  uint8_t  RESERVED1[4];
    __IO     uint32_t RSTSTA;                        /*!< Reset status */
    __IO     uint32_t CNTRL1;                        /*!< HPBUCK control */
    __IO     uint32_t WK_TST;                        /*!< test mode for wake up options */
    __IO     uint32_t ANA_TST1;                      /*!< Analog test */
    __IO     uint32_t ANA_TST2;                      /*!< Analog Test control for digital signals */
    __IO     uint32_t DIG_TST1;                      /*!< Digital Test Control */
    __IO     uint32_t HP_LDO_TST;                    /*!< High Power LDO Test Register */
} ADI_PMG_TypeDef;

/*!@}*/

/** @defgroup CLK Clocking  (CLK) Module
 *  Clocking 
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_CLK_TypeDef
 *  \brief  Clocking 
 *  ========================================================================== */
typedef struct _ADI_CLK_TypeDef
{
    __I __C  uint8_t  RESERVED0[12];
    __O      uint32_t OSCKEY;                        /*!< Key protection for OSCCTRL */
    __IO     uint32_t OSCCTRL;                       /*!< Oscillator control */
    __IO     uint32_t TOSCCTRL0;                     /*!< Oscillator control for test */
} ADI_CLK_TypeDef;

/*!@}*/

/** @defgroup PMGT Power Management  (PMGT) Module
 *  Power Management 
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_PMGT_TypeDef
 *  \brief  Power Management 
 *  ========================================================================== */
typedef struct _ADI_PMGT_TypeDef
{
    __I __C  uint8_t  RESERVED0[48];
    __IO     uint32_t VREG_TST;                      /*!< Test Register for Regulated Supply */
    __I __C  uint8_t  RESERVED1[4];
    __IO     uint32_t LP_TST_REF1;                   /*!< Low Power Reference Test 1 */
    __IO     uint32_t LP_TST_BLOCK0;                 /*!< Bits to control the LP Test Block */
    __IO     uint32_t LP_TST_BLOCK1;                 /*!< Bits to control the LP Test Block */
    __I __C  uint8_t  RESERVED2[28];
    __IO     uint32_t SRAMCNTRL;                     /*!< Control for SRAM parity and instruction SRAM */
    __IO     uint32_t SRAM_INIT_STATUS;              /*!< Initialization Status Register */
    __O      uint16_t CLEAR_LATCH_GPIOS;             /*!< when 0x58FA is written, then the GPIO releases the latched values after shutdown mode */
    __I __C  uint8_t  RESERVED3[2];
    __IO     uint32_t SCRATCHPAD_IMAGE;              /*!< The values written in this register will be saved in 3V when going to shutdown mode */
    __I __C  uint32_t SCRATCHPAD_3V_READ;            /*!< Read-Only register. The user can read the 3V value stored during shutdown mode */
} ADI_PMGT_TypeDef;

/*!@}*/

/** @defgroup CLKGT Clocking  (CLKGT) Module
 *  Clocking 
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_CLKGT_TypeDef
 *  \brief  Clocking 
 *  ========================================================================== */
typedef struct _ADI_CLKGT_TypeDef
{
    __IO     uint32_t CLKCON0;                       /*!< Misc clock settings */
    __IO     uint32_t CLKCON1;                       /*!< Clock dividers */
    __I __C  uint8_t  RESERVED0[4];
    __IO     uint32_t CLKCON3;                       /*!< System PLL */
    __I __C  uint8_t  RESERVED1[4];
    __IO     uint32_t CLKCON5;                       /*!< User clock gating control */
    __IO     uint32_t CLKSTAT0;                      /*!< Clocking status */
    __IO     uint32_t TCLKTEST;                      /*!< Clock test control */
    __IO     uint32_t TOSCCTRL1;                     /*!< Oscillator test/trim register */
    __IO     uint32_t TOSCCNFG0;                     /*!< Oscillator config register (Test) */
    __I __C  uint8_t  RESERVED2[4];
    __IO     uint32_t TPLLCNFG0;                     /*!< PLL config register (Test) */
    __IO     uint32_t THFRING;                       /*!< high frequency ring oscillator2 test register */
} ADI_CLKGT_TypeDef;

/*!@}*/

/** @defgroup PTI Parallel Test Interface (PTI) Module
 *  Parallel Test Interface
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_PTI_TypeDef
 *  \brief  Parallel Test Interface
 *  ========================================================================== */
typedef struct _ADI_PTI_TypeDef
{
    __IO     uint32_t RST_ISR_STARTADDR;             /*!< Reset ISR Start Address */
    __IO     uint32_t RST_STACK_POINTER;             /*!< Reset Stack Pointer */
    __IO     uint32_t PTI_CONTROL;                   /*!< Parallel Test Interface Control Register */
} ADI_PTI_TypeDef;

/*!@}*/

/** @defgroup cortex Cortex-M3 Interrupt Controller (cortex) Module
 *  Cortex-M3 Interrupt Controller
 *  @{
 */

/*! ==========================================================================
 *  \struct ADI_cortex_TypeDef
 *  \brief  Cortex-M3 Interrupt Controller
 *  ========================================================================== */
typedef struct _ADI_cortex_TypeDef
{
    __I __C  uint8_t  RESERVED0[4];
    __IO     uint32_t INTNUM;                        /*!< Interrupt Control Type */
    __I __C  uint8_t  RESERVED1[8];
    __IO     uint32_t STKSTA;                        /*!< Systick Control and Status */
    __IO     uint32_t STKLD;                         /*!< Systick Reload Value */
    __IO     uint32_t STKVAL;                        /*!< Systick Current Value */
    __IO     uint32_t STKCAL;                        /*!< Systick Calibration Value */
    __I __C  uint8_t  RESERVED2[224];
    __IO     uint32_t INTSETE0;                      /*!< IRQ0..31 Set_Enable */
    __IO     uint32_t INTSETE1;                      /*!< IRQ32..63 Set_Enable */
    __I __C  uint8_t  RESERVED3[120];
    __IO     uint32_t INTCLRE0;                      /*!< IRQ0..31 Clear_Enable */
    __IO     uint32_t INTCLRE1;                      /*!< IRQ32..63 Clear_Enable */
    __I __C  uint8_t  RESERVED4[120];
    __IO     uint32_t INTSETP0;                      /*!< IRQ0..31 Set_Pending */
    __IO     uint32_t INTSETP1;                      /*!< IRQ32..63 Set_Pending */
    __I __C  uint8_t  RESERVED5[120];
    __IO     uint32_t INTCLRP0;                      /*!< IRQ0..31 Clear_Pending */
    __IO     uint32_t INTCLRP1;                      /*!< IRQ32..63 Clear_Pending */
    __I __C  uint8_t  RESERVED6[120];
    __IO     uint32_t INTACT0;                       /*!< IRQ0..31 Active Bit */
    __IO     uint32_t INTACT1;                       /*!< IRQ32..63 Active Bit */
    __I __C  uint8_t  RESERVED7[248];
    __IO     uint32_t INTPRI0;                       /*!< IRQ0..3 Priority */
    __IO     uint32_t INTPRI1;                       /*!< IRQ4..7 Priority */
    __IO     uint32_t INTPRI2;                       /*!< IRQ8..11 Priority */
    __IO     uint32_t INTPRI3;                       /*!< IRQ12..15 Priority */
    __IO     uint32_t INTPRI4;                       /*!< IRQ16..19 Priority */
    __IO     uint32_t INTPRI5;                       /*!< IRQ20..23 Priority */
    __IO     uint32_t INTPRI6;                       /*!< IRQ24..27 Priority */
    __IO     uint32_t INTPRI7;                       /*!< IRQ28..31 Priority */
    __IO     uint32_t INTPRI8;                       /*!< IRQ32..35 Priority */
    __IO     uint32_t INTPRI9;                       /*!< IRQ36..39 Priority */
    __IO     uint32_t INTPRI10;                      /*!< IRQ40..43 Priority */
    __I __C  uint8_t  RESERVED8[2260];
    __IO     uint32_t INTCPID;                       /*!< CPUID Base */
    __IO     uint32_t INTSTA;                        /*!< Interrupt Control State */
    __IO     uint32_t INTVEC;                        /*!< Vector Table Offset */
    __IO     uint32_t INTAIRC;                       /*!< Application Interrupt/Reset Control */
    __IO     uint16_t INTCON0;                       /*!< System Control */
    __I __C  uint8_t  RESERVED9[2];
    __IO     uint32_t INTCON1;                       /*!< Configuration Control */
    __IO     uint32_t INTSHPRIO0;                    /*!< System Handlers 4-7 Priority */
    __IO     uint32_t INTSHPRIO1;                    /*!< System Handlers 8-11 Priority */
    __IO     uint32_t INTSHPRIO3;                    /*!< System Handlers 12-15 Priority */
    __IO     uint32_t INTSHCSR;                      /*!< System Handler Control and State */
    __IO     uint32_t INTCFSR;                       /*!< Configurable Fault Status */
    __IO     uint32_t INTHFSR;                       /*!< Hard Fault Status */
    __IO     uint32_t INTDFSR;                       /*!< Debug Fault Status */
    __IO     uint32_t INTMMAR;                       /*!< Mem Manage Address */
    __IO     uint32_t INTBFAR;                       /*!< Bus Fault Address */
    __IO     uint32_t INTAFSR;                       /*!< Auxiliary Fault Status */
    __IO     uint32_t INTPFR0;                       /*!< Processor Feature Register 0 */
    __IO     uint32_t INTPFR1;                       /*!< Processor Feature Register 1 */
    __IO     uint32_t INTDFR0;                       /*!< Debug Feature Register 0 */
    __IO     uint32_t INTAFR0;                       /*!< Auxiliary Feature Register 0 */
    __IO     uint32_t INTMMFR0;                      /*!< Memory Model Feature Register 0 */
    __IO     uint32_t INTMMFR1;                      /*!< Memory Model Feature Register 1 */
    __IO     uint32_t INTMMFR2;                      /*!< Memory Model Feature Register 2 */
    __IO     uint32_t INTMMFR3;                      /*!< Memory Model Feature Register 3 */
    __IO     uint32_t INTISAR0;                      /*!< ISA Feature Register 0 */
    __IO     uint32_t INTISAR1;                      /*!< ISA Feature Register 1 */
    __IO     uint32_t INTISAR2;                      /*!< ISA Feature Register 2 */
    __IO     uint32_t INTISAR3;                      /*!< ISA Feature Register 3 */
    __IO     uint32_t INTISAR4;                      /*!< ISA Feature Register 4 */
    __I __C  uint8_t  RESERVED10[396];
    __IO     uint32_t INTTRGI;                       /*!< Software Trigger Interrupt Register */
    __I __C  uint8_t  RESERVED11[204];
    __IO     uint32_t INTPID4;                       /*!< Peripheral Identification Register 4 */
    __IO     uint32_t INTPID5;                       /*!< Peripheral Identification Register 5 */
    __IO     uint32_t INTPID6;                       /*!< Peripheral Identification Register 6 */
    __IO     uint32_t INTPID7;                       /*!< Peripheral Identification Register 7 */
    __IO     uint32_t INTPID0;                       /*!< Peripheral Identification Bits7:0 */
    __IO     uint32_t INTPID1;                       /*!< Peripheral Identification Bits15:8 */
    __IO     uint32_t INTPID2;                       /*!< Peripheral Identification Bits16:23 */
    __IO     uint32_t INTPID3;                       /*!< Peripheral Identification Bits24:31 */
    __IO     uint32_t INTCID0;                       /*!< Component Identification Bits7:0 */
    __IO     uint32_t INTCID1;                       /*!< Component Identification Bits15:8 */
    __IO     uint32_t INTCID2;                       /*!< Component Identification Bits16:23 */
    __IO     uint32_t INTCID3;                       /*!< Component Identification Bits24:31 */
} ADI_cortex_TypeDef;

/*!@}*/

/* ******************************************************************************
 *    Peripheral Memory Map Declarations
 * *****************************************************************************/
/*!    @defgroup PMEMMAPDEC Peripheral Memory Map Declarations
 *     \addtogroup PMEMMAPDEC
 *     @{ */
#define ADI_bus_matrix_BASE            0x4004c800    /*!<  Base address of bus_matrix */
#define ADI_TMR0_BASE                  0x40000000    /*!<  Base address of TMR0 */
#define ADI_TMR1_BASE                  0x40000400    /*!<  Base address of TMR1 */
#define ADI_TMR2_BASE                  0x40000800    /*!<  Base address of TMR2 */
#define ADI_rtc0_BASE                  0x40001000    /*!<  Base address of rtc0 */
#define ADI_rtc1_BASE                  0x40001400    /*!<  Base address of rtc1 */
#define ADI_sys_BASE                   0x40002000    /*!<  Base address of sys */
#define ADI_wdt_BASE                   0x40002c00    /*!<  Base address of wdt */
#define ADI_i2cf_BASE                  0x40003000    /*!<  Base address of i2cf */
#define ADI_SPIH_BASE                  0x40024000    /*!<  Base address of SPIH */
#define ADI_SPI0_BASE                  0x40004000    /*!<  Base address of SPI0 */
#define ADI_SPI1_BASE                  0x40004400    /*!<  Base address of SPI1 */
#define ADI_uart_BASE                  0x40005000    /*!<  Base address of uart */
#define ADI_beeper_BASE                0x40005c00    /*!<  Base address of beeper */
#define ADI_RNG_BASE                   0x40040400    /*!<  Base address of RNG */
#define ADI_dma_BASE                   0x40010000    /*!<  Base address of dma */
#define ADI_FLASH_BASE                 0x40018000    /*!<  Base address of FLASH */
#define ADI_FLASH_CACHE_BASE           0x40018058    /*!<  Base address of FLASH_CACHE */
#define ADI_FLASH_DFT_BASE             0x4001808c    /*!<  Base address of FLASH_DFT */
#define ADI_FLASH_TEST_BASE            0x400180c4    /*!<  Base address of FLASH_TEST */
#define ADI_gpio_BASE                  0x40020000    /*!<  Base address of gpio */
#define ADI_crypto_BASE                0x40044000    /*!<  Base address of crypto */
#define ADI_sport_BASE                 0x40038000    /*!<  Base address of sport */
#define ADI_crc_BASE                   0x40040000    /*!<  Base address of crc */
#define ADI_PMG_BASE                   0x4004c000    /*!<  Base address of PMG */
#define ADI_EXTINT_BASE                0x4004c080    /*!<  Base address of EXTINT */
#define ADI_CLK_BASE                   0x4004c100    /*!<  Base address of CLK */
#define ADI_PMGT_BASE                  0x4004c200    /*!<  Base address of PMGT */
#define ADI_CLKGT_BASE                 0x4004c300    /*!<  Base address of CLKGT */
#define ADI_PTI_BASE                   0x4004cd00    /*!<  Base address of PTI */
#define ADI_cortex_BASE                0xe000e000    /*!<  Base address of cortex */

/*!    @} */

/* ******************************************************************************
 *    Peripheral Pointer Declarations
 * *****************************************************************************/
/*!    @Defgroup Pptrdec Peripheral Pointer Declarations
 *     \Addtogroup Pptrdec
 *     @{ */
#define pADI_bus_matrix                ((ADI_bus_matrix_TypeDef *) ADI_bus_matrix_BASE ) /*!<  Pointer to  (bus_matrix) */
#define pADI_TMR0                      ((ADI_TMR_TypeDef      *) ADI_TMR0_BASE       ) /*!<  Pointer to General Purpose Timer (TMR0) */
#define pADI_TMR1                      ((ADI_TMR_TypeDef      *) ADI_TMR1_BASE       ) /*!<  Pointer to General Purpose Timer (TMR1) */
#define pADI_TMR2                      ((ADI_TMR_TypeDef      *) ADI_TMR2_BASE       ) /*!<  Pointer to General Purpose Timer (TMR2) */
#define pADI_rtc0                      ((ADI_rtc_TypeDef      *) ADI_rtc0_BASE       ) /*!<  Pointer to Real-Time Clock (rtc0) */
#define pADI_rtc1                      ((ADI_rtc_TypeDef      *) ADI_rtc1_BASE       ) /*!<  Pointer to Real-Time Clock (rtc1) */
#define pADI_sys                       ((ADI_sys_TypeDef      *) ADI_sys_BASE        ) /*!<  Pointer to System Identification and Debug Enable (sys) */
#define pADI_wdt                       ((ADI_wdt_TypeDef      *) ADI_wdt_BASE        ) /*!<  Pointer to Watchdog Timer (wdt) */
#define pADI_i2cf                      ((ADI_i2cf_TypeDef     *) ADI_i2cf_BASE       ) /*!<  Pointer to I2C Master/Slave (i2cf) */
#define pADI_SPIH                      ((ADI_SPI_TypeDef      *) ADI_SPIH_BASE       ) /*!<  Pointer to  (SPIH) */
#define pADI_SPI0                      ((ADI_SPI_TypeDef      *) ADI_SPI0_BASE       ) /*!<  Pointer to  (SPI0) */
#define pADI_SPI1                      ((ADI_SPI_TypeDef      *) ADI_SPI1_BASE       ) /*!<  Pointer to  (SPI1) */
#define pADI_uart                      ((ADI_uart_TypeDef     *) ADI_uart_BASE       ) /*!<  Pointer to UART (uart) */
#define pADI_beeper                    ((ADI_beeper_TypeDef   *) ADI_beeper_BASE     ) /*!<  Pointer to  (beeper) */
#define pADI_RNG                       ((ADI_RNG_TypeDef      *) ADI_RNG_BASE        ) /*!<  Pointer to  (RNG) */
#define pADI_dma                       ((ADI_dma_TypeDef      *) ADI_dma_BASE        ) /*!<  Pointer to DMA (dma) */
#define pADI_FLASH                     ((ADI_FLASH_TypeDef    *) ADI_FLASH_BASE      ) /*!<  Pointer to Flash Controller (FLASH) */
#define pADI_FLASH_CACHE               ((ADI_FLASH_CACHE_TypeDef *) ADI_FLASH_CACHE_BASE) /*!<  Pointer to Cache Controller (FLASH_CACHE) */
#define pADI_FLASH_DFT                 ((ADI_FLASH_DFT_TypeDef *) ADI_FLASH_DFT_BASE  ) /*!<  Pointer to DFT Controller (FLASH_DFT) */
#define pADI_FLASH_TEST                ((ADI_FLASH_TEST_TypeDef *) ADI_FLASH_TEST_BASE ) /*!<  Pointer to Flash Controller (FLASH_TEST) */
#define pADI_gpio                      ((ADI_gpio_TypeDef     *) ADI_gpio_BASE       ) /*!<  Pointer to  (gpio) */
#define pADI_crypto                    ((ADI_crypto_TypeDef   *) ADI_crypto_BASE     ) /*!<  Pointer to crypto (crypto) */
#define pADI_sport                     ((ADI_sport_TypeDef    *) ADI_sport_BASE      ) /*!<  Pointer to  (sport) */
#define pADI_crc                       ((ADI_crc_TypeDef      *) ADI_crc_BASE        ) /*!<  Pointer to CRC (crc) */
#define pADI_PMG                       ((ADI_PMG_TypeDef      *) ADI_PMG_BASE        ) /*!<  Pointer to Power Management  (PMG) */
#define pADI_EXTINT                    ((ADI_EXTINT_TypeDef   *) ADI_EXTINT_BASE     ) /*!<  Pointer to External interrupt configuration (EXTINT) */
#define pADI_CLK                       ((ADI_CLK_TypeDef      *) ADI_CLK_BASE        ) /*!<  Pointer to Clocking  (CLK) */
#define pADI_PMGT                      ((ADI_PMGT_TypeDef     *) ADI_PMGT_BASE       ) /*!<  Pointer to Power Management  (PMGT) */
#define pADI_CLKGT                     ((ADI_CLKGT_TypeDef    *) ADI_CLKGT_BASE      ) /*!<  Pointer to Clocking  (CLKGT) */
#define pADI_PTI                       ((ADI_PTI_TypeDef      *) ADI_PTI_BASE        ) /*!<  Pointer to Parallel Test Interface (PTI) */
#define pADI_cortex                    ((ADI_cortex_TypeDef   *) ADI_cortex_BASE     ) /*!<  Pointer to Cortex-M3 Interrupt Controller (cortex) */

/*!    @} */

#endif
