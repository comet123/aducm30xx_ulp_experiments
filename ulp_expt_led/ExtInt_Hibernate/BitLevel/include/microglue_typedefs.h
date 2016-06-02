/* ================================================================================

     Created by   :   gsulliva
     Created on   :   2014 Jun 30, 12:47 EDT

     Project      :   microglue
     File         :   microglue_typedefs.h
     Description  :   C Register Structures

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

/** @defgroup ARBIT0 Arbitration Priority Configuration for FLASH and SRAM0 (ARBIT0) Register
 *  Arbitration Priority Configuration for FLASH and SRAM0 (ARBIT0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_bus_matrix_ARBIT0_Struct
 *! \brief  Arbitration Priority Configuration for FLASH and SRAM0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_bus_matrix_ARBIT0_t {
  union {
    struct {
      unsigned int FLSH_DCODE :  2;  /**< Flash priority for DCODE */
      unsigned int FLSH_SBUS  :  2;  /**< Flash priority for SBUS */
      unsigned int FLSH_DMA0  :  2;  /**< Flash priority for DMA0 */
      unsigned int reserved6   : 10;
      unsigned int SRAM0_DCODE :  2;  /**< SRAM0 priority for Dcode */
      unsigned int SRAM0_SBUS  :  2;  /**< SRAM0 priority for SBUS */
      unsigned int SRAM0_DMA0  :  2;  /**< SRAM0 priority for DMA0 */
      unsigned int reserved22  : 10;
    };
    uint32_t VALUE32;
  };
} ADI_bus_matrix_ARBIT0_t;

/*@}*/

/** @defgroup ARBIT1 Arbitration Priority Configuration for SRAM1 and SIP (ARBIT1) Register
 *  Arbitration Priority Configuration for SRAM1 and SIP (ARBIT1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_bus_matrix_ARBIT1_Struct
 *! \brief  Arbitration Priority Configuration for SRAM1 and SIP Register bit field structure
 * ========================================================================== */
typedef struct _ADI_bus_matrix_ARBIT1_t {
  union {
    struct {
      unsigned int SRAM1_DCODE :  2;  /**< SRAM1 priority for Dcode */
      unsigned int SRAM1_SBUS  :  2;  /**< SRAM1 priority for SBUS */
      unsigned int SRAM1_DMA0  :  2;  /**< SRAM1 priority for DMA0 */
      unsigned int reserved6   : 10;
      unsigned int SIP_DCODE   :  2;  /**< SIP priority for DCODE */
      unsigned int SIP_SBUS    :  2;  /**< SIP priority for SBUS */
      unsigned int SIP_DMA0    :  2;  /**< SIP priority for DMA0 */
      unsigned int reserved22  : 10;
    };
    uint32_t VALUE32;
  };
} ADI_bus_matrix_ARBIT1_t;

/*@}*/

/** @defgroup ARBIT2 Arbitration Priority Configuration for APB32 and APB16 (ARBIT2) Register
 *  Arbitration Priority Configuration for APB32 and APB16 (ARBIT2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_bus_matrix_ARBIT2_Struct
 *! \brief  Arbitration Priority Configuration for APB32 and APB16 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_bus_matrix_ARBIT2_t {
  union {
    struct {
      unsigned int APB32_DCODE :  2;  /**< APB32 priority for DCODE */
      unsigned int APB32_SBUS  :  2;  /**< APB32 priority for SBUS */
      unsigned int APB32_DMA0  :  2;  /**< APB32 priority for DMA0 */
      unsigned int reserved6   : 10;
      unsigned int APB16_DCODE :  2;  /**< APB16 priority for DCODE */
      unsigned int APB16_SBUS  :  2;  /**< APB16 priority for SBUS */
      unsigned int APB16_DMA0  :  2;  /**< APB16 priority for DMA0 */
      unsigned int reserved22  : 10;
    };
    uint32_t VALUE32;
  };
} ADI_bus_matrix_ARBIT2_t;

/*@}*/

/** @defgroup ARBIT3 Arbitration Priority Configuration for APB16 priority for core and for DMA1 (ARBIT3) Register
 *  Arbitration Priority Configuration for APB16 priority for core and for DMA1 (ARBIT3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_bus_matrix_ARBIT3_Struct
 *! \brief  Arbitration Priority Configuration for APB16 priority for core and for DMA1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_bus_matrix_ARBIT3_t {
  union {
    struct {
      unsigned int APB16_CORE :  1;  /**< APB16 priority for CORE */
      unsigned int APB16_DMA1 :  1;  /**< APB16 priority for DMA1 */
      unsigned int reserved2       : 14;
      unsigned int APB16_4dma_CORE :  1;  /**< APB16 for dma priority for CORE */
      unsigned int APB16_4dma_DMA1 :  1;  /**< APB16 for dma priority for DMA1 */
      unsigned int reserved18      : 14;
    };
    uint32_t VALUE32;
  };
} ADI_bus_matrix_ARBIT3_t;

/*@}*/

/** @defgroup LD 16-bit load value (LD) Register
 *  16-bit load value (LD) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_LD_Struct
 *! \brief  16-bit load value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_LD_t {
  union {
    struct {
      unsigned int LOAD       : 16;  /**< Load value */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_LD_t;

/*@}*/

/** @defgroup VAL 16-bit timer value (VAL) Register
 *  16-bit timer value (VAL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_VAL_Struct
 *! \brief  16-bit timer value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_VAL_t {
  union {
    struct {
      unsigned int VAL        : 16;  /**< Current count */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_VAL_t;

/*@}*/

/** @defgroup CON Control (CON) Register
 *  Control (CON) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_CON_Struct
 *! \brief  Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_CON_t {
  union {
    struct {
      unsigned int PRE        :  2;  /**< Prescaler */
      unsigned int UP         :  1;  /**< Count up */
      unsigned int MOD        :  1;  /**< Timer mode */
      unsigned int ENABLE     :  1;  /**< Timer enable */
      unsigned int CLK        :  2;  /**< Clock select */
      unsigned int RLD        :  1;  /**< Reload control */
      unsigned int EVENT      :  5;  /**< Event select range */
      unsigned int EVENTEN    :  1;  /**< Event select */
      unsigned int RESET_TIMER_EN :  1;  /**< Counter and prescale reset enable */
      unsigned int SYNC_BYPASS    :  1;  /**< Synchronization bypass */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_CON_t;

/*@}*/

/** @defgroup CLRI Clear Interrupt (CLRI) Register
 *  Clear Interrupt (CLRI) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_CLRI_Struct
 *! \brief  Clear Interrupt Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_CLRI_t {
  union {
    struct {
      unsigned int TMOUT      :  1;  /**< Clear timeout interrupt */
      unsigned int CAP        :  1;  /**< Clear captured event interrupt */
      unsigned int reserved2  : 14;
    };
    uint16_t VALUE16;
  };
} ADI_TMR_CLRI_t;

/*@}*/

/** @defgroup CAP Capture (CAP) Register
 *  Capture (CAP) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_CAP_Struct
 *! \brief  Capture Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_CAP_t {
  union {
    struct {
      unsigned int CAP        : 16;  /**< 16-bit captured value */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_CAP_t;

/*@}*/

/** @defgroup ALD 16-bit load value, asynchronous (ALD) Register
 *  16-bit load value, asynchronous (ALD) Register.
 *
 *  Only use when a synchronous clock source is selected (GPTCON[6:5]=00)
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_ALD_Struct
 *! \brief  16-bit load value, asynchronous Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_ALD_t {
  union {
    struct {
      unsigned int ALOAD      : 16;  /**< Load value, asynchronous */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_ALD_t;

/*@}*/

/** @defgroup AVAL 16-bit timer value, asynchronous (AVAL) Register
 *  16-bit timer value, asynchronous (AVAL) Register.
 *
 *  Only use when a synchronous clock source is selected (GPTCON[6:5]=00)
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_AVAL_Struct
 *! \brief  16-bit timer value, asynchronous Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_AVAL_t {
  union {
    struct {
      unsigned int AVAL       : 16;  /**< Counter value */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_AVAL_t;

/*@}*/

/** @defgroup STA Status (STA) Register
 *  Status (STA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_STA_Struct
 *! \brief  Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_STA_t {
  union {
    struct {
      unsigned int TMOUT      :  1;  /**< Timeout event occurred */
      unsigned int CAP        :  1;  /**< Capture event pending */
      unsigned int reserved2  :  4;
      unsigned int BUSY       :  1;  /**< Timer Busy */
      unsigned int PDOK       :  1;  /**< GPTCLRI synchronization */
      unsigned int COUNT_RESET_REQ :  1;  /**< Counter reset occurring */
      unsigned int reserved9       :  7;
    };
    uint16_t VALUE16;
  };
} ADI_TMR_STA_t;

/*@}*/

/** @defgroup PCON PWM Control Register (PCON) Register
 *  PWM Control Register (PCON) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_PCON_Struct
 *! \brief  PWM Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_PCON_t {
  union {
    struct {
      unsigned int MATCH_EN   :  1;  /**< PWM Match enabled */
      unsigned int IDLE_STATE :  1;  /**< PWM Idle State */
      unsigned int reserved2  : 14;
    };
    uint16_t VALUE16;
  };
} ADI_TMR_PCON_t;

/*@}*/

/** @defgroup PMAT PWM Match Value (PMAT) Register
 *  PWM Match Value (PMAT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_TMR_PMAT_Struct
 *! \brief  PWM Match Value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_TMR_PMAT_t {
  union {
    struct {
      unsigned int MATCH_VAL  : 16;  /**< PWM Match Value */
    };
    uint16_t VALUE16;
  };
} ADI_TMR_PMAT_t;

/*@}*/

/** @defgroup CR0 RTC Control 0 (CR0) Register
 *  RTC Control 0 (CR0) Register.
 *
 *  RTCCR0 is the primary of two control registers for the RTC, the other being RTCCR1. All mainstream RTC operations are enabled and disabled by the CPU using RTCCR0.

The RTCCR1 MMR is a secondary control register which expands the granularity of RTC control which is provided by RTCCR0.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_rtc_CR0_MOD60ALM
 *! \brief  Periodic, modulo-60 alarm time in prescaled RTC time units beyond a modulo-60 boundary (MOD60ALM) Enumerations
 *  ========================================================================= */
typedef enum
{
  RTC_CR0_EXAMPLE_1_THIRTY_TIME_UNITS_DECIMAL    = 30,  /**< Example of setting a modulo-60 periodic interrupt from the RTC to be issued to the CPU at 30 time units past a modulo-60 boundary. */
  RTC_CR0_EXAMPLE_2_FIFTYFIVE_TIME_UNITS_DECIMAL = 55   /**< Example of setting a modulo-60 periodic interrupt from the RTC to be issued to the CPU at 55 time units past a modulo-60 boundary. */
} ADI_rtc_CR0_MOD60ALM;


/*  =========================================================================
 *! \enum   ADI_rtc_CR0_DISPRESCALE
 *! \brief  Modify the prescaler in the RTC to prescale by 4. Used for ADI factory debug only (DISPRESCALE) Enumerations
 *  ========================================================================= */
typedef enum
{
  RTC_CR0_OPERATIONAL_SETTING = 0,  /**< Prescale the 32kHz RTC clock according to the PRESCALE2EXP field of RTCCR1.                             */
  RTC_CR0_DEBUG_SETTING       = 1   /**< Prescale the 32kHz RTC clock by 4, thereby overriding the PRESCALE2EXP field setting of the RTCCR1 MMR. */
} ADI_rtc_CR0_DISPRESCALE;


/* ==========================================================================
 *! \struct ADI_rtc_CR0_Struct
 *! \brief  RTC Control 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_CR0_t {
  union {
    struct {
      unsigned int CNTEN      :  1;  /**< Global enable for the RTC */
      unsigned int ALMEN      :  1;  /**< Enable the RTC alarm (absolute) operation */
      unsigned int ALMINTEN   :  1;  /**< Enable ALMINT-sourced alarm interrupts to the CPU */
      unsigned int TRMEN      :  1;  /**< Enable RTC digital trimming */
      unsigned int MOD60ALMEN :  1;  /**< Enable RTC modulo-60 counting of time past a modulo-60 boundary */
      unsigned int MOD60ALM   :  6;  /**< Periodic, modulo-60 alarm time in prescaled RTC time units beyond a modulo-60 boundary */
      unsigned int MOD60ALMINTEN :  1;  /**< Enable periodic MOD60ALMINT-sourced interrupts to the CPU */
      unsigned int ISOINTEN      :  1;  /**< Enable ISOINT-sourced interrupts to the CPU when isolation of the RTC power domain is activated and subsequently de-activated */
      unsigned int WPENDERRINTEN :  1;  /**< Enable WPENDERRINT-sourced interrupts to the CPU when an RTC register-write pending error occurs */
      unsigned int WSYNCINTEN    :  1;  /**< Enable WSYNCINT-sourced interrupts to the CPU */
      unsigned int WPENDINTEN    :  1;  /**< Enable WPENDINT-sourced interrupts to the CPU */
      unsigned int DISPRESCALE   :  1;  /**< Modify the prescaler in the RTC to prescale by 4. Used for ADI factory debug only */
      unsigned int reserved17    : 15;
    };
    uint32_t VALUE32;
  };
} ADI_rtc_CR0_t;

/*@}*/

/** @defgroup SR0 RTC Status 0 (SR0) Register
 *  RTC Status 0 (SR0) Register.
 *
 *  Information on RTC operation is made available to the CPU via three status registers, RTCSR0, RTCSR1 and RTCSR2. These registers include all flags related to CPU interrupt sources and error conditions within the RTC.
Note that there is a one-for-one correspondence between bit positions in RTCSR0 and RTCSR1 in terms of  their WSYNC<mmr> and WPEND<mmr> fields respectively. The WSYNC status for an MMR in RTCSR0 is located at the same bit position as the WPEND status for the same MMR in RTCSR1.
The distinction between WSYNC and WPEND is as follows. If a posted write transaction to an MMR in the RTC has completed execution and the effects of the transaction are visible to the processor via the RTC's APB port, the WSYNC status for the MMR in question is set to 1. Otherwise, if the effects of a posted transaction to an MMR are not yet visible, the WSYNC status for that MMR is 0.
WPEND, on the other hand, indicates whether there is room in the RTC to accept a new posted write to a given MMR. If a previously posted write to an MMR is awaiting execution and is occupying the drop point for posted writes to that MMR, the WPEND status of the MMR concerned is 1. Otherwise, if the RTC has room to accept a new posted write for an individual MMR, the WPEND status for that MMR is 0.
Posted writes take time to complete if they concern MMRs or MMR fields which are sourced in the 32kHz clock domain of the RTC. These MMRs (all fields) are as follows : RTCCR0, RTCCNT0, RTCCNT1, RTCALM0, RTCALM1, RTCALM2, RTCTRM, RTCCR1. The following sticky interrupt source fields of the RTCSR0 MMR are also sourced in the 32kHz domain : RTCFAIL, ALMINT, MOD60ALMINT, ISOINT. Any write-one-to-clear clearances of these interrupt source fields results in a posted write transaction for the RTCSR0 MMR. This determines the WPEND status of the RTCSR0 MMR itself.
Note that posted clearances of interrupt source fields in RTCSR0 are immediately visible by the processor, as the RTC masks them while it queues up and executes the write transaction to clear them. For this reason, the WSYNC status of RTCSR0 is always 1, to confirm that results of writes are immediately available to the CPU. That being said, the RTCSR0 does have a WPEND status which takes on a value of 1 if there is no room in the RTC to accept another posted write clearance to a field in the RTCSR0 MMR which is sourced in the 32kHz domain.
Note that the WPEND status and WSYNC status for the RTCSR0 are encompassing values for the MMR as a whole. There is no distinction made in these status values as to how many interrupt source fields are being cleared at the same time by a single posted write to RTCSR0.
The RTCSR1 status register, in comparison, is a read-only status register. RTCSR1 has no WPEND or WSYNC status values, as there are never any posted writes to the MMR. RTCSR2, on the other hand, is a read-write status register, containing RW1C interrupt sources but all of these reside wholly in the PCLK domain and can be cleared instantly. Hence no RTCSR2 has no WPEND or WSYNC values associated with it.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_SR0_Struct
 *! \brief  RTC Status 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_SR0_t {
  union {
    struct {
      unsigned int RTCFAIL    :  1;  /**< RTC failure interrupt source */
      unsigned int ALMINT     :  1;  /**< Alarm interrupt source */
      unsigned int MOD60ALMINT :  1;  /**< Modulo-60 RTC alarm interrupt source */
      unsigned int ISOINT      :  1;  /**< RTC power-domain isolation interrupt source */
      unsigned int WPENDERRINT :  1;  /**< Write pending error interrupt source */
      unsigned int WSYNCINT    :  1;  /**< Write synchronisation interrupt */
      unsigned int WPENDINT    :  1;  /**< Write pending interrupt */
      unsigned int WSYNCCR0    :  1;  /**< Synchronisation status of posted writes to RTCCR0 */
      unsigned int WSYNCSR0    :  1;  /**< Synchronisation status of posted clearances to interrupt sources in RTCSR0 */
      unsigned int WSYNCCNT0   :  1;  /**< Synchronisation status of posted writes to RTCCNT0 */
      unsigned int WSYNCCNT1   :  1;  /**< Synchronisation status of posted writes to RTCCNT1 */
      unsigned int WSYNCALM0   :  1;  /**< Synchronisation status of posted writes to RTCALM0 */
      unsigned int WSYNCALM1   :  1;  /**< Synchronisation status of posted writes to RTCALM1 */
      unsigned int WSYNCTRM    :  1;  /**< Synchronisation status of posted writes to RTCTRM */
      unsigned int ISOENB      :  1;  /**< Master enable for isolation of the always-on RTC power domain */
      unsigned int LOCK32KHZ   :  1;  /**< Lock status of the 32kHz crystal oscillator output clock */
      unsigned int WSYNCCR1    :  1;  /**< Synchronisation status of posted writes to RTCCR1 */
      unsigned int WSYNCALM2   :  1;  /**< Synchronisation status of posted writes to RTCALM2 */
      unsigned int reserved18  : 14;
    };
    uint32_t VALUE32;
  };
} ADI_rtc_SR0_t;

/*@}*/

/** @defgroup SR1 RTC Status 1 (SR1) Register
 *  RTC Status 1 (SR1) Register.
 *
 *  Information on RTC operation is made available to the CPU via three status registers, RTCSR0,  RTCSR1 and RTCSR2. These registers include all flags related to CPU interrupt sources and error conditions within the RTC.
Note that there is a one-for-one correspondence in bit positions in RTCSR0 and RTCSR1 for their WSYNC<mmr> and WPEND<mmr> fields respectively. The WSYNC status for an MMR in RTCSR0 is located at the same bit position as the WPEND status for the same MMR in RTCSR1.
The distinction between WSYNC and WPEND is as follows. If a posted write transaction to an MMR in the RTC has completed execution and the effects of the transaction are visible to the processor via the RTC's APB port, the WSYNC status for the MMR in question is set to 1. Otherwise, if the effects of a posted transaction to an MMR are not yet visible, the WSYNC status for that MMR is 0.
WPEND, on the other hand, indicates whether there is room in the RTC to accept a new posted write to a given MMR. If a previously posted write to an MMR is awaiting execution and is occupying the drop point for posted writes to that MMR, the WPEND status of the MMR concerned is 1. Otherwise, if the RTC has room to accept a new posted write for an individual MMR, the WPEND status for that MMR is 0.
Posted writes take time to complete if they concern MMRs or MMR fields which are sourced in the 32kHz clock domain of the RTC. These MMRs (all fields) are as follows : RTCCR, RTCCNT0, RTCCNT1, RTCALM0, RTCALM1, RTCALM2, RTCTRM and RTCCR1. The following sticky interrupt source fields of the RTCSR0 MMR are also sourced in the 32kHz domain : RTCFAIL, ALMINT, MOD60ALMINT, ISOINT. Any write-one-to-clear clearances of these interrupt source fields results in a posted write transaction for the RTCSR0 MMR. This determines the WPEND status of the RTCSR0 MMR itself.
Note that posted clearances of interrupt source fields in RTCSR0 are immediately visible by the processor, as the RTC masks them while it queues up and executes the write transaction to clear them. For this reason, the WSYNC status of RTCSR0 is always 1, to confirm that results of writes are immediately available to the CPU. That being said, the RTCSR0 does have a WPEND status which takes on a value of 1 if there is no room in the RTC to accept another posted write clearance to a field in the RTCSR0 MMR which is sourced in the 32kHz domain.
Note that the WPEND status and WSYNC status for the RTCSR0 are encompassing values for the MMR as a whole. There is no distinction made in these status values as to how many interrupt source fields are being cleared at the same time by a single posted write to RTCSR0.
The RTCSR1 status register, in comparison, is a read-only status register. RTCSR1 has no WSYNC or WPEND status values, as there are never any posted writes to the MMR.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_SR1_Struct
 *! \brief  RTC Status 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_SR1_t {
  union {
    struct {
      unsigned int DBGPTR     :  3;  /**< Debug address pointer */
      unsigned int WERRCODE   :  4;  /**< Identifier for the source of a write synchronisation error */
      unsigned int WPENDCR0   :  1;  /**< Pending status of posted writes to RTCCR0 */
      unsigned int WPENDSR0   :  1;  /**< Pending status of posted clearances of interrupt sources in RTCSR0 */
      unsigned int WPENDCNT0  :  1;  /**< Pending status of posted writes to RTCCNT0 */
      unsigned int WPENDCNT1  :  1;  /**< Pending status of posted writes to RTCCNT1 */
      unsigned int WPENDALM0  :  1;  /**< Pending status of posted writes to RTCALM0 */
      unsigned int WPENDALM1  :  1;  /**< Pending status of posted writes to RTCALM1 */
      unsigned int WPENDTRM   :  1;  /**< Pending status of posted writes to RTCTRM */
      unsigned int DISPRESCSRALE_MIRROR :  1;  /**< Mirror of the DISPRESCALE field of RTCCR0 */
      unsigned int DBGWDOG              :  1;  /**< Indicator that the transaction lock watchdog is currently active */
      unsigned int WPENDCR1             :  1;  /**< Pending status of posted writes to RTCCR1 */
      unsigned int WPENDALM2            :  1;  /**< Pending status of posted writes to RTCALM2 */
      unsigned int reserved18           : 14;
    };
    uint32_t VALUE32;
  };
} ADI_rtc_SR1_t;

/*@}*/

/** @defgroup CNT0 RTC Count 0 (CNT0) Register
 *  RTC Count 0 (CNT0) Register.
 *
 *  RTCCNT0 contains the lower 16 bits of the RTC counter which maintains a real-time count in elapsed prescaled RTC time units.
The instantaneous value of RTCCNT0 can be read back by the CPU. The CPU can also redefine the value in this register. In this case, the RTC will continue its real-time count from the redefined value.
Any write to RTCCNT0 will pend until a corresponding write to RTCCNT1 is carried out by the CPU, so that the combined 32-bit count redefinition can be executed as a single transaction.
 RTCCNT0 and RTCCNT1 can be written in either order, but paired, twin writes must be carried out by the CPU to have any effect on the RTC count.
A paired write to RTCCNT0 and RTCCNT1 (in whichever order) zeroes the prescaler in the RTC and thus causes a redefinition of elapsed time by the CPU to align exactly with newly-created modulo-1 and modulo-60 boundaries.
 Such a redefinition also causes the RTC to create a trim boundary and initiate a new trim interval. When the RTC count is redefined by the CPU, no coincident trim adjustment of the count is carried out.
The RTC supports on-the-fly redefinition of RTCCNT0 and RTCCNT1 while CNTEN is active. Alternatively, the CPU can disable the RTC (by first taking CNTEN inactive) while redefining these registers.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_CNT0_Struct
 *! \brief  RTC Count 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_CNT0_t {
  union {
    struct {
      unsigned int RTCCNT0    : 16;  /**< Lower 16 prescaled (non-fractional) bits of the RTC real-time count. */
      unsigned int RTCCNT1_MIRROR : 16;  /**< Mirror of RTCCNT1. */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_CNT0_t;

/*@}*/

/** @defgroup CNT1 RTC Count 1 (CNT1) Register
 *  RTC Count 1 (CNT1) Register.
 *
 *  RTCCNT1 contains the upper 16 bits of the RTC counter which maintains a real-time count in elapsed prescaled RTC time units.

The instantaneous value of RTCCNT1 can be read back by the CPU. The CPU can also redefine the value in this register. In this case, the RTC will continue its real-time count from the redefined value.

Any write to RTCCNT1 will pend until a corresponding write to RTCCNT0 is carried out by the CPU, so that the combined 32-bit count redefinition can be executed as a single transaction. RTCCNT1 and RTCCNT0 can be written in either order, but paired, twin writes must be carried out by the CPU to have any effect on the RTC count.

A paired write to RTCCNT1 and RTCCNT0 (in whichever order) zeroes the prescaler in the RTC and thus causes a redefinition of elapsed time by the CPU to align exactly with newly-created modulo-1 and modulo-60 boundaries. Such a redefinition also causes the RTC to create a trim boundary and initiate a new trim interval. When the RTC count is redefined by the CPU, no coincident trim adjustment of the count is carried out.

The RTC supports on-the-fly redefinition of RTCCNT1 and RTCCNT0 while CNTEN is active. Alternatively, the CPU can disable the RTC (by first taking CNTEN inactive) while redefining these registers.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_CNT1_Struct
 *! \brief  RTC Count 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_CNT1_t {
  union {
    struct {
      unsigned int RTCCNT1    : 16;  /**< Upper 16 prescaled (non-fractional) bits of the RTC real-time count. */
    };
    uint16_t VALUE16;
  };
} ADI_rtc_CNT1_t;

/*@}*/

/** @defgroup ALM0 RTC Alarm 0 (ALM0) Register
 *  RTC Alarm 0 (ALM0) Register.
 *
 *  RTCALM0 contains the lower 16 bits of the *non-fractional* (i.e. prescaled) RTC alarm target time value, where the overall alarm is defined as {RTCALM1, RTCALM0} POINT {RTCALM2}.

Any write to RTCALM0 will pend (i.e. stayed execution, with write data held in a staging-post buffer) until corresponding writes to RTCALM1 and RTCALM2 are carried out by the CPU, so that the combined 47-bit alarm redefinition can be executed as a single transaction. RTCALM0, RTCALM1 and RTCALM2 can be written in any order, but co-ordinated, triple writes (one write to each of the three MMRs) must be carried out by the CPU to have any effect on the RTC alarm.


Note that RTCALM0 can be written to regardless of whether ALMEN or CNTEN is active in the RTCCR0 register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_ALM0_Struct
 *! \brief  RTC Alarm 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_ALM0_t {
  union {
    struct {
      unsigned int RTCALM0    : 16;  /**< Lower 16 prescaled (i.e. non-fractional) bits of the RTC alarm target time. */
      unsigned int RTCALM1_MIRROR : 16;  /**< Mirror of RTCALM1. */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_ALM0_t;

/*@}*/

/** @defgroup ALM1 RTC Alarm 1 (ALM1) Register
 *  RTC Alarm 1 (ALM1) Register.
 *
 *  RTCALM1 contains the upper 16 bits of the *non-fractional* (i.e. prescaled) RTC alarm target time value., where the overall alarm is defined as {RTCALM1, RTCALM0} POINT {RTCALM2}.

Any write to RTCALM1 will pend (i.e. stayed execution, with write data held in a staging-post buffer) until corresponding writes to RTCALM0 and RTCALM2 are carried out by the CPU, so that the combined 47-bit alarm redefinition can be executed as a single transaction. RTCALM0, RTCALM1 and RTCALM2 can be written in any order, but co-ordinated, triple writes (one write to each of the three MMRs) must be carried out by the CPU to have any effect on the RTC alarm.


Note that RTCALM1 can be written to regardless of whether ALMEN or CNTEN is active in the RTCCR0 register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_ALM1_Struct
 *! \brief  RTC Alarm 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_ALM1_t {
  union {
    struct {
      unsigned int RTCALM1    : 16;  /**< Upper 16 prescaled (i.e. non-fractional) bits of the RTC alarm target time. */
    };
    uint16_t VALUE16;
  };
} ADI_rtc_ALM1_t;

/*@}*/

/** @defgroup TRM RTC Trim (TRM) Register
 *  RTC Trim (TRM) Register.
 *
 *  RTCTRM contains the trim value and interval for a periodic adjustment of the RTC count value to track time with the required accuracy. Trimming can be enabled and disabled via the TRMEN bit in the RTCCR0 control register. For trimming to occur, the global enable for the RTC, CNTEN in the RTCCR0 register, must also be active.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_TRM_Struct
 *! \brief  RTC Trim Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_TRM_t {
  union {
    struct {
      unsigned int TRMVAL     :  3;  /**< Trim value in prescaled RTC time units to be added or subtracted from the RTC count at the end of a periodic interval selected by TRMIVL */
      unsigned int TRMADD     :  1;  /**< Trim polarity */
      unsigned int TRMIVL     :  2;  /**< Trim interval in prescaled RTC time units */
      unsigned int TRMIVL2EXPMIN :  4;  /**< Minimum power-of-two interval of prescaled RTC time units which TRMIVL can select */
      unsigned int reserved10    :  6;
    };
    uint16_t VALUE16;
  };
} ADI_rtc_TRM_t;

/*@}*/

/** @defgroup GWY RTC Gateway (GWY) Register
 *  RTC Gateway (GWY) Register.
 *
 *  RTCGWY is a gateway MMR address through which the CPU can order actions to be taken within the RTC. The CPU does this by writing specific keys to RTCGWY. Note that RTCGWY reads back as all zeros.
The RTC supports the following independent, software-keyed commands :-
-	(i) Cancel all posted and executing write transactions in the RTC with immediate effect.
-	(ii) Capture a sticky snapshot of the {RTCCNT1, RTCCNT0, RTCCNT2} MMRs into {RTCSNAP1, RTCSNAP0, RTCSNAP2}.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_GWY_Struct
 *! \brief  RTC Gateway Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_GWY_t {
  union {
    struct {
      unsigned int SOFTWARE_KEY : 16;  /**< Software-keyed command issued by the CPU. */
    };
    uint16_t VALUE16;
  };
} ADI_rtc_GWY_t;

/*@}*/

/** @defgroup DBG RTC Debug Access : ADI Factory Use Only (DBG) Register
 *  RTC Debug Access : ADI Factory Use Only (DBG) Register.
 *
 *  RTCDBG is an MMR which acts as a key-controlled, protected, debug-access portal and is for use only during ADI factory debug. 
RTCDBG fulfills the following roles :-
(i) WRITE UNLOCKING FUNCTION : By writing two special unlock keys in succession over the APB to RTCDBG, special access to extra debug features within the RTC is subsequently granted for one further (third) APB access (read or write). The grant is automatically revoked on the third APB transaction.
(ii) DEBUG VISIBILITY READ-BACK : Provided debug access has been unlocked as described in (i) above, an APB read of RTCDBG will return on PRDATA the values of those internal RTC signals which are selected by the DBGPTR field of RTCCR.
(iii) WRITE TARGET FOR SOFTWARE UNLOCKING OF LOCKED RTC TRANSACTIONS : Provided debug access has been unlocked as described in (i) above, an APB write of RTC_SW_UNLOCK_TRANS_KEY (16'hde67) will unlock all RTC write transactions which are currently waiting for a handshake from the 32kHz clock domain to confirm completion.
(iv) WRITE TARGET FOR SOFTWARE ENABLING AND CONFIGURING A TRANSACTION LOCK WATCHDOG :  Provided debug access has been unlocked as described in (i) above, an APB write whose 12 LSBs contain RTC_WATCHDOG_CONFIG_KEY (12'hf9b) will enable the 4 MSBs of the write to be interpreted as a watchdog configuration code. 
The purpose of the watchdog is to guard against interminably-locked APB write transactions which are waiting in vain for a missed handshake from the 32kHz clock domain. The watchdog is an ADI-only debug feature. If the watchdog is enabled (by configuring a non-zero count-down starting point for the watchdog), the RTC will record a write synchronisation error via WSYNCERR if the watchdog times out. In such an event, WERRCODE will reflect a watchdog time-out at the source of the error.
The watchdog if invoked by software, must be configured to take account of the round-trip servicing delay for an APB write transaction, bearing in mind the frequency being used for PCLK and how much higher it is than 32kHz. Also, any intermittent loss of lock by the 32kHz will delay the transaction lock time and the watchdog configuration will have to include provision for this.
Any non-zero watchdog configuration is thermometer-decoded (and multiplied by 2^6) to define the starting value in PCLK cycles with which the watchdog down-counter is loaded upon servicing a pending write transaction. When the watchdog counter reaches one, a time-out event occurs and this is stickily retained by the WSYNCERR interrupt source. A *zero* watchdog configuration corresponds to a disabled watchdog, which is the default RTC setting, since the watchdog feature is for ADI factory use only.
Pseudo-code for the thermometer decode (abridged version) for the watchdog configuration is as follows :-
case (watchdog_config)
4'd1 : down-count starting value = {15'b0000_0000_0000_001, 7'b000_0000}; // NB : The 7 LSBs are constant zeros.
4'd2 : down-count starting value = {15'b0000_0000_0000_011, 7'b000_0000}; // NB : The 7 LSBs are constant zeros.
...
4'd14 : down-count starting value = {15'b0111_1111_1111_111, 7'b000_0000}; // NB : The 7 LSBs are constant zeros.
4'd15 : down-count starting value = {15'b1111_1111_1111_111, 7'b000_0000}; // NB : The 7 LSBs are constant zeros.
endcase
Note, for any of the restricted, ADI-only operations detailed above  : To unlock RTC debug access, carry out the following APB dual-key unlock sequence in strict (uninterrupted) succession :-
- APB write of RTC_DEBUG_UNLOCK_KEY1 (16'h9fde) to the RTCDBG MMR.
- APB write of RTC_DEBUG_UNLOCK_KEY2 (16'h86c9) to the RTCDBG MMR.
- This dual-key sequence then unlocks debug access for *ONE* immediately-succeeding APB access (read or write).
- Debug auto-relocks after the one granted APB access (i.e. the 3rd) in the above sequence is consumed, regardless of whether this access availed of the grant to access any restricted register fields.
(v) WRITE TARGET FOR CONFIGURING A DEBUG POINTER, "DBGPTR", TO STEER A DATA SUB-MUX FOR APB READS VIA THE RTCDBG MMR :-
DBGPTR is an internal pointer within the RTC which is for use only during ADI factory debug. It is a protected structure and requires RTC debug access to be unlocked first before it can be configured by writing a combined key-cum-configuration to the RTCDBG MMR.
DBGPTR acts as a sub-address select for a data sub-mux which allows debug data (internal RTC states and signals) to be read back over the APB from the RTCDBG memory-mapped register.
To change the value of DBGPTR, debug access to the RTC must first be unlocked. Likewise, to read back (via RTCDBG) what is being pointed to by DBGPTR, debug access must also be unlocked. The unlocking procedure is as follows.
To unlock RTC debug access, carry out the following APB dual-key unlock sequence in strict (uninterrupted) succession :-
- APB write of RTC_DEBUG_UNLOCK_KEY1 (16'h9fde) to the RTCDBG MMR.
- APB write of RTC_DEBUG_UNLOCK_KEY2 (16'h86c9) to the RTCDBG MMR.
- This dual-key sequence then unlocks debug access for *ONE* immediately-succeeding APB access (read or write)
- Debug auto-relocks after the one granted APB access (i.e. the 3rd) in the above sequence is consumed, regardless of whether this access availed of the grant to access any restricted register fields.
To configure DBGPTR, first unlock the RTC with the 2-key sequence described above. Then, in the 3rd APB write, avail of the granted debug access to write a combined 12-bit RTC_DEBUG_PTR_CONFIG_KEY of value 12'h6d6 positioned in the APB's PWDATA[11:0], along with the desired 3-bit DBGPTR value in PWDATA[14:12]. The value of PWDATA[15] has no effect and is a don't care.
DBGPTR can take on the following pointer values. Their effect on the read data sub-mux is shown further down.

// Pointer values for data sub-mux steering during debug-mode APB reads of the RTCDBG MMR...

// 

localparam [2:0] RTC_DEBUG_PTR_TRANS_FIFO    = 3'b000;

localparam [2:0] RTC_DEBUG_PTR_EVENT_MARKERS = 3'b001;

localparam [2:0] RTC_DEBUG_PTR_GATED_CLOCKS  = 3'b010;

localparam [2:0] RTC_DEBUG_PTR_SYNC_FLAGS    = 3'b011;

localparam [2:0] RTC_DEBUG_PTR_WDOG_POSTED   = 3'b100;

localparam [2:0] RTC_DEBUG_PTR_COMPRESS_CNT  = 3'b101;

localparam [2:0] RTC_DEBUG_PTR_LOCK_RST_ISO  = 3'b110;

localparam [2:0] RTC_DEBUG_PTR_DEFAULT       = 3'b111;



Note that the current value of DBGPTR can be read back through the DBGPTR field of the RTCSR1 MMR. This field is protected and can only be seen if RTC debug access is unlocked as described above and the subsequent (third), granted (for 1 APB transaction before auto-relocking) access is used to read back RTCSR1.





The DBGPTR pointer steers the debug read data sub-mux for PRDATA as shown below. (Refer to the RTL for the RTC to obtain the definition of the internal signals which are muxed out.) The muxed debug data is visible through reads of the RTCDBG MMR if and only if debug access is currently granted. In other words, reads of such data are only possible as the third APB transaction of a debug unlock sequence before auto-relocking once again occurs.





// *Provided* debug access is currently granted,


// return as APB read data (PRDATA) through the RTCDBG MMR the following RTC signals which are


// visible during debug...


//

case (p_rtc_debug_pointer_d)

    RTC_DEBUG_PTR_TRANS_FIFO :      p_prdata_next = {p_read_fifo_mmr,               // Bits [15:13] of PRDATA.

                                                     p_write_fifo_mmr_full,         // Bit 12.

                                                     p_write_fifo_mmr_empty,        // Bit 11.

                                                     p_fifo_read_ptr_d,             // Bits [10:7].

                                                     p_fifo_write_ptr_d,            // Bits [6:3].

                                                     p_sync_rtc_write_zone,         // Bit 2.

                                                     (&p_reset_deassert_count_d),   // Bit 1.

                                                     p_rtc_transaction_state_d      // Bit 0.

                                                     };



    RTC_DEBUG_PTR_EVENT_MARKERS :   p_prdata_next = {p_sync_rtc_write_zone,                 // Bit 15 of PRDATA.

                                                     p_rtctrm_locked_d,                     // Bit 14.

                                                     p_rtcalm_locked_d,                     // Bit 13.

                                                     p_rtccnt_locked_d,                     // Bit 12.

                                                     p_rtcsr_locked_d,                      // Bit 11.

                                                     p_rtccr_locked_d,                      // Bit 10.

                                                     p_sync_rtctrm_redefined_p2,            // Bit 9.

                                                     p_sync_rtcalm_redefined_p1,            // Bit 8.

                                                     p_sync_rtccnt_redefined_p2,            // Bit 7.

                                                     p_sync_rtcsr_redefined_p1,             // Bit 6.

                                                     p_sync_rtccr_redefined_p2,             // Bit 5.

                                                     p_read_fifo_mmr,                       // Bits [4:2].

                                                     p_reset_deassert,                      // Bit 1.

                                                     p_rtc_transaction_state_d              // Bit 0.

                                                     };



    RTC_DEBUG_PTR_GATED_CLOCKS  :   p_prdata_next = {p_muxed_rtc_wdata_d[1:0],              // Bits [15:14] of PRDATA.

                                                     p_rtctrm_gclk_enable_d,                // Bit 13.

                                                     p_rtcalm_gclk_enable_d,                // Bit 12.

                                                     p_rtccnt_gclk_enable_d,                // Bit 11.

                                                     p_rtcsr_isoint_gclk_enable_d,          // Bit 10.

                                                     p_rtcsr_lcdint_gclk_enable_d,          // Bit 9.

                                                     p_rtcsr_almint_gclk_enable_d,          // Bit 8.

                                                     p_rtcsr_rtcfail_gclk_enable_d,         // Bit 7.

                                                     p_rtcsr_gclk_enable_d,                 // Bit 6.

                                                     p_rtccr_gclk_enable_d,                 // Bit 5.

                                                     p_rtc_write_zone_gclk_enable,          // Bit 4.

                                                     p_sync_rtc_write_zone,                 // Bit 3.

                                                     p_reset_deassert_gclk_enable_d,        // Bit 2.

                                                     (&p_reset_deassert_count_d),           // Bit 1.

                                                     p_rtc_transaction_state_d              // Bit 0.

                                                     };



    RTC_DEBUG_PTR_SYNC_FLAGS    :   p_prdata_next = {p_pstatic_read_rtccnt_d[2:0],          // Bits [15:13] of PRDATA.

                                                     p_sync_rtc_iso_enable_n,               // Bit 12.

                                                     p_sync_trmivl_boundary,                // Bit 11.

                                                     p_sync_rtc_write_zone,                 // Bit 10.

                                                     p_sync_rtctrm_redefined_p2,            // Bit 9.

                                                     p_sync_rtcalm_redefined_p1,            // Bit 8.

                                                     p_sync_rtccnt_redefined_p2,            // Bit 7.

                                                     p_sync_rtcsr_isoint,                   // Bit 6.

                                                     p_sync_rtcsr_lcdint,                   // Bit 5.

                                                     p_sync_rtcsr_almint,                   // Bit 4.

                                                     p_sync_rtcsr_rtcfail,                  // Bit 3.

                                                     p_sync_rtcsr_redefined_p1,             // Bit 2.

                                                     p_sync_rtccr_redefined_p2,             // Bit 1.

                                                     p_sync_populated                       // Bit 0.

                                                     };

                                                     

    RTC_DEBUG_PTR_WDOG_POSTED   :   p_prdata_next = {p_pstatic_read_rtccnt_d[3:0],          // Bits [15:12] of PRDATA.

                                                     p_sync_rtc_write_zone,                 // Bit 11.

                                                     p_posted_clear_rtcsr_isoint,           // Bit 10.

                                                     p_posted_clear_rtcsr_lcdint,           // Bit 9.

                                                     p_posted_clear_rtcsr_almint,           // Bit 8.

                                                     p_posted_clear_rtcsr_rtcfail,          // Bit 7.

                                                     p_watchdog_timeout,                    // Bit 6.

                                                     (|p_lock_watchdog_d),                  // Bit 5.

                                                     p_read_fifo_mmr,                       // Bits [4:2]. 

                                                     (&p_reset_deassert_count_d),           // Bit 1.

                                                     p_rtc_transaction_state_d              // Bit 0.

                                                     };



    RTC_DEBUG_PTR_COMPRESS_CNT  :   p_prdata_next = {^p_pstatic_read_rtccnt_d[31:9],        // Bit 15 of PRDATA.

                                                     p_pstatic_read_rtccnt_d[8:0],          // Bits [14:6]

                                                     p_sync_rtc_write_zone,                 // Bit 5.

                                                     p_read_fifo_mmr,                       // Bits [4:2]. 

                                                     (&p_reset_deassert_count_d),           // Bit 1.

                                                     p_rtc_transaction_state_d              // Bit 0.

                                                     };

                                                                                            

    RTC_DEBUG_PTR_LOCK_RST_ISO  :   p_prdata_next = {p_pstatic_read_rtccnt_d[2:0],          // Bits [15:13].

                                                     p_sync_rtc_iso_enable_n,               // Bit 12.

                                                     p_sync_rtc_iso_n,                      // Bit 11.

                                                     p_sync_reset_n,                        // Bit 10.

                                                     p_sync_rtc_por_n,                      // Bit 9.

                                                     p_sync_32khz_lock,                     // Bit 8.

                                                     p_sync_populated,                      // Bit 7.

                                                     p_sync_rtc_write_zone,                 // Bit 6.

                                                     (  p_rtctrm_locked_d   ||              // Bit 5.

                                                        p_rtcalm_locked_d   ||              // ...continued.

                                                        p_rtccnt_locked_d   ||              // ...continued.

                                                        p_rtcsr_locked_d    ||              // ...continued.

                                                        p_rtccr_locked_d                    // ...continued.

                                                     ),

                                                     p_read_fifo_mmr,                       // Bits [4:2]. 

                                                     (&p_reset_deassert_count_d),           // Bit 1.

                                                     p_rtc_transaction_state_d              // Bit 0.

                                                     };

                                                     

    RTC_DEBUG_PTR_DEFAULT       :   p_prdata_next = {p_pstatic_read_rtccnt_d[6:0],          // Bits [15:9] of PRDATA.

                                                     p_rtccr[DISPRESCALE_FIELD],            // Bit 8.

                                                     p_sync_trmivl_boundary,                // Bit 7

                                                     p_sync_rtc_write_zone,                 // Bit 6.

                                                     (  p_rtctrm_locked_d   ||              // Bit 5.

                                                        p_rtcalm_locked_d   ||              // ...continued.

                                                        p_rtccnt_locked_d   ||              // ...continued.

                                                        p_rtcsr_locked_d    ||              // ...continued.

                                                        p_rtccr_locked_d                    // ...continued.

                                                     ),

                                                     p_read_fifo_mmr,                       // Bits [4:2]. 

                                                     (&p_reset_deassert_count_d),           // Bit 1.

                                                     p_rtc_transaction_state_d              // Bit 0.

                                                     };

endcase // case (p_rtc_debug_apb_pointer_d)
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_DBG_Struct
 *! \brief  RTC Debug Access : ADI Factory Use Only Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_DBG_t {
  union {
    struct {
      unsigned int RTCDBG     : 16;  /**< RTCDBG */
    };
    uint16_t VALUE16;
  };
} ADI_rtc_DBG_t;

/*@}*/

/** @defgroup CR1 RTC Control 1 (CR1) Register
 *  RTC Control 1 (CR1) Register.
 *
 *  The RTCCR1 control register expands the granularity of RTC control which is already available via RTCCR0.
RTCCR1 allows additional sticky interrupt sources in RTCSR2 to be enabled. These sources fan into the RTC peripheral interrupt to optionally tell the CPU when (i) the RTC count has changed, (ii) a prescaled (modulo-1)  gated-clock event has occurred to advance the RTC count, (iii) a trim boundary (and thus trimming) has occurred, (iv) the 32-bit RTC count in {RTCCNT1, RTCCNT0} has rolled over and (v) the modulo-60 version of the RTC count has rolled over.
RTCCR1 can also configure (vi) the degree of prescaling (any power of 2 from 0 to 15) of the crystal clock (notionally 32kHz) to define the RTC time units, (vii) 32-bit or 16-bit APB read data width configuration and (viii) whether the RTC should issue bus errors to an AMBA 3 APB bridge when the CPU attempts inappropriate MMR accesses.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_CR1_Struct
 *! \brief  RTC Control 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_CR1_t {
  union {
    struct {
      unsigned int RTCCNTINTEN :  1;  /**< Enable for the RTC count interrupt source, RTCCNTINT in RTCSR2 */
      unsigned int RTCPSINTEN  :  1;  /**< Enable for the prescaled, modulo-1 interrupt source, RTCPSINT in RTCSR2 */
      unsigned int RTCTRMINTEN :  1;  /**< Enable for the RTC trim interrupt source, RTCTRMINT in RTCSR2 */
      unsigned int RTCCNTROLLINTEN :  1;  /**< Enable for the RTC count roll-over interrupt source, RTCCNTROLLINT in RTCSR2 */
      unsigned int RTCCNTMOD60ROLLINTEN :  1;  /**< Enable for the RTC modulo-60 count roll-over interrupt source, RTCMOD60ROLLINT in RTCSR2 */
      unsigned int PRESCALE2EXP         :  4;  /**< Prescale power of 2 division factor for the RTC base clock */
      unsigned int APB32BITREADEN       :  1;  /**< Enable 32-bit APB read data for RTCCNT0, RTCALM0, RTCSNAP0, RTCMOD, RTCCR0 MMRs. */
      unsigned int APB3PSLVERREN        :  1;  /**< Enable AMBA 3 APB PSLVERR bus error signaling in the RTC. */
      unsigned int reserved11           :  5;
    };
    uint16_t VALUE16;
  };
} ADI_rtc_CR1_t;

/*@}*/

/** @defgroup SR2 RTC Status 2 (SR2) Register
 *  RTC Status 2 (SR2) Register.
 *
 *  RTCSR2 is a status register which further complements the status information provided by RTCSR0 and RTCSR1.
RTCSR2 contains optionally-enabled (via RTCCR1) sticky interrupt sources which are fan-in terms of the RTC peripheral interrupt. These tell the CPU when (i) the RTC count has changed, (ii) the prescaled gated clock which controls the advancement of  the RTC count has activated, (iii) a trim boundary (and thus trimming) has occurred, (iv) the 32-bit RTC count has rolled over and (v) the modulo-60 version of the RTC count has rolled over.
All interrupt sources in RTCSR2 are sticky, active high, level signals. Each one can individually be cleared by writing a value of 1'b1 to its bit position in RTCSR2.
RTCSR2 also contains mirrors of WSYNC and WPEND flags from RTCSR0 and RTCSR1 respectively to facilitate visibility of these fields when the RTC is configured via APB32BITREADEN in RTCCR1 to return *16-bit* APB read data. Note that the mirrors are active and visible in both 16-bit and 32-bit APB configurations.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_SR2_Struct
 *! \brief  RTC Status 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_SR2_t {
  union {
    struct {
      unsigned int RTCCNTINT  :  1;  /**< RTC count interrupt source */
      unsigned int RTCPSINT   :  1;  /**< RTC prescaled, modulo-1 boundary interrupt source */
      unsigned int RTCTRMINT  :  1;  /**< RTC trim interrupt source */
      unsigned int RTCCNTROLLINT :  1;  /**< RTC count roll-over interrupt source */
      unsigned int RTCCNTMOD60ROLLINT :  1;  /**< RTC modulo-60 count roll-over interrupt source */
      unsigned int RTCCNTROLL         :  1;  /**< RTC count roll-over */
      unsigned int RTCCNTMOD60ROLL    :  1;  /**< RTC count modulo-60 roll-over */
      unsigned int RTCTRMBDY_MIRROR   :  1;  /**< Mirror of the RTCTRMBDY field of RTCMOD */
      unsigned int reserved8          :  4;
      unsigned int WPENDCR1_MIRROR    :  1;  /**< Mirror of the WPENDCR1 field of RTCSR1 */
      unsigned int WPENDALM2_MIRROR   :  1;  /**< Mirror of the WPENDALM2 field of RTCSR1 */
      unsigned int WSYNCCR1_MIRROR    :  1;  /**< Mirror of the WSYNCCR1 field of RTCSR0 */
      unsigned int WSYNCALM2_MIRROR   :  1;  /**< Mirror of the WSYNCALM2 field of RTCSR0 */
    };
    uint16_t VALUE16;
  };
} ADI_rtc_SR2_t;

/*@}*/

/** @defgroup SNAP0 RTC Snapshot 0 (SNAP0) Register
 *  RTC Snapshot 0 (SNAP0) Register.
 *
 *  RTCSNAP0 is a sticky snapshot of the value of RTCCNT0. It is updated (along with its counterparts RTCSNAP1 and RTCSNAP2), thereby overwriting any previous value of {RTCSNAP1, RTCSNAP0} POINT {RTCSNAP2}, whenever either of the following two events occurs :-
-	(i) the CPU writes a snapshot request key of 16'h7627 to the RTCGWY MMR.
-	(ii) the radio Modem Configuration Register (MCR) block specifically requests a snapshot via a dedicated, sideband control input to the RTC. The positive edge of this control signal causes a new snapshot to be taken.
The combined value of {RTCSNAP1, RTCSNAP0} POINT {RTCSNAP2} is read back over the APB from the RTC by the CPU for use as a time stamp for an incoming RF data packet. This allows the CPU to adjust the RTC to realign its elapsed time count and trimming to the time implied by the contents of a received data packet and hence to the time base of the packet's originator.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_SNAP0_Struct
 *! \brief  RTC Snapshot 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_SNAP0_t {
  union {
    struct {
      unsigned int RTCSNAP0   : 16;  /**< Sticky snapshot of RTCCNT0 */
      unsigned int RTCSNAP1_MIRROR : 16;  /**< Mirror of RTCSNAP1 */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_SNAP0_t;

/*@}*/

/** @defgroup SNAP1 RTC Snapshot 1 (SNAP1) Register
 *  RTC Snapshot 1 (SNAP1) Register.
 *
 *  RTCSNAP1 is a sticky snapshot of the value of RTCCNT1. It is updated (along with its counterparts RTCSNAP0 and RTCSNAP2), thereby overwriting any previous value of {RTCSNAP1, RTCSNAP0} POINT {RTCSNAP2}, whenever either of the following two events occurs :-
-	(i) the CPU writes a snapshot request key of 16'h7627 to the RTCGWY MMR.
-	(ii) the radio Modem Configuration Register (MCR) block specifically requests a snapshot via a dedicated, sideband control input to the RTC. The positive edge of this control signal causes a new snapshot to be taken.
The combined value of {RTCSNAP1, RTCSNAP0} POINT {RTCSNAP2} is read back over the APB from the RTC by the CPU for use as a time stamp for an incoming RF data packet. This allows the CPU to adjust the RTC to realign its elapsed time count and trimming to the time implied by the contents of a received data packet and hence to the time base of the packet's originator.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_SNAP1_Struct
 *! \brief  RTC Snapshot 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_SNAP1_t {
  union {
    struct {
      unsigned int RTCSNAP1   : 16;  /**< Sticky snapshot of RTCCNT1 */
    };
    uint16_t VALUE16;
  };
} ADI_rtc_SNAP1_t;

/*@}*/

/** @defgroup SNAP2 RTC Snapshot 2 (SNAP2) Register
 *  RTC Snapshot 2 (SNAP2) Register.
 *
 *  RTCSNAP2 is a sticky snapshot of the value of RTCCNT2. It is updated (along with its counterparts RTCSNAP1 and RTCSNAP2), thereby overwriting any previous value of {RTCSNAP1, RTCSNAP0} POINT {RTCSNAP2}, whenever either of the following two events occurs :-
-	(i) the CPU writes a snapshot request key of 16'h7627 to the RTCGWY MMR. 
-	(ii) the radio Modem Configuration Register (MCR) block specifically requests a snapshot via a dedicated, sideband control input to the RTC. The positive edge of this control signal causes a new snapshot to be taken.
The combined value of {RTCSNAP1, RTCSNAP0} POINT {RTCSNAP2} is read back over the APB from the RTC by the CPU for use as a time stamp for an incoming RF data packet. This allows the CPU to adjust the RTC to realign its elapsed time count and trimming to the time implied by the contents of a received data packet and hence to the time base of the packet's originator.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_SNAP2_Struct
 *! \brief  RTC Snapshot 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_SNAP2_t {
  union {
    struct {
      unsigned int RTCSNAP2   : 15;  /**< Sticky snapshot of RTCCNT2 */
      unsigned int reserved15      :  1;
      unsigned int RTCSNAP0_MIRROR : 16;  /**< Mirror of RTCSNAP0 */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_SNAP2_t;

/*@}*/

/** @defgroup MOD RTC Modulo (MOD) Register
 *  RTC Modulo (MOD) Register.
 *
 *  RTCMOD is a read-only register which makes available RTCCNTMOD60, which is the modulo-60 equivalent of the {RTCCNT1, RTCCNT0} count value. This modulo-60 value is equal to the displacement in prescaled RTC time units past the most recent modulo-60 roll-over event. A roll-over is a synonym for a modulo-60 boundary.
Boundaries are defined in the following way. The RTC realigns itself to create coincident modulo-60 and modulo-1 boundaries whenever either of the following events occurs : (i) the CPU writes a new pair of values to the RTCCNT1 and RTCCNT0 registers to redefine the elapsed time units count while the RTC is enabled and this posted twin write is subsequently executed or (ii) the CPU enables the RTC from a disabled state using the CNTEN field of RTCCR0.
Other read-only fields accessible via the RTCMOD MMR are the magnitude of the most recent increment to the RTC count, RTCINCR and confirmation as to whether this increment coincided with a trim boundary, RTCTRMBDY. Note that the same increment is applied by the RTC to both its absolute (32-bit) count and the modulo-60 equivalent.
To facilitate debug and to clarify the relationship between RTCCNTMOD60 and {RTCCNT1, RTCCNT0}, the upper bits of RTCMOD are padded out with the LSBs of {RTCCNT1, RTCCNT0}. This allows RTCCNTMOD60 and part of {RTCCNT1, RTCCNT0} to be read out at the same time and their alignment with each other to be understood.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_MOD_Struct
 *! \brief  RTC Modulo Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_MOD_t {
  union {
    struct {
      unsigned int RTCCNTMOD60 :  6;  /**< Modulo-60 value of the RTC count, {RTCCNT1, RTCCNT0} */
      unsigned int RTCINCR     :  4;  /**< Most recent increment value which has been added to the RTC count in {RTCCNT1, RTCCNT0} */
      unsigned int RTCTRMBDY   :  1;  /**< Trim boundary indicator that the most recent RTC count increment has coincided with trimming of the count value */
      unsigned int RTCCNT0_4TOZERO :  5;  /**< Mirror of RTCCNT0[5:0]. */
      unsigned int RTCCNT0_15TO5   : 11;  /**< Mirror of RTCCNT0[15:6]. */
      unsigned int RTCCNT1_4TOZERO :  5;  /**< Mirror of RTCCNT1[5:0]. */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_MOD_t;

/*@}*/

/** @defgroup CNT2 RTC Count 2 (CNT2) Register
 *  RTC Count 2 (CNT2) Register.
 *
 *  RTCCNT2 contains the *fractional* part of the RTC count, where the count is denominated in prescaled time units and is given by :  {RTCCNT1, RTCCNT0} POINT {RTCCNT2}. The overall resolution of the real-time count, including the fractional bits in RTCCNT2, is therefore one 32kHz clock period.

RTCCNT2 makes available over the APB a *read-only* view of the internal sequence count in the RTC prescaler as it steps its way (in units of one 32kHz period) from all zeros to all ones across the number of prescale sequence bits given by the PRESCALE2EXP field of the RTCCR1 MMR. By completely traversing such a sequence, the prescaler effectively advances the main (non-fractional) part of the RTC count in {RTCCNT1, RTCCNT0} by one prescaled time unit. The prescale sequence count thus equates to the fractional part of the main RTC count.

RTCCNT2 allows the processor to determine the real time down to an accuracy of one 32kHz period. This permits very tight alignment to the time base of RF received packets.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_CNT2_Struct
 *! \brief  RTC Count 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_CNT2_t {
  union {
    struct {
      unsigned int RTCCNT2    : 15;  /**< Fractional bits of the RTC real-time count */
      unsigned int reserved15     :  1;
      unsigned int RTCCNT0_MIRROR : 16;  /**< Mirror of RTCCNT0 */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_CNT2_t;

/*@}*/

/** @defgroup ALM2 RTC Alarm 2 (ALM2) Register
 *  RTC Alarm 2 (ALM2) Register.
 *
 *  RTCALM2 contains the *fractional* (i.e. non-prescaled) bits of the RTC alarm target time value, where the overall alarm is defined as {RTCALM1, RTCALM0} POINT {RTCALM2}.

Note that the number of valid bits of RTCALM2 equals the number of prescale bits specified by the PRESCALE2EXP field of the RTCCR1 MMR. If a bit position in RTCALM2 is set to one, such that this is incompatible with PRESCALE2EXP, the *whole* value of RTCALM2 is treated by the RTC as if it were zero.

Any write to RTCALM2 will pend (i.e. stayed execution, with write data held in a staging-post buffer) until corresponding writes to RTCALM0 and RTCALM1 are carried out by the CPU, so that the combined 47-bit alarm redefinition can be executed as a single transaction. RTCALM0, RTCALM1 and RTCALM2 can be written in any order, but co-ordinated, triple writes (one write to each of the three MMRs) must be carried out by the CPU to have any effect on the RTC alarm.

Note that RTCALM2 can be written to regardless of whether ALMEN or CNTEN is active in the RTCCR0 register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_rtc_ALM2_Struct
 *! \brief  RTC Alarm 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_rtc_ALM2_t {
  union {
    struct {
      unsigned int RTCALM2    : 15;  /**< Fractional (non-prescaled) bits of the RTC alarm target time */
      unsigned int reserved15     :  1;
      unsigned int RTCALM0_MIRROR : 16;  /**< Mirror of RTCALM0 */
    };
    uint32_t VALUE32;
  };
} ADI_rtc_ALM2_t;

/*@}*/

/** @defgroup ADIID ADI Identification (ADIID) Register
 *  ADI Identification (ADIID) Register.
 *
 *  ADI Cortex device identification.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sys_ADIID_Struct
 *! \brief  ADI Identification Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sys_ADIID_t {
  union {
    struct {
      unsigned int ADIID      : 16;
    };
    uint16_t VALUE16;
  };
} ADI_sys_ADIID_t;

/*@}*/

/** @defgroup CHIPID Chip Identifier (CHIPID) Register
 *  Chip Identifier (CHIPID) Register.
 *
 *  Chip identification.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sys_CHIPID_Struct
 *! \brief  Chip Identifier Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sys_CHIPID_t {
  union {
    struct {
      unsigned int REV        :  4;
      unsigned int PARTID     : 12;
    };
    uint16_t VALUE16;
  };
} ADI_sys_CHIPID_t;

/*@}*/

/** @defgroup SWDEN Serial Wire Debug Enable (SWDEN) Register
 *  Serial Wire Debug Enable (SWDEN) Register.
 *
 *  The SWDEN register is used to enable the Serial Wire Debug (SWD) interface. This register is reset upon an internal power on reset or an external pin reset. This register is not affected by a software reset.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sys_SWDEN_Struct
 *! \brief  Serial Wire Debug Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sys_SWDEN_t {
  union {
    struct {
      unsigned int SWDEN      : 16;
    };
    uint16_t VALUE16;
  };
} ADI_sys_SWDEN_t;

/*@}*/

/** @defgroup LOAD Load value (LOAD) Register
 *  Load value (LOAD) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_wdt_LOAD_Struct
 *! \brief  Load value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_LOAD_t {
  union {
    struct {
      unsigned int value      : 16;  /**< Load value */
    };
    uint16_t VALUE16;
  };
} ADI_wdt_LOAD_t;

/*@}*/

/** @defgroup CCOUNT Current count value (CCOUNT) Register
 *  Current count value (CCOUNT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_wdt_CCOUNT_Struct
 *! \brief  Current count value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_CCOUNT_t {
  union {
    struct {
      unsigned int value      : 16;  /**< Current count value */
    };
    uint16_t VALUE16;
  };
} ADI_wdt_CCOUNT_t;

/*@}*/

/** @defgroup CTRL Control (CTRL) Register
 *  Control (CTRL) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_wdt_CTRL_pmd
 *! \brief  Power Mode Disable (pmd) Enumerations
 *  ========================================================================= */
typedef enum
{
  WDT_CTRL_RUN     = 0,  /**< The watchdog timer will continue its count down while in hibernate or halted mode.                                                                                                                              */
  WDT_CTRL_SUSPEND = 1   /**< When hibernate or halted mode is entered, the watchdog counter will suspend its count down. As hibernate mode is exited, the count down will resume from its current count value (the count will not be reset). */
} ADI_wdt_CTRL_pmd;


/*  =========================================================================
 *! \enum   ADI_wdt_CTRL_pre
 *! \brief  Prescaler (pre) Enumerations
 *  ========================================================================= */
typedef enum
{
  WDT_CTRL_DIV1     = 0,  /**< source clock/1.             */
  WDT_CTRL_DIV16    = 1,  /**< source clock/16.            */
  WDT_CTRL_DIV256   = 2,  /**< source clock/256 (default). */
  WDT_CTRL_RESERVED = 3   /**< Reserved                    */
} ADI_wdt_CTRL_pre;


/* ==========================================================================
 *! \struct ADI_wdt_CTRL_Struct
 *! \brief  Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_CTRL_t {
  union {
    struct {
      unsigned int pmd        :  1;  /**< Power Mode Disable */
      unsigned int irq        :  1;  /**< Timer interrupt */
      unsigned int pre        :  2;  /**< Prescaler */
      unsigned int reserved4  :  1;
      unsigned int enable     :  1;  /**< Timer enable */
      unsigned int mode       :  1;  /**< Timer mode */
      unsigned int spare      :  1;  /**< Unused spare bit */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_wdt_CTRL_t;

/*@}*/

/** @defgroup RESTART Clear interrupt (RESTART) Register
 *  Clear interrupt (RESTART) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_wdt_RESTART_Struct
 *! \brief  Clear interrupt Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_RESTART_t {
  union {
    struct {
      unsigned int clrwdt     : 16;  /**< Clear watchdog */
    };
    uint16_t VALUE16;
  };
} ADI_wdt_RESTART_t;

/*@}*/

/** @defgroup RESETCTRL Reset Control Register (RESETCTRL) Register
 *  Reset Control Register (RESETCTRL) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_wdt_RESETCTRL_mode
 *! \brief  WDT reset configuration bit (mode) Enumerations
 *  ========================================================================= */
typedef enum
{
  WDT_RESETCTRL_POR_AND_RESET = 0,  /**< POR or System Reset resets WDT */
  WDT_RESETCTRL_POR_ONLY      = 1   /**< Only POR resets WDT            */
} ADI_wdt_RESETCTRL_mode;


/* ==========================================================================
 *! \struct ADI_wdt_RESETCTRL_Struct
 *! \brief  Reset Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_RESETCTRL_t {
  union {
    struct {
      unsigned int mode       :  1;  /**< WDT reset configuration bit */
      unsigned int reserved1  : 15;
    };
    uint16_t VALUE16;
  };
} ADI_wdt_RESETCTRL_t;

/*@}*/

/** @defgroup ACOUNT Value Register Async (ACOUNT) Register
 *  Value Register Async (ACOUNT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_wdt_ACOUNT_Struct
 *! \brief  Value Register Async Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_ACOUNT_t {
  union {
    struct {
      unsigned int value      : 16;  /**< current WDT count value. Unsynchronized to APB clock */
    };
    uint16_t VALUE16;
  };
} ADI_wdt_ACOUNT_t;

/*@}*/

/** @defgroup STATUS Status (STATUS) Register
 *  Status (STATUS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_wdt_STATUS_Struct
 *! \brief  Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_wdt_STATUS_t {
  union {
    struct {
      unsigned int irq        :  1;  /**< WDT Interrupt */
      unsigned int clr_irq    :  1;  /**< RESTART(clri) write sync in progress */
      unsigned int loading    :  1;  /**< LOAD write sync in progress */
      unsigned int counting   :  1;  /**< CTRL write sync in progress */
      unsigned int locked     :  1;  /**< Lock status bit */
      unsigned int ResetCtrl  :  1;  /**< ResetCtrl written and locked */
      unsigned int reserved6  : 10;
    };
    uint16_t VALUE16;
  };
} ADI_wdt_STATUS_t;

/*@}*/

/** @defgroup I2CFMCON Master control (I2CFMCON) Register
 *  Master control (I2CFMCON) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFMCON_Struct
 *! \brief  Master control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFMCON_t {
  union {
    struct {
      unsigned int MASEN      :  1;  /**< Master enable */
      unsigned int COMPLETE   :  1;  /**< Start back-off disable */
      unsigned int LOOPBACK   :  1;  /**< Internal loopback enable */
      unsigned int STRETCH    :  1;  /**< Stretch SCL enable */
      unsigned int IENMRX     :  1;  /**< Receive request interrupt enable */
      unsigned int IENMTX     :  1;  /**< Transmit request interrupt enable. */
      unsigned int IENALOST   :  1;  /**< Arbitration lost interrupt enable */
      unsigned int IENACK     :  1;  /**< ACK not received interrupt enable */
      unsigned int IENCMP     :  1;  /**< Transaction completed (or stop detected) interrupt enable */
      unsigned int MXMITDEC   :  1;  /**< Decrement master TX FIFO status when a byte has been transmitted */
      unsigned int MRXDMA     :  1;  /**< Enable master Rx DMA request */
      unsigned int MTXDMA     :  1;  /**< Enable master Tx DMA request */
      unsigned int BUS_CLR_EN :  1;  /**< Bus-Clear Enable */
      unsigned int PRESTOP_BUS_CLR :  1;  /**< Prestop Bus-Clear */
      unsigned int reserved14      :  2;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFMCON_t;

/*@}*/

/** @defgroup I2CFMSTA Master status (I2CFMSTA) Register
 *  Master status (I2CFMSTA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFMSTA_Struct
 *! \brief  Master status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFMSTA_t {
  union {
    struct {
      unsigned int MTXFSTA    :  2;  /**< Master Transmit FIFO status */
      unsigned int MTXREQ     :  1;  /**< When read is master Transmit request; when write is Clear master transmit interrupt bit */
      unsigned int MRXREQ     :  1;  /**< Master Receive request */
      unsigned int NACKADDR   :  1;  /**< ACK not received in response to an address */
      unsigned int ALOST      :  1;  /**< Arbitration lost */
      unsigned int MBUSY      :  1;  /**< Master busy */
      unsigned int NACKDATA   :  1;  /**< ACK not received in response to data write */
      unsigned int TCOMP      :  1;  /**< Transaction complete or stop detected */
      unsigned int MRXOF      :  1;  /**< Master Receive FIFO overflow */
      unsigned int LINEBUSY   :  1;  /**< Line is busy */
      unsigned int MSTOP      :  1;  /**< STOP driven by this I2C Master */
      unsigned int MTXUFLOW   :  1;  /**< Master Transmit Underflow */
      unsigned int SDA_FILTERED :  1;  /**< State of SDA Line */
      unsigned int SCL_FILTERED :  1;  /**< State of SCL Line */
      unsigned int reserved15   :  1;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFMSTA_t;

/*@}*/

/** @defgroup I2CFMRX Master receive data (I2CFMRX) Register
 *  Master receive data (I2CFMRX) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFMRX_Struct
 *! \brief  Master receive data Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFMRX_t {
  union {
    struct {
      unsigned int ICMRX      :  8;  /**< Master receive register */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFMRX_t;

/*@}*/

/** @defgroup I2CFMTX Master transmit data (I2CFMTX) Register
 *  Master transmit data (I2CFMTX) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFMTX_Struct
 *! \brief  Master transmit data Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFMTX_t {
  union {
    struct {
      unsigned int I2CMRX     :  8;  /**< Master transmit register */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFMTX_t;

/*@}*/

/** @defgroup I2CFMRXCNT Master receive data count (I2CFMRXCNT) Register
 *  Master receive data count (I2CFMRXCNT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFMRXCNT_Struct
 *! \brief  Master receive data count Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFMRXCNT_t {
  union {
    struct {
      unsigned int COUNT      :  8;  /**< Receive count */
      unsigned int EXTEND     :  1;  /**< Extended read */
      unsigned int reserved9  :  7;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFMRXCNT_t;

/*@}*/

/** @defgroup I2CFMCRXCNT Master current receive data count (I2CFMCRXCNT) Register
 *  Master current receive data count (I2CFMCRXCNT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFMCRXCNT_Struct
 *! \brief  Master current receive data count Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFMCRXCNT_t {
  union {
    struct {
      unsigned int COUNT      :  8;  /**< Current receive count */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFMCRXCNT_t;

/*@}*/

/** @defgroup I2CFADR1 1st master address byte (I2CFADR1) Register
 *  1st master address byte (I2CFADR1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFADR1_Struct
 *! \brief  1st master address byte Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFADR1_t {
  union {
    struct {
      unsigned int ADR1       :  8;  /**< Address byte 1 */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFADR1_t;

/*@}*/

/** @defgroup I2CFADR2 2nd master address byte (I2CFADR2) Register
 *  2nd master address byte (I2CFADR2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFADR2_Struct
 *! \brief  2nd master address byte Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFADR2_t {
  union {
    struct {
      unsigned int ADR2       :  8;  /**< Address byte 2 */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFADR2_t;

/*@}*/

/** @defgroup I2CFBYT Start byte (I2CFBYT) Register
 *  Start byte (I2CFBYT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFBYT_Struct
 *! \brief  Start byte Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFBYT_t {
  union {
    struct {
      unsigned int SBYTE      :  8;  /**< Start byte */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFBYT_t;

/*@}*/

/** @defgroup I2CFDIV Serial clock period divisor (I2CFDIV) Register
 *  Serial clock period divisor (I2CFDIV) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFDIV_Struct
 *! \brief  Serial clock period divisor Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFDIV_t {
  union {
    struct {
      unsigned int LOW        :  8;  /**< Serial clock low time */
      unsigned int HIGH       :  8;  /**< Serial clock high time */
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFDIV_t;

/*@}*/

/** @defgroup I2CFSCON Slave control (I2CFSCON) Register
 *  Slave control (I2CFSCON) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFSCON_Struct
 *! \brief  Slave control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFSCON_t {
  union {
    struct {
      unsigned int SLVEN      :  1;  /**< Slave enable */
      unsigned int ADR10EN    :  1;  /**< Enabled 10-bit addressing */
      unsigned int GCEN       :  1;  /**< General call enable */
      unsigned int HGCEN      :  1;  /**< Hardware general call enable */
      unsigned int GCSBCLR    :  1;  /**< General call status bit clear */
      unsigned int EARLYTXR   :  1;  /**< Early transmit request mode */
      unsigned int STRETCHSCL :  1;  /**< Stretch SCL enable */
      unsigned int NACK       :  1;  /**< NACK next communication */
      unsigned int IENSTOP    :  1;  /**< Stop condition detected interrupt enable */
      unsigned int IENSRX     :  1;  /**< Slave Receive request interrupt enable */
      unsigned int IENSTX     :  1;  /**< Slave Transmit request interrupt enable */
      unsigned int SXMITDEC   :  1;  /**< Decrement Slave Tx FIFO status when a byte has been transmitted */
      unsigned int IENREPST   :  1;  /**< Repeated start interrupt enable */
      unsigned int SRXDMA     :  1;  /**< Enable slave Rx DMA request */
      unsigned int STXDMA     :  1;  /**< Enable slave Tx DMA request */
      unsigned int reserved15 :  1;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFSCON_t;

/*@}*/

/** @defgroup I2CFSSTA Slave I2C Status/Error/IRQ (I2CFSSTA) Register
 *  Slave I2C Status/Error/IRQ (I2CFSSTA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFSSTA_Struct
 *! \brief  Slave I2C Status/Error/IRQ Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFSSTA_t {
  union {
    struct {
      unsigned int STXFSEREQ  :  1;  /**< Slave Tx FIFO Status or early request */
      unsigned int STXUR      :  1;  /**< Slave Transmit FIFO underflow */
      unsigned int STXREQ     :  1;  /**< When read is slave Transmit request(STXREQ); when write is clear slave transmit interrupt bit(slv_txint_clr) */
      unsigned int SRXREQ     :  1;  /**< Slave Receive request */
      unsigned int SRXOF      :  1;  /**< Slave Receive FIFO overflow */
      unsigned int NOACK      :  1;  /**< Ack not generated by the slave */
      unsigned int SBUSY      :  1;  /**< Slave busy */
      unsigned int GCINT      :  1;  /**< General call interrupt */
      unsigned int GCID       :  2;  /**< General ID */
      unsigned int STOP       :  1;  /**< Stop after start and matching address */
      unsigned int IDMAT      :  2;  /**< Device ID matched */
      unsigned int REPSTART   :  1;  /**< Repeated start and matching address */
      unsigned int START      :  1;  /**< Start and matching address */
      unsigned int reserved15 :  1;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFSSTA_t;

/*@}*/

/** @defgroup I2CFSRX Slave receive (I2CFSRX) Register
 *  Slave receive (I2CFSRX) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFSRX_Struct
 *! \brief  Slave receive Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFSRX_t {
  union {
    struct {
      unsigned int I2CSRX     :  8;  /**< Slave receive register */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFSRX_t;

/*@}*/

/** @defgroup I2CFSTX Slave transmit (I2CFSTX) Register
 *  Slave transmit (I2CFSTX) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFSTX_Struct
 *! \brief  Slave transmit Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFSTX_t {
  union {
    struct {
      unsigned int I2CSTX     :  8;  /**< Slave transmit register */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFSTX_t;

/*@}*/

/** @defgroup I2CFALT Hardware general call ID (I2CFALT) Register
 *  Hardware general call ID (I2CFALT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFALT_Struct
 *! \brief  Hardware general call ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFALT_t {
  union {
    struct {
      unsigned int ALT        :  8;  /**< Slave Alt */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFALT_t;

/*@}*/

/** @defgroup I2CFID0 1st slave address device ID (I2CFID0) Register
 *  1st slave address device ID (I2CFID0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFID0_Struct
 *! \brief  1st slave address device ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFID0_t {
  union {
    struct {
      unsigned int ID0        :  8;  /**< Slave device ID 0 */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFID0_t;

/*@}*/

/** @defgroup I2CFID1 2nd slave address device ID (I2CFID1) Register
 *  2nd slave address device ID (I2CFID1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFID1_Struct
 *! \brief  2nd slave address device ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFID1_t {
  union {
    struct {
      unsigned int ID1        :  8;  /**< Slave device ID 1 */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFID1_t;

/*@}*/

/** @defgroup I2CFID2 3rd slave address device ID (I2CFID2) Register
 *  3rd slave address device ID (I2CFID2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFID2_Struct
 *! \brief  3rd slave address device ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFID2_t {
  union {
    struct {
      unsigned int ID2        :  8;  /**< Slave device ID 2 */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFID2_t;

/*@}*/

/** @defgroup I2CFID3 4th slave address device ID (I2CFID3) Register
 *  4th slave address device ID (I2CFID3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFID3_Struct
 *! \brief  4th slave address device ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFID3_t {
  union {
    struct {
      unsigned int ID3        :  8;  /**< Slave device ID 3 */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFID3_t;

/*@}*/

/** @defgroup I2CFSTA Master and slave FIFO status (I2CFSTA) Register
 *  Master and slave FIFO status (I2CFSTA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFSTA_Struct
 *! \brief  Master and slave FIFO status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFSTA_t {
  union {
    struct {
      unsigned int STXFSTA    :  2;  /**< Slave transmit FIFO status */
      unsigned int SRXFSTA    :  2;  /**< Slave receive FIFO status */
      unsigned int MTXFSTA    :  2;  /**< Master transmit FIFO status */
      unsigned int MRXFSTA    :  2;  /**< Master receive FIFO status */
      unsigned int SFLUSH     :  1;  /**< Flush the slave transmit FIFO */
      unsigned int MFLUSH     :  1;  /**< Flush the master transmit FIFO */
      unsigned int reserved10 :  6;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFSTA_t;

/*@}*/

/** @defgroup I2CFSHCON Shared control (I2CFSHCON) Register
 *  Shared control (I2CFSHCON) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFSHCON_Struct
 *! \brief  Shared control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFSHCON_t {
  union {
    struct {
      unsigned int RESET      :  1;  /**< Reset START STOP detect circuit */
      unsigned int reserved1  : 15;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFSHCON_t;

/*@}*/

/** @defgroup I2CFTCTL Timing Control Register (I2CFTCTL) Register
 *  Timing Control Register (I2CFTCTL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFTCTL_Struct
 *! \brief  Timing Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFTCTL_t {
  union {
    struct {
      unsigned int THDATIN    :  5;  /**< Data In Hold Start */
      unsigned int reserved5  :  3;
      unsigned int FILTEROFF  :  1;  /**< Input Filter Control */
      unsigned int reserved9  :  7;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFTCTL_t;

/*@}*/

/** @defgroup I2CFASSCL Automatic stretch SCL register (I2CFASSCL) Register
 *  Automatic stretch SCL register (I2CFASSCL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_i2cf_I2CFASSCL_Struct
 *! \brief  Automatic stretch SCL Register bit field structure
 * ========================================================================== */
typedef struct _ADI_i2cf_I2CFASSCL_t {
  union {
    struct {
      unsigned int stretch_mode_mas :  4;  /**< master automatic stretch mode */
      unsigned int stretch_mode_slv :  4;  /**< slave automatic stretch mode */
      unsigned int timeout_sscl_mas :  1;  /**< master automatic stretch timeout */
      unsigned int timeout_sscl_slv :  1;  /**< slave automatic stretch timeout */
      unsigned int reserved10       :  6;
    };
    uint16_t VALUE16;
  };
} ADI_i2cf_I2CFASSCL_t;

/*@}*/

/** @defgroup STAT Status (STAT) Register
 *  Status (STAT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_STAT_Struct
 *! \brief  Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_STAT_t {
  union {
    struct {
      unsigned int IRQ        :  1;  /**< SPI Interrupt status */
      unsigned int XFRDONE    :  1;  /**< SPI transfer completion */
      unsigned int TXEMPTY    :  1;  /**< SPI Tx FIFO empty interrupt */
      unsigned int TXDONE     :  1;  /**< SPI Tx Done in read command mode */
      unsigned int TXUNDR     :  1;  /**< SPI Tx FIFO underflow */
      unsigned int TXIRQ      :  1;  /**< SPI Tx IRQ */
      unsigned int RXIRQ      :  1;  /**< SPI Rx IRQ */
      unsigned int RXOVR      :  1;  /**< SPI Rx FIFO overflow */
      unsigned int reserved8  :  3;
      unsigned int CS         :  1;  /**< CS Status */
      unsigned int CSERR      :  1;  /**< Detected a CS error condition in slave mode */
      unsigned int CSFALL     :  1;  /**< Detected a falling edge on CS, in slave CON mode */
      unsigned int CSRISE     :  1;  /**< Detected a rising edge on CS, in slave CON mode */
      unsigned int RDY        :  1;  /**< Detected an edge on Ready indicator for flow-control */
    };
    uint16_t VALUE16;
  };
} ADI_SPI_STAT_t;

/*@}*/

/** @defgroup RX Receive (RX) Register
 *  Receive (RX) Register.
 *
 *  This register allows access to the 8-deep receive FIFO.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_RX_Struct
 *! \brief  Receive Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_RX_t {
  union {
    struct {
      unsigned int BYTE1      :  8;  /**< 8-bit receive buffer */
      unsigned int BYTE2      :  8;  /**< 8-bit receive buffer, used only in DMA modes */
    };
    uint16_t VALUE16;
  };
} ADI_SPI_RX_t;

/*@}*/

/** @defgroup TX Transmit (TX) Register
 *  Transmit (TX) Register.
 *
 *  This register allows access to the 8-deep transmit FIFO.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_TX_Struct
 *! \brief  Transmit Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_TX_t {
  union {
    struct {
      unsigned int BYTE1      :  8;  /**< 8-bit transmit buffer */
      unsigned int BYTE2      :  8;  /**< 8-bit transmit buffer, used only in DMA modes */
    };
    uint16_t VALUE16;
  };
} ADI_SPI_TX_t;

/*@}*/

/** @defgroup DIV SPI baud rate selection (DIV) Register
 *  SPI baud rate selection (DIV) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_DIV_Struct
 *! \brief  SPI baud rate selection Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_DIV_t {
  union {
    struct {
      unsigned int VALUE      :  6;  /**< SPI clock divider */
      unsigned int reserved6  : 10;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_DIV_t;

/*@}*/

/** @defgroup CTL SPI configuration 1 (CTL) Register
 *  SPI configuration 1 (CTL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_CTL_Struct
 *! \brief  SPI configuration 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_CTL_t {
  union {
    struct {
      unsigned int SPIEN      :  1;  /**< SPI enable */
      unsigned int MASEN      :  1;  /**< Master mode enable */
      unsigned int CPHA       :  1;  /**< Serial clock phase mode */
      unsigned int CPOL       :  1;  /**< Serial Clock Polarity */
      unsigned int WOM        :  1;  /**< SPI Wired Or mode */
      unsigned int LSB        :  1;  /**< LSB first transfer enable */
      unsigned int TIM        :  1;  /**< SPI transfer and interrupt mode */
      unsigned int ZEN        :  1;  /**< Transmit zeros enable */
      unsigned int RXOF       :  1;  /**< SPIRX overflow overwrite enable */
      unsigned int OEN        :  1;  /**< Slave MISO output enable */
      unsigned int LOOPBACK   :  1;  /**< Loopback enable */
      unsigned int CON        :  1;  /**< Continuous transfer enable */
      unsigned int RFLUSH     :  1;  /**< SPI Rx FIFO Flush enable */
      unsigned int TFLUSH     :  1;  /**< SPI Tx FIFO Flush enable */
      unsigned int CSRST      :  1;  /**< Reset Mode for CSERR */
      unsigned int reserved15 :  1;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_CTL_t;

/*@}*/

/** @defgroup IEN SPI configuration 2 (IEN) Register
 *  SPI configuration 2 (IEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_IEN_Struct
 *! \brief  SPI configuration 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_IEN_t {
  union {
    struct {
      unsigned int IRQMODE    :  3;  /**< SPI IRQ mode bits */
      unsigned int reserved3  :  5;
      unsigned int CS         :  1;  /**< Enable interrupt on every CS edge in slave CON mode */
      unsigned int TXUNDR     :  1;  /**< Tx-underflow interrupt enable */
      unsigned int RXOVR      :  1;  /**< Rx-overflow interrupt enable */
      unsigned int RDY        :  1;  /**< Ready signal edge interrupt enable */
      unsigned int TXDONE     :  1;  /**< SPI transmit done interrupt enable */
      unsigned int XFRDONE    :  1;  /**< SPI transfer completion interrupt enable */
      unsigned int TXEMPTY    :  1;  /**< Tx-FIFO Empty interrupt enable */
      unsigned int reserved15 :  1;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_IEN_t;

/*@}*/

/** @defgroup CNT Transfer byte count (CNT) Register
 *  Transfer byte count (CNT) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_CNT_Struct
 *! \brief  Transfer byte count Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_CNT_t {
  union {
    struct {
      unsigned int VALUE      : 14;  /**< Transfer byte count */
      unsigned int reserved14 :  1;
      unsigned int FRAMECONT  :  1;  /**< Continue frame */
    };
    uint16_t VALUE16;
  };
} ADI_SPI_CNT_t;

/*@}*/

/** @defgroup DMA SPI DMA enable (DMA) Register
 *  SPI DMA enable (DMA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_DMA_Struct
 *! \brief  SPI DMA enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_DMA_t {
  union {
    struct {
      unsigned int EN         :  1;  /**< Enable DMA for data transfer */
      unsigned int TXEN       :  1;  /**< Enable transmit DMA request */
      unsigned int RXEN       :  1;  /**< Enable receive DMA request */
      unsigned int reserved3  : 13;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_DMA_t;

/*@}*/

/** @defgroup FIFO_STAT FIFO Status (FIFO_STAT) Register
 *  FIFO Status (FIFO_STAT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_FIFO_STAT_Struct
 *! \brief  FIFO Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_FIFO_STAT_t {
  union {
    struct {
      unsigned int TX         :  4;  /**< SPI Tx FIFO status */
      unsigned int reserved4  :  4;
      unsigned int RX         :  4;  /**< SPI Rx FIFO status */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_FIFO_STAT_t;

/*@}*/

/** @defgroup RD_CTL Read Control (RD_CTL) Register
 *  Read Control (RD_CTL) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_RD_CTL_Struct
 *! \brief  Read Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_RD_CTL_t {
  union {
    struct {
      unsigned int CMDEN      :  1;  /**< Read command enable */
      unsigned int OVERLAP    :  1;  /**< Tx/Rx Overlap mode */
      unsigned int TXBYTES    :  4;  /**< Transmit byte count minus 1 for read command */
      unsigned int reserved6  :  2;
      unsigned int THREEPIN   :  1;  /**< Three pin SPI mode */
      unsigned int reserved9  :  7;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_RD_CTL_t;

/*@}*/

/** @defgroup FLOW_CTL Flow Control (FLOW_CTL) Register
 *  Flow Control (FLOW_CTL) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_FLOW_CTL_Struct
 *! \brief  Flow Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_FLOW_CTL_t {
  union {
    struct {
      unsigned int MODE       :  2;  /**< Flow control mode */
      unsigned int reserved2  :  2;
      unsigned int RDYPOL     :  1;  /**< Polarity of RDY/MISO line */
      unsigned int reserved5  :  3;
      unsigned int RDBURSTSZ  :  4;  /**< Read data burst size minus 1 */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_FLOW_CTL_t;

/*@}*/

/** @defgroup WAIT_TMR Wait timer for flow control (WAIT_TMR) Register
 *  Wait timer for flow control (WAIT_TMR) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_WAIT_TMR_Struct
 *! \brief  Wait timer for flow control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_WAIT_TMR_t {
  union {
    struct {
      unsigned int VALUE      : 16;  /**< Wait timer for flow-control */
    };
    uint16_t VALUE16;
  };
} ADI_SPI_WAIT_TMR_t;

/*@}*/

/** @defgroup CS_CTL Chip-Select control for multi-slave connections (CS_CTL) Register
 *  Chip-Select control for multi-slave connections (CS_CTL) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_CS_CTL_Struct
 *! \brief  Chip-Select control for multi-slave connections Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_CS_CTL_t {
  union {
    struct {
      unsigned int SEL        :  4;  /**< Chip-Select control */
      unsigned int reserved4  : 12;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_CS_CTL_t;

/*@}*/

/** @defgroup CS_OVERRIDE Chip-Select Override (CS_OVERRIDE) Register
 *  Chip-Select Override (CS_OVERRIDE) Register.
 *
 *  This register is only used in master mode.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_CS_OVERRIDE_Struct
 *! \brief  Chip-Select Override Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_CS_OVERRIDE_t {
  union {
    struct {
      unsigned int CTL        :  2;  /**< CS Override Control */
      unsigned int reserved2  : 14;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_CS_OVERRIDE_t;

/*@}*/

/** @defgroup XFR_CNT Transferred Count (XFR_CNT) Register
 *  Transferred Count (XFR_CNT) Register.
 *
 *  This register allows access to the design's running transfer counter.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_SPI_XFR_CNT_Struct
 *! \brief  Transferred Count Register bit field structure
 * ========================================================================== */
typedef struct _ADI_SPI_XFR_CNT_t {
  union {
    struct {
      unsigned int BYTES      : 14;  /**< Number of bytes transferred over SPI. */
      unsigned int reserved14 :  2;
    };
    uint16_t VALUE16;
  };
} ADI_SPI_XFR_CNT_t;

/*@}*/

/** @defgroup COMTX Transmit Holding Register (COMTX) Register
 *  Transmit Holding Register (COMTX) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMTX_Struct
 *! \brief  Transmit Holding Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMTX_t {
  union {
    struct {
      unsigned int THR        :  8;  /**< Transmit Holding Register */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMTX_t;

/*@}*/

/** @defgroup COMRX Receive Buffer Register (COMRX) Register
 *  Receive Buffer Register (COMRX) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMRX_Struct
 *! \brief  Receive Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMRX_t {
  union {
    struct {
      unsigned int RBR        :  8;  /**< Receive Buffer Register */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMRX_t;

/*@}*/

/** @defgroup COMIEN Interrupt Enable (COMIEN) Register
 *  Interrupt Enable (COMIEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMIEN_Struct
 *! \brief  Interrupt Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMIEN_t {
  union {
    struct {
      unsigned int ERBFI      :  1;  /**< Receive buffer full interrupt */
      unsigned int ETBEI      :  1;  /**< Transmit buffer empty interrupt */
      unsigned int ELSI       :  1;  /**< Rx status interrupt */
      unsigned int EDSSI      :  1;  /**< Modem status interrupt */
      unsigned int EDMAT      :  1;  /**< DMA requests in transmit mode */
      unsigned int EDMAR      :  1;  /**< DMA requests in receive mode */
      unsigned int reserved6  : 10;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMIEN_t;

/*@}*/

/** @defgroup COMIIR Interrupt ID (COMIIR) Register
 *  Interrupt ID (COMIIR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMIIR_Struct
 *! \brief  Interrupt ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMIIR_t {
  union {
    struct {
      unsigned int NIRQ       :  1;  /**< Interrupt flag */
      unsigned int STA        :  2;  /**< Interrupt status */
      unsigned int reserved3  : 13;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMIIR_t;

/*@}*/

/** @defgroup COMLCR Line Control (COMLCR) Register
 *  Line Control (COMLCR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMLCR_Struct
 *! \brief  Line Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMLCR_t {
  union {
    struct {
      unsigned int WLS        :  2;  /**< Word Length Select */
      unsigned int STOP       :  1;  /**< Stop Bit */
      unsigned int PEN        :  1;  /**< Parity Enable */
      unsigned int EPS        :  1;  /**< Parity Select */
      unsigned int SP         :  1;  /**< Stick Parity */
      unsigned int BRK        :  1;  /**< Set Break */
      unsigned int reserved7  :  9;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMLCR_t;

/*@}*/

/** @defgroup COMMCR Modem Control (COMMCR) Register
 *  Modem Control (COMMCR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMMCR_Struct
 *! \brief  Modem Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMMCR_t {
  union {
    struct {
      unsigned int DTR        :  1;  /**< Data Terminal Ready */
      unsigned int RTS        :  1;  /**< Request to send */
      unsigned int OUT1       :  1;  /**< Output 1 */
      unsigned int OUT2       :  1;  /**< Output 2 */
      unsigned int LOOPBACK   :  1;  /**< Loopback mode */
      unsigned int reserved5  : 11;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMMCR_t;

/*@}*/

/** @defgroup COMLSR Line Status (COMLSR) Register
 *  Line Status (COMLSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMLSR_Struct
 *! \brief  Line Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMLSR_t {
  union {
    struct {
      unsigned int DR         :  1;  /**< Data Ready */
      unsigned int OE         :  1;  /**< Overrun Error */
      unsigned int PE         :  1;  /**< Parity Error */
      unsigned int FE         :  1;  /**< Framing Error */
      unsigned int BI         :  1;  /**< Break Indicator */
      unsigned int THRE       :  1;  /**< COMTX Empty */
      unsigned int TEMT       :  1;  /**< COMTX and Shift Register Empty Status */
      unsigned int reserved7  :  9;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMLSR_t;

/*@}*/

/** @defgroup COMMSR Modem Status (COMMSR) Register
 *  Modem Status (COMMSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMMSR_Struct
 *! \brief  Modem Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMMSR_t {
  union {
    struct {
      unsigned int DCTS       :  1;  /**< Delta CTS */
      unsigned int DDSR       :  1;  /**< Delta DSR */
      unsigned int TERI       :  1;  /**< Trailing Edge RI */
      unsigned int DDCD       :  1;  /**< Delta DCD */
      unsigned int CTS        :  1;  /**< Clear To Send */
      unsigned int DSR        :  1;  /**< Data Set Ready */
      unsigned int RI         :  1;  /**< Ring Indicator */
      unsigned int DCD        :  1;  /**< Data Carrier Detect */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMMSR_t;

/*@}*/

/** @defgroup COMSCR Scratch buffer (COMSCR) Register
 *  Scratch buffer (COMSCR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMSCR_Struct
 *! \brief  Scratch buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMSCR_t {
  union {
    struct {
      unsigned int SCR        :  8;  /**< Scratch */
      unsigned int reserved8  :  8;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMSCR_t;

/*@}*/

/** @defgroup COMMCFG sout modulation configuration (COMMCFG) Register
 *  sout modulation configuration (COMMCFG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMMCFG_Struct
 *! \brief  sout modulation configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMMCFG_t {
  union {
    struct {
      unsigned int MODCLK_CFG : 10;  /**< 38k modulation config */
      unsigned int reserved10 :  6;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMMCFG_t;

/*@}*/

/** @defgroup COMFBR Fractional Baud Rate (COMFBR) Register
 *  Fractional Baud Rate (COMFBR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMFBR_Struct
 *! \brief  Fractional Baud Rate Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMFBR_t {
  union {
    struct {
      unsigned int DIVN       : 11;  /**< Fractional baud rate N divide bits 0 to 2047. */
      unsigned int DIVM       :  2;  /**< Fractional baud rate M divide bits 1 to 3 */
      unsigned int reserved13 :  2;
      unsigned int FBEN       :  1;  /**< Fractional baud rate generator enable */
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMFBR_t;

/*@}*/

/** @defgroup COMDIV Baudrate divider (COMDIV) Register
 *  Baudrate divider (COMDIV) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMDIV_Struct
 *! \brief  Baudrate divider Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMDIV_t {
  union {
    struct {
      unsigned int DIV        : 16;  /**< Baud rate divider */
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMDIV_t;

/*@}*/

/** @defgroup COMCTL UART control register (COMCTL) Register
 *  UART control register (COMCTL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_uart_COMCTL_Struct
 *! \brief  UART control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_uart_COMCTL_t {
  union {
    struct {
      unsigned int DIS        :  1;  /**< UART disable control */
      unsigned int ForceClkOn :  1;  /**< Force UCLKg on */
      unsigned int reserved2  : 14;
    };
    uint16_t VALUE16;
  };
} ADI_uart_COMCTL_t;

/*@}*/

/** @defgroup CFG Beeper configuration (CFG) Register
 *  Beeper configuration (CFG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_beeper_CFG_Struct
 *! \brief  Beeper configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_beeper_CFG_t {
  union {
    struct {
      unsigned int SEQ_REPEAT :  8;  /**< Beeper Sequence Repeat value */
      unsigned int BEEP_EN    :  1;  /**< Beeper Enable */
      unsigned int reserved9       :  1;
      unsigned int IRQ_TONEA_START :  1;  /**< Tone A start IRQ */
      unsigned int IRQ_TONEA_END   :  1;  /**< Tone A end IRQ */
      unsigned int IRQ_TONEB_START :  1;  /**< Tone B start IRQ */
      unsigned int IRQ_TONEB_END   :  1;  /**< Tone B end IRQ */
      unsigned int IRQ_SEQ_NEAR_END :  1;  /**< Sequence 1 cycle from end IRQ */
      unsigned int IRQ_SEQ_END      :  1;  /**< Sequence end IRQ */
    };
    uint16_t VALUE16;
  };
} ADI_beeper_CFG_t;

/*@}*/

/** @defgroup STAT Beeper status (STAT) Register
 *  Beeper status (STAT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_beeper_STAT_Struct
 *! \brief  Beeper status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_beeper_STAT_t {
  union {
    struct {
      unsigned int SEQ_REMAIN :  8;  /**< Remaining tone-pair sequence iterations to play in SEQ mode */
      unsigned int BEEP_BUSY  :  1;  /**< Beeper is busy */
      unsigned int reserved9       :  1;
      unsigned int EVT_TONEA_START :  1;  /**< Tone A has started */
      unsigned int EVT_TONEA_END   :  1;  /**< Tone A has ended */
      unsigned int EVT_TONEB_START :  1;  /**< Tone B has started */
      unsigned int EVT_TONEB_END   :  1;  /**< Tone B has ended */
      unsigned int EVT_SEQ_NEAR_END :  1;  /**< Sequencer last tone-pair has started */
      unsigned int EVT_SEQ_END      :  1;  /**< Sequencer has ended */
    };
    uint16_t VALUE16;
  };
} ADI_beeper_STAT_t;

/*@}*/

/** @defgroup TONE_A Tone A Data (TONE_A) Register
 *  Tone A Data (TONE_A) Register.
 *
 *  Tone A is the first tone to play in Sequence Mode, and the only tone to play in Pulse Mode. Writing 0x0 to the DUR field while Tone A is playing will immediately terminate the tone. All other writes to BEEP_TONE_A affect the next play back of the tone only and do not affect the currently playing tone.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_beeper_TONE_A_Struct
 *! \brief  Tone A Data Register bit field structure
 * ========================================================================== */
typedef struct _ADI_beeper_TONE_A_t {
  union {
    struct {
      unsigned int DUR        :  8;  /**< Tone duration */
      unsigned int FREQ       :  7;  /**< Tone frequency */
      unsigned int DISABLE    :  1;  /**< Output disable */
    };
    uint16_t VALUE16;
  };
} ADI_beeper_TONE_A_t;

/*@}*/

/** @defgroup TONE_B Tone B Data (TONE_B) Register
 *  Tone B Data (TONE_B) Register.
 *
 *  Tone B is the second tone to play in Sequence Mode, and is not played Pulse Mode. Writing 0x0 to the DUR field while Tone B is playing will immediately terminate the tone. All other writes to BEEP_TONE_B affect the next play back of the tone only and do not affect the currently playing tone.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_beeper_TONE_B_Struct
 *! \brief  Tone B Data Register bit field structure
 * ========================================================================== */
typedef struct _ADI_beeper_TONE_B_t {
  union {
    struct {
      unsigned int DUR        :  8;  /**< Tone duration */
      unsigned int FREQ       :  7;  /**< Tone frequency */
      unsigned int DISABLE    :  1;  /**< Output disable */
    };
    uint16_t VALUE16;
  };
} ADI_beeper_TONE_B_t;

/*@}*/

/** @defgroup CTL RNG Control Register (CTL) Register
 *  RNG Control Register (CTL) Register.
 *
 *  The RNGCTL register is used to enable the random number generator.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_RNG_CTL_EN
 *! \brief  RNG Enable (EN) Enumerations
 *  ========================================================================= */
typedef enum
{
  RNG_CTL_DISABLE = 0,  /**< Disable the RNG */
  RNG_CTL_ENABLE  = 1   /**< Enable the RNG  */
} ADI_RNG_CTL_EN;


/*  =========================================================================
 *! \enum   ADI_RNG_CTL_SINGLE
 *! \brief  Generate a single number (SINGLE) Enumerations
 *  ========================================================================= */
typedef enum
{
  RNG_CTL_WORD   = 0,  /**< Buffer Word */
  RNG_CTL_SINGLE = 1   /**< Single Byte */
} ADI_RNG_CTL_SINGLE;


/* ==========================================================================
 *! \struct ADI_RNG_CTL_Struct
 *! \brief  RNG Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_RNG_CTL_t {
  union {
    struct {
      unsigned int EN         :  1;  /**< RNG Enable */
      unsigned int reserved1  :  2;
      unsigned int SINGLE     :  1;  /**< Generate a single number */
      unsigned int reserved4  : 12;
    };
    uint16_t VALUE16;
  };
} ADI_RNG_CTL_t;

/*@}*/

/** @defgroup LEN RNG Sample Length Register (LEN) Register
 *  RNG Sample Length Register (LEN) Register.
 *
 *  The RNGLEN register defines the number of samples to accumulate in the CRC register when generating a random number. The number of samples accumulated is the counter reload value scaled by 2^prescaler.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_RNG_LEN_Struct
 *! \brief  RNG Sample Length Register bit field structure
 * ========================================================================== */
typedef struct _ADI_RNG_LEN_t {
  union {
    struct {
      unsigned int RLD        : 12;  /**< Reload value for the sample counter */
      unsigned int PRE        :  4;  /**< Prescaler for the sample counter */
    };
    uint16_t VALUE16;
  };
} ADI_RNG_LEN_t;

/*@}*/

/** @defgroup STAT RNG Status Register (STAT) Register
 *  RNG Status Register (STAT) Register.
 *
 *  The RNGSTAT register indicates when the RNG has finished generating a random number.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_RNG_STAT_Struct
 *! \brief  RNG Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_RNG_STAT_t {
  union {
    struct {
      unsigned int RDY        :  1;  /**< Random number ready */
      unsigned int STUCK      :  1;  /**< Sampled data stuck high or low */
      unsigned int reserved2  : 14;
    };
    uint16_t VALUE16;
  };
} ADI_RNG_STAT_t;

/*@}*/

/** @defgroup DATA RNG Data Register (DATA) Register
 *  RNG Data Register (DATA) Register.
 *
 *  RNGDATA register provides the CPU with read-only access of the entropy accumulator (8-bit CRC) and data buffer. When the data buffer is not enabled, an 8-bit result is provided. When the data buffer is enabled, 32-bits (four 8-bit values) are provided. The contents of this register are valid when the RNGRDY bit is set. This register is reset when the RNGRDY bit is cleared. The RNGRDY bit is automatically cleared when this register is read and the CPU is not in debug halt. Reading this register by the CPU when RNGEN is set will cause a new random number to be generated.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_RNG_DATA_Struct
 *! \brief  RNG Data Register bit field structure
 * ========================================================================== */
typedef struct _ADI_RNG_DATA_t {
  union {
    struct {
      unsigned int DATA       :  8;  /**< Value of the CRC accumulator */
      unsigned int BUFF       : 24;  /**< Buffer for RNG data */
    };
    uint32_t VALUE32;
  };
} ADI_RNG_DATA_t;

/*@}*/

/** @defgroup OSCCNT Oscillator Count (OSCCNT) Register
 *  Oscillator Count (OSCCNT) Register.
 *
 *  The oscillator counter counts the number of ring oscillator cycles which occur during the generation of a random number. The oscillator counter is 28-bits. The oscillator counter will saturate at the maximum value to prevent overflow.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_RNG_OSCCNT_Struct
 *! \brief  Oscillator Count Register bit field structure
 * ========================================================================== */
typedef struct _ADI_RNG_OSCCNT_t {
  union {
    struct {
      unsigned int OSCCNT     : 28;  /**< Oscillator count */
      unsigned int reserved28 :  4;
    };
    uint32_t VALUE32;
  };
} ADI_RNG_OSCCNT_t;

/*@}*/

/** @defgroup OSCDIFF Oscillator Difference (OSCDIFF) Register
 *  Oscillator Difference (OSCDIFF) Register.
 *
 *  The oscillator difference register stores the difference in OSCCNT from the current value compared to the previous value (OSCCNT[n] - OSCCNT[n-1]). This difference is represented as a signed 8-bit value. It saturates at the maximum and minimum values. This can be used to reconstruct OSCCNT for the values currently in the RNGDATA buffer. This information can be used to compute the OSCCNT variance to check the health of the random number generator and ensure there is adequate entropy.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_RNG_OSCDIFF_Struct
 *! \brief  Oscillator Difference Register bit field structure
 * ========================================================================== */
typedef struct _ADI_RNG_OSCDIFF_t {
  union {
    struct {
      unsigned int DELTA      :  8;  /**< OSCCNT difference */
    };
    uint8_t VALUE8;
  };
} ADI_RNG_OSCDIFF_t;

/*@}*/

/** @defgroup DMASTA DMA Status (DMASTA) Register
 *  DMA Status (DMASTA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMASTA_Struct
 *! \brief  DMA Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMASTA_t {
  union {
    struct {
      unsigned int MENABLE    :  1;  /**< Enable status of the controller */
      unsigned int reserved1  :  3;
      unsigned int STATE      :  4;  /**< Current state of DMA controller */
      unsigned int reserved8  :  8;
      unsigned int CHNLSM1    :  5;  /**< Number of available DMA channels minus 1 */
      unsigned int reserved21 : 11;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMASTA_t;

/*@}*/

/** @defgroup DMACFG DMA Configuration (DMACFG) Register
 *  DMA Configuration (DMACFG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMACFG_Struct
 *! \brief  DMA Configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMACFG_t {
  union {
    struct {
      unsigned int MENABLE    :  1;  /**< Controller enable */
      unsigned int reserved1  : 31;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMACFG_t;

/*@}*/

/** @defgroup DMAPDBPTR DMA channel primary control data base pointer (DMAPDBPTR) Register
 *  DMA channel primary control data base pointer (DMAPDBPTR) Register.
 *
 *  The DMAPDBPTR register must be programmed to point to the primary channel control base pointer in the system memory. The amount of system memory that must be assigned to the DMA controller depends on the number of DMA channels used and whether the alternate channel control data structure is used. This register cannot be read when the DMA controller is in the reset state.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAPDBPTR_Struct
 *! \brief  DMA channel primary control data base pointer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAPDBPTR_t {
  union {
    struct {
      unsigned int CTRLBASEPTR : 32;  /**< Pointer to the base address of the primary data structure */
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAPDBPTR_t;

/*@}*/

/** @defgroup DMAADBPTR DMA channel alternate control data base pointer (DMAADBPTR) Register
 *  DMA channel alternate control data base pointer (DMAADBPTR) Register.
 *
 *  The DMAADBPTR read-only register returns the base address of the alternate channel control data structure. This register removes the necessity for application software to calculate the base address of the alternate data structure. This register cannot be read when the DMA controller is in the reset state.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAADBPTR_Struct
 *! \brief  DMA channel alternate control data base pointer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAADBPTR_t {
  union {
    struct {
      unsigned int ALTCBPTR   : 32;  /**< Base address of the alternate data structure */
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAADBPTR_t;

/*@}*/

/** @defgroup DMASWREQ DMA channel software request (DMASWREQ) Register
 *  DMA channel software request (DMASWREQ) Register.
 *
 *  The DMASWREQ register enables the generation of software DMA request. Each bit of the register represents the corresponding channel number in the DMA controller.  M is the number of DMA channels
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMASWREQ_Struct
 *! \brief  DMA channel software request Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMASWREQ_t {
  union {
    struct {
      unsigned int CHSWREQ    : 24;  /**< Generate software request */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMASWREQ_t;

/*@}*/

/** @defgroup DMARMSKSET DMA channel request mask set (DMARMSKSET) Register
 *  DMA channel request mask set (DMARMSKSET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMARMSKSET_Struct
 *! \brief  DMA channel request mask set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMARMSKSET_t {
  union {
    struct {
      unsigned int CHREQMSET  : 24;  /**< Mask requests from DMA channels */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMARMSKSET_t;

/*@}*/

/** @defgroup DMARMSKCLR DMA channel request mask clear (DMARMSKCLR) Register
 *  DMA channel request mask clear (DMARMSKCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMARMSKCLR_Struct
 *! \brief  DMA channel request mask clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMARMSKCLR_t {
  union {
    struct {
      unsigned int CHREQMCLR  : 24;  /**< Clear REQ_MASK_SET bits in DMARMSKSET */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMARMSKCLR_t;

/*@}*/

/** @defgroup DMAENSET DMA channel enable set (DMAENSET) Register
 *  DMA channel enable set (DMAENSET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAENSET_Struct
 *! \brief  DMA channel enable set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAENSET_t {
  union {
    struct {
      unsigned int CHENSET    : 24;  /**< Enable DMA channels */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAENSET_t;

/*@}*/

/** @defgroup DMAENCLR DMA channel enable clear (DMAENCLR) Register
 *  DMA channel enable clear (DMAENCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAENCLR_Struct
 *! \brief  DMA channel enable clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAENCLR_t {
  union {
    struct {
      unsigned int CHENCLR    : 24;  /**< Disable DMA channels */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAENCLR_t;

/*@}*/

/** @defgroup DMAALTSET DMA channel primary-alternate set (DMAALTSET) Register
 *  DMA channel primary-alternate set (DMAALTSET) Register.
 *
 *  The DMAALTSET register enables the user to configure the appropriate DMA channel to use the alternate control data structure. Reading the register returns the status of which data structure is in use for the corresponding DMA channel. Each bit of the register represents the corresponding channel number in the DMA controller.  

Note: The DMA controller sets/clears these bits automatically as necessary for ping-pong, memory scatter-gather and peripheral scatter-gather transfers.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAALTSET_Struct
 *! \brief  DMA channel primary-alternate set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAALTSET_t {
  union {
    struct {
      unsigned int CHPRIALTSET : 24;  /**< Control struct status / select alt struct */
      unsigned int reserved24  :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAALTSET_t;

/*@}*/

/** @defgroup DMAALTCLR DMA channel primary-alternate clear (DMAALTCLR) Register
 *  DMA channel primary-alternate clear (DMAALTCLR) Register.
 *
 *  The DMAALTCLR write-only register enables the user to configure the appropriate DMA channel to use the primary control data structure. Each bit of the register represents the corresponding channel number in the DMA controller.  

Note: The DMA controller sets/clears these bits automatically as necessary for ping-pong, memory scatter-gather and peripheral scatter-gather transfers.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAALTCLR_Struct
 *! \brief  DMA channel primary-alternate clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAALTCLR_t {
  union {
    struct {
      unsigned int CHPRIALTCLR : 24;  /**< Select primary data struct */
      unsigned int reserved24  :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAALTCLR_t;

/*@}*/

/** @defgroup DMAPRISET DMA channel priority set (DMAPRISET) Register
 *  DMA channel priority set (DMAPRISET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAPRISET_Struct
 *! \brief  DMA channel priority set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAPRISET_t {
  union {
    struct {
      unsigned int CHPRISET   : 24;  /**< Configure channel for high priority */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAPRISET_t;

/*@}*/

/** @defgroup DMAPRICLR DMA channel priority clear (DMAPRICLR) Register
 *  DMA channel priority clear (DMAPRICLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAPRICLR_Struct
 *! \brief  DMA channel priority clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAPRICLR_t {
  union {
    struct {
      unsigned int CHPRICLR   : 24;  /**< Configure channel for default priority level */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAPRICLR_t;

/*@}*/

/** @defgroup DMAERRCHNLCLR DMA Per Channel Error Clear (DMAERRCHNLCLR) Register
 *  DMA Per Channel Error Clear (DMAERRCHNLCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAERRCHNLCLR_Struct
 *! \brief  DMA Per Channel Error Clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAERRCHNLCLR_t {
  union {
    struct {
      unsigned int CHNL_ERR_CLR : 24;  /**< Per channel Bus error status/ Per channel bus error clear */
      unsigned int reserved24   :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAERRCHNLCLR_t;

/*@}*/

/** @defgroup DMAERRCLR DMA bus error clear (DMAERRCLR) Register
 *  DMA bus error clear (DMAERRCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAERRCLR_Struct
 *! \brief  DMA bus error clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAERRCLR_t {
  union {
    struct {
      unsigned int ERRCLR     : 24;  /**< Bus error status */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAERRCLR_t;

/*@}*/

/** @defgroup DMAINVALIDDESCCLR DMA Per Channel Invalid Descriptor Clear (DMAINVALIDDESCCLR) Register
 *  DMA Per Channel Invalid Descriptor Clear (DMAINVALIDDESCCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAINVALIDDESCCLR_Struct
 *! \brief  DMA Per Channel Invalid Descriptor Clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAINVALIDDESCCLR_t {
  union {
    struct {
      unsigned int CHNL_INVALID_CLR : 24;  /**< Per channel Invalid Descriptor status/ Per channel Invalid descriptor status clear */
      unsigned int reserved24       :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAINVALIDDESCCLR_t;

/*@}*/

/** @defgroup DMABSSET DMA channel bytes swap enable set (DMABSSET) Register
 *  DMA channel bytes swap enable set (DMABSSET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMABSSET_Struct
 *! \brief  DMA channel bytes swap enable set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMABSSET_t {
  union {
    struct {
      unsigned int CHBSWAPSET : 24;  /**< Byte swap status */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMABSSET_t;

/*@}*/

/** @defgroup DMABSCLR DMA channel bytes swap enable clear (DMABSCLR) Register
 *  DMA channel bytes swap enable clear (DMABSCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMABSCLR_Struct
 *! \brief  DMA channel bytes swap enable clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMABSCLR_t {
  union {
    struct {
      unsigned int CHBSWAPCLR : 24;  /**< Disable byte swap */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMABSCLR_t;

/*@}*/

/** @defgroup DMASRCADSSET DMA channel source address decrement enable set (DMASRCADSSET) Register
 *  DMA channel source address decrement enable set (DMASRCADSSET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMASRCADSSET_Struct
 *! \brief  DMA channel source address decrement enable set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMASRCADSSET_t {
  union {
    struct {
      unsigned int CHSRCADRDECSET : 24;  /**< Source Address decrement status / configure Source address decrement */
      unsigned int reserved24     :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMASRCADSSET_t;

/*@}*/

/** @defgroup DMASRCADCLR DMA channel source address decrement enable clear (DMASRCADCLR) Register
 *  DMA channel source address decrement enable clear (DMASRCADCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMASRCADCLR_Struct
 *! \brief  DMA channel source address decrement enable clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMASRCADCLR_t {
  union {
    struct {
      unsigned int CHADRDECCLR : 24;  /**< Disable source address decrement */
      unsigned int reserved24  :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMASRCADCLR_t;

/*@}*/

/** @defgroup DMADSTADSET DMA channel destination address decrement enable set (DMADSTADSET) Register
 *  DMA channel destination address decrement enable set (DMADSTADSET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMADSTADSET_Struct
 *! \brief  DMA channel destination address decrement enable set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMADSTADSET_t {
  union {
    struct {
      unsigned int CHDSTADRDECSET : 24;  /**< Destination Address decrement status / configure destination address decrement */
      unsigned int reserved24     :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMADSTADSET_t;

/*@}*/

/** @defgroup DMADSTADCLR DMA channel destination address decrement enable clear (DMADSTADCLR) Register
 *  DMA channel destination address decrement enable clear (DMADSTADCLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMADSTADCLR_Struct
 *! \brief  DMA channel destination address decrement enable clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMADSTADCLR_t {
  union {
    struct {
      unsigned int CHADRDECCLR : 24;  /**< Disable destination address decrement */
      unsigned int reserved24  :  8;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMADSTADCLR_t;

/*@}*/

/** @defgroup DMAREVID DMA Controller Revision ID (DMAREVID) Register
 *  DMA Controller Revision ID (DMAREVID) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_dma_DMAREVID_Struct
 *! \brief  DMA Controller Revision ID Register bit field structure
 * ========================================================================== */
typedef struct _ADI_dma_DMAREVID_t {
  union {
    struct {
      unsigned int DMAREVID   :  8;  /**< DMA Controller revision ID */
      unsigned int reserved8  : 24;
    };
    uint32_t VALUE32;
  };
} ADI_dma_DMAREVID_t;

/*@}*/

/** @defgroup STAT Status register (STAT) Register
 *  Status register (STAT) Register.
 *
 *  Provides information on current command states and error detection/correction

NOTE: After power-on-reset the flash controller performs a number of operations (e.g. reading meta-data from the flash and loading required memory mapped registers). At the conclusion of this process the controller sets the CMDCOMP bit to indicate that the process has completed.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_STAT_Struct
 *! \brief  Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_STAT_t {
  union {
    struct {
      unsigned int CMDBUSY    :  1;  /**< Command busy */
      unsigned int WRCLOSE    :  1;  /**< Keyhole registers closed */
      unsigned int CMDCOMP    :  1;  /**< Command complete */
      unsigned int WRALCOMP   :  1;  /**< Write almost complete */
      unsigned int CMDFAIL    :  2;  /**< Provides feedback on command success/failure and identifies cause of failure (if any) */
      unsigned int SLEEPING   :  1;  /**< Flash array is in low power (sleep) mode */
      unsigned int ECCERRCMD  :  2;  /**< ECC errors detected during SIGN command */
      unsigned int ECCRDERR   :  2;  /**< ECC interrupt cause */
      unsigned int OVERLAP    :  1;  /**< Overlapping Command */
      unsigned int reserved12 :  1;
      unsigned int SIGNERR    :  1;  /**< Signature check failure during initialization */
      unsigned int INIT       :  1;  /**< Flash controller initialization in progress */
      unsigned int ECCINFOSIGN :  2;  /**< ECC error during initialization */
      unsigned int ECCERRCNT   :  3;  /**< ECC error counter */
      unsigned int reserved20  :  5;
      unsigned int ECC_ICODE   :  2;  /**< ICode AHB error/correction status */
      unsigned int ECC_DCODE   :  2;  /**< DCode AHB error/correction status */
      unsigned int CACHE_SRAM_PARITY_ERR :  1;  /**< SRAM parity errors in Cache Controller */
      unsigned int reserved30            :  2;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_STAT_t;

/*@}*/

/** @defgroup IEN Interrupt Enable register (IEN) Register
 *  Interrupt Enable register (IEN) Register.
 *
 *  Used to specify when interrupts will be generated.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_IEN_ECC_CORRECT
 *! \brief  Control whether to generate bus errors, interrupts, or neither in response to ECC Correction events (ECC_CORRECT) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_IEN_NONE_COR    = 0,  /**< Do not generate a response to ECC events      */
  FLASH_IEN_BUS_ERR_COR = 1,  /**< Generate Bus Errors in response to ECC events */
  FLASH_IEN_IRQ_COR     = 2   /**< Generate IRQs in response to ECC events       */
} ADI_FLASH_IEN_ECC_CORRECT;


/*  =========================================================================
 *! \enum   ADI_FLASH_IEN_ECC_ERROR
 *! \brief  Control whether to generate bus errors, interrupts, or neither in response to ECC Error events (ECC_ERROR) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_IEN_NONE_ERR    = 0,  /**< Do not generate a response to ECC events      */
  FLASH_IEN_BUS_ERR_ERR = 1,  /**< Generate Bus Errors in response to ECC events */
  FLASH_IEN_IRQ_ERR     = 2   /**< Generate IRQs in response to ECC events       */
} ADI_FLASH_IEN_ECC_ERROR;


/* ==========================================================================
 *! \struct ADI_FLASH_IEN_Struct
 *! \brief  Interrupt Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_IEN_t {
  union {
    struct {
      unsigned int CMDCMPLT   :  1;  /**< Command complete interrupt enable */
      unsigned int WRALCMPLT  :  1;  /**< Write almost complete interrupt enable */
      unsigned int CMDFAIL    :  1;  /**< Command fail interrupt enable */
      unsigned int reserved3   :  1;
      unsigned int ECC_CORRECT :  2;  /**< Control whether to generate bus errors, interrupts, or neither in response to ECC Correction events */
      unsigned int ECC_ERROR   :  2;  /**< Control whether to generate bus errors, interrupts, or neither in response to ECC Error events */
      unsigned int reserved8   : 24;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_IEN_t;

/*@}*/

/** @defgroup CMD Command register (CMD) Register
 *  Command register (CMD) Register.
 *
 *  Write this register to execute a specified command. The user key (see KEY register for details) must first be written to the FEEKEY Register for most command requests to be honored.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_CMD_COMMAND
 *! \brief  Commands (COMMAND) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_CMD_IDLE           = 0,  /**< IDLE                                                                  */
  FLASH_CMD_ABORT          = 1,  /**< ABORT                                                                 */
  FLASH_CMD_SLEEP          = 2,  /**< Requests flash to enter Sleep mode                                    */
  FLASH_CMD_SIGN           = 3,  /**< SIGN                                                                  */
  FLASH_CMD_WRITE          = 4,  /**< WRITE                                                                 */
  FLASH_CMD_BLANK_CHECK    = 5,  /**< Checks all of User Space; fails if any bits in user space are cleared */
  FLASH_CMD_ERASEPAGE      = 6,  /**< ERASEPAGE                                                             */
  FLASH_CMD_MASSERASE      = 7,  /**< MASSERASE                                                             */
  FLASH_CMD_MASSERASE_INFO = 8,  /**< MASSERASE_INFO                                                        */
  FLASH_CMD_READ           = 9   /**< READ (test-mode read)                                                 */
} ADI_FLASH_CMD_COMMAND;


/* ==========================================================================
 *! \struct ADI_FLASH_CMD_Struct
 *! \brief  Command Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CMD_t {
  union {
    struct {
      unsigned int COMMAND    :  4;  /**< Commands */
      unsigned int reserved4  : 28;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CMD_t;

/*@}*/

/** @defgroup KH_ADDR Key-hole address (KH_ADDR) Register
 *  Key-hole address (KH_ADDR) Register.
 *
 *  Write the byte-address for any byte of a target 64-bit dual-word flash location for key-hole based flash write access.

(Writing any address above the valid range of flash memory will saturate the address register to prevent aliasing in the flash memory space)
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_KH_ADDR_Struct
 *! \brief  Key-hole address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_KH_ADDR_t {
  union {
    struct {
      unsigned int reserved0  :  3;
      unsigned int KH_ADDR    : 16;  /**< Flash key-hole write access address */
      unsigned int reserved19 : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_KH_ADDR_t;

/*@}*/

/** @defgroup KH_DATA0 Key-hole Data 0: lower word to be written on Key-hole write command (KH_DATA0) Register
 *  Key-hole Data 0: lower word to be written on Key-hole write command (KH_DATA0) Register.
 *
 *  Write the lower half of 64-bit dualword data to be written to flash
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_KH_DATA0_Struct
 *! \brief  Key-hole Data 0: lower word to be written on Key-hole write command Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_KH_DATA0_t {
  union {
    struct {
      unsigned int KH_DATA0   : 32;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_KH_DATA0_t;

/*@}*/

/** @defgroup KH_DATA1 Key-hole Data 1: upper word to be written on Key-hole write command (KH_DATA1) Register
 *  Key-hole Data 1: upper word to be written on Key-hole write command (KH_DATA1) Register.
 *
 *  Write the lower half of 64-bit dualword data to be written to flash
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_KH_DATA1_Struct
 *! \brief  Key-hole Data 1: upper word to be written on Key-hole write command Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_KH_DATA1_t {
  union {
    struct {
      unsigned int KH_DATA1   : 32;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_KH_DATA1_t;

/*@}*/

/** @defgroup PAGE_ADDR0 Lower page address (PAGE_ADDR0) Register
 *  Lower page address (PAGE_ADDR0) Register.
 *
 *  Write a byte-address to this register to select the page in which that byte exists. 

The selected page may be used for a PageErase command (selecting which page to erase) or for a Signature command (selecting the start page for a block on which a signature should be calculated)

PageAddr0 should always be programmed with a lower address value than PageAddr1.

(Writing any address above the valid range of flash memory will saturate the address register to prevent aliasing in the flash memory space)
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_PAGE_ADDR0_Struct
 *! \brief  Lower page address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_PAGE_ADDR0_t {
  union {
    struct {
      unsigned int reserved0  : 10;
      unsigned int PAGE_ADDR0 :  9;
      unsigned int reserved19 : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_PAGE_ADDR0_t;

/*@}*/

/** @defgroup PAGE_ADDR1 Upper page address (PAGE_ADDR1) Register
 *  Upper page address (PAGE_ADDR1) Register.
 *
 *  Write a byte-address to this register to select the page in which that byte exists. 

The selected page may be used for a Signature command (selecting the end page for a block on which a signature should be calculated)

PageAddr1 should always be programmed with a higher address value than PageAddr0.

(Writing any address above the valid range of flash memory will saturate the address register to prevent aliasing in the flash memory space)
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_PAGE_ADDR1_Struct
 *! \brief  Upper page address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_PAGE_ADDR1_t {
  union {
    struct {
      unsigned int reserved0  : 10;
      unsigned int PAGE_ADDR1 :  9;
      unsigned int reserved19 : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_PAGE_ADDR1_t;

/*@}*/

/** @defgroup KEY Flash Key register. (KEY) Register
 *  Flash Key register. (KEY) Register.
 *
 *  When user code must write a key to access protected features, the keys are to be written to this register.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_KEY_KEY
 *! \brief  Key register (KEY) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_KEY_USERKEY = 1735161189,  /**< USERKEY */
  FLASH_KEY_ADIKEY  = 3465886594   /**< ADIKEY  */
} ADI_FLASH_KEY_KEY;


/* ==========================================================================
 *! \struct ADI_FLASH_KEY_Struct
 *! \brief  Flash Key register. Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_KEY_t {
  union {
    struct {
      unsigned int KEY        : 32;  /**< Key register */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_KEY_t;

/*@}*/

/** @defgroup WR_ABORT_ADDR Write abort address register (WR_ABORT_ADDR) Register
 *  Write abort address register (WR_ABORT_ADDR) Register.
 *
 *  Address of recently aborted write command. This address is only populated if the aborted write command was started; if the command is aborted early enough to have no affect on the flash IP this address will not be updated.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_WR_ABORT_ADDR_Struct
 *! \brief  Write abort address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_WR_ABORT_ADDR_t {
  union {
    struct {
      unsigned int WR_ABORT_ADDR : 32;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_WR_ABORT_ADDR_t;

/*@}*/

/** @defgroup WRPROT Write protection register for flash (WRPROT) Register
 *  Write protection register for flash (WRPROT) Register.
 *
 *  (Writes to this register require the User Key to first be written to the KEY register)

User code may assert protection at runtime for any unprotected blocks (changes will be lost on reset), or may write the WrProt word to add protection to blocks after the next device reset (changes are non-volatile but take effect only after reset).

Removing protection can only be performed by a PageErase of the most significant page in user space (provided that page is not currently protected) or by a MassErase operation. Either of these options would immediately remove all protection of pages in user space (user may write to user space immediately following such an erase without a device reset required).
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_WRPROT_Struct
 *! \brief  Write protection register for flash Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_WRPROT_t {
  union {
    struct {
      unsigned int WRPROT     : 32;  /**< Clear bits to write protect related groups of user space pages. Once cleared these bits can only be set again by resetting the part */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_WRPROT_t;

/*@}*/

/** @defgroup SIGNATURE Signature register (SIGNATURE) Register
 *  Signature register (SIGNATURE) Register.
 *
 *  Provides read access to the most recently generated signature
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_SIGNATURE_Struct
 *! \brief  Signature Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_SIGNATURE_t {
  union {
    struct {
      unsigned int SIGNATURE  : 32;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_SIGNATURE_t;

/*@}*/

/** @defgroup UCFG User configuration register (UCFG) Register
 *  User configuration register (UCFG) Register.
 *
 *  User key (see KEY register for details) must be written to the Key register prior to writing this register. Write to this register to enable user control over JTAG, DMA, and Auto-increment features. 

When user code has finished accessing this register, garbage data should be written to the Key register to re-assert protection.

NOTE: After power-on-reset the flash controller performs a number of operations which include loading the JTAGEN value from non-volatile memory. The reset condition of this bit may never be observed by user code.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_UCFG_Struct
 *! \brief  User configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_UCFG_t {
  union {
    struct {
      unsigned int KHDMAEN    :  1;  /**< Key-Hole DMA enable. */
      unsigned int AUTOINCEN  :  1;  /**< Auto address increment for Key hole access. */
      unsigned int reserved2  : 30;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_UCFG_t;

/*@}*/

/** @defgroup TIME_PARAM0 Time parameter register 0 (TIME_PARAM0) Register
 *  Time parameter register 0 (TIME_PARAM0) Register.
 *
 *  To write this register the UserKey must first be written to the KEY register.  This register should not be modified while a flash write or erase cycle is in progress.

This register defines a set of parameters used to control the timing of signals driven to the Flash Memory. The default values are appropriate for a system clock of 26MHz and a reference clock (driven by the internal oscillator) operating within 10% of 13MHz.

The value of each timing parameter consists of a user programmable nibble (4 bits) as well as some number of hard-coded bits. User programmable bits are the most significant bits for each parameter. 

Time parameters describe the number of ref-clk periods to wait when meeting the associated timing constraint of the flash memory itself. Note that clock-domain-crossings and the constraints of signals not described by these parameters will increase the effective delays by a small margin. When programming the time parameter registers the user should select a value approaching the minimum time for each constraint.

CAUTION: Improper programming of this register may result in damage to the flash memory during PROGRAM or ERASE operations.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TIME_PARAM0_Struct
 *! \brief  Time parameter register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TIME_PARAM0_t {
  union {
    struct {
      unsigned int DIVREFCLK  :  1;  /**< Divide Reference Clock (by 2) */
      unsigned int reserved1  :  3;
      unsigned int TNVS       :  4;  /**< PROG/ERASE to NVSTR setup time */
      unsigned int TPGS       :  4;  /**< NVSTR to Program setup time */
      unsigned int TPROG      :  4;  /**< Program time */
      unsigned int TNVH       :  4;  /**< NVSTR Hold time */
      unsigned int TRCV       :  4;  /**< Recovery time */
      unsigned int TERASE     :  4;  /**< Erase Time */
      unsigned int TNVH1      :  4;  /**< NVSTR Hold time during Mass Erase */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TIME_PARAM0_t;

/*@}*/

/** @defgroup TIME_PARAM1 Time parameter register 1 (TIME_PARAM1) Register
 *  Time parameter register 1 (TIME_PARAM1) Register.
 *
 *  See TIME_PARAM0 for documentation
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TIME_PARAM1_Struct
 *! \brief  Time parameter register 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TIME_PARAM1_t {
  union {
    struct {
      unsigned int TWK        :  4;  /**< Wake up time */
      unsigned int reserved4  : 28;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TIME_PARAM1_t;

/*@}*/

/** @defgroup ABORT_EN_LO Lower bits of the sys irq abort enable register. (ABORT_EN_LO) Register
 *  Lower bits of the sys irq abort enable register. (ABORT_EN_LO) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ABORT_EN_LO_Struct
 *! \brief  Lower bits of the sys irq abort enable register. Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ABORT_EN_LO_t {
  union {
    struct {
      unsigned int ABORT_EN_LO : 32;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ABORT_EN_LO_t;

/*@}*/

/** @defgroup ABORT_EN_HI Upper bits of the sys irq abort enable register. (ABORT_EN_HI) Register
 *  Upper bits of the sys irq abort enable register. (ABORT_EN_HI) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ABORT_EN_HI_Struct
 *! \brief  Upper bits of the sys irq abort enable register. Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ABORT_EN_HI_t {
  union {
    struct {
      unsigned int ABORT_EN_HI : 32;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ABORT_EN_HI_t;

/*@}*/

/** @defgroup ECC_CFG ECC enable/disable and error responses (ECC_CFG) Register
 *  ECC enable/disable and error responses (ECC_CFG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ECC_CFG_Struct
 *! \brief  ECC enable/disable and error responses Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ECC_CFG_t {
  union {
    struct {
      unsigned int ECCEN      :  1;  /**< ECC Enable */
      unsigned int ECCENINFO  :  1;  /**< Info space ECC Enable bit */
      unsigned int reserved2  :  6;
      unsigned int POINTER    : 24;  /**< ECC start page pointer (user should write bits [31:8] of the start page address into bits [31:8] of this register) */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ECC_CFG_t;

/*@}*/

/** @defgroup ECC_ADDR Address of recent ECC error/correction which generated an IRQ (ECC_ADDR) Register
 *  Address of recent ECC error/correction which generated an IRQ (ECC_ADDR) Register.
 *
 *  This register is updated on ECC errors or corrections as selected to generate interrupts (IRQ) in the IEN register. this register is not updated in the event of an ECC error or correction which instead generates a bus fault.

This register records the address of the first ECC error or correction event to generate an interrupt since the last time the ECC status bits were cleared (or since reset).

If the status bits are cleared in the same cycle as a new ECC event (selected to generate an IRQ), a new address will be recorded and the status bits will remain set.

Errors have priority over corrections (2 or more bits corrupt = ERROR; a correction results in proper data being returned after a single bit is corrected). If an error and a correction occur in the same cycle, this register will report the ERROR address.

When two of the same priority ECC events occur (both ERROR or both CORRECTION) the ICODE bus has priority over DCODE. Therefore if both ICODE and DCODE buses generate the same type of ECC event in the same cycle, the ICODE address will be stored in this register.

The register cannot be cleared except by reset; it will always hold the address of the most recently reported ECC correction or error.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ECC_ADDR_Struct
 *! \brief  Address of recent ECC error/correction which generated an IRQ Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ECC_ADDR_t {
  union {
    struct {
      unsigned int ECC_ADDR   : 19;
      unsigned int reserved19 : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ECC_ADDR_t;

/*@}*/

/** @defgroup ADI_POR_CFG ADI flash configuration register (ADI_POR_CFG) Register
 *  ADI flash configuration register (ADI_POR_CFG) Register.
 *
 *  ADI Private register
This register resets only on POR or PIN resets.
All fields are expected to be written by the ADI bootloader.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ADI_POR_CFG_Struct
 *! \brief  ADI flash configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ADI_POR_CFG_t {
  union {
    struct {
      unsigned int WAITSTATES :  3;  /**< Number of wait states to access flash. */
      unsigned int PRFETCHDIS :  1;  /**< Disable the prefetch buffer */
      unsigned int AVAIL_SIZE :  2;  /**< Indicates what portion of flash USER space is made available to the user */
      unsigned int reserved6     :  2;
      unsigned int CURWAITSTATES :  3;  /**< Current wait states[2:0] */
      unsigned int reserved11    : 21;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ADI_POR_CFG_t;

/*@}*/

/** @defgroup ADI_POR_SEC ADI flash security register (ADI_POR_SEC) Register
 *  ADI flash security register (ADI_POR_SEC) Register.
 *
 *  ADI Private register
This register resets only on POR or PIN resets.
All fields are expected to be written by the ADI bootloader.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ADI_POR_SEC_Struct
 *! \brief  ADI flash security Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ADI_POR_SEC_t {
  union {
    struct {
      unsigned int SECURE     :  1;  /**< Set this bit to prevent read or write access to User Space (sticky when set) */
      unsigned int reserved1  : 31;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ADI_POR_SEC_t;

/*@}*/

/** @defgroup ADI_VOL_CFG ADI flash configuration register (ADI_VOL_CFG) Register
 *  ADI flash configuration register (ADI_VOL_CFG) Register.
 *
 *  ADI Private register
This register resets on any/all resets (POR/PIN/SW/WDT/etc).
All fields are expected to be written by the ADI bootloader.

The User Key must be written to the Key Register prior to writing this register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_ADI_VOL_CFG_Struct
 *! \brief  ADI flash configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_ADI_VOL_CFG_t {
  union {
    struct {
      unsigned int INFO_REMAP :  1;  /**< Alias the info space to the base address of user space */
      unsigned int reserved1  : 31;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_ADI_VOL_CFG_t;

/*@}*/

/** @defgroup CACHESTAT Cache Status register (CACHESTAT) Register
 *  Cache Status register (CACHESTAT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHESTAT_Struct
 *! \brief  Cache Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHESTAT_t {
  union {
    struct {
      unsigned int Icache_CacheEnableStatus :  1;  /**< If this bit is set then I-Cache is enabled and when cleared I-Cache is disabled. */
      unsigned int Icache_CacheLockStatus   :  1;  /**< This bit is set when I-Cache is locked and cleared when I-cache is unlocked. */
      unsigned int Icache_AllowTMAccess     :  1;  /**< If this bit is set then TestMode accesses to I-Cache memory through APB interface are allowed. */
      unsigned int reserved3                : 13;
      unsigned int Dcache_CacheEnableStatus :  1;  /**< If this bit is set then D-Cache is enabled and when cleared D-Cache is disabled. */
      unsigned int Dcache_CacheLockStatus   :  1;  /**< This bit is set when D-Cache is locked and cleared when D-cache is unlocked. */
      unsigned int Dcache_AllowTMAccess     :  1;  /**< If this bit is set then TestMode accesses to D-Cache memory through APB interface are allowed. */
      unsigned int reserved19               : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHESTAT_t;

/*@}*/

/** @defgroup CACHESETUP Cache Setup register (CACHESETUP) Register
 *  Cache Setup register (CACHESETUP) Register.
 *
 *  Cache User key is required to enable a write to this location.  Key will be cleared after a write to this Register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHESETUP_Struct
 *! \brief  Cache Setup Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHESETUP_t {
  union {
    struct {
      unsigned int ICacheEnable_mmr :  1;  /**< If this bit set, then I-Cache is enabled for AHB accesses. If 0, then I-cache is disabled, and all AHB accesses will be via Flash memory. */
      unsigned int ICacheLock_mmr   :  1;  /**< If this bit is set, then I-cache contents are locked. Any new misses won't be replaced in I-Cache. */
      unsigned int ICacheBufDisable_mmr :  1;  /**< If this bit is set, then for every AHB access, hit from Temporary Buffer is not checked. Every access on ICODE AHB will lead to new access on Flash. */
      unsigned int reserved3            : 13;
      unsigned int DCacheEnable_mmr     :  1;  /**< If this bit set, then D-Cache is enabled for AHB accesses. If 0, then D-cache is disabled, and all AHB accesses will be via Flash memory. */
      unsigned int DCacheLock_mmr       :  1;  /**< If this bit is set, then D-cache contents are locked. Any new misses won't be replaced in D-Cache. */
      unsigned int DCachebufDisable_mmr :  1;  /**< If this bit is set, then for every AHB access, hit from Temporary Buffer is not checked. Every access on DCODE AHB will lead to new access on Flash. */
      unsigned int DCacheHitbufEnable_mmr :  1;  /**< If this bit is set, then temporary buffer is used to store the data from data memory. If cleared, hit is taken directly from data memory. */
      unsigned int reserved20             : 12;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHESETUP_t;

/*@}*/

/** @defgroup CACHEKEY Cache Key register (CACHEKEY) Register
 *  Cache Key register (CACHEKEY) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHEKEY_Struct
 *! \brief  Cache Key Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHEKEY_t {
  union {
    struct {
      unsigned int Key        : 32;  /**< Cache Key register */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHEKEY_t;

/*@}*/

/** @defgroup CACHETMSETUP Cache Test Setup Register (CACHETMSETUP) Register
 *  Cache Test Setup Register (CACHETMSETUP) Register.
 *
 *  To write to this register, ADI Cache TEST Key (0x2056_7926) must first be written to the key register for allowing testmode accesses to the respective Cache. Key will be cleared after write to this Register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMSETUP_Struct
 *! \brief  Cache Test Setup Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMSETUP_t {
  union {
    struct {
      unsigned int ICacheTMAccess_mmr :  1;  /**< This bit must be set to 1'b1, so that TestMode accesses to I-Cache memory through APB interface are allowed. */
      unsigned int Icache_Stop_Miss_Cntr :  1;  /**< Setting this bit stops the Instruction Cache Miss Counter. Value of Miss Count is available until it is re-started. */
      unsigned int Icache_Start_Miss_Cntr :  1;  /**< Setting this bit clears the Instruction Cache Miss Counter. And then starts counting number reads serviced by Flash controller. Single Miss may lead 2 or 4 reads to flash controller depending on Cache line size (128 or 256 respectively) */
      unsigned int reserved3              : 13;
      unsigned int DCacheTMAccess_mmr     :  1;  /**< This bit must be set to 1'b1, so that TestMode accesses to D-Cache memory through APB interface are allowed. */
      unsigned int Dcache_Stop_Miss_Cntr  :  1;  /**< Setting this bit stops the Data Cache Miss Counter. Value of Miss Count is available until it is re-started. */
      unsigned int Dcache_Start_Miss_Cntr :  1;  /**< Setting this bit clears the Data Cache Miss Counter. And then starts counting number reads serviced by Flash controller. */
      unsigned int reserved19             : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMSETUP_t;

/*@}*/

/** @defgroup CACHETMSETADDR Cache Set Address (CACHETMSETADDR) Register
 *  Cache Set Address (CACHETMSETADDR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMSETADDR_Struct
 *! \brief  Cache Set Address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMSETADDR_t {
  union {
    struct {
      unsigned int CacheSetAddr :  6;  /**< This register is used to specific the set address of the Cache to be accessed for read/write. Set MSB bit (31) for accessing D-Cache else I-Cache is accessed through this mode. */
      unsigned int reserved6    : 26;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMSETADDR_t;

/*@}*/

/** @defgroup CACHETMTAG LRU, Valid bits and Tags for Way 0 and 1 (CACHETMTAG) Register
 *  LRU, Valid bits and Tags for Way 0 and 1 (CACHETMTAG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMTAG_Struct
 *! \brief  LRU, Valid bits and Tags for Way 0 and 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMTAG_t {
  union {
    struct {
      unsigned int CacheTAG   : 31;  /**< When read the controller will return {LRU,Valid1,Tag1,Valid0,Tag0} for the set address provided in CacheSetAddr register. When write to this register occurs then {LRU,Valid1,Tag1,Valid0,Tag0} will be updated for the set address provided in CacheSetAddr register. */
      unsigned int reserved31 :  1;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMTAG_t;

/*@}*/

/** @defgroup CACHETMD0LOW LSW of Data for Way 0 (CACHETMD0LOW) Register
 *  LSW of Data for Way 0 (CACHETMD0LOW) Register.
 *
 *  Used to access Data Memory of Data Cache.To access Data Memory of Instruction Cache, Enable System or Data or Instruction Bus to Lower region of SRAM and Issue reads and writes to the Memory.
Memory Map - TBD
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMD0LOW_Struct
 *! \brief  LSW of Data for Way 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMD0LOW_t {
  union {
    struct {
      unsigned int CacheDATA0_31_0 : 32;  /**< When read lower 32 bit of Data block 0 for the set provided in CacheSetAddr register is returned. When write, 32bits will be written to the lower 32-bit of Data block 0 for the set provided in CacheSetAddr register. */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMD0LOW_t;

/*@}*/

/** @defgroup CACHETMD0HIGH MSW of Data for Way 0 (CACHETMD0HIGH) Register
 *  MSW of Data for Way 0 (CACHETMD0HIGH) Register.
 *
 *  Used to access Data Memory of Data Cache.To access Data Memory of Instruction Cache, Enable System or Data or Instruction Bus to Lower region of SRAM and Issue reads and writes to the Memory.
Memory Map - TBD
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMD0HIGH_Struct
 *! \brief  MSW of Data for Way 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMD0HIGH_t {
  union {
    struct {
      unsigned int CacheDATA0_63_32 : 32;  /**< When read upper 32 bit of Data block 0 for the set provided in CacheSetAddr register is returned. When write, 32bits will be written to the upper 32-bit of Data block 0 for the set provided in CacheSetAddr register. */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMD0HIGH_t;

/*@}*/

/** @defgroup CACHETMD1LOW LSW of Data for Way 1 (CACHETMD1LOW) Register
 *  LSW of Data for Way 1 (CACHETMD1LOW) Register.
 *
 *  Used to access Data Memory of Data Cache.To access Data Memory of Instruction Cache, Enable System or Data or Instruction Bus to Lower region of SRAM and Issue reads and writes to the Memory.
Memory Map - TBD
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMD1LOW_Struct
 *! \brief  LSW of Data for Way 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMD1LOW_t {
  union {
    struct {
      unsigned int CacheDATA1_31_0 : 32;  /**< When read lower 32 bit of Data block 1 for the set provided in CacheSetAddr register is returned. When write, 32bits will be written to the lower 32-bit of Data block 1 for the set provided in CacheSetAddr register. */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMD1LOW_t;

/*@}*/

/** @defgroup CACHETMD1HIGH MSW of Data for Way 1 (CACHETMD1HIGH) Register
 *  MSW of Data for Way 1 (CACHETMD1HIGH) Register.
 *
 *  Used to access Data Memory of Data Cache.To access Data Memory of Instruction Cache, Enable System or Data or Instruction Bus to Lower region of SRAM and Issue reads and writes to the Memory.
Memory Map - TBD
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHETMD1HIGH_Struct
 *! \brief  MSW of Data for Way 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHETMD1HIGH_t {
  union {
    struct {
      unsigned int CacheDATA1_63_32 : 32;  /**< When read upper 32 bit of Data block 1 for the set provided in CacheSetAddr register is returned. When write, 32bits will be written to the upper 32-bit of Data block 1 for the set provided in CacheSetAddr register. */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHETMD1HIGH_t;

/*@}*/

/** @defgroup CACHEMISSCNTR Cache Miss Counter (CACHEMISSCNTR) Register
 *  Cache Miss Counter (CACHEMISSCNTR) Register.
 *
 *  Miss Counter is use to count the number of flash accesses issued to Flash through respective AHB Bus. 
Instruction Cache Miss Counter:
1. Set Icache_Start_Miss_Cntr bit in CHACHETMSETUP Register (Test Mode Key is not required). This Clears counter and starts counting the flash accesses issued by Instruction Cache Controller.
2. Reading lower 16 bits of this register will return the number of reads issued till that point. 
3. To stop the counter set Icache_Stop_Miss_Cntr bit in CHACHETMSETUP Register (Test Mode Key is not required).
4. Counter value is frozen.

If the 16-bit counter reaches 16'hFFFF, then it saturates and stops the counter and Flash address at that point is stored into ICACHELASTADDR register.

Data Cache Miss Counter:
1. Set Dcache_Start_Miss_Cntr bit in CHACHETMSETUP Register (Test Mode Key is not required). This Clears counter and starts counting the flash accesses issued by Data Cache Controller.
2. Reading Upper 16 bits of this register will return the number of reads issued till that point. 
3. To stop the counter set Dcache_Stop_Miss_Cntr bit in CHACHETMSETUP Register (Test Mode Key is not required).
4. Counter value is frozen.

If the 16-bit counter reaches 16'hFFFF, then it saturates and stops the counter and Flash address at that point is stored into DCACHELASTADDR register.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_CACHEMISSCNTR_Struct
 *! \brief  Cache Miss Counter Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_CACHEMISSCNTR_t {
  union {
    struct {
      unsigned int ICacheMissCount : 16;  /**< Number of reads issued by Instruction Cache to flash counter till that point from the point at which it was started via ICache_Start_Miss_Cntr. Saturates once it reaches 16'hFFFF. */
      unsigned int DCacheMissCount : 16;  /**< Number of reads issued by Data Cache to flash counter from the point at which it was started via DCache_Start_Miss_Cntr. Saturates once it reaches 16'hFFFF. */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_CACHEMISSCNTR_t;

/*@}*/

/** @defgroup ICACHELASTADDR Instruction Cache Last Address (ICACHELASTADDR) Register
 *  Instruction Cache Last Address (ICACHELASTADDR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_ICACHELASTADDR_Struct
 *! \brief  Instruction Cache Last Address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_ICACHELASTADDR_t {
  union {
    struct {
      unsigned int ISaturated_Addr : 19;  /**< Stores the flash address for which the Instruction Miss counter saturated. */
      unsigned int reserved19      : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_ICACHELASTADDR_t;

/*@}*/

/** @defgroup DCACHELASTADDR Data Cache Last Address (DCACHELASTADDR) Register
 *  Data Cache Last Address (DCACHELASTADDR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_CACHE_DCACHELASTADDR_Struct
 *! \brief  Data Cache Last Address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_CACHE_DCACHELASTADDR_t {
  union {
    struct {
      unsigned int DSaturated_Addr : 19;  /**< Stores the flash address for which the Data Miss counter saturated. */
      unsigned int reserved19      : 13;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_CACHE_DCACHELASTADDR_t;

/*@}*/

/** @defgroup DFT_STAT Status register (DFT_STAT) Register
 *  Status register (DFT_STAT) Register.
 *
 *  All bits in this register, with the exception of EN, apply only when utilizing the DFT Driver (aka APB COMMANDS mode).

These bits have no meaning in GPIO or PROBE modes simply because the DFT is wholly controlled by the user in those modes.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_STAT_MODE
 *! \brief  Indicates current operating mode (MODE) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_STAT_DIS   = 0,  /**< Disabled                                         */
  FLASH_DFT_DFT_STAT_GPIO  = 1,  /**< DFT Enabled for direct access via GPIO           */
  FLASH_DFT_DFT_STAT_PROBE = 2,  /**< DFT Enabled for direct access via PROBE          */
  FLASH_DFT_DFT_STAT_CMD   = 3   /**< DFT Enabled for indirect access via APB COMMANDS */
} ADI_FLASH_DFT_DFT_STAT_MODE;


/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_STAT_Struct
 *! \brief  Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_STAT_t {
  union {
    struct {
      unsigned int EN         :  1;  /**< Indicates that DFT Controller has control over the Flash IP (sets automatically after writing DFT_CTRL once the Flash Controller releases access) */
      unsigned int PEND       :  1;  /**< Indicates that a Serial Wire transaction is pending (or ongoing) or that a Command is pending (or ongoing) */
      unsigned int MODE       :  2;  /**< Indicates current operating mode */
      unsigned int CMD_STATE  :  3;  /**< Indicates the currently executing COMMAND */
      unsigned int CMD_RES    :  1;  /**< Indicates the result of DFT READ command; 1=fail */
      unsigned int IT_CNT_REM : 24;  /**< Indicates remaining iterations for any currently executing command */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_STAT_t;

/*@}*/

/** @defgroup DFT_CTRL Control register (DFT_CTRL) Register
 *  Control register (DFT_CTRL) Register.
 *
 *  All bits in this register, with the exception of EN, apply only when utilizing the DFT Driver (aka APB COMMANDS mode).

These bits have no meaning in GPIO or PROBE modes simply because the DFT is wholly controlled by the user in those modes.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_CTRL_MODE
 *! \brief  Indicates current operating mode (MODE) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_CTRL_DIS   = 0,  /**< Disabled                                         */
  FLASH_DFT_DFT_CTRL_GPIO  = 1,  /**< DFT Enabled for direct access via GPIO           */
  FLASH_DFT_DFT_CTRL_PROBE = 2,  /**< DFT Enabled for direct access via PROBE          */
  FLASH_DFT_DFT_CTRL_CMD   = 3   /**< DFT Enabled for indirect access via APB COMMANDS */
} ADI_FLASH_DFT_DFT_CTRL_MODE;


/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_CTRL_Struct
 *! \brief  Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_CTRL_t {
  union {
    struct {
      unsigned int EN         :  1;  /**< Enable DFT (valid only when the Flash is not in a protected state or when required keys have been asserted) */
      unsigned int reserved1  :  1;
      unsigned int MODE       :  2;  /**< Indicates current operating mode */
      unsigned int reserved4  :  4;
      unsigned int IT_CNT     : 24;  /**< Used to set a number of iterations for any requested command */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_CTRL_t;

/*@}*/

/** @defgroup DFT_CMD Command register (DFT_CMD) Register
 *  Command register (DFT_CMD) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_CMD_CMD
 *! \brief  Asserted by user code to select the next command to be executed (may be written at any time) (CMD) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_CMD_IDLE_CMD   = 0,  /**< Idle command                                                                                    */
  FLASH_DFT_DFT_CMD_READ_CMD   = 1,  /**< Read command                                                                                    */
  FLASH_DFT_DFT_CMD_PROG_CMD   = 2,  /**< Program command                                                                                 */
  FLASH_DFT_DFT_CMD_ERASE_CMD  = 3,  /**< Erase command                                                                                   */
  FLASH_DFT_DFT_CMD_TMRSET_CMD = 4   /**< Test Mode Register Set command (note: this command provides Erase Reference Cell functionality) */
} ADI_FLASH_DFT_DFT_CMD_CMD;


/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_CMD_Struct
 *! \brief  Command Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_CMD_t {
  union {
    struct {
      unsigned int CMD        :  3;  /**< Asserted by user code to select the next command to be executed (may be written at any time) */
      unsigned int reserved3  : 29;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_CMD_t;

/*@}*/

/** @defgroup DFT_PIN_REG Used to control IFREN, MAS1, and SLM signals during command execution (DFT_PIN_REG) Register
 *  Used to control IFREN, MAS1, and SLM signals during command execution (DFT_PIN_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_PIN_REG_Struct
 *! \brief  Used to control IFREN, MAS1, and SLM signals during command execution Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_PIN_REG_t {
  union {
    struct {
      unsigned int IFREN      :  1;  /**< If set, DFT will interact with INFO space of Flash IP; if cleared DFT will interact with USER space */
      unsigned int MAS1       :  1;  /**< If set erase operations will be MASS ERASE; if cleared erasures will be PAGE ERASE */
      unsigned int SLM        :  1;  /**< If set IP will enter SLEEP MODE; user must not request any command while set; user must wait 7us after clearing this bit before starting any new command */
      unsigned int reserved3  : 29;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_PIN_REG_t;

/*@}*/

/** @defgroup DFT_XADR_REG Used to setup initial XADR value to be used at the start of a command (note: some commands modify the internal XADR value during execution) (DFT_XADR_REG) Register
 *  Used to setup initial XADR value to be used at the start of a command (note: some commands modify the internal XADR value during execution) (DFT_XADR_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_XADR_REG_Struct
 *! \brief  Used to setup initial XADR value to be used at the start of a command (note: some commands modify the internal XADR value during execution) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_XADR_REG_t {
  union {
    struct {
      unsigned int XADR       : 10;  /**< Initial XADR value to be used by any future commands */
      unsigned int reserved10 : 22;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_XADR_REG_t;

/*@}*/

/** @defgroup DFT_YADR_REG Used to setup initial YADR value to be used at the start of a command (note: some commands modify the internal YADR value during execution) (DFT_YADR_REG) Register
 *  Used to setup initial YADR value to be used at the start of a command (note: some commands modify the internal YADR value during execution) (DFT_YADR_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_YADR_REG_Struct
 *! \brief  Used to setup initial YADR value to be used at the start of a command (note: some commands modify the internal YADR value during execution) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_YADR_REG_t {
  union {
    struct {
      unsigned int YADR       :  5;  /**< Initial YADR value to be used by any future commands */
      unsigned int reserved5  : 27;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_YADR_REG_t;

/*@}*/

/** @defgroup DFT_DATA_L_REG Used to setup initial lower 32 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) (DFT_DATA_L_REG) Register
 *  Used to setup initial lower 32 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) (DFT_DATA_L_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver.

DFT Driver flags the full 36 bit DATA value as "pending" transfer to the DFT when this register is written; user code should write DFT_DATA_H_REG with upper nibble before writing this register if both parts of DATA value are to be updated.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_DATA_L_REG_Struct
 *! \brief  Used to setup initial lower 32 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_DATA_L_REG_t {
  union {
    struct {
      unsigned int DATA       : 32;  /**< Initial DATA value to be used by any future commands */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_DATA_L_REG_t;

/*@}*/

/** @defgroup DFT_DATA_H_REG Used to setup initial upper 4 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) (DFT_DATA_H_REG) Register
 *  Used to setup initial upper 4 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) (DFT_DATA_H_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver.

DFT Driver flags the full 36 bit DATA value as "pending" transfer to the DFT when the DFT_DATA_L_REG register is written; user code should write DFT_DATA_H_REG with upper nibble before writing the lower 32 bits if both parts of DATA value are to be updated.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_DATA_H_REG_Struct
 *! \brief  Used to setup initial upper 4 bits of DATA value to be used at the start of a command (note: some commands modify the internal DATA value during execution) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_DATA_H_REG_t {
  union {
    struct {
      unsigned int DATA       :  4;  /**< Initial DATA value to be used by any future commands */
      unsigned int reserved4  : 28;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_DATA_H_REG_t;

/*@}*/

/** @defgroup DFT_CTRL_REG Used to select different data and address patterns for program/read operations (DFT_CTRL_REG) Register
 *  Used to select different data and address patterns for program/read operations (DFT_CTRL_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_CTRL_REG_XADR_PTRN
 *! \brief  Set pattern DFT will use to modify XADR during command execution (XADR_PTRN) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_CTRL_REG_X_FIXED        = 0,  /**< XADR is fixed; will not change during command execution                                                                    */
  FLASH_DFT_DFT_CTRL_REG_X_INCR_ROW     = 1,  /**< For READs increment by 1 after reading the last word of a row. For PROGs increment by 1 when NVSTR drops.                  */
  FLASH_DFT_DFT_CTRL_REG_X_DIAG         = 2,  /**< Diagonal pattern used for PROG-DIAGONAL only                                                                               */
  FLASH_DFT_DFT_CTRL_REG_X_ERASE_ROW    = 3,  /**< For ERASE operation only; increment by # of rows per page when NVSTR drops                                                 */
  FLASH_DFT_DFT_CTRL_REG_X_INV_WORD     = 4,  /**< For READs Invert value after reading one word; for PROGs invert value when NVSTR drops                                     */
  FLASH_DFT_DFT_CTRL_REG_X_INCR2_ROW    = 5,  /**< For READs increment by 2 after reading the last word of a row; for PROGs increment by 2 when NVSTR drops                   */
  FLASH_DFT_DFT_CTRL_REG_X_INVLSB_WORD  = 6,  /**< For READs invert XADR[0] after reading one word; for PROG invert XADR[0] when NVSTR drops                                  */
  FLASH_DFT_DFT_CTRL_REG_X_INCR_READ    = 7,  /**< For READs only; increment by 1 after each read cycle. Intended to work with YADR_PTRN set to same value.                   */
  FLASH_DFT_DFT_CTRL_REG_X_DECR_Y0_READ = 8,  /**< For READs only; decrement by 1 after each read cycle only when YADR==0. Intended to work with YADR_PTRN set to same value. */
  FLASH_DFT_DFT_CTRL_REG_X_DECR_X0_READ = 9   /**< For READs only; decrement by 1 after each read cycle. Intended to work with YADR_PTRN set to same value.                   */
} ADI_FLASH_DFT_DFT_CTRL_REG_XADR_PTRN;


/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_CTRL_REG_YADR_PTRN
 *! \brief  Set pattern DFT will use to modify YADR during command execution (YADR_PTRN) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_CTRL_REG_Y_FIXED        = 0,  /**< YADR is fixed; will not change during command execution                                                                    */
  FLASH_DFT_DFT_CTRL_REG_Y_ICKBD        = 1,  /**< For READs and PROGs, used to generate ICKBD pattern                                                                        */
  FLASH_DFT_DFT_CTRL_REG_Y_CKBD         = 2,  /**< For READs and PROGs, used to generate CKBD pattern                                                                         */
  FLASH_DFT_DFT_CTRL_REG_Y_INCR         = 3,  /**< For READs increment by one for each read cycle; for PROGs increase by 1 after YE drops (1 word program)                    */
  FLASH_DFT_DFT_CTRL_REG_Y_DIAG         = 4,  /**< Used for PROG-DIAGONAL only                                                                                                */
  FLASH_DFT_DFT_CTRL_REG_Y_INV          = 5,  /**< Invert value after each read or program of one word                                                                        */
  FLASH_DFT_DFT_CTRL_REG_Y_INVLSB       = 6,  /**< Invert YADR[0] after reading or programming one word                                                                       */
  FLASH_DFT_DFT_CTRL_REG_Y_INCR_READ    = 7,  /**< For READs only; increment by 1 after XADR reaches last XADR value. Intended to work with XADR_PTRN set to same value.      */
  FLASH_DFT_DFT_CTRL_REG_Y_DECR_Y0_READ = 8,  /**< For READs only; decrement by 1 after each read cycle. Intended to work with XADR_PTRN set to same value.                   */
  FLASH_DFT_DFT_CTRL_REG_Y_DECR_X0_READ = 9   /**< For READs only; decrement by 1 after each read cycle only when XADR==0. Intended to work with XADR_PTRN set to same value. */
} ADI_FLASH_DFT_DFT_CTRL_REG_YADR_PTRN;


/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_CTRL_REG_DATA_PTRN
 *! \brief  Set pattern DFT will use to modify DATA during command execution (DATA_PTRN) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_CTRL_REG_D_CKBD   = 0,  /**< For READs and PROGs, used to generate CKBD pattern                                                                                 */
  FLASH_DFT_DFT_CTRL_REG_D_ICKBD  = 1,  /**< For READs and PROGs, used to generate ICKBD pattern                                                                                */
  FLASH_DFT_DFT_CTRL_REG_D_DIAG   = 2,  /**< Used for PROG-DIAGONAL only                                                                                                        */
  FLASH_DFT_DFT_CTRL_REG_D_FIXED  = 3,  /**< DATA is fixed; will not change during command execution                                                                            */
  FLASH_DFT_DFT_CTRL_REG_D_RAND   = 4,  /**< For READs and PROGs, used to generate RANDOM pattern                                                                               */
  FLASH_DFT_DFT_CTRL_REG_D_GRP    = 5,  /**< For READs, only latch (and compare) the data GROUP selected in DFT_GRP_SEL                                                         */
  FLASH_DFT_DFT_CTRL_REG_D_INV    = 6,  /**< For READs and PROGs, data written/compared is generated from DFT_DATA_REG when XADR[0]==YADR[0], else generated from ~DFT_DATA_REG */
  FLASH_DFT_DFT_CTRL_REG_D_SCAN   = 7,  /**< Use SCAN I/O for data pattern generation (see TSMC DFT spec for details)                                                           */
  FLASH_DFT_DFT_CTRL_REG_D_DEFECT = 8,  /**< Utilize TSMCs Defect programming data generator logic (see TSMC DFT spec for details)                                              */
  FLASH_DFT_DFT_CTRL_REG_D_REPAIR = 9   /**< Utilize TSMCs Repair programming data generator logic (see TSMC DFT spec for details)                                              */
} ADI_FLASH_DFT_DFT_CTRL_REG_DATA_PTRN;


/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_CTRL_REG_Struct
 *! \brief  Used to select different data and address patterns for program/read operations Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_CTRL_REG_t {
  union {
    struct {
      unsigned int XADR_PTRN  :  4;  /**< Set pattern DFT will use to modify XADR during command execution */
      unsigned int YADR_PTRN  :  4;  /**< Set pattern DFT will use to modify YADR during command execution */
      unsigned int DATA_PTRN  :  4;  /**< Set pattern DFT will use to modify DATA during command execution */
      unsigned int WAIT_STATES :  3;  /**< Define the number of waitstates for a read cycle */
      unsigned int TEST        :  1;  /**< DFT self-test mode */
      unsigned int reserved16  : 16;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_CTRL_REG_t;

/*@}*/

/** @defgroup DFT_GRP_REG Used to define which groups of data bits will be selected for program/read operations (DFT_GRP_REG) Register
 *  Used to define which groups of data bits will be selected for program/read operations (DFT_GRP_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_GRP_REG_GRP_SEL
 *! \brief   (GRP_SEL) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_GRP_REG_NONE = 0,  /**< Select neither upper nor lower 36 bit group */
  FLASH_DFT_DFT_GRP_REG_LOW  = 1,  /**< Select the lower 36 bit group               */
  FLASH_DFT_DFT_GRP_REG_HIGH = 2,  /**< Select the upper 36 bit group               */
  FLASH_DFT_DFT_GRP_REG_ALL  = 3   /**< Select both upper and lower 36 bit groups   */
} ADI_FLASH_DFT_DFT_GRP_REG_GRP_SEL;


/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_GRP_REG_Struct
 *! \brief  Used to define which groups of data bits will be selected for program/read operations Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_GRP_REG_t {
  union {
    struct {
      unsigned int GRP_SEL    :  2;
      unsigned int reserved2  : 30;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_GRP_REG_t;

/*@}*/

/** @defgroup DFT_IP_REG Used to control the IP select signal (DFT_IP_REG) Register
 *  Used to control the IP select signal (DFT_IP_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_DFT_DFT_IP_REG_IPSEL
 *! \brief   (IPSEL) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_DFT_DFT_IP_REG_NONE   = 0,  /**< None   */
  FLASH_DFT_DFT_IP_REG_HV     = 1,  /**< HV     */
  FLASH_DFT_DFT_IP_REG_NORM   = 2,  /**< NORM   */
  FLASH_DFT_DFT_IP_REG_REPAIR = 3   /**< REPAIR */
} ADI_FLASH_DFT_DFT_IP_REG_IPSEL;


/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_IP_REG_Struct
 *! \brief  Used to control the IP select signal Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_IP_REG_t {
  union {
    struct {
      unsigned int IPSEL      :  2;
      unsigned int reserved2  : 30;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_IP_REG_t;

/*@}*/

/** @defgroup DFT_BIT_REG Debug feature; used to enable bit operation and select just one bit for read comparison during failure-bit map collection (DFT_BIT_REG) Register
 *  Debug feature; used to enable bit operation and select just one bit for read comparison during failure-bit map collection (DFT_BIT_REG) Register.
 *
 *  Reads of this register only return data previously written via the DFT Driver; the controller does not interrogate TSMC's DFT to establish the current value within that module. Test may verify consistency of DFT Driver writes by reading DFT registers back via GPIO; beyond this it is expected that DFT registers are WRITE ONLY by the DFT Driver
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_BIT_REG_Struct
 *! \brief  Debug feature; used to enable bit operation and select just one bit for read comparison during failure-bit map collection Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_BIT_REG_t {
  union {
    struct {
      unsigned int EN         :  1;  /**< If set enables single-bit comparisons; when cleared full data bus will be compared on READ operations */
      unsigned int BIT_SEL    :  7;  /**< 0=compare data[0] only; n=compare data[n] only; max is 71 */
      unsigned int reserved8  : 24;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_BIT_REG_t;

/*@}*/

/** @defgroup DFT_PEND DFT Writes Pending (DFT_PEND) Register
 *  DFT Writes Pending (DFT_PEND) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_PEND_Struct
 *! \brief  DFT Writes Pending Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_PEND_t {
  union {
    struct {
      unsigned int BIT_REG    :  1;  /**< When set indicates a write to BIT_REG is pending */
      unsigned int IP_REG     :  1;  /**< When set indicates a write to IP_REG is pending */
      unsigned int GRP_REG    :  1;  /**< When set indicates a write to GRP_REG is pending */
      unsigned int CTRL_REG   :  1;  /**< When set indicates a write to CTRL_REG is pending */
      unsigned int DATA_REG   :  1;  /**< When set indicates a write to DATA_REG is pending */
      unsigned int YADR_REG   :  1;  /**< When set indicates a write to YADR_REG is pending */
      unsigned int XADR_REG   :  1;  /**< When set indicates a write to XADR_REG is pending */
      unsigned int PIN_REG    :  1;  /**< When set indicates a write to PIN_REG is pending */
      unsigned int CMD        :  1;  /**< When set indicates a write to CMD is pending */
      unsigned int CTRL       :  1;  /**< When set indicates a write to CTRL is pending */
      unsigned int reserved10 : 22;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_PEND_t;

/*@}*/

/** @defgroup DFT_PROBE Used in DFT Probe Mode only (DFT_PROBE) Register
 *  Used in DFT Probe Mode only (DFT_PROBE) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_DFT_DFT_PROBE_Struct
 *! \brief  Used in DFT Probe Mode only Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_DFT_DFT_PROBE_t {
  union {
    struct {
      unsigned int PRB_P0     :  1;  /**< Probe P0 */
      unsigned int PRB_P1     :  1;  /**< Probe P1 */
      unsigned int PRB_P2     :  1;  /**< Probe P2 */
      unsigned int PRB_P3     :  1;  /**< Probe P3 */
      unsigned int PRB_SFT    :  1;  /**< Probe SFT Mode */
      unsigned int PRB_CLK    :  1;  /**< Probe Clock */
      unsigned int reserved6  :  2;
      unsigned int PRB_STAT   :  1;  /**< Probe Status/Data */
      unsigned int reserved9  : 23;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_DFT_DFT_PROBE_t;

/*@}*/

/** @defgroup TST_CFG Testmode Configuration Register (TST_CFG) Register
 *  Testmode Configuration Register (TST_CFG) Register.
 *
 *  Register is read only until Test Key has been written to the TEST_CMD_KEY register
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_FLASH_TEST_TST_CFG_WRSEL
 *! \brief  Selects either dualword, lowerword, or upper word write access. Requires that the ECC engine is disabled (using ECCDisable config bit in ECCConfig register) else writes will result in the command fail flag being set in the FEESTA register. (WRSEL) Enumerations
 *  ========================================================================= */
typedef enum
{
  FLASH_TEST_TST_CFG_DEFAULT = 0,  /**< Write all 72 bits.            */
  FLASH_TEST_TST_CFG_LOW     = 1,  /**< write only Data0 to the flash */
  FLASH_TEST_TST_CFG_HIGH    = 2   /**< Write only Data1 to the flash */
} ADI_FLASH_TEST_TST_CFG_WRSEL;


/* ==========================================================================
 *! \struct ADI_FLASH_TEST_TST_CFG_Struct
 *! \brief  Testmode Configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_TST_CFG_t {
  union {
    struct {
      unsigned int WRSEL      :  2;  /**< Selects either dualword, lowerword, or upper word write access. Requires that the ECC engine is disabled (using ECCDisable config bit in ECCConfig register) else writes will result in the command fail flag being set in the FEESTA register. */
      unsigned int reserved2  : 30;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_TST_CFG_t;

/*@}*/

/** @defgroup TST_CMD_KEY Write the proper Test Key value here to enable test mode reads and writes (TST_CMD_KEY) Register
 *  Write the proper Test Key value here to enable test mode reads and writes (TST_CMD_KEY) Register.
 *
 *  ADI TEST Command Key is 0x2925_4862
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TEST_TST_CMD_KEY_Struct
 *! \brief  Write the proper Test Key value here to enable test mode reads and writes Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_TST_CMD_KEY_t {
  union {
    struct {
      unsigned int TEST_CMD_KEY : 32;  /**< Enter 32 bits of the test key here. Returns 0x0 if read. */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_TST_CMD_KEY_t;

/*@}*/

/** @defgroup TM_DATA0 Lower 32 bits testmode flash data - [31:0] (TM_DATA0) Register
 *  Lower 32 bits testmode flash data - [31:0] (TM_DATA0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TEST_TM_DATA0_Struct
 *! \brief  Lower 32 bits testmode flash data - [31:0] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_TM_DATA0_t {
  union {
    struct {
      unsigned int TM_DATA0   : 32;  /**< After a read cycle is executed using the ReadCommand, the long word from flash can be read here.   This register will only return data if the Read request command was to unprotected user or info space. Otherwise it returns 0x0. This forms [31:0] of flash location */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_TM_DATA0_t;

/*@}*/

/** @defgroup TM_DATA1 Middle 32 bits testmode flash data - [63:32] (TM_DATA1) Register
 *  Middle 32 bits testmode flash data - [63:32] (TM_DATA1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TEST_TM_DATA1_Struct
 *! \brief  Middle 32 bits testmode flash data - [63:32] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_TM_DATA1_t {
  union {
    struct {
      unsigned int TM_DATA1   : 32;  /**< After a read cycle is executed using the  ReadCommand, the long word from flash can be read here.   This register will only return data if the Read request command was to unprotected user or info space. Otherwise it returns 0x0. This forms [63:32] of flash location */
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_TM_DATA1_t;

/*@}*/

/** @defgroup TM_DATA2 Upper 8 bits testmode flash data - [71:64] (TM_DATA2) Register
 *  Upper 8 bits testmode flash data - [71:64] (TM_DATA2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TEST_TM_DATA2_Struct
 *! \brief  Upper 8 bits testmode flash data - [71:64] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_TM_DATA2_t {
  union {
    struct {
      unsigned int TM_DATA2   :  8;  /**< After a read cycle is executed using the  ReadCommand, the long word from flash can be read here.   This register will only return data if the Read request command was to unprotected user or info space. Otherwise it returns 0x0. This forms [71:64] of flash location. */
      unsigned int reserved8  : 24;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_TM_DATA2_t;

/*@}*/

/** @defgroup KH_DATA2 Flash data register - key-hole interface (top 8 bit ECC - [71:64]) (KH_DATA2) Register
 *  Flash data register - key-hole interface (top 8 bit ECC - [71:64]) (KH_DATA2) Register.
 *
 *  This register is used only in test mode when TST_CFG:WR_SEL==2'b11.

In this case writes to any Flash address will write ONLY the top byte (typically used for ECC this byte resides in bits [71:64] of the targeted flash address). These writes will store KH_DATA2 to this byte without respect to the current ECC settings.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TEST_KH_DATA2_Struct
 *! \brief  Flash data register - key-hole interface (top 8 bit ECC - [71:64]) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_KH_DATA2_t {
  union {
    struct {
      unsigned int KH_DATA2   :  8;  /**< FLData2 forms the top 8 bit of 72 bit data (8bit ECC) to be written to flash */
      unsigned int reserved8  : 24;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_KH_DATA2_t;

/*@}*/

/** @defgroup FLSH_TC Direct output from flash IP Test Code (TC) bus (FLSH_TC) Register
 *  Direct output from flash IP Test Code (TC) bus (FLSH_TC) Register.
 *
 *  TSMC may provide a truth table for this register.

This feature is untested; considered a "nice to have" feature without knowing how we might use it. TSMC's bus functional flash IP model does not support this feature. It exists here as something of an experiment.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_FLASH_TEST_FLSH_TC_Struct
 *! \brief  Direct output from flash IP Test Code (TC) bus Register bit field structure
 * ========================================================================== */
typedef struct _ADI_FLASH_TEST_FLSH_TC_t {
  union {
    struct {
      unsigned int FLSH_TC    : 10;
      unsigned int reserved10 : 22;
    };
    uint32_t VALUE32;
  };
} ADI_FLASH_TEST_FLSH_TC_t;

/*@}*/

/** @defgroup GP0CON GPIO Port 0  Configuration (GP0CON) Register
 *  GPIO Port 0  Configuration (GP0CON) Register.
 *
 *  The GPIO CON register is reserved for top-level pin muxing for the GPIO block.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0CON_Struct
 *! \brief  GPIO Port 0  Configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0CON_t {
  union {
    struct {
      unsigned int pin0_cfg   :  2;  /**< p0.0  configuration bits */
      unsigned int pin1_cfg   :  2;  /**< p0.1  configuration bits */
      unsigned int pin2_cfg   :  2;  /**< p0.2  configuration bits */
      unsigned int pin3_cfg   :  2;  /**< p0.3  configuration bits */
      unsigned int pin4_cfg   :  2;  /**< p0.4  configuration bits */
      unsigned int pin5_cfg   :  2;  /**< p0.5  configuration bits */
      unsigned int pin6_cfg   :  2;  /**< p0.6  configuration bits */
      unsigned int pin7_cfg   :  2;  /**< p0.7  configuration bits */
      unsigned int pin8_cfg   :  2;  /**< p0.8  configuration bits */
      unsigned int pin9_cfg   :  2;  /**< p0.9  configuration bits */
      unsigned int pin10_cfg  :  2;  /**< p0.10  configuration bits */
      unsigned int pin11_cfg  :  2;  /**< p0.11  configuration bits */
      unsigned int pin12_cfg  :  2;  /**< p0.12  configuration bits */
      unsigned int pin13_cfg  :  2;  /**< p0.13  configuration bits */
      unsigned int pin14_cfg  :  2;  /**< p0.14  configuration bits */
      unsigned int pin15_cfg  :  2;  /**< p0.15  configuration bits */
    };
    uint32_t VALUE32;
  };
} ADI_gpio_GP0CON_t;

/*@}*/

/** @defgroup GP0OEN GPIO Port 0 output enable (GP0OEN) Register
 *  GPIO Port 0 output enable (GP0OEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0OEN_Struct
 *! \brief  GPIO Port 0 output enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0OEN_t {
  union {
    struct {
      unsigned int OEN        : 16;  /**< Pin Output Drive enable */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0OEN_t;

/*@}*/

/** @defgroup GP0PE GPIO Port 0 output pullup/pulldown enable (GP0PE) Register
 *  GPIO Port 0 output pullup/pulldown enable (GP0PE) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0PE_Struct
 *! \brief  GPIO Port 0 output pullup/pulldown enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0PE_t {
  union {
    struct {
      unsigned int PE         : 16;  /**< Pin Pull enable */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0PE_t;

/*@}*/

/** @defgroup GP0IEN GPIO  Port 0 Input Path Enable (GP0IEN) Register
 *  GPIO  Port 0 Input Path Enable (GP0IEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0IEN_Struct
 *! \brief  GPIO  Port 0 Input Path Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0IEN_t {
  union {
    struct {
      unsigned int IEN        : 16;  /**< Input path enable */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0IEN_t;

/*@}*/

/** @defgroup GP0IN GPIO  Port 0 registered data input (GP0IN) Register
 *  GPIO  Port 0 registered data input (GP0IN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0IN_Struct
 *! \brief  GPIO  Port 0 registered data input Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0IN_t {
  union {
    struct {
      unsigned int IN         : 16;  /**< Registered data input */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0IN_t;

/*@}*/

/** @defgroup GP0OUT GPIO Port 0 data output (GP0OUT) Register
 *  GPIO Port 0 data output (GP0OUT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0OUT_Struct
 *! \brief  GPIO Port 0 data output Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0OUT_t {
  union {
    struct {
      unsigned int OUT        : 16;  /**< Data out */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0OUT_t;

/*@}*/

/** @defgroup GP0SET GPIO Port 0 data out set (GP0SET) Register
 *  GPIO Port 0 data out set (GP0SET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0SET_Struct
 *! \brief  GPIO Port 0 data out set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0SET_t {
  union {
    struct {
      unsigned int SET        : 16;  /**< Set the output HIGH for the pin */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0SET_t;

/*@}*/

/** @defgroup GP0CLR GPIO Port 0 data out clear (GP0CLR) Register
 *  GPIO Port 0 data out clear (GP0CLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0CLR_Struct
 *! \brief  GPIO Port 0 data out clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0CLR_t {
  union {
    struct {
      unsigned int CLR        : 16;  /**< Set the output low  for the port pin */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0CLR_t;

/*@}*/

/** @defgroup GP0TGL GPIO Port 0  pin toggle (GP0TGL) Register
 *  GPIO Port 0  pin toggle (GP0TGL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0TGL_Struct
 *! \brief  GPIO Port 0  pin toggle Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0TGL_t {
  union {
    struct {
      unsigned int TGL        : 16;  /**< Toggle the output of the port pin */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0TGL_t;

/*@}*/

/** @defgroup GP0POL GPIO Port 0 interrupt polarity (GP0POL) Register
 *  GPIO Port 0 interrupt polarity (GP0POL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0POL_Struct
 *! \brief  GPIO Port 0 interrupt polarity Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0POL_t {
  union {
    struct {
      unsigned int INTPOL     : 16;  /**< Interrupt polarity. */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0POL_t;

/*@}*/

/** @defgroup GP0IENA GPIO Port 0  interrupt A enable (GP0IENA) Register
 *  GPIO Port 0  interrupt A enable (GP0IENA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0IENA_Struct
 *! \brief  GPIO Port 0  interrupt A enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0IENA_t {
  union {
    struct {
      unsigned int INTAEN     : 16;  /**< Interrupt A enable. */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0IENA_t;

/*@}*/

/** @defgroup GP0IENB GPIO Port 0 interrupt B enable (GP0IENB) Register
 *  GPIO Port 0 interrupt B enable (GP0IENB) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0IENB_Struct
 *! \brief  GPIO Port 0 interrupt B enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0IENB_t {
  union {
    struct {
      unsigned int INTBEN     : 16;  /**< Interrupt B enable. */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0IENB_t;

/*@}*/

/** @defgroup GP0INT GPIO Port 0 interrupt Status (GP0INT) Register
 *  GPIO Port 0 interrupt Status (GP0INT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0INT_Struct
 *! \brief  GPIO Port 0 interrupt Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0INT_t {
  union {
    struct {
      unsigned int INTSTATUS  : 16;  /**< Interrupt Status */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0INT_t;

/*@}*/

/** @defgroup GP0DS GPIO Port 0  drive strength select (GP0DS) Register
 *  GPIO Port 0  drive strength select (GP0DS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP0DS_Struct
 *! \brief  GPIO Port 0  drive strength select Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP0DS_t {
  union {
    struct {
      unsigned int DS         : 16;  /**< Drive strength select */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP0DS_t;

/*@}*/

/** @defgroup GP1CON GPIO Port 1 configuration (GP1CON) Register
 *  GPIO Port 1 configuration (GP1CON) Register.
 *
 *  The GPIO CON register is reserved for top-level pin muxing for the GPIO block.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1CON_Struct
 *! \brief  GPIO Port 1 configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1CON_t {
  union {
    struct {
      unsigned int pin0_cfg   :  2;  /**< p1.0 configuration bits */
      unsigned int pin1_cfg   :  2;  /**< p1.1 configuration bits */
      unsigned int pin2_cfg   :  2;  /**< p1.2 configuration bits */
      unsigned int pin3_cfg   :  2;  /**< p1.3 configuration bits */
      unsigned int pin4_cfg   :  2;  /**< p1.4 configuration bits */
      unsigned int pin5_cfg   :  2;  /**< p1.5 configuration bits */
      unsigned int pin6_cfg   :  2;  /**< p1.6 configuration bits */
      unsigned int pin7_cfg   :  2;  /**< p1.7 configuration bits */
      unsigned int pin8_cfg   :  2;  /**< p1.8 configuration bits */
      unsigned int pin9_cfg   :  2;  /**< p1.9 configuration bits */
      unsigned int pin10_cfg  :  2;  /**< p1.10 configuration bits */
      unsigned int pin11_cfg  :  2;  /**< p1.11 configuration bits */
      unsigned int pin12_cfg  :  2;  /**< p1.12 configuration bits */
      unsigned int pin13_cfg  :  2;  /**< p1.13 configuration bits */
      unsigned int pin_14_cfg :  2;  /**< p1.14 configuration bits */
      unsigned int pin_15_cfg :  2;  /**< p1.15 configuration bits */
    };
    uint32_t VALUE32;
  };
} ADI_gpio_GP1CON_t;

/*@}*/

/** @defgroup GP1OEN GPIO Port 1 output enable (GP1OEN) Register
 *  GPIO Port 1 output enable (GP1OEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1OEN_Struct
 *! \brief  GPIO Port 1 output enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1OEN_t {
  union {
    struct {
      unsigned int OEN        : 16;  /**< Pin Output Drive enable */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1OEN_t;

/*@}*/

/** @defgroup GP1PE GPIO Port 1 output pullup/pulldown enable (GP1PE) Register
 *  GPIO Port 1 output pullup/pulldown enable (GP1PE) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1PE_Struct
 *! \brief  GPIO Port 1 output pullup/pulldown enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1PE_t {
  union {
    struct {
      unsigned int PE         : 16;  /**< Pin Pull enable */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1PE_t;

/*@}*/

/** @defgroup GP1IEN GPIO Port 1 Input Path Enable (GP1IEN) Register
 *  GPIO Port 1 Input Path Enable (GP1IEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1IEN_Struct
 *! \brief  GPIO Port 1 Input Path Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1IEN_t {
  union {
    struct {
      unsigned int IEN        : 16;  /**< Input path enable */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1IEN_t;

/*@}*/

/** @defgroup GP1IN GPIO Port 1  registered data input (GP1IN) Register
 *  GPIO Port 1  registered data input (GP1IN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1IN_Struct
 *! \brief  GPIO Port 1  registered data input Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1IN_t {
  union {
    struct {
      unsigned int IN         : 16;  /**< Registered data input */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1IN_t;

/*@}*/

/** @defgroup GP1OUT GPIO Port 1 data output (GP1OUT) Register
 *  GPIO Port 1 data output (GP1OUT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1OUT_Struct
 *! \brief  GPIO Port 1 data output Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1OUT_t {
  union {
    struct {
      unsigned int OUT        : 16;  /**< Data out */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1OUT_t;

/*@}*/

/** @defgroup GP1SET GPIO Port 1 data out set (GP1SET) Register
 *  GPIO Port 1 data out set (GP1SET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1SET_Struct
 *! \brief  GPIO Port 1 data out set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1SET_t {
  union {
    struct {
      unsigned int SET        : 16;  /**< Set the output HIGH for the pin */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1SET_t;

/*@}*/

/** @defgroup GP1CLR GPIO Port 1 data out clear (GP1CLR) Register
 *  GPIO Port 1 data out clear (GP1CLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1CLR_Struct
 *! \brief  GPIO Port 1 data out clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1CLR_t {
  union {
    struct {
      unsigned int CLR        : 16;  /**< Set the output low  for the port pin */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1CLR_t;

/*@}*/

/** @defgroup GP1TGL GPIO Port 1 pin toggle (GP1TGL) Register
 *  GPIO Port 1 pin toggle (GP1TGL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1TGL_Struct
 *! \brief  GPIO Port 1 pin toggle Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1TGL_t {
  union {
    struct {
      unsigned int TGL        : 16;  /**< Toggle the output of the port pin */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1TGL_t;

/*@}*/

/** @defgroup GP1POL GPIO Port 1 interrupt polarity (GP1POL) Register
 *  GPIO Port 1 interrupt polarity (GP1POL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1POL_Struct
 *! \brief  GPIO Port 1 interrupt polarity Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1POL_t {
  union {
    struct {
      unsigned int INTPOL     : 16;  /**< Interrupt polarity. */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1POL_t;

/*@}*/

/** @defgroup GP1IENA GPIO Port 1 interrupt A enable (GP1IENA) Register
 *  GPIO Port 1 interrupt A enable (GP1IENA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1IENA_Struct
 *! \brief  GPIO Port 1 interrupt A enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1IENA_t {
  union {
    struct {
      unsigned int INTAEN     : 16;  /**< Interrupt A enable. */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1IENA_t;

/*@}*/

/** @defgroup GP1IENB GPIO Port 1interrupt B enable (GP1IENB) Register
 *  GPIO Port 1interrupt B enable (GP1IENB) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1IENB_Struct
 *! \brief  GPIO Port 1interrupt B enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1IENB_t {
  union {
    struct {
      unsigned int INTBEN     : 16;  /**< Interrupt B enable. */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1IENB_t;

/*@}*/

/** @defgroup GP1INT GPIO Port 1 interrupt Status (GP1INT) Register
 *  GPIO Port 1 interrupt Status (GP1INT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1INT_Struct
 *! \brief  GPIO Port 1 interrupt Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1INT_t {
  union {
    struct {
      unsigned int INTSTATUS  : 16;  /**< Interrupt Status */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1INT_t;

/*@}*/

/** @defgroup GP1DS GPIO Port 1  drive strength select (GP1DS) Register
 *  GPIO Port 1  drive strength select (GP1DS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP1DS_Struct
 *! \brief  GPIO Port 1  drive strength select Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP1DS_t {
  union {
    struct {
      unsigned int DS         : 16;  /**< Drive strength select */
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP1DS_t;

/*@}*/

/** @defgroup GP2CON GPIO Port 2 configuration (GP2CON) Register
 *  GPIO Port 2 configuration (GP2CON) Register.
 *
 *  The GPIO CON register is reserved for top-level pin muxing for the GPIO block.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2CON_Struct
 *! \brief  GPIO Port 2 configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2CON_t {
  union {
    struct {
      unsigned int pin0_cfg   :  2;  /**< P2.0 configuration bits */
      unsigned int pin1_cfg   :  2;  /**< P2.1 configuration bits */
      unsigned int pin2_cfg   :  2;  /**< P2.2 configuration bits */
      unsigned int pin3_cfg   :  2;  /**< P2.3 configuration bits */
      unsigned int pin4_cfg   :  2;  /**< P2.4 configuration bits */
      unsigned int pin5_cfg   :  2;  /**< P2.5 configuration bits */
      unsigned int pin6_cfg   :  2;  /**< P2.6 configuration bits */
      unsigned int pin7_cfg   :  2;  /**< P2.7 configuration bits */
      unsigned int pin8_cfg   :  2;  /**< P2.8 configuration bits */
      unsigned int pin9_cfg   :  2;  /**< P2.9 configuration bits */
      unsigned int pin10_cfg  :  2;  /**< P2.10 configuration bits */
      unsigned int pin11_cfg  :  2;  /**< P2.11 configuration bits */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_gpio_GP2CON_t;

/*@}*/

/** @defgroup GP2OEN GPIO Port 2 output enable (GP2OEN) Register
 *  GPIO Port 2 output enable (GP2OEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2OEN_Struct
 *! \brief  GPIO Port 2 output enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2OEN_t {
  union {
    struct {
      unsigned int OEN        : 12;  /**< Pin Output Drive enable */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2OEN_t;

/*@}*/

/** @defgroup GP2PE GPIO Port 2  output pullup/pulldown enable (GP2PE) Register
 *  GPIO Port 2  output pullup/pulldown enable (GP2PE) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2PE_Struct
 *! \brief  GPIO Port 2  output pullup/pulldown enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2PE_t {
  union {
    struct {
      unsigned int PE         : 12;  /**< Pin Pull enable */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2PE_t;

/*@}*/

/** @defgroup GP2IEN GPIO Port 2 Input Path Enable (GP2IEN) Register
 *  GPIO Port 2 Input Path Enable (GP2IEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2IEN_Struct
 *! \brief  GPIO Port 2 Input Path Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2IEN_t {
  union {
    struct {
      unsigned int IEN        : 12;  /**< Input path enable */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2IEN_t;

/*@}*/

/** @defgroup GP2IN GPIO Port 2 registered data input (GP2IN) Register
 *  GPIO Port 2 registered data input (GP2IN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2IN_Struct
 *! \brief  GPIO Port 2 registered data input Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2IN_t {
  union {
    struct {
      unsigned int IN         : 12;  /**< Registered data input */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2IN_t;

/*@}*/

/** @defgroup GP2OUT GPIO Port 2  data output (GP2OUT) Register
 *  GPIO Port 2  data output (GP2OUT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2OUT_Struct
 *! \brief  GPIO Port 2  data output Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2OUT_t {
  union {
    struct {
      unsigned int OUT        : 12;  /**< Data out */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2OUT_t;

/*@}*/

/** @defgroup GP2SET GPIO Port 2 data out set (GP2SET) Register
 *  GPIO Port 2 data out set (GP2SET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2SET_Struct
 *! \brief  GPIO Port 2 data out set Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2SET_t {
  union {
    struct {
      unsigned int SET        : 12;  /**< Set the output HIGH for the pin */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2SET_t;

/*@}*/

/** @defgroup GP2CLR GPIO Port 2 data out clear (GP2CLR) Register
 *  GPIO Port 2 data out clear (GP2CLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2CLR_Struct
 *! \brief  GPIO Port 2 data out clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2CLR_t {
  union {
    struct {
      unsigned int CLR        : 12;  /**< Set the output low  for the port pin */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2CLR_t;

/*@}*/

/** @defgroup GP2TGL GPIO Port 2 pin toggle (GP2TGL) Register
 *  GPIO Port 2 pin toggle (GP2TGL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2TGL_Struct
 *! \brief  GPIO Port 2 pin toggle Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2TGL_t {
  union {
    struct {
      unsigned int TGL        : 12;  /**< Toggle the output of the port pin */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2TGL_t;

/*@}*/

/** @defgroup GP2POL GPIO Port 2 interrupt polarity (GP2POL) Register
 *  GPIO Port 2 interrupt polarity (GP2POL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2POL_Struct
 *! \brief  GPIO Port 2 interrupt polarity Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2POL_t {
  union {
    struct {
      unsigned int INTPOL     : 12;  /**< Interrupt polarity. */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2POL_t;

/*@}*/

/** @defgroup GP2IENA GPIO Port 2 interrupt A enable (GP2IENA) Register
 *  GPIO Port 2 interrupt A enable (GP2IENA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2IENA_Struct
 *! \brief  GPIO Port 2 interrupt A enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2IENA_t {
  union {
    struct {
      unsigned int INTAEN     : 12;  /**< Interrupt A enable. */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2IENA_t;

/*@}*/

/** @defgroup GP2IENB GPIO Port 2 interrupt B enable (GP2IENB) Register
 *  GPIO Port 2 interrupt B enable (GP2IENB) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2IENB_Struct
 *! \brief  GPIO Port 2 interrupt B enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2IENB_t {
  union {
    struct {
      unsigned int INTBEN     : 12;  /**< Interrupt B enable. */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2IENB_t;

/*@}*/

/** @defgroup GP2INT GPIO Port 2  interrupt Status (GP2INT) Register
 *  GPIO Port 2  interrupt Status (GP2INT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2INT_Struct
 *! \brief  GPIO Port 2  interrupt Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2INT_t {
  union {
    struct {
      unsigned int INTSTATUS  : 12;  /**< Interrupt Status */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2INT_t;

/*@}*/

/** @defgroup GP2DS GPIO Port 2  drive strength select (GP2DS) Register
 *  GPIO Port 2  drive strength select (GP2DS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_gpio_GP2DS_Struct
 *! \brief  GPIO Port 2  drive strength select Register bit field structure
 * ========================================================================== */
typedef struct _ADI_gpio_GP2DS_t {
  union {
    struct {
      unsigned int DS         : 12;  /**< Drive strength select */
      unsigned int reserved12 :  4;
    };
    uint16_t VALUE16;
  };
} ADI_gpio_GP2DS_t;

/*@}*/

/** @defgroup CFG Configuration Register (CFG) Register
 *  Configuration Register (CFG) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_crypto_CFG_BLKEN
 *! \brief  Enable bit for the Crypto Block (BLKEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  CRYPTO_CFG_ENABLE  = 0,  /**< Enable Crypto Block  */
  CRYPTO_CFG_DISABLE = 1   /**< Disable Crypto Block */
} ADI_crypto_CFG_BLKEN;


/*  =========================================================================
 *! \enum   ADI_crypto_CFG_INDMAEN
 *! \brief  Enable DMA for Input Buffer (INDMAEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  CRYPTO_CFG_DMA_DISABLE_INBUF = 0,  /**< Disable DMA Requesting for Input Buffer */
  CRYPTO_CFG_DMA_ENABLE_INBUF  = 1   /**< Enable DMA Requesting for Input Buffer  */
} ADI_crypto_CFG_INDMAEN;


/*  =========================================================================
 *! \enum   ADI_crypto_CFG_OUTDMAEN
 *! \brief  Enable DMA for Output Buffer (OUTDMAEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  CRYPTO_CFG_DMA_DISABLE_OUTBUF = 0,  /**< Disable DMA Requesting for Output Buffer */
  CRYPTO_CFG_DMA_ENABLE_OUTBUF  = 1   /**< Enable DMA Requesting for Output Buffer  */
} ADI_crypto_CFG_OUTDMAEN;


/*  =========================================================================
 *! \enum   ADI_crypto_CFG_ENDIAN
 *! \brief  Endianness (ENDIAN) Enumerations
 *  ========================================================================= */
typedef enum
{
  CRYPTO_CFG_LITTLE_ENDIAN = 0,  /**< Little Endian Format */
  CRYPTO_CFG_BIG_ENDIAN    = 1   /**< Big Endian Format    */
} ADI_crypto_CFG_ENDIAN;


/*  =========================================================================
 *! \enum   ADI_crypto_CFG_SHADATSRC
 *! \brief  Select data input to SHA block (SHADATSRC) Enumerations
 *  ========================================================================= */
typedef enum
{
  CRYPTO_CFG_INBUF = 0,  /**< SHA takes input from input buffer  */
  CRYPTO_CFG_OPBUF = 1   /**< SHA takes input from output buffer */
} ADI_crypto_CFG_SHADATSRC;


/* ==========================================================================
 *! \struct ADI_crypto_CFG_Struct
 *! \brief  Configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_CFG_t {
  union {
    struct {
      unsigned int BLKEN      :  1;  /**< Enable bit for the Crypto Block */
      unsigned int ENCR       :  1;  /**< Encrypt or Decrypt */
      unsigned int INDMAEN    :  1;  /**< Enable DMA for Input Buffer */
      unsigned int OUTDMAEN   :  1;  /**< Enable DMA for Output Buffer */
      unsigned int INFLUSH    :  1;  /**< Input Buffer Flush */
      unsigned int OUTFLUSH   :  1;  /**< Output Buffer Flush */
      unsigned int ENDIAN     :  1;  /**< Endianness */
      unsigned int KEYSEL     :  1;  /**< Select Key Source */
      unsigned int KEYLEN     :  2;  /**< Select Key Length for AES Cipher */
      unsigned int reserved10 :  6;
      unsigned int ECBEN      :  1;  /**< Enable ECB Mode Operation */
      unsigned int CTREN      :  1;  /**< Enable CTR Mode Operation */
      unsigned int CBCEN      :  1;  /**< Enable CBC Mode Operation */
      unsigned int CCMEN      :  1;  /**< Enable CCM/CCM* Mode Operation */
      unsigned int CMACEN     :  1;  /**< Enable CMAC Mode Operation */
      unsigned int reserved21 :  3;
      unsigned int SHA224EN   :  1;  /**< Enable SHA-224 Operation */
      unsigned int SHA256EN   :  1;  /**< Enable SHA-256 Operation */
      unsigned int SHAINIT    :  1;  /**< Restarts SHA Computation */
      unsigned int SHADATSRC  :  1;  /**< Select data input to SHA block */
      unsigned int reserved28 :  4;
    };
    uint32_t VALUE32;
  };
} ADI_crypto_CFG_t;

/*@}*/

/** @defgroup DATALEN Payload Data Length (DATALEN) Register
 *  Payload Data Length (DATALEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_DATALEN_Struct
 *! \brief  Payload Data Length Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_DATALEN_t {
  union {
    struct {
      unsigned int VALUE      : 20;  /**< Length of Payload Data */
      unsigned int reserved20 : 12;
    };
    uint32_t VALUE32;
  };
} ADI_crypto_DATALEN_t;

/*@}*/

/** @defgroup PREFIXLEN Authentication Data Length (PREFIXLEN) Register
 *  Authentication Data Length (PREFIXLEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_PREFIXLEN_Struct
 *! \brief  Authentication Data Length Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_PREFIXLEN_t {
  union {
    struct {
      unsigned int VALUE      : 16;  /**< Length of Associated Data */
      unsigned int reserved16 : 16;
    };
    uint32_t VALUE32;
  };
} ADI_crypto_PREFIXLEN_t;

/*@}*/

/** @defgroup INTEN Interrupt Enable Register (INTEN) Register
 *  Interrupt Enable Register (INTEN) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_INTEN_Struct
 *! \brief  Interrupt Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_INTEN_t {
  union {
    struct {
      unsigned int INRDYEN    :  1;  /**< Enable Input Ready Interrupt */
      unsigned int OUTRDYEN   :  1;  /**< Enables the Output Ready Interrupt. */
      unsigned int INOVREN    :  1;  /**< Enable Input Overflow Interrupt. */
      unsigned int OUTUNDREN  :  1;  /**< Enable the Output Underflow Interrupt */
      unsigned int reserved4  :  1;
      unsigned int SHADONEN   :  1;  /**< Enable SHA_Done Interrupt */
      unsigned int reserved6  : 26;
    };
    uint32_t VALUE32;
  };
} ADI_crypto_INTEN_t;

/*@}*/

/** @defgroup STAT Status Register (STAT) Register
 *  Status Register (STAT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_STAT_Struct
 *! \brief  Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_STAT_t {
  union {
    struct {
      unsigned int INRDY      :  1;  /**< Input buffer requires more data before computation can begin. Remains set till the Buffer is filled. */
      unsigned int OUTRDY     :  1;  /**< Output Data ready to be read */
      unsigned int INOVR      :  1;  /**< Overflow in the input buffer. */
      unsigned int OUTUNDR    :  1;  /**< Underflow Interrupt in the Output */
      unsigned int reserved4  :  1;
      unsigned int SHADONE    :  1;  /**< SHA Computation complete */
      unsigned int SHABUSY    :  1;  /**< SHA Busy. Computations are ongoing */
      unsigned int INWORDS    :  3;  /**< Number of words in the Input Buffer */
      unsigned int OUTWORDS   :  3;  /**< Number of words in the Output Buffer */
      unsigned int reserved13 : 19;
    };
    uint32_t VALUE32;
  };
} ADI_crypto_STAT_t;

/*@}*/

/** @defgroup INBUF Input Buffer (INBUF) Register
 *  Input Buffer (INBUF) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_INBUF_Struct
 *! \brief  Input Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_INBUF_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Input Buffer */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_INBUF_t;

/*@}*/

/** @defgroup OUTBUF Output Buffer (OUTBUF) Register
 *  Output Buffer (OUTBUF) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_OUTBUF_Struct
 *! \brief  Output Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_OUTBUF_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Output Buffer */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_OUTBUF_t;

/*@}*/

/** @defgroup NONCE0 Nonce Bits [31:0] (NONCE0) Register
 *  Nonce Bits [31:0] (NONCE0) Register.
 *
 *  Nonce is used in some modes of operations. Depending on the mode, different NONCE lengths will be used.
1. CTR Mode: This takes a 108-Bit Nonce. This nonce is formed as follows - {NONCE3[11:0],NONCE2,NONCE1,NONCE0}
2. CBC Mode: This takes a 128-Bit Nonce. This nonce is formed as follows - {NONCE3,NONCE2,NONCE1,NONCE0}
3. CTR Mode: This takes a 108-Bit Nonce. This nonce is formed as follows - {NONCE3[15:0],NONCE2,NONCE1,NONCE0}
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_NONCE0_Struct
 *! \brief  Nonce Bits [31:0] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_NONCE0_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Word 0: Nonce : Bits [31:0] */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_NONCE0_t;

/*@}*/

/** @defgroup NONCE1 Nonce Bits [63:32] (NONCE1) Register
 *  Nonce Bits [63:32] (NONCE1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_NONCE1_Struct
 *! \brief  Nonce Bits [63:32] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_NONCE1_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Word 1: Nonce : Bits [63:32] */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_NONCE1_t;

/*@}*/

/** @defgroup NONCE2 Nonce Bits [95:64] (NONCE2) Register
 *  Nonce Bits [95:64] (NONCE2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_NONCE2_Struct
 *! \brief  Nonce Bits [95:64] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_NONCE2_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Word 2: Nonce : Bits [95:64] */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_NONCE2_t;

/*@}*/

/** @defgroup NONCE3 Nonce Bits [127:96] (NONCE3) Register
 *  Nonce Bits [127:96] (NONCE3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_NONCE3_Struct
 *! \brief  Nonce Bits [127:96] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_NONCE3_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Word 3: Nonce : Bits [127:96] */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_NONCE3_t;

/*@}*/

/** @defgroup AESKEY0 Key Bits[ 31:0 ] (AESKEY0) Register
 *  Key Bits[ 31:0 ] (AESKEY0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY0_Struct
 *! \brief  Key Bits[ 31:0 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY0_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [3:0]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY0_t;

/*@}*/

/** @defgroup AESKEY1 Key Bits [ 63:32 ] (AESKEY1) Register
 *  Key Bits [ 63:32 ] (AESKEY1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY1_Struct
 *! \brief  Key Bits [ 63:32 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY1_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [7:4]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY1_t;

/*@}*/

/** @defgroup AESKEY2 Key Bits [ 95:64 ] (AESKEY2) Register
 *  Key Bits [ 95:64 ] (AESKEY2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY2_Struct
 *! \brief  Key Bits [ 95:64 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY2_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [11:8]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY2_t;

/*@}*/

/** @defgroup AESKEY3 Key Bits [ 127:96 ] (AESKEY3) Register
 *  Key Bits [ 127:96 ] (AESKEY3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY3_Struct
 *! \brief  Key Bits [ 127:96 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY3_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [15:12]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY3_t;

/*@}*/

/** @defgroup AESKEY4 Key Bits [ 159:128 ] (AESKEY4) Register
 *  Key Bits [ 159:128 ] (AESKEY4) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY4_Struct
 *! \brief  Key Bits [ 159:128 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY4_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [3:0]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY4_t;

/*@}*/

/** @defgroup AESKEY5 Key Bits [ 191:160 ] (AESKEY5) Register
 *  Key Bits [ 191:160 ] (AESKEY5) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY5_Struct
 *! \brief  Key Bits [ 191:160 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY5_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [7:4]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY5_t;

/*@}*/

/** @defgroup AESKEY6 Key Bits [ 223:192 ] (AESKEY6) Register
 *  Key Bits [ 223:192 ] (AESKEY6) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY6_Struct
 *! \brief  Key Bits [ 223:192 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY6_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [11:8]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY6_t;

/*@}*/

/** @defgroup AESKEY7 Key Bits [ 255:224 ] (AESKEY7) Register
 *  Key Bits [ 255:224 ] (AESKEY7) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_AESKEY7_Struct
 *! \brief  Key Bits [ 255:224 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_AESKEY7_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Key: Bytes [15:12]; */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_AESKEY7_t;

/*@}*/

/** @defgroup CNTRINIT Counter Initialization Vector (CNTRINIT) Register
 *  Counter Initialization Vector (CNTRINIT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_CNTRINIT_Struct
 *! \brief  Counter Initialization Vector Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_CNTRINIT_t {
  union {
    struct {
      unsigned int VALUE      : 20;  /**< Counter Initialization Value */
      unsigned int reserved20 : 12;
    };
    uint32_t VALUE32;
  };
} ADI_crypto_CNTRINIT_t;

/*@}*/

/** @defgroup SHAH0 SHA Bits [ 31:0 ] (SHAH0) Register
 *  SHA Bits [ 31:0 ] (SHAH0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH0_Struct
 *! \brief  SHA Bits [ 31:0 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH0_t {
  union {
    struct {
      unsigned int SHAHASH0   : 32;  /**< Word 0: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH0_t;

/*@}*/

/** @defgroup SHAH1 SHA Bits [ 63:32 ] (SHAH1) Register
 *  SHA Bits [ 63:32 ] (SHAH1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH1_Struct
 *! \brief  SHA Bits [ 63:32 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH1_t {
  union {
    struct {
      unsigned int SHAHASH1   : 32;  /**< Word 1: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH1_t;

/*@}*/

/** @defgroup SHAH2 SHA Bits [ 95:64 ] (SHAH2) Register
 *  SHA Bits [ 95:64 ] (SHAH2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH2_Struct
 *! \brief  SHA Bits [ 95:64 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH2_t {
  union {
    struct {
      unsigned int SHAHASH2   : 32;  /**< Word 2: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH2_t;

/*@}*/

/** @defgroup SHAH3 SHA Bits [ 127:96 ] (SHAH3) Register
 *  SHA Bits [ 127:96 ] (SHAH3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH3_Struct
 *! \brief  SHA Bits [ 127:96 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH3_t {
  union {
    struct {
      unsigned int SHAHASH3   : 32;  /**< Word 3: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH3_t;

/*@}*/

/** @defgroup SHAH4 SHA Bits [ 159:128 ] (SHAH4) Register
 *  SHA Bits [ 159:128 ] (SHAH4) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH4_Struct
 *! \brief  SHA Bits [ 159:128 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH4_t {
  union {
    struct {
      unsigned int SHAHASH4   : 32;  /**< Word 4: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH4_t;

/*@}*/

/** @defgroup SHAH5 SHA Bits [ 191:160 ] (SHAH5) Register
 *  SHA Bits [ 191:160 ] (SHAH5) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH5_Struct
 *! \brief  SHA Bits [ 191:160 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH5_t {
  union {
    struct {
      unsigned int SHAHASH5   : 32;  /**< Word 5: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH5_t;

/*@}*/

/** @defgroup SHAH6 SHA Bits [ 223:192] (SHAH6) Register
 *  SHA Bits [ 223:192] (SHAH6) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH6_Struct
 *! \brief  SHA Bits [ 223:192] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH6_t {
  union {
    struct {
      unsigned int SHAHASH6   : 32;  /**< Word 6: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH6_t;

/*@}*/

/** @defgroup SHAH7 SHA Bits [ 255:224 ] (SHAH7) Register
 *  SHA Bits [ 255:224 ] (SHAH7) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crypto_SHAH7_Struct
 *! \brief  SHA Bits [ 255:224 ] Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crypto_SHAH7_t {
  union {
    struct {
      unsigned int SHAHASH7   : 32;  /**< Word 7: SHA Hash */
    };
    uint32_t VALUE32;
  };
} ADI_crypto_SHAH7_t;

/*@}*/

/** @defgroup CTL_A Half SPORT 'A' Control Register (CTL_A) Register
 *  Half SPORT 'A' Control Register (CTL_A) Register.
 *
 *  The ${.:.} contains transmit and receive control bits for ${.} half 'A', including serial port mode selection
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_SPEN
 *! \brief  Serial Port Enable (SPEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_DIS = 0,  /**< Disable */
  SPORT_CTL_A_CTL_EN  = 1   /**< Enable  */
} ADI_sport_CTL_A_SPEN;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_FSMUXSEL
 *! \brief  Frame Sync Multiplexer Select (FSMUXSEL) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_FS_MUX_DIS = 0,  /**< Disable frame sync multiplexing */
  SPORT_CTL_A_CTL_FS_MUX_EN  = 1   /**< Enable frame sync multiplexing  */
} ADI_sport_CTL_A_FSMUXSEL;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_CKMUXSEL
 *! \brief  Clock Multiplexer Select (CKMUXSEL) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_CLK_MUX_DIS = 0,  /**< Disable serial clock multiplexing */
  SPORT_CTL_A_CTL_CLK_MUX_EN  = 1   /**< Enable serial clock multiplexing  */
} ADI_sport_CTL_A_CKMUXSEL;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_LSBF
 *! \brief  Least-Significant Bit First (LSBF) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_MSB_FIRST = 0,  /**< MSB first sent/received */
  SPORT_CTL_A_CTL_LSB_FIRST = 1   /**< LSB first sent/received */
} ADI_sport_CTL_A_LSBF;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_ICLK
 *! \brief  Internal Clock (ICLK) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_EXTERNAL_CLK = 0,  /**< External clock */
  SPORT_CTL_A_CTL_INTERNAL_CLK = 1   /**< Internal clock */
} ADI_sport_CTL_A_ICLK;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_OPMODE
 *! \brief  Operation mode (OPMODE) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_SERIAL        = 0,  /**< DSP standard      */
  SPORT_CTL_A_CTL_TIMER_EN_MODE = 1   /**< Timer_enable mode */
} ADI_sport_CTL_A_OPMODE;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_CKRE
 *! \brief  Clock Rising Edge (CKRE) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_CLK_FALL_EDGE = 0,  /**< Clock falling edge */
  SPORT_CTL_A_CTL_CLK_RISE_EDGE = 1   /**< Clock rising edge  */
} ADI_sport_CTL_A_CKRE;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_FSR
 *! \brief  Frame Sync Required (FSR) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_FS_NOT_REQ = 0,  /**< No frame sync required */
  SPORT_CTL_A_CTL_FS_REQ     = 1   /**< Frame sync required    */
} ADI_sport_CTL_A_FSR;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_IFS
 *! \brief  Internal Frame Sync (IFS) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_EXTERNAL_FS = 0,  /**< External frame sync */
  SPORT_CTL_A_CTL_INTERNAL_FS = 1   /**< Internal frame sync */
} ADI_sport_CTL_A_IFS;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_DIFS
 *! \brief  Data-Independent Frame Sync (DIFS) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_DATA_DEP_FS  = 0,  /**< Data-dependent frame sync   */
  SPORT_CTL_A_CTL_DATA_INDP_FS = 1   /**< Data-independent frame sync */
} ADI_sport_CTL_A_DIFS;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_LFS
 *! \brief  Active-Low Frame Sync (LFS) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_FS_LO = 0,  /**< Active high frame sync (DSP standard mode) */
  SPORT_CTL_A_CTL_FS_HI = 1   /**< Active low frame sync (DSP standard mode)  */
} ADI_sport_CTL_A_LFS;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_LAFS
 *! \brief  Late Frame Sync (LAFS) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_EARLY_FS = 0,  /**< Early frame sync */
  SPORT_CTL_A_CTL_LATE_FS  = 1   /**< Late frame sync  */
} ADI_sport_CTL_A_LAFS;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_PACK
 *! \brief  Packing Enable (PACK) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_PACK_DIS   = 0,  /**< Disable               */
  SPORT_CTL_A_CTL_PACK_8BIT  = 1,  /**< 8-bit packing enable  */
  SPORT_CTL_A_CTL_PACK_16BIT = 2   /**< 16-bit packing enable */
} ADI_sport_CTL_A_PACK;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_GCLKEN
 *! \brief  Gated Clock Enable (GCLKEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_GCLK_DIS = 0,  /**< Disable */
  SPORT_CTL_A_CTL_GCLK_EN  = 1   /**< Enable  */
} ADI_sport_CTL_A_GCLKEN;


/*  =========================================================================
 *! \enum   ADI_sport_CTL_A_SPTRAN
 *! \brief  Serial Port Transfer Direction (SPTRAN) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_A_CTL_RX = 0,  /**< Receive  */
  SPORT_CTL_A_CTL_TX = 1   /**< Transmit */
} ADI_sport_CTL_A_SPTRAN;


/* ==========================================================================
 *! \struct ADI_sport_CTL_A_Struct
 *! \brief  Half SPORT 'A' Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_CTL_A_t {
  union {
    struct {
      unsigned int SPEN       :  1;  /**< Serial Port Enable */
      unsigned int FSMUXSEL   :  1;  /**< Frame Sync Multiplexer Select */
      unsigned int CKMUXSEL   :  1;  /**< Clock Multiplexer Select */
      unsigned int LSBF       :  1;  /**< Least-Significant Bit First */
      unsigned int SLEN       :  5;  /**< Serial Word Length */
      unsigned int reserved9  :  1;
      unsigned int ICLK       :  1;  /**< Internal Clock */
      unsigned int OPMODE     :  1;  /**< Operation mode */
      unsigned int CKRE       :  1;  /**< Clock Rising Edge */
      unsigned int FSR        :  1;  /**< Frame Sync Required */
      unsigned int IFS        :  1;  /**< Internal Frame Sync */
      unsigned int DIFS       :  1;  /**< Data-Independent Frame Sync */
      unsigned int LFS        :  1;  /**< Active-Low Frame Sync */
      unsigned int LAFS       :  1;  /**< Late Frame Sync */
      unsigned int PACK       :  2;  /**< Packing Enable */
      unsigned int FSERROPRN  :  1;  /**< Frame Sync Error Operation */
      unsigned int GCLKEN     :  1;  /**< Gated Clock Enable */
      unsigned int reserved22 :  3;
      unsigned int SPTRAN     :  1;  /**< Serial Port Transfer Direction */
      unsigned int DMAEN      :  1;  /**< DMA Enable */
      unsigned int reserved27 :  5;
    };
    uint32_t VALUE32;
  };
} ADI_sport_CTL_A_t;

/*@}*/

/** @defgroup DIV_A Half SPORT 'A' Divisor Register (DIV_A) Register
 *  Half SPORT 'A' Divisor Register (DIV_A) Register.
 *
 *  The ${.:.} contains divisor values that determine frequencies of internally-generated clocks and frame syncs for half ${.}  'A'.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_DIV_A_Struct
 *! \brief  Half SPORT 'A' Divisor Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_DIV_A_t {
  union {
    struct {
      unsigned int CLKDIV     : 16;  /**< Clock Divisor */
      unsigned int FSDIV      :  8;  /**< Frame Sync Divisor */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_sport_DIV_A_t;

/*@}*/

/** @defgroup INT_EN_A Half SPORT A's Interrupt Enable register (INT_EN_A) Register
 *  Half SPORT A's Interrupt Enable register (INT_EN_A) Register.
 *
 *  This register contains all the fields related to the Enable given for the various interrupts related to errors and data requests present in the  half SPORT A.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_sport_INT_EN_A_TFIEN
 *! \brief  Transfer Finish Interrupt Enable (TFIEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_INT_EN_A_CTL_TXFIN_DIS = 0,  /**< Transfer finish Interrupt is disabled */
  SPORT_INT_EN_A_CTL_TXFIN_EN  = 1   /**< Transfer Finish Interrupt is Enabled  */
} ADI_sport_INT_EN_A_TFIEN;


/* ==========================================================================
 *! \struct ADI_sport_INT_EN_A_Struct
 *! \brief  Half SPORT A's Interrupt Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_INT_EN_A_t {
  union {
    struct {
      unsigned int TFIEN      :  1;  /**< Transfer Finish Interrupt Enable */
      unsigned int DERRMSK    :  1;  /**< Data Error (Interrupt) Mask */
      unsigned int FSERRMSK   :  1;  /**< Frame Sync Error (Interrupt) Mask */
      unsigned int DataInt    :  1;  /**< Data request interrupt to the core */
      unsigned int SYSDTERR   :  1;  /**< Data error for system writes or reads */
      unsigned int reserved5  : 27;
    };
    uint32_t VALUE32;
  };
} ADI_sport_INT_EN_A_t;

/*@}*/

/** @defgroup STAT_A Half SPORT A's Status register (STAT_A) Register
 *  Half SPORT A's Status register (STAT_A) Register.
 *
 *  This register contains all the status fields in the half SPORT A. Detected errors are frame sync violations or buffer over/underflow conditions.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_sport_STAT_A_DXS
 *! \brief  Data Transfer Buffer Status (DXS) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_STAT_A_CTL_EMPTY     = 0,  /**< Empty          */
  SPORT_STAT_A_CTL_PART_FULL = 2,  /**< Partially full */
  SPORT_STAT_A_CTL_FULL      = 3   /**< Full           */
} ADI_sport_STAT_A_DXS;


/* ==========================================================================
 *! \struct ADI_sport_STAT_A_Struct
 *! \brief  Half SPORT A's Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_STAT_A_t {
  union {
    struct {
      unsigned int TFISTAT    :  1;  /**< Transmit Finish Interrupt Status */
      unsigned int DERRSTAT   :  1;  /**< Data Error Status */
      unsigned int FSERRSTAT  :  1;  /**< Frame Sync Error Status */
      unsigned int DATASTAT   :  1;  /**< Data Buffer status */
      unsigned int SYSDTERRSTAT :  1;  /**< System Data Error Status */
      unsigned int reserved5    :  3;
      unsigned int DXS          :  2;  /**< Data Transfer Buffer Status */
      unsigned int reserved10   : 22;
    };
    uint32_t VALUE32;
  };
} ADI_sport_STAT_A_t;

/*@}*/

/** @defgroup NUM_TRAN_A Half SPORT A Number of transfers register (NUM_TRAN_A) Register
 *  Half SPORT A Number of transfers register (NUM_TRAN_A) Register.
 *
 *  This register specifies the number of transfers of words to transfer or receive depending on the SPTRAN bit.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_NUM_TRAN_A_Struct
 *! \brief  Half SPORT A Number of transfers Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_NUM_TRAN_A_t {
  union {
    struct {
      unsigned int NUMTRAN    : 12;  /**< Number of transfers (Half SPORT A) */
      unsigned int reserved12 : 20;
    };
    uint32_t VALUE32;
  };
} ADI_sport_NUM_TRAN_A_t;

/*@}*/

/** @defgroup TIM_CONVT_A Half SPORT A's register to be programmed with the desired CONVT pulse width (TIM_CONVT_A) Register
 *  Half SPORT A's register to be programmed with the desired CONVT pulse width (TIM_CONVT_A) Register.
 *
 *  This register contains the settings related to the CONVT signal for Half SPORT A
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_TIM_CONVT_A_Struct
 *! \brief  Half SPORT A's register to be programmed with the desired CONVT pulse width Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_TIM_CONVT_A_t {
  union {
    struct {
      unsigned int CONVT_WIDTH :  4;  /**< CONVT signal width: Half SPORT A */
      unsigned int reserved4   :  4;
      unsigned int CONVT_POL   :  1;  /**< Polarity of the Convt signal */
      unsigned int reserved9      :  7;
      unsigned int CONVT_FS_DURTN :  8;  /**< CONVT to FS duration: Half SPORT A */
      unsigned int reserved24     :  8;
    };
    uint32_t VALUE32;
  };
} ADI_sport_TIM_CONVT_A_t;

/*@}*/

/** @defgroup TX_A Half SPORT 'A' Tx Buffer Register (TX_A) Register
 *  Half SPORT 'A' Tx Buffer Register (TX_A) Register.
 *
 *  The ${.:.} register buffers the half ${.}'s transmit data. This register must be loaded with the data to be transmitted if the half ${.} is configured to transmit. Either a program running on the processor core may load the data into the buffer (word-by-word process) or the DMA controller may automatically load the data into the buffer (DMA process).
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_TX_A_Struct
 *! \brief  Half SPORT 'A' Tx Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_TX_A_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Transmit Buffer */
    };
    uint32_t VALUE32;
  };
} ADI_sport_TX_A_t;

/*@}*/

/** @defgroup RX_A Half SPORT 'A' Rx Buffer Register (RX_A) Register
 *  Half SPORT 'A' Rx Buffer Register (RX_A) Register.
 *
 *  The ${.:.} register buffers the half ${.}'s receive data. This buffer becomes active when the half ${.} is configured to receive data. After a complete word has been received in receive shifter, it is placed into the ${.:.} register. This data can be read in core mode (in interrupt-based or polling-based mechanism) or directly DMA'd into processor memory using DMA controller.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_RX_A_Struct
 *! \brief  Half SPORT 'A' Rx Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_RX_A_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Receive Buffer */
    };
    uint32_t VALUE32;
  };
} ADI_sport_RX_A_t;

/*@}*/

/** @defgroup NUMTRAN_CNT_A Half SPORT A Number of transfers counter (NUMTRAN_CNT_A) Register
 *  Half SPORT A Number of transfers counter (NUMTRAN_CNT_A) Register.
 *
 *  This register contains the value of the number of transfers which are finished by SPORT.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_NUMTRAN_CNT_A_Struct
 *! \brief  Half SPORT A Number of transfers counter Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_NUMTRAN_CNT_A_t {
  union {
    struct {
      unsigned int NUMTRAN_CNT : 12;  /**< Number of transfers counter value */
      unsigned int reserved12  : 20;
    };
    uint32_t VALUE32;
  };
} ADI_sport_NUMTRAN_CNT_A_t;

/*@}*/

/** @defgroup CTL_B Half SPORT 'B' Control Register (CTL_B) Register
 *  Half SPORT 'B' Control Register (CTL_B) Register.
 *
 *  The ${.:.} contains transmit and receive control bits for ${.} half 'B', including serial port mode selection for the channels. The function of some bits in ${.:.} vary, depending on the ${.}'s operating mode. For more information, see the ${.} operating modes description. If reading reserved bits, the read value is the last written value to these bits or is the reset value of these bits.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_sport_CTL_B_PACK
 *! \brief  Packing Enable (PACK) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_CTL_B_CTL_PACK_DIS   = 0,  /**< Disable               */
  SPORT_CTL_B_CTL_PACK_8BIT  = 1,  /**< 8-bit packing enable  */
  SPORT_CTL_B_CTL_PACK_16BIT = 2   /**< 16-bit packing enable */
} ADI_sport_CTL_B_PACK;


/* ==========================================================================
 *! \struct ADI_sport_CTL_B_Struct
 *! \brief  Half SPORT 'B' Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_CTL_B_t {
  union {
    struct {
      unsigned int SPEN       :  1;  /**< Serial Port Enable */
      unsigned int reserved1  :  2;
      unsigned int LSBF       :  1;  /**< Least-Significant Bit First */
      unsigned int SLEN       :  5;  /**< Serial Word Length */
      unsigned int reserved9  :  1;
      unsigned int ICLK       :  1;  /**< Internal Clock */
      unsigned int OPMODE     :  1;  /**< Operation mode */
      unsigned int CKRE       :  1;  /**< Clock Rising Edge */
      unsigned int FSR        :  1;  /**< Frame Sync Required */
      unsigned int IFS        :  1;  /**< Internal Frame Sync */
      unsigned int DIFS       :  1;  /**< Data-Independent Frame Sync */
      unsigned int LFS        :  1;  /**< Active-Low Frame Sync / L_FIRST / PLFS */
      unsigned int LAFS       :  1;  /**< Late Frame Sync */
      unsigned int PACK       :  2;  /**< Packing Enable */
      unsigned int FSERROPRN  :  1;  /**< Frame Sync Error Operation */
      unsigned int GCLKEN     :  1;  /**< Gated Clock Enable */
      unsigned int reserved22 :  3;
      unsigned int SPTRAN     :  1;  /**< Serial Port Transfer Direction */
      unsigned int DMAEN      :  1;  /**< DMA Enable */
      unsigned int reserved27 :  5;
    };
    uint32_t VALUE32;
  };
} ADI_sport_CTL_B_t;

/*@}*/

/** @defgroup DIV_B Half SPORT 'B' Divisor Register (DIV_B) Register
 *  Half SPORT 'B' Divisor Register (DIV_B) Register.
 *
 *  The ${.:.} contains divisor values that determine frequencies of internally-generated clocks and frame syncs for ${.} half 'B'.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_DIV_B_Struct
 *! \brief  Half SPORT 'B' Divisor Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_DIV_B_t {
  union {
    struct {
      unsigned int CLKDIV     : 16;  /**< Clock Divisor */
      unsigned int FSDIV      :  8;  /**< Frame Sync Divisor */
      unsigned int reserved24 :  8;
    };
    uint32_t VALUE32;
  };
} ADI_sport_DIV_B_t;

/*@}*/

/** @defgroup INT_EN_B Half SPORT A's Interrupt Enable register (INT_EN_B) Register
 *  Half SPORT A's Interrupt Enable register (INT_EN_B) Register.
 *
 *  This register contains all the fields related to the Enable given for the various interrupts related to errors and data requests present in the half SPORT B.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_sport_INT_EN_B_TFIEN
 *! \brief  Transmit Finish Interrupt Enable (TFIEN) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_INT_EN_B_CTL_TXFIN_DIS = 0,  /**< Transfer Finish Interrupt is disabled */
  SPORT_INT_EN_B_CTL_TXFIN_EN  = 1   /**< Transfer Finish Interrupt is Enabled  */
} ADI_sport_INT_EN_B_TFIEN;


/* ==========================================================================
 *! \struct ADI_sport_INT_EN_B_Struct
 *! \brief  Half SPORT A's Interrupt Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_INT_EN_B_t {
  union {
    struct {
      unsigned int TFIEN      :  1;  /**< Transmit Finish Interrupt Enable */
      unsigned int DERRMSK    :  1;  /**< Data Error (Interrupt) Mask */
      unsigned int FSERRMSK   :  1;  /**< Frame Sync Error (Interrupt) Mask */
      unsigned int DataInt    :  1;  /**< Data request interrupt to the core */
      unsigned int SYSDTERR   :  1;  /**< Data error for system writes or reads */
      unsigned int reserved5  : 27;
    };
    uint32_t VALUE32;
  };
} ADI_sport_INT_EN_B_t;

/*@}*/

/** @defgroup STAT_B Half SPORT B's Status register (STAT_B) Register
 *  Half SPORT B's Status register (STAT_B) Register.
 *
 *  This register contains all the status fields present in the half SPORT B. Detected errors are frame sync violations or buffer over/underflow conditions.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_sport_STAT_B_DXS
 *! \brief  Data Transfer Buffer Status (DXS) Enumerations
 *  ========================================================================= */
typedef enum
{
  SPORT_STAT_B_CTL_EMPTY     = 0,  /**< Empty          */
  SPORT_STAT_B_CTL_PART_FULL = 2,  /**< Partially full */
  SPORT_STAT_B_CTL_FULL      = 3   /**< Full           */
} ADI_sport_STAT_B_DXS;


/* ==========================================================================
 *! \struct ADI_sport_STAT_B_Struct
 *! \brief  Half SPORT B's Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_STAT_B_t {
  union {
    struct {
      unsigned int TFISTAT    :  1;  /**< Transmit Finish Interrupt Status */
      unsigned int DERRSTAT   :  1;  /**< Data Error Status */
      unsigned int FSERRSTAT  :  1;  /**< Frame Sync Error Status */
      unsigned int DATASTAT   :  1;  /**< Data Buffer status */
      unsigned int SYSDTERRSTAT :  1;  /**< System Data Error Status */
      unsigned int reserved5    :  3;
      unsigned int DXS          :  2;  /**< Data Transfer Buffer Status */
      unsigned int reserved10   : 22;
    };
    uint32_t VALUE32;
  };
} ADI_sport_STAT_B_t;

/*@}*/

/** @defgroup NUM_TRAN_B Half SPORT B Number of transfers register (NUM_TRAN_B) Register
 *  Half SPORT B Number of transfers register (NUM_TRAN_B) Register.
 *
 *  This register specifies the number of transfers of the words to transfer or receive depending on the TRAN bit.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_NUM_TRAN_B_Struct
 *! \brief  Half SPORT B Number of transfers Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_NUM_TRAN_B_t {
  union {
    struct {
      unsigned int NUMTRAN    : 12;  /**< Number of transfers (Half SPORT A) */
      unsigned int reserved12 : 20;
    };
    uint32_t VALUE32;
  };
} ADI_sport_NUM_TRAN_B_t;

/*@}*/

/** @defgroup TIM_CONVT_B Half SPORT B's register to be programmed with the desired CONVT pulse width (TIM_CONVT_B) Register
 *  Half SPORT B's register to be programmed with the desired CONVT pulse width (TIM_CONVT_B) Register.
 *
 *  This register contains the settings related to the CONVT signal for Half SPORT B
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_TIM_CONVT_B_Struct
 *! \brief  Half SPORT B's register to be programmed with the desired CONVT pulse width Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_TIM_CONVT_B_t {
  union {
    struct {
      unsigned int CONVT_WIDTH :  4;  /**< CONVT signal width: Half SPORT B */
      unsigned int reserved4   :  4;
      unsigned int CONVT_POL   :  1;  /**< Polarity of the Convt signal */
      unsigned int reserved9      :  7;
      unsigned int CONVT_FS_DURTN :  8;  /**< CONVT to FS duration: Half SPORT B */
      unsigned int reserved24     :  8;
    };
    uint32_t VALUE32;
  };
} ADI_sport_TIM_CONVT_B_t;

/*@}*/

/** @defgroup TX_B Half SPORT 'B' Tx Buffer Register (TX_B) Register
 *  Half SPORT 'B' Tx Buffer Register (TX_B) Register.
 *
 *  The ${.:.} register buffers the half ${.}'s channel transmit data. This register must be loaded with the data to be transmitted. Either a program running on the processor core may load the data into the buffer (word-by-word process) or the DMA controller may automatically load the data into the buffer (DMA process).
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_TX_B_Struct
 *! \brief  Half SPORT 'B' Tx Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_TX_B_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Transmit Buffer */
    };
    uint32_t VALUE32;
  };
} ADI_sport_TX_B_t;

/*@}*/

/** @defgroup RX_B Half SPORT 'B' Rx Buffer Register (RX_B) Register
 *  Half SPORT 'B' Rx Buffer Register (RX_B) Register.
 *
 *  The ${.:.} register buffers the half ${.}'s channel receive data. This buffer becomes active when the half ${.} is configured to receive data. After a complete word has been received in receive shifter, it is placed into the ${.:.} register. This data can be read in core mode or directly DMA'd into processor memory using DMA controller.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_RX_B_Struct
 *! \brief  Half SPORT 'B' Rx Buffer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_RX_B_t {
  union {
    struct {
      unsigned int VALUE      : 32;  /**< Receive Buffer */
    };
    uint32_t VALUE32;
  };
} ADI_sport_RX_B_t;

/*@}*/

/** @defgroup NUMTRAN_CNT_B Half SPORT B Number of transfers counter (NUMTRAN_CNT_B) Register
 *  Half SPORT B Number of transfers counter (NUMTRAN_CNT_B) Register.
 *
 *  This register contains the value of the number of transfers which are finished by SPORT.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_sport_NUMTRAN_CNT_B_Struct
 *! \brief  Half SPORT B Number of transfers counter Register bit field structure
 * ========================================================================== */
typedef struct _ADI_sport_NUMTRAN_CNT_B_t {
  union {
    struct {
      unsigned int NUMTRAN_CNT : 12;  /**< Number of transfers counter value */
      unsigned int reserved12  : 20;
    };
    uint32_t VALUE32;
  };
} ADI_sport_NUMTRAN_CNT_B_t;

/*@}*/

/** @defgroup CRC_CTL CRC Control Register (CRC_CTL) Register
 *  CRC Control Register (CRC_CTL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crc_CRC_CTL_Struct
 *! \brief  CRC Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crc_CRC_CTL_t {
  union {
    struct {
      unsigned int BLKEN      :  1;  /**< CRC peripheral enable */
      unsigned int LSB_FIRST  :  1;  /**< LSB First CRC calculation enable */
      unsigned int BITMIRR    :  1;  /**< Bit Mirroring */
      unsigned int BYTMIRR    :  1;  /**< Byte Mirroring */
      unsigned int W16SWP     :  1;  /**< Word16 Swap */
      unsigned int reserved5  : 27;
    };
    uint32_t VALUE32;
  };
} ADI_crc_CRC_CTL_t;

/*@}*/

/** @defgroup CRC_IPDATA Input Data Register (CRC_IPDATA) Register
 *  Input Data Register (CRC_IPDATA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crc_CRC_IPDATA_Struct
 *! \brief  Input Data Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crc_CRC_IPDATA_t {
  union {
    struct {
      unsigned int CRC_IPDATA : 32;  /**< Input Data Register. Holds 32bit data that can be written by Processor or DMA Controller */
    };
    uint32_t VALUE32;
  };
} ADI_crc_CRC_IPDATA_t;

/*@}*/

/** @defgroup CRC_RESULT CRC Result Register (CRC_RESULT) Register
 *  CRC Result Register (CRC_RESULT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crc_CRC_RESULT_Struct
 *! \brief  CRC Result Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crc_CRC_RESULT_t {
  union {
    struct {
      unsigned int CRC_RESULT : 32;  /**< CRC result. */
    };
    uint32_t VALUE32;
  };
} ADI_crc_CRC_RESULT_t;

/*@}*/

/** @defgroup CRC_POLY Programmable CRC Polynomial (CRC_POLY) Register
 *  Programmable CRC Polynomial (CRC_POLY) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_crc_CRC_POLY_Struct
 *! \brief  Programmable CRC Polynomial Register bit field structure
 * ========================================================================== */
typedef struct _ADI_crc_CRC_POLY_t {
  union {
    struct {
      unsigned int Polynomial : 32;  /**< 1-32 bit programmable CRC polynomial */
    };
    uint32_t VALUE32;
  };
} ADI_crc_CRC_POLY_t;

/*@}*/

/** @defgroup EI0CFG External Interrupt configuration 0 (EI0CFG) Register
 *  External Interrupt configuration 0 (EI0CFG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_EXTINT_EI0CFG_Struct
 *! \brief  External Interrupt configuration 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_EXTINT_EI0CFG_t {
  union {
    struct {
      unsigned int IRQ0MDE    :  3;  /**< External Interrupt 0 Mode registers */
      unsigned int IRQ0EN     :  1;  /**< External Interrupt 0 Enable bit */
      unsigned int IRQ1MDE    :  3;  /**< External Interrupt 1 Mode registers */
      unsigned int IRQ1EN     :  1;  /**< External Interrupt 1 Enable bit */
      unsigned int IRQ2MDE    :  3;  /**< External Interrupt 2 Mode registers */
      unsigned int IRQ2EN     :  1;  /**< External Interrupt 2 Enable bit */
      unsigned int IRQ3MDE    :  3;  /**< External Interrupt 3 Mode registers */
      unsigned int IRQ3EN     :  1;  /**< External Interrupt 3 enable bit */
      unsigned int SIPEN      :  1;  /**< External Interrupt using SIP_UPDATE enable bit */
      unsigned int SIPMDE     :  3;  /**< External Interrupt using SIP_UPDATE Mode registers */
      unsigned int reserved20 : 12;
    };
    uint32_t VALUE32;
  };
} ADI_EXTINT_EI0CFG_t;

/*@}*/

/** @defgroup NMICFG NMI Interrupt configuration (NMICFG) Register
 *  NMI Interrupt configuration (NMICFG) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_EXTINT_NMICFG_Struct
 *! \brief  NMI Interrupt configuration Register bit field structure
 * ========================================================================== */
typedef struct _ADI_EXTINT_NMICFG_t {
  union {
    struct {
      unsigned int NMIMDE     :  3;  /**< NMI Mode registers */
      unsigned int NMIEN      :  1;  /**< NMI enable bit */
      unsigned int reserved4  : 11;
      unsigned int WR_EN      :  1;  /**< indicating if this register is allowed to write */
      unsigned int reserved16 : 16;
    };
    uint32_t VALUE32;
  };
} ADI_EXTINT_NMICFG_t;

/*@}*/

/** @defgroup EICLR External Interrupt clear (EICLR) Register
 *  External Interrupt clear (EICLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_EXTINT_EICLR_Struct
 *! \brief  External Interrupt clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_EXTINT_EICLR_t {
  union {
    struct {
      unsigned int IRQ0       :  1;  /**< External interrupt 0 */
      unsigned int IRQ1       :  1;  /**< External interrupt 1 */
      unsigned int IRQ2       :  1;  /**< External interrupt 2 */
      unsigned int IRQ3       :  1;  /**< External interrupt 3 */
      unsigned int SIP_CLR    :  1;  /**< External interrupt Clear for SIP_UPDATE */
      unsigned int reserved5  : 27;
    };
    uint32_t VALUE32;
  };
} ADI_EXTINT_EICLR_t;

/*@}*/

/** @defgroup NMICLR Non-maskable interrupt clear (NMICLR) Register
 *  Non-maskable interrupt clear (NMICLR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_EXTINT_NMICLR_Struct
 *! \brief  Non-maskable interrupt clear Register bit field structure
 * ========================================================================== */
typedef struct _ADI_EXTINT_NMICLR_t {
  union {
    struct {
      unsigned int CLEAR      :  1;  /**< NMI clear */
      unsigned int reserved1  : 31;
    };
    uint32_t VALUE32;
  };
} ADI_EXTINT_NMICLR_t;

/*@}*/

/** @defgroup INTR_CNTRL0 Power Supply Monitor Interrupt Enable (INTR_CNTRL0) Register
 *  Power Supply Monitor Interrupt Enable (INTR_CNTRL0) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_PMG_INTR_CNTRL0_VBAT_RANGE
 *! \brief  Battery Monitor Range (VBAT_RANGE) Enumerations
 *  ========================================================================= */
typedef enum
{
  PMG_INTR_CNTRL0_REGION1 = 0,  /**< Configure to generate interrupt if VBAT > 2.75V              */
  PMG_INTR_CNTRL0_REGION2 = 1,  /**< Configure to generate interrupt if VBAT between 2.75V - 1.6V */
  PMG_INTR_CNTRL0_REGION3 = 2,  /**< Configure to generate interrupt if VBAT between 2.3V - 1.6V  */
  PMG_INTR_CNTRL0_NA      = 3   /**< N/A                                                          */
} ADI_PMG_INTR_CNTRL0_VBAT_RANGE;


/* ==========================================================================
 *! \struct ADI_PMG_INTR_CNTRL0_Struct
 *! \brief  Power Supply Monitor Interrupt Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_INTR_CNTRL0_t {
  union {
    struct {
      unsigned int vbat_alarm_irq_en :  1;  /**< Enable Interrupt for VBAT */
      unsigned int vreg_irq_un_en    :  1;  /**< Enable Interrupt when VREG under-voltage: below 1V */
      unsigned int vreg_irq_ov_en    :  1;  /**< Enable Interrupt when VREG over-voltage: over- 1.32V */
      unsigned int reserved3         :  5;
      unsigned int VBAT_RANGE        :  2;  /**< Battery Monitor Range */
      unsigned int VBAT_RANGE_irq_en :  1;  /**< Interrupt enable for VBAT range */
      unsigned int reserved11        : 21;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_INTR_CNTRL0_t;

/*@}*/

/** @defgroup PSM_STATUS Power supply monitor status (PSM_STATUS) Register
 *  Power supply monitor status (PSM_STATUS) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_PMG_PSM_STATUS_RO_VBAT_Range1
 *! \brief  VBAT range1 (> 2.75v) (RO_VBAT_Range1) Enumerations
 *  ========================================================================= */
typedef enum
{
  PMG_PSM_STATUS_BATSTAT1 = 0,  /**< VBAT NOT in the range specified */
  PMG_PSM_STATUS_BATSTAT0 = 1   /**< VBAT in the range specified     */
} ADI_PMG_PSM_STATUS_RO_VBAT_Range1;


/* ==========================================================================
 *! \struct ADI_PMG_PSM_STATUS_Struct
 *! \brief  Power supply monitor status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_PSM_STATUS_t {
  union {
    struct {
      unsigned int psm_vbat   :  1;  /**< Status bit indicating an Alarm that battery is below 1.8V. */
      unsigned int psm_reg_un :  1;  /**< Status bit for Alarm indicating VREG is below 1V. */
      unsigned int psm_vreg_ov :  1;  /**< Status bit for alarm indicating Overvoltage for VREG */
      unsigned int reserved3   :  4;
      unsigned int wicen_ack   :  1;  /**< WIC Enable Acknowledge from Cortex */
      unsigned int VBAT_Range1 :  1;  /**< VBAT range1 (> 2.75v) */
      unsigned int VBAT_Range2 :  1;  /**< VBAT range2 (2.75v - 2.3v) */
      unsigned int VBAT_Range3 :  1;  /**< VBAT range3 (2.3v - 1.6v) */
      unsigned int reserved11     :  2;
      unsigned int RO_VBAT_Range1 :  1;  /**< VBAT range1 (> 2.75v) */
      unsigned int RO_VBAT_Range2 :  1;  /**< VBAT range2 (2.75v - 2.3v) */
      unsigned int RO_VBAT_Range3 :  1;  /**< VBAT range3 (2.3v - 1.6v) */
      unsigned int reserved16     : 16;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_PSM_STATUS_t;

/*@}*/

/** @defgroup PWRMOD Power Mode Register (PWRMOD) Register
 *  Power Mode Register (PWRMOD) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_PMG_PWRMOD_pw_md
 *! \brief  Power Mode Bits (pw_md) Enumerations
 *  ========================================================================= */
typedef enum
{
  PMG_PWRMOD_FLEXI     = 0,  /**< FLEXI Mode     */
  PMG_PWRMOD_SYSSLEEP  = 1,  /**< SYSSLEEP Mode  */
  PMG_PWRMOD_HIBERNATE = 2,  /**< HIBERNATE Mode */
  PMG_PWRMOD_SHUTDOWN  = 3   /**< SHUTDOWN Mode  */
} ADI_PMG_PWRMOD_pw_md;


/* ==========================================================================
 *! \struct ADI_PMG_PWRMOD_Struct
 *! \brief  Power Mode Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_PWRMOD_t {
  union {
    struct {
      unsigned int pw_md      :  2;  /**< Power Mode Bits */
      unsigned int reduce_pmg_clk :  1;  /**< Reduce Speed for the PMG */
      unsigned int monitor_vbat_n :  1;  /**< Monitor VBAT during HIBERNATE Mode. Monitors VBAT by default */
      unsigned int pmg_full_speed :  1;  /**< Keep PMG at full speed - 32KHz */
      unsigned int reserved5      : 27;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_PWRMOD_t;

/*@}*/

/** @defgroup PWRKEY Key protection for PWRMOD (PWRKEY) Register
 *  Key protection for PWRMOD (PWRKEY) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_PWRKEY_Struct
 *! \brief  Key protection for PWRMOD Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_PWRKEY_t {
  union {
    struct {
      unsigned int PWRKEY     : 16;  /**< Power control key register */
      unsigned int reserved16 : 16;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_PWRKEY_t;

/*@}*/

/** @defgroup SHUTDOWN_STATUS SHUTDOWN Status Register (SHUTDOWN_STATUS) Register
 *  SHUTDOWN Status Register (SHUTDOWN_STATUS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_SHUTDOWN_STATUS_Struct
 *! \brief  SHUTDOWN Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_SHUTDOWN_STATUS_t {
  union {
    struct {
      unsigned int ExtInt0    :  1;  /**< Interrupt from External Interrupt 0 */
      unsigned int ExtInt1    :  1;  /**< Interrupt from External Interrupt 1 */
      unsigned int ExtInt2    :  1;  /**< Interrupt from External Interrupt 2 */
      unsigned int RTC        :  1;  /**< Interrupt from RTC */
      unsigned int reserved4  : 28;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_SHUTDOWN_STATUS_t;

/*@}*/

/** @defgroup SRAMRET Control for Retention SRAM during HIBERNATE Mode (SRAMRET) Register
 *  Control for Retention SRAM during HIBERNATE Mode (SRAMRET) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_SRAMRET_Struct
 *! \brief  Control for Retention SRAM during HIBERNATE Mode Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_SRAMRET_t {
  union {
    struct {
      unsigned int sram_ret1_en :  1;  /**< Enable retention bank 1 (8kB) */
      unsigned int sram_ret2_en :  1;  /**< Enable retention bank 2 (16kB) */
      unsigned int sw_flash_en  :  1;  /**< Enable HV logic for HIBERNATE Mode */
      unsigned int reserved3    : 29;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_SRAMRET_t;

/*@}*/

/** @defgroup SW_TST_LV0 LV Switch config (SW_TST_LV0) Register
 *  LV Switch config (SW_TST_LV0) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_PMG_SW_TST_LV0_pg_an_testbus
 *! \brief  Test Bus (pg_an_testbus) Enumerations
 *  ========================================================================= */
typedef enum
{
  PMG_SW_TST_LV0_VDDMONITOR = 0,  /**< Core dvdd monitor, core por comparator   */
  PMG_SW_TST_LV0_COREPOR    = 1,  /**< Core POR comparator, sram1 ok comparator */
  PMG_SW_TST_LV0_UNUSEDSRAM = 2,  /**< Unused, sram2 ok comparator              */
  PMG_SW_TST_LV0_UNUSED2    = 3   /**< Unused                                   */
} ADI_PMG_SW_TST_LV0_pg_an_testbus;


/* ==========================================================================
 *! \struct ADI_PMG_SW_TST_LV0_Struct
 *! \brief  LV Switch config Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_SW_TST_LV0_t {
  union {
    struct {
      unsigned int pg_double_switch_lv :  1;  /**< Allow for a double switch for the PG Switch to reduce voltage drop */
      unsigned int pg_vmin_sel_lv      :  1;  /**< OK and dvdd monitor resistive divider trimmings */
      unsigned int pg_vpor_sel_lv      :  1;  /**< POR resistive divider trimming */
      unsigned int pg_fine_trim_lv     :  2;  /**< 2 bit fine trim for comparator trip points */
      unsigned int reserved5           :  1;
      unsigned int test_en_pgsw_lv     :  1;  /**< Test mode enable */
      unsigned int test_sel_pgsw_lv    :  2;  /**< Test mode select */
      unsigned int pg_min_op_lv        :  1;  /**< OK from the digital logic SW */
      unsigned int pg_sw_por_lv        :  1;  /**< POR from the digital logic SW */
      unsigned int pg_min_op_lv16k     :  1;  /**< OK signal from the LV Switch for 16K block */
      unsigned int pg_min_op_lv8k      :  1;  /**< OK signal from the LV Switch for 16K block */
      unsigned int pg_an_testbus       :  2;  /**< Test Bus */
      unsigned int reserved15          : 17;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_SW_TST_LV0_t;

/*@}*/

/** @defgroup SW_TST_LV1 LV Switch config2 (test) (SW_TST_LV1) Register
 *  LV Switch config2 (test) (SW_TST_LV1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_SW_TST_LV1_Struct
 *! \brief  LV Switch config2 (test) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_SW_TST_LV1_t {
  union {
    struct {
      unsigned int pg_res_div_hyst_trim_vdd :  2;  /**< power gate hyst trim */
      unsigned int pg_fast_wakeup_vdd       :  1;  /**< Power switch (digital) Fast wakeup mode enable */
      unsigned int reserved3                : 29;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_SW_TST_LV1_t;

/*@}*/

/** @defgroup SW_TST_HV HV Switch config (SW_TST_HV) Register
 *  HV Switch config (SW_TST_HV) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_SW_TST_HV_Struct
 *! \brief  HV Switch config Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_SW_TST_HV_t {
  union {
    struct {
      unsigned int pg_hyst_trim_n_hv_vbat :  1;  /**< used to trim hysteresis in comparators */
      unsigned int pg_fine_trim_hv_vbat   :  2;  /**< 2 bit fine trim for comparator trip points */
      unsigned int reserved3              :  1;
      unsigned int pg_vmin_sel_hv_vbat    :  1;  /**< 1 bit coarse trim for OK and vbat comparators */
      unsigned int pg_double_switch_hv_vbat :  1;  /**< Allow for double switch */
      unsigned int pg_sw_ok_trm_hv_vbat     :  1;  /**< OK comparator output - pre latch */
      unsigned int reserved7                :  1;
      unsigned int pg_sw_lim_hv_vbat        :  1;  /**< vbat comparator output */
      unsigned int reserved9                :  1;
      unsigned int pg_min_op_hv_vbat        :  1;  /**< OK comparator output */
      unsigned int reserved11               :  4;
      unsigned int pg_res_trm_hv_vbat       :  2;  /**< res trm hv vbat */
      unsigned int reserved17               : 15;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_SW_TST_HV_t;

/*@}*/

/** @defgroup TESTPROT Test register lock (TESTPROT) Register
 *  Test register lock (TESTPROT) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_TESTPROT_Struct
 *! \brief  Test register lock Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_TESTPROT_t {
  union {
    struct {
      unsigned int testprot_key : 32;  /**< write 0x5970418E to unlock all test registers in clocking/power-management and other blocks */
    };
    uint32_t VALUE32;
  };
} ADI_PMG_TESTPROT_t;

/*@}*/

/** @defgroup LP_TST_REF0 Low Power Reference Test Register 0 (LP_TST_REF0) Register
 *  Low Power Reference Test Register 0 (LP_TST_REF0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_LP_TST_REF0_Struct
 *! \brief  Low Power Reference Test Register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_LP_TST_REF0_t {
  union {
    struct {
      unsigned int bg_pd      :  1;  /**< Low Power Reference Power Down Bit */
      unsigned int bg_trim    :  8;  /**< Low Power Reference Trimming Bits */
      unsigned int reserved9  :  6;
      unsigned int lpbuck_en  :  1;  /**< Enable Bit for the LP Buck */
      unsigned int reserved16 : 16;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_LP_TST_REF0_t;

/*@}*/

/** @defgroup PMG_TRIM Trimming bits for the power management (PMG_TRIM) Register
 *  Trimming bits for the power management (PMG_TRIM) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_PMG_TRIM_Struct
 *! \brief  Trimming bits for the power management Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_PMG_TRIM_t {
  union {
    struct {
      unsigned int pmg_trim   : 16;  /**< Trimming bits for the LP Reference */
      unsigned int lpbuck_memory :  1;  /**< Trimming bits for the LP Reference */
      unsigned int reserved17    : 15;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_PMG_TRIM_t;

/*@}*/

/** @defgroup RSTSTA Reset status (RSTSTA) Register
 *  Reset status (RSTSTA) Register.
 *
 *  This register is recommended to be read at the beginning of the user-code to determine the cause of the reset.
Default values of this register is 'unspecified' because the cause of reset can be any source.
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_PMG_RSTSTA_POR_SRC
 *! \brief  Power on reset Source (pmg_rst_src) (POR_SRC) Enumerations
 *  ========================================================================= */
typedef enum
{
  PMG_RSTSTA_FAILSAFE_HV = 0,  /**< POR triggered because VBAT drops below Fail Safe */
  PMG_RSTSTA_RST_VBAT    = 1,  /**< POR trigger because VBAT supply (VBAT<1.7v)      */
  PMG_RSTSTA_RST_VREG    = 2,  /**< POR triggered because VDD supply (VDD < 1.08v)   */
  PMG_RSTSTA_FAILSAFE_LV = 3   /**< POR triggered because VREG drops below Fail Safe */
} ADI_PMG_RSTSTA_POR_SRC;


/* ==========================================================================
 *! \struct ADI_PMG_RSTSTA_Struct
 *! \brief  Reset status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_RSTSTA_t {
  union {
    struct {
      unsigned int POR        :  1;  /**< Power-on reset */
      unsigned int EXTRST     :  1;  /**< External reset */
      unsigned int WDRST      :  1;  /**< Watchdog timeout */
      unsigned int SWRST      :  1;  /**< Software reset */
      unsigned int POR_SRC    :  2;  /**< Power on reset Source (pmg_rst_src) */
      unsigned int reserved6  : 26;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_RSTSTA_t;

/*@}*/

/** @defgroup CNTRL1 HPBUCK control (CNTRL1) Register
 *  HPBUCK control (CNTRL1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_CNTRL1_Struct
 *! \brief  HPBUCK control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_CNTRL1_t {
  union {
    struct {
      unsigned int hpbuck_en  :  1;  /**< Enable HP Buck */
      unsigned int reserved1  : 31;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_CNTRL1_t;

/*@}*/

/** @defgroup WK_TST test mode for wake up options (WK_TST) Register
 *  test mode for wake up options (WK_TST) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_WK_TST_Struct
 *! \brief  test mode for wake up options Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_WK_TST_t {
  union {
    struct {
      unsigned int fast_wk    :  1;  /**< Fast Wake Mode for HF OSC */
      unsigned int super_fast_wk :  1;  /**< Faster Mode than fast mode for HF OSC */
      unsigned int reserved2     : 30;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_WK_TST_t;

/*@}*/

/** @defgroup ANA_TST1 Analog test (ANA_TST1) Register
 *  Analog test (ANA_TST1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_ANA_TST1_Struct
 *! \brief  Analog test Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_ANA_TST1_t {
  union {
    struct {
      unsigned int anatst_en_vbat :  1;  /**< analog test enable */
      unsigned int reserved1        :  3;
      unsigned int atest1_tsel_vbat :  3;  /**< ana test select 1 */
      unsigned int atest2_tsel_vbat :  3;  /**< ana test select 2 */
      unsigned int atest3_tsel_vbat :  3;  /**< ana test select 3 */
      unsigned int atest4_tsel_vbat :  3;  /**< ana test select 4 */
      unsigned int en_bgbuf_vbat    :  1;  /**< enable bg buffer */
      unsigned int en_cenbias_ref_to_pin_vbat :  1;  /**< central bias ref to pin */
      unsigned int en_ext_ref_to_pin_vbat     :  1;  /**< external ref to pin */
      unsigned int en_lp_ref_to_pin_vbat      :  1;  /**< lpref to pin */
      unsigned int en_bgbuf_ibias_vbat        :  1;  /**< debug : bg bias related */
      unsigned int sel_ext_ref_vbat           :  1;  /**< debug : external ref */
      unsigned int reserved22                 : 10;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_ANA_TST1_t;

/*@}*/

/** @defgroup ANA_TST2 Analog Test control for digital signals (ANA_TST2) Register
 *  Analog Test control for digital signals (ANA_TST2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_ANA_TST2_Struct
 *! \brief  Analog Test control for digital signals Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_ANA_TST2_t {
  union {
    struct {
      unsigned int ana_dtst_en :  1;  /**< Enable the digital test signals output on GPIOs. */
      unsigned int reserved1     :  3;
      unsigned int ana_dtst0_sel :  3;  /**< DTEST0 Mux Select */
      unsigned int reserved7     :  1;
      unsigned int ana_dtst1_sel :  3;  /**< DTEST1 Mux Select */
      unsigned int reserved11    :  1;
      unsigned int ana_dtst2_sel :  3;  /**< DTEST2 Mux Select */
      unsigned int reserved15    :  1;
      unsigned int ana_dtst3_sel :  3;  /**< DTEST3 Mux Select */
      unsigned int reserved19    : 13;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_ANA_TST2_t;

/*@}*/

/** @defgroup DIG_TST1 Digital Test Control (DIG_TST1) Register
 *  Digital Test Control (DIG_TST1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_DIG_TST1_Struct
 *! \brief  Digital Test Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_DIG_TST1_t {
  union {
    struct {
      unsigned int dc_test_en :  1;  /**< DC Test Enable for GPIO pads */
      unsigned int sip_dc_test_en :  1;  /**< DC Test enable for dedicated SiP pads */
      unsigned int sip_direct_test_en :  1;  /**< SiP Direct Test Enable */
      unsigned int mbist_mode_en      :  1;  /**< Enable MBIST mode */
      unsigned int dig_test_rsvd0     :  1;  /**< RESERVED DIG_TEST CONTROL 0 */
      unsigned int dig_test_rsvd1     :  1;  /**< RESERVED DIG_TEST CONTROL 1 */
      unsigned int dig_test_rsvd2     :  1;  /**< RESERVED DIG_TEST CONTROL 2 */
      unsigned int dig_test_rsvd3     :  1;  /**< RESERVED DIG_TEST CONTROL 3 */
      unsigned int reserved8          : 24;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_DIG_TST1_t;

/*@}*/

/** @defgroup HP_LDO_TST High Power LDO Test Register (HP_LDO_TST) Register
 *  High Power LDO Test Register (HP_LDO_TST) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMG_HP_LDO_TST_Struct
 *! \brief  High Power LDO Test Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMG_HP_LDO_TST_t {
  union {
    struct {
      unsigned int ldo_trim   :  4;  /**< Trimming bits for the LDO */
      unsigned int reserved4  : 28;
    };
    uint32_t VALUE32;
  };
} ADI_PMG_HP_LDO_TST_t;

/*@}*/

/** @defgroup OSCKEY Key protection for OSCCTRL (OSCKEY) Register
 *  Key protection for OSCCTRL (OSCKEY) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLK_OSCKEY_Struct
 *! \brief  Key protection for OSCCTRL Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLK_OSCKEY_t {
  union {
    struct {
      unsigned int OSCKEY     : 16;  /**< Oscillator key */
      unsigned int reserved16 : 16;
    };
    uint32_t VALUE32;
  };
} ADI_CLK_OSCKEY_t;

/*@}*/

/** @defgroup OSCCTRL Oscillator control (OSCCTRL) Register
 *  Oscillator control (OSCCTRL) Register.
 *
 *  The OSCCTRL register is key-protected. To unlock this protection 0xCB14 should be written to OSCKEY before writing to OSCCTRL. A write to any other register on the APB bus before writing to OSCCTRL will return the protection to the lock state.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLK_OSCCTRL_Struct
 *! \brief  Oscillator control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLK_OSCCTRL_t {
  union {
    struct {
      unsigned int LFCLKMUX   :  1;  /**< 32 KHz clock select mux */
      unsigned int HFOSCEN    :  1;  /**< High frequency internal oscillator enable */
      unsigned int LFXTALEN   :  1;  /**< Low frequency crystal oscillator enable */
      unsigned int HFXTALEN   :  1;  /**< High frequency crystal oscillator enable */
      unsigned int reserved4  :  4;
      unsigned int LFOSCOK    :  1;  /**< Status of LFOSC oscillator */
      unsigned int HFOSCOK    :  1;  /**< Status of HFOSC oscillator */
      unsigned int LFXTALOK   :  1;  /**< Status of LFXTAL oscillator */
      unsigned int HFXTALOK   :  1;  /**< Status of HFXTAL oscillator */
      unsigned int reserved12 : 20;
    };
    uint32_t VALUE32;
  };
} ADI_CLK_OSCCTRL_t;

/*@}*/

/** @defgroup TOSCCTRL0 Oscillator control for test (TOSCCTRL0) Register
 *  Oscillator control for test (TOSCCTRL0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLK_TOSCCTRL0_Struct
 *! \brief  Oscillator control for test Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLK_TOSCCTRL0_t {
  union {
    struct {
      unsigned int lposc_trim_vmx :  6;  /**< Low frequency oscillator (lposc) trim register */
      unsigned int reserved6         :  2;
      unsigned int hfosc_start_cntrl :  1;  /**< TestMode : Start HF OSC */
      unsigned int lposc_pd_test     :  1;  /**< LPOSC enable / disable bit in test-mode */
      unsigned int reserved10        :  1;
      unsigned int lposc_tempco_trim :  2;  /**< LP Oscillator temperature compensation trim */
      unsigned int lposc_ztat_bypass_n_vmx :  1;  /**< LP Oscillator ZTAT bypass */
      unsigned int hfosc_trim_lock_cnt     :  2;  /**< HF oscillator lock counter select configuration */
      unsigned int hfosc_trim_vdd          : 14;  /**< testmode trim for high frequency oscillator */
      unsigned int reserved30              :  2;
    };
    uint32_t VALUE32;
  };
} ADI_CLK_TOSCCTRL0_t;

/*@}*/

/** @defgroup VREG_TST Test Register for Regulated Supply (VREG_TST) Register
 *  Test Register for Regulated Supply (VREG_TST) Register.
 *
 *  
 *  @{
 */

/*  =========================================================================
 *! \enum   ADI_PMGT_VREG_TST_hldo_pd_reg
 *! \brief  HP LDO power down signal (hldo_pd_reg) Enumerations
 *  ========================================================================= */
typedef enum
{
  PMGT_VREG_TST_HP_LDOENABLE  = 0,  /**< HP LDO is Enabled when LOW   */
  PMGT_VREG_TST_HP_LDODISABLE = 1   /**< HP LDO is disabled when HIGH */
} ADI_PMGT_VREG_TST_hldo_pd_reg;


/* ==========================================================================
 *! \struct ADI_PMGT_VREG_TST_Struct
 *! \brief  Test Register for Regulated Supply Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_VREG_TST_t {
  union {
    struct {
      unsigned int reserved0   :  1;
      unsigned int hldo_pd_reg :  1;  /**< HP LDO power down signal */
      unsigned int hp_ldo_ovr  :  1;  /**< HP LDO overwrite OK signal */
      unsigned int bias_en     :  1;  /**< Bias Enable Bit for Central Bias Block */
      unsigned int n40         :  1;  /**< Control for delay for HP LDO OK. Negative 40% delay */
      unsigned int p40         :  1;  /**< Control for delay for HP LDO OK. Positive 40% delay */
      unsigned int ldo_ok      :  1;  /**< Read Only bit to read OK from HP LDO */
      unsigned int reserved7   : 25;
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_VREG_TST_t;

/*@}*/

/** @defgroup LP_TST_REF1 Low Power Reference Test 1 (LP_TST_REF1) Register
 *  Low Power Reference Test 1 (LP_TST_REF1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_LP_TST_REF1_Struct
 *! \brief  Low Power Reference Test 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_LP_TST_REF1_t {
  union {
    struct {
      unsigned int bg_test    :  8;  /**< Test Bits for the LP Ref */
      unsigned int reserved8  : 24;
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_LP_TST_REF1_t;

/*@}*/

/** @defgroup LP_TST_BLOCK0 Bits to control the LP Test Block (LP_TST_BLOCK0) Register
 *  Bits to control the LP Test Block (LP_TST_BLOCK0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_LP_TST_BLOCK0_Struct
 *! \brief  Bits to control the LP Test Block Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_LP_TST_BLOCK0_t {
  union {
    struct {
      unsigned int bgtst_trim :  8;  /**< Trimming for the LP Test Block */
      unsigned int reserved8  : 24;
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_LP_TST_BLOCK0_t;

/*@}*/

/** @defgroup LP_TST_BLOCK1 Bits to control the LP Test Block (LP_TST_BLOCK1) Register
 *  Bits to control the LP Test Block (LP_TST_BLOCK1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_LP_TST_BLOCK1_Struct
 *! \brief  Bits to control the LP Test Block Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_LP_TST_BLOCK1_t {
  union {
    struct {
      unsigned int bgtst_pd   :  1;  /**< Power down for LP Test Block */
      unsigned int reserved1  :  7;
      unsigned int bgtst_test :  8;  /**< Test for the LP Test Block */
      unsigned int reserved16 : 16;
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_LP_TST_BLOCK1_t;

/*@}*/

/** @defgroup SRAMCNTRL Control for SRAM parity and instruction SRAM (SRAMCNTRL) Register
 *  Control for SRAM parity and instruction SRAM (SRAMCNTRL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_SRAMCNTRL_Struct
 *! \brief  Control for SRAM parity and instruction SRAM Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_SRAMCNTRL_t {
  union {
    struct {
      unsigned int init_en_SRAM_bank_0 :  1;  /**< Enable initialization */
      unsigned int init_en_SRAM_bank_1 :  1;  /**< Enable initialization */
      unsigned int init_en_SRAM_bank_2 :  1;  /**< Enable initialization */
      unsigned int init_en_SRAM_bank_3 :  1;  /**< Enable initialization */
      unsigned int init_en_SRAM_bank_4 :  1;  /**< Enable initialization */
      unsigned int init_en_SRAM_bank_5 :  1;  /**< Enable initialization */
      unsigned int reserved6           :  7;
      unsigned int start_manual_init   :  1;  /**< Write one to trigger initialization. Self-cleared */
      unsigned int automatic_init_on   :  1;  /**< Automatic initialization on wake up from Hibernate mode */
      unsigned int abort_init          :  1;  /**< Abort current initialization. Self-cleared */
      unsigned int parity_en_SRAM_bank_0 :  1;  /**< Enable parity check */
      unsigned int parity_en_SRAM_bank_1 :  1;  /**< Enable parity check */
      unsigned int parity_en_SRAM_bank_2 :  1;  /**< Enable parity check */
      unsigned int parity_en_SRAM_bank_3 :  1;  /**< Enable parity check */
      unsigned int parity_en_SRAM_bank_4 :  1;  /**< Enable parity check */
      unsigned int parity_en_SRAM_bank_5 :  1;  /**< Enable parity check */
      unsigned int reserved22            :  9;
      unsigned int instruction_sram_en   :  1;  /**< Enables instruction SRAM */
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_SRAMCNTRL_t;

/*@}*/

/** @defgroup SRAM_INIT_STATUS Initialization Status Register (SRAM_INIT_STATUS) Register
 *  Initialization Status Register (SRAM_INIT_STATUS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_SRAM_INIT_STATUS_Struct
 *! \brief  Initialization Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_SRAM_INIT_STATUS_t {
  union {
    struct {
      unsigned int init_done_SRAM_bank_0 :  1;  /**< 0:Not initialized; 1:Initialization completed */
      unsigned int init_done_SRAM_bank_1 :  1;  /**< 0:Not initialized; 1:Initialization completed */
      unsigned int init_done_SRAM_bank_2 :  1;  /**< 0:Not initialized; 1:Initialization completed */
      unsigned int init_done_SRAM_bank_3 :  1;  /**< 0:Not initialized; 1:Initialization completed */
      unsigned int init_done_SRAM_bank_4 :  1;  /**< 0:Not initialized; 1:Initialization completed */
      unsigned int init_done_SRAM_bank_5 :  1;  /**< 0:Not initialized; 1:Initialization completed */
      unsigned int reserved6               : 25;
      unsigned int tst_map_instr_sram_at_0 :  1;  /**< force instruction SRAM mapped at 0x0000_0000 */
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_SRAM_INIT_STATUS_t;

/*@}*/

/** @defgroup CLEAR_LATCH_GPIOS when 0x58FA is written, then the GPIO releases the latched values after shutdown mode (CLEAR_LATCH_GPIOS) Register
 *  when 0x58FA is written, then the GPIO releases the latched values after shutdown mode (CLEAR_LATCH_GPIOS) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_CLEAR_LATCH_GPIOS_Struct
 *! \brief  when 0x58FA is written, then the GPIO releases the latched values after shutdown mode Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_CLEAR_LATCH_GPIOS_t {
  union {
    struct {
      unsigned int clear_latch_gpio : 16;  /**< Writing 0x58FA creates a pulse to clear the latches for the GPIOs */
    };
    uint16_t VALUE16;
  };
} ADI_PMGT_CLEAR_LATCH_GPIOS_t;

/*@}*/

/** @defgroup SCRATCHPAD_IMAGE The values written in this register will be saved in 3V when going to shutdown mode (SCRATCHPAD_IMAGE) Register
 *  The values written in this register will be saved in 3V when going to shutdown mode (SCRATCHPAD_IMAGE) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_SCRATCHPAD_IMAGE_Struct
 *! \brief  The values written in this register will be saved in 3V when going to shutdown mode Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_SCRATCHPAD_IMAGE_t {
  union {
    struct {
      unsigned int scratch_image : 32;  /**< Anything written to this register will be saved in 3V when going to shutdown mode */
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_SCRATCHPAD_IMAGE_t;

/*@}*/

/** @defgroup SCRATCHPAD_3V_READ Read-Only register. The user can read the 3V value stored during shutdown mode (SCRATCHPAD_3V_READ) Register
 *  Read-Only register. The user can read the 3V value stored during shutdown mode (SCRATCHPAD_3V_READ) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PMGT_SCRATCHPAD_3V_READ_Struct
 *! \brief  Read-Only register. The user can read the 3V value stored during shutdown mode Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PMGT_SCRATCHPAD_3V_READ_t {
  union {
    struct {
      unsigned int scratch_read_3v : 32;  /**< Read Only register. Reading the scratch pad stored in shutdown mode */
    };
    uint32_t VALUE32;
  };
} ADI_PMGT_SCRATCHPAD_3V_READ_t;

/*@}*/

/** @defgroup CLKCON0 Misc clock settings (CLKCON0) Register
 *  Misc clock settings (CLKCON0) Register.
 *
 *  Clock Control 0 is used to configure clock sources used by various systems such as the core and memories and peripherals. All unused bits are read only returning a value of 0. Writing unused bits has no effect.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_CLKCON0_Struct
 *! \brief  Misc clock settings Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_CLKCON0_t {
  union {
    struct {
      unsigned int CLKMUX     :  2;  /**< Clock mux select */
      unsigned int reserved2  :  1;
      unsigned int CLKCOUT    :  4;  /**< GPIO clk out select */
      unsigned int reserved7  :  1;
      unsigned int RCLKMUX    :  2;  /**< Flash reference clock and HPBUCK clock source mux */
      unsigned int FIXMASTERTYPE :  1;  /**< Force MasterType for debugger */
      unsigned int PLL_IPSEL     :  1;  /**< SPLL source select mux */
      unsigned int reserved12    :  2;
      unsigned int LFXTALIE      :  1;  /**< Low frequency crystal interrupt enable */
      unsigned int HFXTALIE      :  1;  /**< High frequency crystal interrupt enable */
      unsigned int reserved16    : 16;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_CLKCON0_t;

/*@}*/

/** @defgroup CLKCON1 Clock dividers (CLKCON1) Register
 *  Clock dividers (CLKCON1) Register.
 *
 *  Clock Control 1 is used to set the divide rates for the  HCLK, and PCLK dividers. This register can be written to at any time. All unused bits are read only, returning a value of 0. Writing to unused bits has no effect.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_CLKCON1_Struct
 *! \brief  Clock dividers Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_CLKCON1_t {
  union {
    struct {
      unsigned int HCLKDIVCNT :  6;  /**< HCLK divide count */
      unsigned int reserved6  :  2;
      unsigned int PCLKDIVCNT :  6;  /**< PCLK divide count */
      unsigned int reserved14 :  2;
      unsigned int ACLKDIVCNT :  6;  /**< ACLK divide count */
      unsigned int reserved22 : 10;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_CLKCON1_t;

/*@}*/

/** @defgroup CLKCON3 System PLL (CLKCON3) Register
 *  System PLL (CLKCON3) Register.
 *
 *  Clock Control 3 is used to control the system PLL. This register should be written to only when the PLL is not selected as the clock source (ROOT_CLK). All unused bits are read only, returning a value of 0. Writing to unused bits has no effect.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_CLKCON3_Struct
 *! \brief  System PLL Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_CLKCON3_t {
  union {
    struct {
      unsigned int SPLLNSEL   :  5;  /**< System PLL N multiplier */
      unsigned int reserved5  :  3;
      unsigned int SPLLDIV2   :  1;  /**< System PLL division by 2 */
      unsigned int SPLLEN     :  1;  /**< System PLL enable */
      unsigned int SPLLIE     :  1;  /**< System PLL interrupt enable */
      unsigned int SPLLMSEL   :  4;  /**< System PLL M Divider */
      unsigned int reserved15 :  1;
      unsigned int SPLLMUL2   :  1;  /**< system PLL multiply by 2 */
      unsigned int reserved17 : 15;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_CLKCON3_t;

/*@}*/

/** @defgroup CLKCON5 User clock gating control (CLKCON5) Register
 *  User clock gating control (CLKCON5) Register.
 *
 *  Clock Control 5 is used to control the gates of the peripheral UCLKs.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_CLKCON5_Struct
 *! \brief  User clock gating control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_CLKCON5_t {
  union {
    struct {
      unsigned int GPTMRCLK0OFF :  1;  /**< GP timer 0 user control */
      unsigned int GPTMRCLK1OFF :  1;  /**< GP timer 1 user control */
      unsigned int GPTMRCLK2OFF :  1;  /**< GP timer 2 user control */
      unsigned int UCLKI2COFF   :  1;  /**< I2C clock user control */
      unsigned int ACLKOFF      :  1;  /**< ADC clock user control */
      unsigned int PERCLKOFF    :  1;  /**< This bit is used to disable all clocks connected to all peripherals */
      unsigned int reserved6    : 26;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_CLKCON5_t;

/*@}*/

/** @defgroup CLKSTAT0 Clocking status (CLKSTAT0) Register
 *  Clocking status (CLKSTAT0) Register.
 *
 *  Clock Status is used to monitor PLL and Oscillator status. With interrupts enabled the user is free to continue to run initialization code or idle the core while clock components stabilize.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_CLKSTAT0_Struct
 *! \brief  Clocking status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_CLKSTAT0_t {
  union {
    struct {
      unsigned int SPLLSTATUS :  1;  /**< System PLL status */
      unsigned int SPLLLOCK   :  1;  /**< System PLL lock */
      unsigned int SPLLUNLOCK :  1;  /**< System PLL unlock */
      unsigned int reserved3    :  5;
      unsigned int LFXTALSTATUS :  1;  /**< LF crystal status */
      unsigned int LFXTALOK     :  1;  /**< LF crystal stable */
      unsigned int LFXTALNOK    :  1;  /**< LF crystal not stable */
      unsigned int reserved11   :  1;
      unsigned int HFXTALSTATUS :  1;  /**< HF crystal status */
      unsigned int HFXTALOK     :  1;  /**< HF crystal stable */
      unsigned int HFXTALNOK    :  1;  /**< HF crystal not stable */
      unsigned int reserved15   : 17;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_CLKSTAT0_t;

/*@}*/

/** @defgroup TCLKTEST Clock test control (TCLKTEST) Register
 *  Clock test control (TCLKTEST) Register.
 *
 *  Clock control during TEST
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_TCLKTEST_Struct
 *! \brief  Clock test control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_TCLKTEST_t {
  union {
    struct {
      unsigned int reserved0    :  2;
      unsigned int pll_test_mux :  1;  /**< PLL test clock source mux */
      unsigned int reserved3    :  2;
      unsigned int HPBUCKDIV_ov :  1;  /**< Override for HP buck clock divider */
      unsigned int reserved6    :  2;
      unsigned int delay_sel    :  2;  /**< clock delay amount selection */
      unsigned int HPBUCKCLKDIVCNT :  8;  /**< HP BUCK clock divide count */
      unsigned int reserved18      : 14;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_TCLKTEST_t;

/*@}*/

/** @defgroup TOSCCTRL1 Oscillator test/trim register (TOSCCTRL1) Register
 *  Oscillator test/trim register (TOSCCTRL1) Register.
 *
 *  Test register for low frequency (lposc) oscillator
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_TOSCCTRL1_Struct
 *! \brief  Oscillator test/trim Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_TOSCCTRL1_t {
  union {
    struct {
      unsigned int lposc_test_en_vmx :  1;  /**< Testmode low frequency oscillator (lposc) enable */
      unsigned int lposc_test_sel_vmx :  3;  /**< Testmode low frequency oscillator (lposc) test select */
      unsigned int rb_xo26m_vdd       :  1;  /**< high frequency crystal oscillator reset bit for lock detect circuit */
      unsigned int xo26_tsten_vdd     :  1;  /**< high frequency crystal oscillator test enable */
      unsigned int xo26_tstsel_vdd    :  3;  /**< high frequency crystal oscillator Test select */
      unsigned int rb_xo32k_vbat      :  1;  /**< low frequency crystal oscillator reset bit for lock detect circuit */
      unsigned int xo32k_tsten_vbat   :  1;  /**< low frequency crystal oscillator test enable */
      unsigned int xo32k_tstsel_vdd   :  3;  /**< Low frequency crystal oscillator Test select */
      unsigned int hfosc_div2_vdd     :  1;  /**< enable divide by 2 ckt for High frequency oscillator */
      unsigned int hfosc_force_lock_vdd :  1;  /**< force lock high frequency oscillator */
      unsigned int reserved16           : 16;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_TOSCCTRL1_t;

/*@}*/

/** @defgroup TOSCCNFG0 Oscillator config register (Test) (TOSCCNFG0) Register
 *  Oscillator config register (Test) (TOSCCNFG0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_TOSCCNFG0_Struct
 *! \brief  Oscillator config register (Test) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_TOSCCNFG0_t {
  union {
    struct {
      unsigned int hfosc_tmin_vdd :  8;  /**< testmode input for high frequency oscillator */
      unsigned int reserved8      : 24;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_TOSCCNFG0_t;

/*@}*/

/** @defgroup TPLLCNFG0 PLL config register (Test) (TPLLCNFG0) Register
 *  PLL config register (Test) (TPLLCNFG0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_TPLLCNFG0_Struct
 *! \brief  PLL config register (Test) Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_TPLLCNFG0_t {
  union {
    struct {
      unsigned int pll_bwinc_vdd :  1;  /**< PLL test bit */
      unsigned int pll_byp_vdd   :  1;  /**< used to bypass the pll output clock */
      unsigned int pll_rstb_cntrl_vdd :  1;  /**< resets PLL only */
      unsigned int pll_test_en_vdd    :  1;  /**< PLL test mode enable */
      unsigned int pll_test_sel_vdd   :  4;  /**< PLL test modes configuration */
      unsigned int pll_pfd_dsel_vdd   :  2;  /**< PFD reset delay select */
      unsigned int pll_kv_cal_vdd     :  3;  /**< VCO gain calibration */
      unsigned int reserved13         :  2;
      unsigned int pll_rstb_ld_vdd    :  1;  /**< resets lock detector logic in PLL */
      unsigned int reserved16         : 16;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_TPLLCNFG0_t;

/*@}*/

/** @defgroup THFRING high frequency ring oscillator2 test register (THFRING) Register
 *  high frequency ring oscillator2 test register (THFRING) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_CLKGT_THFRING_Struct
 *! \brief  high frequency ring oscillator2 test Register bit field structure
 * ========================================================================== */
typedef struct _ADI_CLKGT_THFRING_t {
  union {
    struct {
      unsigned int hfring_test_en_vdd :  1;  /**< High frequency ring oscillator2 testmode enable */
      unsigned int pdn_hfring_vdd     :  1;  /**< power down hfring oscillator */
      unsigned int hfring_test_sel_vdd :  4;  /**< High frequency ring oscillator2 testmode select configuration */
      unsigned int reserved6            :  2;
      unsigned int hfring_trim_bias_vdd :  8;  /**< High frequency ring oscillator2 trim bias configuration */
      unsigned int reserved16           : 16;
    };
    uint32_t VALUE32;
  };
} ADI_CLKGT_THFRING_t;

/*@}*/

/** @defgroup RST_ISR_STARTADDR Reset ISR Start Address (RST_ISR_STARTADDR) Register
 *  Reset ISR Start Address (RST_ISR_STARTADDR) Register.
 *
 *  This register is used only when Parallel Test Interface is enabled. 
Contains 32 bit Reset ISR start address.
LSB should be 1.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PTI_RST_ISR_STARTADDR_Struct
 *! \brief  Reset ISR Start Address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PTI_RST_ISR_STARTADDR_t {
  union {
    struct {
      unsigned int RST_ISR_START_ADDR : 32;
    };
    uint32_t VALUE32;
  };
} ADI_PTI_RST_ISR_STARTADDR_t;

/*@}*/

/** @defgroup RST_STACK_POINTER Reset Stack Pointer (RST_STACK_POINTER) Register
 *  Reset Stack Pointer (RST_STACK_POINTER) Register.
 *
 *  This register is used only when Parallel Test Interface is enabled. 
Contains 32 bit initial stack pointer address.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PTI_RST_STACK_POINTER_Struct
 *! \brief  Reset Stack Pointer Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PTI_RST_STACK_POINTER_t {
  union {
    struct {
      unsigned int RST_STACK_POINTER : 32;
    };
    uint32_t VALUE32;
  };
} ADI_PTI_RST_STACK_POINTER_t;

/*@}*/

/** @defgroup PTI_CONTROL Parallel Test Interface Control Register (PTI_CONTROL) Register
 *  Parallel Test Interface Control Register (PTI_CONTROL) Register.
 *
 *  This register is used enable Parallel Test Interface.
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_PTI_PTI_CONTROL_Struct
 *! \brief  Parallel Test Interface Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_PTI_PTI_CONTROL_t {
  union {
    struct {
      unsigned int PTI_ENABLE :  1;
      unsigned int reserved1  : 31;
    };
    uint32_t VALUE32;
  };
} ADI_PTI_PTI_CONTROL_t;

/*@}*/

/** @defgroup INTNUM Interrupt Control Type (INTNUM) Register
 *  Interrupt Control Type (INTNUM) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTNUM_Struct
 *! \brief  Interrupt Control Type Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTNUM_t {
  union {
    struct {
      unsigned int INTNUM     : 32;  /**< Interrupt Control Type */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTNUM_t;

/*@}*/

/** @defgroup STKSTA Systick Control and Status (STKSTA) Register
 *  Systick Control and Status (STKSTA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_STKSTA_Struct
 *! \brief  Systick Control and Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_STKSTA_t {
  union {
    struct {
      unsigned int STKSTA     : 32;  /**< Systick Control and Status */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_STKSTA_t;

/*@}*/

/** @defgroup STKLD Systick Reload Value (STKLD) Register
 *  Systick Reload Value (STKLD) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_STKLD_Struct
 *! \brief  Systick Reload Value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_STKLD_t {
  union {
    struct {
      unsigned int STKLD      : 32;  /**< Systick Reload Value */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_STKLD_t;

/*@}*/

/** @defgroup STKVAL Systick Current Value (STKVAL) Register
 *  Systick Current Value (STKVAL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_STKVAL_Struct
 *! \brief  Systick Current Value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_STKVAL_t {
  union {
    struct {
      unsigned int STKVAL     : 32;  /**< Systick Current Value */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_STKVAL_t;

/*@}*/

/** @defgroup STKCAL Systick Calibration Value (STKCAL) Register
 *  Systick Calibration Value (STKCAL) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_STKCAL_Struct
 *! \brief  Systick Calibration Value Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_STKCAL_t {
  union {
    struct {
      unsigned int STKCAL     : 32;  /**< Systick Calibration Value */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_STKCAL_t;

/*@}*/

/** @defgroup INTSETE0 IRQ0..31 Set_Enable (INTSETE0) Register
 *  IRQ0..31 Set_Enable (INTSETE0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSETE0_Struct
 *! \brief  IRQ0..31 Set_Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSETE0_t {
  union {
    struct {
      unsigned int INTSETE0   : 32;  /**< IRQ0..31 Set_Enable */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSETE0_t;

/*@}*/

/** @defgroup INTSETE1 IRQ32..63 Set_Enable (INTSETE1) Register
 *  IRQ32..63 Set_Enable (INTSETE1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSETE1_Struct
 *! \brief  IRQ32..63 Set_Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSETE1_t {
  union {
    struct {
      unsigned int INTSETE1   : 32;  /**< IRQ32..63 Set_Enable */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSETE1_t;

/*@}*/

/** @defgroup INTCLRE0 IRQ0..31 Clear_Enable (INTCLRE0) Register
 *  IRQ0..31 Clear_Enable (INTCLRE0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCLRE0_Struct
 *! \brief  IRQ0..31 Clear_Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCLRE0_t {
  union {
    struct {
      unsigned int INTCLRE0   : 32;  /**< IRQ0..31 Clear_Enable */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCLRE0_t;

/*@}*/

/** @defgroup INTCLRE1 IRQ32..63 Clear_Enable (INTCLRE1) Register
 *  IRQ32..63 Clear_Enable (INTCLRE1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCLRE1_Struct
 *! \brief  IRQ32..63 Clear_Enable Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCLRE1_t {
  union {
    struct {
      unsigned int INTCLRE1   : 32;  /**< IRQ32..63 Clear_Enable */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCLRE1_t;

/*@}*/

/** @defgroup INTSETP0 IRQ0..31 Set_Pending (INTSETP0) Register
 *  IRQ0..31 Set_Pending (INTSETP0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSETP0_Struct
 *! \brief  IRQ0..31 Set_Pending Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSETP0_t {
  union {
    struct {
      unsigned int INTSETP0   : 32;  /**< IRQ0..31 Set_Pending */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSETP0_t;

/*@}*/

/** @defgroup INTSETP1 IRQ32..63 Set_Pending (INTSETP1) Register
 *  IRQ32..63 Set_Pending (INTSETP1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSETP1_Struct
 *! \brief  IRQ32..63 Set_Pending Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSETP1_t {
  union {
    struct {
      unsigned int INTSETP1   : 32;  /**< IRQ32..63 Set_Pending */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSETP1_t;

/*@}*/

/** @defgroup INTCLRP0 IRQ0..31 Clear_Pending (INTCLRP0) Register
 *  IRQ0..31 Clear_Pending (INTCLRP0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCLRP0_Struct
 *! \brief  IRQ0..31 Clear_Pending Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCLRP0_t {
  union {
    struct {
      unsigned int INTCLRP0   : 32;  /**< IRQ0..31 Clear_Pending */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCLRP0_t;

/*@}*/

/** @defgroup INTCLRP1 IRQ32..63 Clear_Pending (INTCLRP1) Register
 *  IRQ32..63 Clear_Pending (INTCLRP1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCLRP1_Struct
 *! \brief  IRQ32..63 Clear_Pending Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCLRP1_t {
  union {
    struct {
      unsigned int INTCLRP1   : 32;  /**< IRQ32..63 Clear_Pending */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCLRP1_t;

/*@}*/

/** @defgroup INTACT0 IRQ0..31 Active Bit (INTACT0) Register
 *  IRQ0..31 Active Bit (INTACT0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTACT0_Struct
 *! \brief  IRQ0..31 Active Bit Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTACT0_t {
  union {
    struct {
      unsigned int INTACT0    : 32;  /**< IRQ0..31 Active Bit */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTACT0_t;

/*@}*/

/** @defgroup INTACT1 IRQ32..63 Active Bit (INTACT1) Register
 *  IRQ32..63 Active Bit (INTACT1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTACT1_Struct
 *! \brief  IRQ32..63 Active Bit Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTACT1_t {
  union {
    struct {
      unsigned int INTACT1    : 32;  /**< IRQ32..63 Active Bit */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTACT1_t;

/*@}*/

/** @defgroup INTPRI0 IRQ0..3 Priority (INTPRI0) Register
 *  IRQ0..3 Priority (INTPRI0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI0_Struct
 *! \brief  IRQ0..3 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI0_t {
  union {
    struct {
      unsigned int INTPRI0    : 32;  /**< IRQ0..3 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI0_t;

/*@}*/

/** @defgroup INTPRI1 IRQ4..7 Priority (INTPRI1) Register
 *  IRQ4..7 Priority (INTPRI1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI1_Struct
 *! \brief  IRQ4..7 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI1_t {
  union {
    struct {
      unsigned int INTPRI1    : 32;  /**< IRQ4..7 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI1_t;

/*@}*/

/** @defgroup INTPRI2 IRQ8..11 Priority (INTPRI2) Register
 *  IRQ8..11 Priority (INTPRI2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI2_Struct
 *! \brief  IRQ8..11 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI2_t {
  union {
    struct {
      unsigned int INTPRI2    : 32;  /**< IRQ8..11 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI2_t;

/*@}*/

/** @defgroup INTPRI3 IRQ12..15 Priority (INTPRI3) Register
 *  IRQ12..15 Priority (INTPRI3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI3_Struct
 *! \brief  IRQ12..15 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI3_t {
  union {
    struct {
      unsigned int INTPRI3    : 32;  /**< IRQ12..15 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI3_t;

/*@}*/

/** @defgroup INTPRI4 IRQ16..19 Priority (INTPRI4) Register
 *  IRQ16..19 Priority (INTPRI4) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI4_Struct
 *! \brief  IRQ16..19 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI4_t {
  union {
    struct {
      unsigned int INTPRI4    : 32;  /**< IRQ16..19 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI4_t;

/*@}*/

/** @defgroup INTPRI5 IRQ20..23 Priority (INTPRI5) Register
 *  IRQ20..23 Priority (INTPRI5) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI5_Struct
 *! \brief  IRQ20..23 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI5_t {
  union {
    struct {
      unsigned int INTPRI5    : 32;  /**< IRQ20..23 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI5_t;

/*@}*/

/** @defgroup INTPRI6 IRQ24..27 Priority (INTPRI6) Register
 *  IRQ24..27 Priority (INTPRI6) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI6_Struct
 *! \brief  IRQ24..27 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI6_t {
  union {
    struct {
      unsigned int INTPRI6    : 32;  /**< IRQ24..27 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI6_t;

/*@}*/

/** @defgroup INTPRI7 IRQ28..31 Priority (INTPRI7) Register
 *  IRQ28..31 Priority (INTPRI7) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI7_Struct
 *! \brief  IRQ28..31 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI7_t {
  union {
    struct {
      unsigned int INTPRI7    : 32;  /**< IRQ28..31 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI7_t;

/*@}*/

/** @defgroup INTPRI8 IRQ32..35 Priority (INTPRI8) Register
 *  IRQ32..35 Priority (INTPRI8) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI8_Struct
 *! \brief  IRQ32..35 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI8_t {
  union {
    struct {
      unsigned int INTPRI8    : 32;  /**< IRQ32..35 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI8_t;

/*@}*/

/** @defgroup INTPRI9 IRQ36..39 Priority (INTPRI9) Register
 *  IRQ36..39 Priority (INTPRI9) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI9_Struct
 *! \brief  IRQ36..39 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI9_t {
  union {
    struct {
      unsigned int INTPRI9    : 32;  /**< IRQ36..39 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI9_t;

/*@}*/

/** @defgroup INTPRI10 IRQ40..43 Priority (INTPRI10) Register
 *  IRQ40..43 Priority (INTPRI10) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPRI10_Struct
 *! \brief  IRQ40..43 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPRI10_t {
  union {
    struct {
      unsigned int INTPRI10   : 32;  /**< IRQ40..43 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPRI10_t;

/*@}*/

/** @defgroup INTCPID CPUID Base (INTCPID) Register
 *  CPUID Base (INTCPID) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCPID_Struct
 *! \brief  CPUID Base Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCPID_t {
  union {
    struct {
      unsigned int INTCPID    : 32;  /**< CPUID Base */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCPID_t;

/*@}*/

/** @defgroup INTSTA Interrupt Control State (INTSTA) Register
 *  Interrupt Control State (INTSTA) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSTA_Struct
 *! \brief  Interrupt Control State Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSTA_t {
  union {
    struct {
      unsigned int INTSTA     : 32;  /**< Interrupt Control State */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSTA_t;

/*@}*/

/** @defgroup INTVEC Vector Table Offset (INTVEC) Register
 *  Vector Table Offset (INTVEC) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTVEC_Struct
 *! \brief  Vector Table Offset Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTVEC_t {
  union {
    struct {
      unsigned int INTVEC     : 32;  /**< Vector Table Offset */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTVEC_t;

/*@}*/

/** @defgroup INTAIRC Application Interrupt/Reset Control (INTAIRC) Register
 *  Application Interrupt/Reset Control (INTAIRC) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTAIRC_Struct
 *! \brief  Application Interrupt/Reset Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTAIRC_t {
  union {
    struct {
      unsigned int INTAIRC    : 32;  /**< Application Interrupt/Reset Control */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTAIRC_t;

/*@}*/

/** @defgroup INTCON0 System Control (INTCON0) Register
 *  System Control (INTCON0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCON0_Struct
 *! \brief  System Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCON0_t {
  union {
    struct {
      unsigned int reserved0   :  1;
      unsigned int SLEEPONEXIT :  1;  /**< Sleeps the core on exit from an ISR */
      unsigned int SLEEPDEEP   :  1;  /**< deep sleep flag for HIBERNATE mode */
      unsigned int reserved3   : 13;
    };
    uint16_t VALUE16;
  };
} ADI_cortex_INTCON0_t;

/*@}*/

/** @defgroup INTCON1 Configuration Control (INTCON1) Register
 *  Configuration Control (INTCON1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCON1_Struct
 *! \brief  Configuration Control Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCON1_t {
  union {
    struct {
      unsigned int INTCON1    : 32;  /**< Configuration Control */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCON1_t;

/*@}*/

/** @defgroup INTSHPRIO0 System Handlers 4-7 Priority (INTSHPRIO0) Register
 *  System Handlers 4-7 Priority (INTSHPRIO0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSHPRIO0_Struct
 *! \brief  System Handlers 4-7 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSHPRIO0_t {
  union {
    struct {
      unsigned int INTSHPRIO0 : 32;  /**< System Handlers 4-7 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSHPRIO0_t;

/*@}*/

/** @defgroup INTSHPRIO1 System Handlers 8-11 Priority (INTSHPRIO1) Register
 *  System Handlers 8-11 Priority (INTSHPRIO1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSHPRIO1_Struct
 *! \brief  System Handlers 8-11 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSHPRIO1_t {
  union {
    struct {
      unsigned int INTSHPRIO1 : 32;  /**< System Handlers 8-11 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSHPRIO1_t;

/*@}*/

/** @defgroup INTSHPRIO3 System Handlers 12-15 Priority (INTSHPRIO3) Register
 *  System Handlers 12-15 Priority (INTSHPRIO3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSHPRIO3_Struct
 *! \brief  System Handlers 12-15 Priority Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSHPRIO3_t {
  union {
    struct {
      unsigned int INTSHPRIO3 : 32;  /**< System Handlers 12-15 Priority */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSHPRIO3_t;

/*@}*/

/** @defgroup INTSHCSR System Handler Control and State (INTSHCSR) Register
 *  System Handler Control and State (INTSHCSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTSHCSR_Struct
 *! \brief  System Handler Control and State Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTSHCSR_t {
  union {
    struct {
      unsigned int INTSHCSR   : 32;  /**< System Handler Control and State */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTSHCSR_t;

/*@}*/

/** @defgroup INTCFSR Configurable Fault Status (INTCFSR) Register
 *  Configurable Fault Status (INTCFSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCFSR_Struct
 *! \brief  Configurable Fault Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCFSR_t {
  union {
    struct {
      unsigned int INTCFSR    : 32;  /**< Configurable Fault Status */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCFSR_t;

/*@}*/

/** @defgroup INTHFSR Hard Fault Status (INTHFSR) Register
 *  Hard Fault Status (INTHFSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTHFSR_Struct
 *! \brief  Hard Fault Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTHFSR_t {
  union {
    struct {
      unsigned int INTHFSR    : 32;  /**< Hard Fault Status */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTHFSR_t;

/*@}*/

/** @defgroup INTDFSR Debug Fault Status (INTDFSR) Register
 *  Debug Fault Status (INTDFSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTDFSR_Struct
 *! \brief  Debug Fault Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTDFSR_t {
  union {
    struct {
      unsigned int INTDFSR    : 32;  /**< Debug Fault Status */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTDFSR_t;

/*@}*/

/** @defgroup INTMMAR Mem Manage Address (INTMMAR) Register
 *  Mem Manage Address (INTMMAR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTMMAR_Struct
 *! \brief  Mem Manage Address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTMMAR_t {
  union {
    struct {
      unsigned int INTMMAR    : 32;  /**< Mem Manage Address */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTMMAR_t;

/*@}*/

/** @defgroup INTBFAR Bus Fault Address (INTBFAR) Register
 *  Bus Fault Address (INTBFAR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTBFAR_Struct
 *! \brief  Bus Fault Address Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTBFAR_t {
  union {
    struct {
      unsigned int INTBFAR    : 32;  /**< Bus Fault Address */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTBFAR_t;

/*@}*/

/** @defgroup INTAFSR Auxiliary Fault Status (INTAFSR) Register
 *  Auxiliary Fault Status (INTAFSR) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTAFSR_Struct
 *! \brief  Auxiliary Fault Status Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTAFSR_t {
  union {
    struct {
      unsigned int INTAFSR    : 32;  /**< Auxiliary Fault Status */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTAFSR_t;

/*@}*/

/** @defgroup INTPFR0 Processor Feature Register 0 (INTPFR0) Register
 *  Processor Feature Register 0 (INTPFR0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPFR0_Struct
 *! \brief  Processor Feature Register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPFR0_t {
  union {
    struct {
      unsigned int INTPFR0    : 32;  /**< Processor Feature Register 0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPFR0_t;

/*@}*/

/** @defgroup INTPFR1 Processor Feature Register 1 (INTPFR1) Register
 *  Processor Feature Register 1 (INTPFR1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPFR1_Struct
 *! \brief  Processor Feature Register 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPFR1_t {
  union {
    struct {
      unsigned int INTPFR1    : 32;  /**< Processor Feature Register 1 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPFR1_t;

/*@}*/

/** @defgroup INTDFR0 Debug Feature Register 0 (INTDFR0) Register
 *  Debug Feature Register 0 (INTDFR0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTDFR0_Struct
 *! \brief  Debug Feature Register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTDFR0_t {
  union {
    struct {
      unsigned int INTDFR0    : 32;  /**< Debug Feature Register 0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTDFR0_t;

/*@}*/

/** @defgroup INTAFR0 Auxiliary Feature Register 0 (INTAFR0) Register
 *  Auxiliary Feature Register 0 (INTAFR0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTAFR0_Struct
 *! \brief  Auxiliary Feature Register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTAFR0_t {
  union {
    struct {
      unsigned int INTAFR0    : 32;  /**< Auxiliary Feature Register 0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTAFR0_t;

/*@}*/

/** @defgroup INTMMFR0 Memory Model Feature Register 0 (INTMMFR0) Register
 *  Memory Model Feature Register 0 (INTMMFR0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTMMFR0_Struct
 *! \brief  Memory Model Feature Register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTMMFR0_t {
  union {
    struct {
      unsigned int INTMMFR0   : 32;  /**< Memory Model Feature Register 0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTMMFR0_t;

/*@}*/

/** @defgroup INTMMFR1 Memory Model Feature Register 1 (INTMMFR1) Register
 *  Memory Model Feature Register 1 (INTMMFR1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTMMFR1_Struct
 *! \brief  Memory Model Feature Register 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTMMFR1_t {
  union {
    struct {
      unsigned int INTMMFR1   : 32;  /**< Memory Model Feature Register 1 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTMMFR1_t;

/*@}*/

/** @defgroup INTMMFR2 Memory Model Feature Register 2 (INTMMFR2) Register
 *  Memory Model Feature Register 2 (INTMMFR2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTMMFR2_Struct
 *! \brief  Memory Model Feature Register 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTMMFR2_t {
  union {
    struct {
      unsigned int INTMMFR2   : 32;  /**< Memory Model Feature Register 2 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTMMFR2_t;

/*@}*/

/** @defgroup INTMMFR3 Memory Model Feature Register 3 (INTMMFR3) Register
 *  Memory Model Feature Register 3 (INTMMFR3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTMMFR3_Struct
 *! \brief  Memory Model Feature Register 3 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTMMFR3_t {
  union {
    struct {
      unsigned int INTMMFR3   : 32;  /**< Memory Model Feature Register 3 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTMMFR3_t;

/*@}*/

/** @defgroup INTISAR0 ISA Feature Register 0 (INTISAR0) Register
 *  ISA Feature Register 0 (INTISAR0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTISAR0_Struct
 *! \brief  ISA Feature Register 0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTISAR0_t {
  union {
    struct {
      unsigned int INTISAR0   : 32;  /**< ISA Feature Register 0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTISAR0_t;

/*@}*/

/** @defgroup INTISAR1 ISA Feature Register 1 (INTISAR1) Register
 *  ISA Feature Register 1 (INTISAR1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTISAR1_Struct
 *! \brief  ISA Feature Register 1 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTISAR1_t {
  union {
    struct {
      unsigned int INTISAR1   : 32;  /**< ISA Feature Register 1 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTISAR1_t;

/*@}*/

/** @defgroup INTISAR2 ISA Feature Register 2 (INTISAR2) Register
 *  ISA Feature Register 2 (INTISAR2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTISAR2_Struct
 *! \brief  ISA Feature Register 2 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTISAR2_t {
  union {
    struct {
      unsigned int INTISAR2   : 32;  /**< ISA Feature Register 2 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTISAR2_t;

/*@}*/

/** @defgroup INTISAR3 ISA Feature Register 3 (INTISAR3) Register
 *  ISA Feature Register 3 (INTISAR3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTISAR3_Struct
 *! \brief  ISA Feature Register 3 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTISAR3_t {
  union {
    struct {
      unsigned int INTISAR3   : 32;  /**< ISA Feature Register 3 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTISAR3_t;

/*@}*/

/** @defgroup INTISAR4 ISA Feature Register 4 (INTISAR4) Register
 *  ISA Feature Register 4 (INTISAR4) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTISAR4_Struct
 *! \brief  ISA Feature Register 4 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTISAR4_t {
  union {
    struct {
      unsigned int INTISAR4   : 32;  /**< ISA Feature Register 4 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTISAR4_t;

/*@}*/

/** @defgroup INTTRGI Software Trigger Interrupt Register (INTTRGI) Register
 *  Software Trigger Interrupt Register (INTTRGI) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTTRGI_Struct
 *! \brief  Software Trigger Interrupt Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTTRGI_t {
  union {
    struct {
      unsigned int INTTRGI    : 32;  /**< Software Trigger Interrupt Register */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTTRGI_t;

/*@}*/

/** @defgroup INTPID4 Peripheral Identification Register 4 (INTPID4) Register
 *  Peripheral Identification Register 4 (INTPID4) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID4_Struct
 *! \brief  Peripheral Identification Register 4 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID4_t {
  union {
    struct {
      unsigned int INTPID4    : 32;  /**< Peripheral Identification Register 4 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID4_t;

/*@}*/

/** @defgroup INTPID5 Peripheral Identification Register 5 (INTPID5) Register
 *  Peripheral Identification Register 5 (INTPID5) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID5_Struct
 *! \brief  Peripheral Identification Register 5 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID5_t {
  union {
    struct {
      unsigned int INTPID5    : 32;  /**< Peripheral Identification Register 5 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID5_t;

/*@}*/

/** @defgroup INTPID6 Peripheral Identification Register 6 (INTPID6) Register
 *  Peripheral Identification Register 6 (INTPID6) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID6_Struct
 *! \brief  Peripheral Identification Register 6 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID6_t {
  union {
    struct {
      unsigned int INTPID6    : 32;  /**< Peripheral Identification Register 6 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID6_t;

/*@}*/

/** @defgroup INTPID7 Peripheral Identification Register 7 (INTPID7) Register
 *  Peripheral Identification Register 7 (INTPID7) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID7_Struct
 *! \brief  Peripheral Identification Register 7 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID7_t {
  union {
    struct {
      unsigned int INTPID7    : 32;  /**< Peripheral Identification Register 7 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID7_t;

/*@}*/

/** @defgroup INTPID0 Peripheral Identification Bits7:0 (INTPID0) Register
 *  Peripheral Identification Bits7:0 (INTPID0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID0_Struct
 *! \brief  Peripheral Identification Bits7:0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID0_t {
  union {
    struct {
      unsigned int INTPID0    : 32;  /**< Peripheral Identification Bits7:0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID0_t;

/*@}*/

/** @defgroup INTPID1 Peripheral Identification Bits15:8 (INTPID1) Register
 *  Peripheral Identification Bits15:8 (INTPID1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID1_Struct
 *! \brief  Peripheral Identification Bits15:8 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID1_t {
  union {
    struct {
      unsigned int INTPID1    : 32;  /**< Peripheral Identification Bits15:8 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID1_t;

/*@}*/

/** @defgroup INTPID2 Peripheral Identification Bits16:23 (INTPID2) Register
 *  Peripheral Identification Bits16:23 (INTPID2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID2_Struct
 *! \brief  Peripheral Identification Bits16:23 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID2_t {
  union {
    struct {
      unsigned int INTPID2    : 32;  /**< Peripheral Identification Bits16:23 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID2_t;

/*@}*/

/** @defgroup INTPID3 Peripheral Identification Bits24:31 (INTPID3) Register
 *  Peripheral Identification Bits24:31 (INTPID3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTPID3_Struct
 *! \brief  Peripheral Identification Bits24:31 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTPID3_t {
  union {
    struct {
      unsigned int INTPID3    : 32;  /**< Peripheral Identification Bits24:31 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTPID3_t;

/*@}*/

/** @defgroup INTCID0 Component Identification Bits7:0 (INTCID0) Register
 *  Component Identification Bits7:0 (INTCID0) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCID0_Struct
 *! \brief  Component Identification Bits7:0 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCID0_t {
  union {
    struct {
      unsigned int INTCID0    : 32;  /**< Component Identification Bits7:0 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCID0_t;

/*@}*/

/** @defgroup INTCID1 Component Identification Bits15:8 (INTCID1) Register
 *  Component Identification Bits15:8 (INTCID1) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCID1_Struct
 *! \brief  Component Identification Bits15:8 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCID1_t {
  union {
    struct {
      unsigned int INTCID1    : 32;  /**< Component Identification Bits15:8 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCID1_t;

/*@}*/

/** @defgroup INTCID2 Component Identification Bits16:23 (INTCID2) Register
 *  Component Identification Bits16:23 (INTCID2) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCID2_Struct
 *! \brief  Component Identification Bits16:23 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCID2_t {
  union {
    struct {
      unsigned int INTCID2    : 32;  /**< Component Identification Bits16:23 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCID2_t;

/*@}*/

/** @defgroup INTCID3 Component Identification Bits24:31 (INTCID3) Register
 *  Component Identification Bits24:31 (INTCID3) Register.
 *
 *  
 *  @{
 */

/* ==========================================================================
 *! \struct ADI_cortex_INTCID3_Struct
 *! \brief  Component Identification Bits24:31 Register bit field structure
 * ========================================================================== */
typedef struct _ADI_cortex_INTCID3_t {
  union {
    struct {
      unsigned int INTCID3    : 32;  /**< Component Identification Bits24:31 */
    };
    uint32_t VALUE32;
  };
} ADI_cortex_INTCID3_t;

/*@}*/

