#ifndef __MMR_XML_H__
#define __MMR_XML_H__

// This file was auto-generated using the mmr-defs script.

// Base address for module: CacheFlash
#define  CacheFlash_BASE_ADDR  0x40018000

// Register addresses:
#define  FEESTAT_A                                              0x40018000
#define  FEESTAT              (*(volatile unsigned long      *) 0x40018000)
#define  FEEIEN_A                                               0x40018004
#define  FEEIEN               (*(volatile unsigned long      *) 0x40018004)
#define  FEECMD_A                                               0x40018008
#define  FEECMD               (*(volatile unsigned long      *) 0x40018008)
#define  FEEKH_ADDR_A                                           0x4001800C
#define  FEEKH_ADDR           (*(volatile unsigned long      *) 0x4001800C)
#define  FEEKH_DATA0_A                                          0x40018010
#define  FEEKH_DATA0          (*(volatile unsigned long      *) 0x40018010)
#define  FEEKH_DATA1_A                                          0x40018014
#define  FEEKH_DATA1          (*(volatile unsigned long      *) 0x40018014)
#define  FEEPAGE_ADDR0_A                                        0x40018018
#define  FEEPAGE_ADDR0        (*(volatile unsigned long      *) 0x40018018)
#define  FEEPAGE_ADDR1_A                                        0x4001801C
#define  FEEPAGE_ADDR1        (*(volatile unsigned long      *) 0x4001801C)
#define  FEEKEY_A                                               0x40018020
#define  FEEKEY               (*(volatile unsigned long      *) 0x40018020)
#define  FEEWR_ABORT_ADDR_A                                     0x40018024
#define  FEEWR_ABORT_ADDR     (*(volatile unsigned long      *) 0x40018024)
#define  FEEWRPROT_A                                            0x40018028
#define  FEEWRPROT            (*(volatile unsigned long      *) 0x40018028)
#define  FEESIGNATURE_A                                         0x4001802C
#define  FEESIGNATURE         (*(volatile unsigned long      *) 0x4001802C)
#define  FEEUCFG_A                                              0x40018030
#define  FEEUCFG              (*(volatile unsigned long      *) 0x40018030)
#define  FEETIME_PARAM0_A                                       0x40018034
#define  FEETIME_PARAM0       (*(volatile unsigned long      *) 0x40018034)
#define  FEETIME_PARAM1_A                                       0x40018038
#define  FEETIME_PARAM1       (*(volatile unsigned long      *) 0x40018038)
#define  FEEABORT_EN_LO_A                                       0x4001803C
#define  FEEABORT_EN_LO       (*(volatile unsigned long      *) 0x4001803C)
#define  FEEABORT_EN_HI_A                                       0x40018040
#define  FEEABORT_EN_HI       (*(volatile unsigned long      *) 0x40018040)
#define  FEEECC_CFG_A                                           0x40018044
#define  FEEECC_CFG           (*(volatile unsigned long      *) 0x40018044)
#define  FEEECC_ADDR_A                                          0x40018048
#define  FEEECC_ADDR          (*(volatile unsigned long      *) 0x40018048)
#define  FEEADI_POR_CFG_A                                       0x4001804C
#define  FEEADI_POR_CFG       (*(volatile unsigned long      *) 0x4001804C)
#define  FEEADI_POR_SEC_A                                       0x40018050
#define  FEEADI_POR_SEC       (*(volatile unsigned long      *) 0x40018050)
#define  FEEADI_VOL_CFG_A                                       0x40018054
#define  FEEADI_VOL_CFG       (*(volatile unsigned long      *) 0x40018054)
#define  FEECACHESTAT_A                                         0x40018058
#define  FEECACHESTAT         (*(volatile unsigned long      *) 0x40018058)
#define  FEECACHESETUP_A                                        0x4001805C
#define  FEECACHESETUP        (*(volatile unsigned long      *) 0x4001805C)
#define  FEECACHEKEY_A                                          0x40018060
#define  FEECACHEKEY          (*(volatile unsigned long      *) 0x40018060)
#define  FEECACHETMSETUP_A                                      0x40018064
#define  FEECACHETMSETUP      (*(volatile unsigned long      *) 0x40018064)
#define  FEECACHETMSETADDR_A                                    0x40018068
#define  FEECACHETMSETADDR    (*(volatile unsigned long      *) 0x40018068)
#define  FEECACHETMTAG_A                                        0x4001806C
#define  FEECACHETMTAG        (*(volatile unsigned long      *) 0x4001806C)
#define  FEECACHETMD0LOW_A                                      0x40018070
#define  FEECACHETMD0LOW      (*(volatile unsigned long      *) 0x40018070)
#define  FEECACHETMD0HIGH_A                                     0x40018074
#define  FEECACHETMD0HIGH     (*(volatile unsigned long      *) 0x40018074)
#define  FEECACHETMD1LOW_A                                      0x40018078
#define  FEECACHETMD1LOW      (*(volatile unsigned long      *) 0x40018078)
#define  FEECACHETMD1HIGH_A                                     0x4001807C
#define  FEECACHETMD1HIGH     (*(volatile unsigned long      *) 0x4001807C)
#define  FEECACHEMISSCNTR_A                                     0x40018080
#define  FEECACHEMISSCNTR     (*(volatile unsigned long      *) 0x40018080)
#define  FEEICACHELASTADDR_A                                    0x40018084
#define  FEEICACHELASTADDR    (*(volatile unsigned long      *) 0x40018084)
#define  FEEDCACHELASTADDR_A                                    0x40018088
#define  FEEDCACHELASTADDR    (*(volatile unsigned long      *) 0x40018088)
#define  FEEDFT_STAT_A                                          0x4001808C
#define  FEEDFT_STAT          (*(volatile unsigned long      *) 0x4001808C)
#define  FEEDFT_CTRL_A                                          0x40018090
#define  FEEDFT_CTRL          (*(volatile unsigned long      *) 0x40018090)
#define  FEEDFT_CMD_A                                           0x40018094
#define  FEEDFT_CMD           (*(volatile unsigned long      *) 0x40018094)
#define  FEEDFT_PIN_REG_A                                       0x40018098
#define  FEEDFT_PIN_REG       (*(volatile unsigned long      *) 0x40018098)
#define  FEEDFT_XADR_REG_A                                      0x4001809C
#define  FEEDFT_XADR_REG      (*(volatile unsigned long      *) 0x4001809C)
#define  FEEDFT_YADR_REG_A                                      0x400180A0
#define  FEEDFT_YADR_REG      (*(volatile unsigned long      *) 0x400180A0)
#define  FEEDFT_DATA_L_REG_A                                    0x400180A4
#define  FEEDFT_DATA_L_REG    (*(volatile unsigned long      *) 0x400180A4)
#define  FEEDFT_DATA_H_REG_A                                    0x400180A8
#define  FEEDFT_DATA_H_REG    (*(volatile unsigned long      *) 0x400180A8)
#define  FEEDFT_CTRL_REG_A                                      0x400180AC
#define  FEEDFT_CTRL_REG      (*(volatile unsigned long      *) 0x400180AC)
#define  FEEDFT_GRP_REG_A                                       0x400180B0
#define  FEEDFT_GRP_REG       (*(volatile unsigned long      *) 0x400180B0)
#define  FEEDFT_IP_REG_A                                        0x400180B4
#define  FEEDFT_IP_REG        (*(volatile unsigned long      *) 0x400180B4)
#define  FEEDFT_BIT_REG_A                                       0x400180B8
#define  FEEDFT_BIT_REG       (*(volatile unsigned long      *) 0x400180B8)
#define  FEEDFT_PEND_A                                          0x400180BC
#define  FEEDFT_PEND          (*(volatile unsigned long      *) 0x400180BC)
#define  FEEDFT_PROBE_A                                         0x400180C0
#define  FEEDFT_PROBE         (*(volatile unsigned long      *) 0x400180C0)
#define  FEETST_CFG_A                                           0x400180C4
#define  FEETST_CFG           (*(volatile unsigned long      *) 0x400180C4)
#define  FEETST_CMD_KEY_A                                       0x400180C8
#define  FEETST_CMD_KEY       (*(volatile unsigned long      *) 0x400180C8)
#define  FEETM_DATA0_A                                          0x400180CC
#define  FEETM_DATA0          (*(volatile unsigned long      *) 0x400180CC)
#define  FEETM_DATA1_A                                          0x400180D0
#define  FEETM_DATA1          (*(volatile unsigned long      *) 0x400180D0)
#define  FEETM_DATA2_A                                          0x400180D4
#define  FEETM_DATA2          (*(volatile unsigned long      *) 0x400180D4)
#define  FEEKH_DATA2_A                                          0x400180D8
#define  FEEKH_DATA2          (*(volatile unsigned long      *) 0x400180D8)
#define  FEEFLSH_TC_A                                           0x400180DC
#define  FEEFLSH_TC           (*(volatile unsigned long      *) 0x400180DC)

// Base address for module: EXTINT
#define  EXTINT_BASE_ADDR  0x4004C080

// Register addresses:
#define  EXTINTEI0CFG_A                                    0x4004C080
#define  EXTINTEI0CFG    (*(volatile unsigned long      *) 0x4004C080)
#define  EXTINTNMICFG_A                                    0x4004C08C
#define  EXTINTNMICFG    (*(volatile unsigned long      *) 0x4004C08C)
#define  EXTINTEICLR_A                                     0x4004C090
#define  EXTINTEICLR     (*(volatile unsigned long      *) 0x4004C090)
#define  EXTINTNMICLR_A                                    0x4004C094
#define  EXTINTNMICLR    (*(volatile unsigned long      *) 0x4004C094)

// Base address for module: PMG
#define  PMG_BASE_ADDR  0x4004C000

// Register addresses:
#define  INTR_CNTRL0_A                                           0x4004C000
#define  INTR_CNTRL0           (*(volatile unsigned long      *) 0x4004C000)
#define  PSM_STATUS_A                                            0x4004C004
#define  PSM_STATUS            (*(volatile unsigned long      *) 0x4004C004)
#define  PWRMOD_A                                                0x4004C008
#define  PWRMOD                (*(volatile unsigned long      *) 0x4004C008)
#define  PWRKEY_A                                                0x4004C00C
#define  PWRKEY                (*(volatile unsigned long      *) 0x4004C00C)
#define  SHUTDOWN_STATUS_A                                       0x4004C010
#define  SHUTDOWN_STATUS       (*(volatile unsigned long      *) 0x4004C010)
#define  SRAMRET_A                                               0x4004C014
#define  SRAMRET               (*(volatile unsigned long      *) 0x4004C014)
#define  SW_TST_LV0_A                                            0x4004C024
#define  SW_TST_LV0            (*(volatile unsigned long      *) 0x4004C024)
#define  SW_TST_LV1_A                                            0x4004C028
#define  SW_TST_LV1            (*(volatile unsigned long      *) 0x4004C028)
#define  SW_TST_HV_A                                             0x4004C02C
#define  SW_TST_HV             (*(volatile unsigned long      *) 0x4004C02C)
#define  TESTPROT_A                                              0x4004C030
#define  TESTPROT              (*(volatile unsigned long      *) 0x4004C030)
#define  LP_TST_REF0_A                                           0x4004C034
#define  LP_TST_REF0           (*(volatile unsigned long      *) 0x4004C034)
#define  PMG_TRIM_A                                              0x4004C038
#define  PMG_TRIM              (*(volatile unsigned long      *) 0x4004C038)
#define  RSTSTA_A                                                0x4004C040
#define  RSTSTA                (*(volatile unsigned long      *) 0x4004C040)
#define  CNTRL1_A                                                0x4004C044
#define  CNTRL1                (*(volatile unsigned long      *) 0x4004C044)
#define  WK_TST_A                                                0x4004C048
#define  WK_TST                (*(volatile unsigned long      *) 0x4004C048)
#define  ANA_TST1_A                                              0x4004C04C
#define  ANA_TST1              (*(volatile unsigned long      *) 0x4004C04C)
#define  ANA_TST2_A                                              0x4004C050
#define  ANA_TST2              (*(volatile unsigned long      *) 0x4004C050)
#define  DIG_TST1_A                                              0x4004C054
#define  DIG_TST1              (*(volatile unsigned long      *) 0x4004C054)
#define  HP_LDO_TST_A                                            0x4004C058
#define  HP_LDO_TST            (*(volatile unsigned long      *) 0x4004C058)
#define  VREG_TST_A                                              0x4004C230
#define  VREG_TST              (*(volatile unsigned long      *) 0x4004C230)
#define  LP_TST_REF1_A                                           0x4004C238
#define  LP_TST_REF1           (*(volatile unsigned long      *) 0x4004C238)
#define  LP_TST_BLOCK0_A                                         0x4004C23C
#define  LP_TST_BLOCK0         (*(volatile unsigned long      *) 0x4004C23C)
#define  LP_TST_BLOCK1_A                                         0x4004C240
#define  LP_TST_BLOCK1         (*(volatile unsigned long      *) 0x4004C240)
#define  SRAMCNTRL_A                                             0x4004C260
#define  SRAMCNTRL             (*(volatile unsigned long      *) 0x4004C260)
#define  SRAM_INIT_STATUS_A                                      0x4004C264
#define  SRAM_INIT_STATUS      (*(volatile unsigned long      *) 0x4004C264)
#define  CLEAR_LATCH_GPIOS_A                                     0x4004C268
#define  CLEAR_LATCH_GPIOS     (*(volatile unsigned short int *) 0x4004C268)
#define  SCRATCHPAD_IMAGE_A                                      0x4004C26C
#define  SCRATCHPAD_IMAGE      (*(volatile unsigned long      *) 0x4004C26C)
#define  SCRATCHPAD_3V_READ_A                                    0x4004C270
#define  SCRATCHPAD_3V_READ    (*(volatile unsigned long      *) 0x4004C270)

// Base address for module: PTI
#define  PTI_BASE_ADDR  0x4004CD00

// Register addresses:
#define  PTIRST_ISR_STARTADDR_A                                    0x4004CD00
#define  PTIRST_ISR_STARTADDR    (*(volatile unsigned long      *) 0x4004CD00)
#define  PTIRST_STACK_POINTER_A                                    0x4004CD04
#define  PTIRST_STACK_POINTER    (*(volatile unsigned long      *) 0x4004CD04)
#define  PTIPTI_CONTROL_A                                          0x4004CD08
#define  PTIPTI_CONTROL          (*(volatile unsigned long      *) 0x4004CD08)

// Base address for module: RNG
#define  RNG_BASE_ADDR  0x40040400

// Register addresses:
#define  RNGCTL_A                                         0x40040400
#define  RNGCTL         (*(volatile unsigned short int *) 0x40040400)
#define  RNGLEN_A                                         0x40040404
#define  RNGLEN         (*(volatile unsigned short int *) 0x40040404)
#define  RNGSTAT_A                                        0x40040408
#define  RNGSTAT        (*(volatile unsigned short int *) 0x40040408)
#define  RNGDATA_A                                        0x4004040C
#define  RNGDATA        (*(volatile unsigned long      *) 0x4004040C)
#define  RNGOSCCNT_A                                      0x40040410
#define  RNGOSCCNT      (*(volatile unsigned long      *) 0x40040410)
#define  RNGOSCDIFF0_A                                    0x40040414
#define  RNGOSCDIFF0    (*(volatile unsigned char      *) 0x40040414)
#define  RNGOSCDIFF1_A                                    0x40040415
#define  RNGOSCDIFF1    (*(volatile unsigned char      *) 0x40040415)
#define  RNGOSCDIFF2_A                                    0x40040416
#define  RNGOSCDIFF2    (*(volatile unsigned char      *) 0x40040416)
#define  RNGOSCDIFF3_A                                    0x40040417
#define  RNGOSCDIFF3    (*(volatile unsigned char      *) 0x40040417)

// Base address for module: SPI0
#define  SPI0_BASE_ADDR  0x40004000

// Register addresses:
#define  SPI0STAT_A                                           0x40004000
#define  SPI0STAT           (*(volatile unsigned short int *) 0x40004000)
#define  SPI0RX_A                                             0x40004004
#define  SPI0RX             (*(volatile unsigned short int *) 0x40004004)
#define  SPI0TX_A                                             0x40004008
#define  SPI0TX             (*(volatile unsigned short int *) 0x40004008)
#define  SPI0DIV_A                                            0x4000400C
#define  SPI0DIV            (*(volatile unsigned short int *) 0x4000400C)
#define  SPI0CTL_A                                            0x40004010
#define  SPI0CTL            (*(volatile unsigned short int *) 0x40004010)
#define  SPI0IEN_A                                            0x40004014
#define  SPI0IEN            (*(volatile unsigned short int *) 0x40004014)
#define  SPI0CNT_A                                            0x40004018
#define  SPI0CNT            (*(volatile unsigned short int *) 0x40004018)
#define  SPI0DMA_A                                            0x4000401C
#define  SPI0DMA            (*(volatile unsigned short int *) 0x4000401C)
#define  SPI0FIFO_STAT_A                                      0x40004020
#define  SPI0FIFO_STAT      (*(volatile unsigned short int *) 0x40004020)
#define  SPI0RD_CTL_A                                         0x40004024
#define  SPI0RD_CTL         (*(volatile unsigned short int *) 0x40004024)
#define  SPI0FLOW_CTL_A                                       0x40004028
#define  SPI0FLOW_CTL       (*(volatile unsigned short int *) 0x40004028)
#define  SPI0WAIT_TMR_A                                       0x4000402C
#define  SPI0WAIT_TMR       (*(volatile unsigned short int *) 0x4000402C)
#define  SPI0CS_CTL_A                                         0x40004030
#define  SPI0CS_CTL         (*(volatile unsigned short int *) 0x40004030)
#define  SPI0CS_OVERRIDE_A                                    0x40004034
#define  SPI0CS_OVERRIDE    (*(volatile unsigned short int *) 0x40004034)
#define  SPI0XFR_CNT_A                                        0x40004038
#define  SPI0XFR_CNT        (*(volatile unsigned short int *) 0x40004038)

// Base address for module: SPI1
#define  SPI1_BASE_ADDR  0x40004400

// Register addresses:
#define  SPI1STAT_A                                           0x40004400
#define  SPI1STAT           (*(volatile unsigned short int *) 0x40004400)
#define  SPI1RX_A                                             0x40004404
#define  SPI1RX             (*(volatile unsigned short int *) 0x40004404)
#define  SPI1TX_A                                             0x40004408
#define  SPI1TX             (*(volatile unsigned short int *) 0x40004408)
#define  SPI1DIV_A                                            0x4000440C
#define  SPI1DIV            (*(volatile unsigned short int *) 0x4000440C)
#define  SPI1CTL_A                                            0x40004410
#define  SPI1CTL            (*(volatile unsigned short int *) 0x40004410)
#define  SPI1IEN_A                                            0x40004414
#define  SPI1IEN            (*(volatile unsigned short int *) 0x40004414)
#define  SPI1CNT_A                                            0x40004418
#define  SPI1CNT            (*(volatile unsigned short int *) 0x40004418)
#define  SPI1DMA_A                                            0x4000441C
#define  SPI1DMA            (*(volatile unsigned short int *) 0x4000441C)
#define  SPI1FIFO_STAT_A                                      0x40004420
#define  SPI1FIFO_STAT      (*(volatile unsigned short int *) 0x40004420)
#define  SPI1RD_CTL_A                                         0x40004424
#define  SPI1RD_CTL         (*(volatile unsigned short int *) 0x40004424)
#define  SPI1FLOW_CTL_A                                       0x40004428
#define  SPI1FLOW_CTL       (*(volatile unsigned short int *) 0x40004428)
#define  SPI1WAIT_TMR_A                                       0x4000442C
#define  SPI1WAIT_TMR       (*(volatile unsigned short int *) 0x4000442C)
#define  SPI1CS_CTL_A                                         0x40004430
#define  SPI1CS_CTL         (*(volatile unsigned short int *) 0x40004430)
#define  SPI1CS_OVERRIDE_A                                    0x40004434
#define  SPI1CS_OVERRIDE    (*(volatile unsigned short int *) 0x40004434)
#define  SPI1XFR_CNT_A                                        0x40004438
#define  SPI1XFR_CNT        (*(volatile unsigned short int *) 0x40004438)

// Base address for module: SPIH
#define  SPIH_BASE_ADDR  0x40024000

// Register addresses:
#define  SPIHSTAT_A                                           0x40024000
#define  SPIHSTAT           (*(volatile unsigned short int *) 0x40024000)
#define  SPIHRX_A                                             0x40024004
#define  SPIHRX             (*(volatile unsigned short int *) 0x40024004)
#define  SPIHTX_A                                             0x40024008
#define  SPIHTX             (*(volatile unsigned short int *) 0x40024008)
#define  SPIHDIV_A                                            0x4002400C
#define  SPIHDIV            (*(volatile unsigned short int *) 0x4002400C)
#define  SPIHCTL_A                                            0x40024010
#define  SPIHCTL            (*(volatile unsigned short int *) 0x40024010)
#define  SPIHIEN_A                                            0x40024014
#define  SPIHIEN            (*(volatile unsigned short int *) 0x40024014)
#define  SPIHCNT_A                                            0x40024018
#define  SPIHCNT            (*(volatile unsigned short int *) 0x40024018)
#define  SPIHDMA_A                                            0x4002401C
#define  SPIHDMA            (*(volatile unsigned short int *) 0x4002401C)
#define  SPIHFIFO_STAT_A                                      0x40024020
#define  SPIHFIFO_STAT      (*(volatile unsigned short int *) 0x40024020)
#define  SPIHRD_CTL_A                                         0x40024024
#define  SPIHRD_CTL         (*(volatile unsigned short int *) 0x40024024)
#define  SPIHFLOW_CTL_A                                       0x40024028
#define  SPIHFLOW_CTL       (*(volatile unsigned short int *) 0x40024028)
#define  SPIHWAIT_TMR_A                                       0x4002402C
#define  SPIHWAIT_TMR       (*(volatile unsigned short int *) 0x4002402C)
#define  SPIHCS_CTL_A                                         0x40024030
#define  SPIHCS_CTL         (*(volatile unsigned short int *) 0x40024030)
#define  SPIHCS_OVERRIDE_A                                    0x40024034
#define  SPIHCS_OVERRIDE    (*(volatile unsigned short int *) 0x40024034)
#define  SPIHXFR_CNT_A                                        0x40024038
#define  SPIHXFR_CNT        (*(volatile unsigned short int *) 0x40024038)

// Base address for module: TMR0
#define  TMR0_BASE_ADDR  0x40000000

// Register addresses:
#define  TMR0LD_A                                      0x40000000
#define  TMR0LD      (*(volatile unsigned short int *) 0x40000000)
#define  TMR0VAL_A                                     0x40000004
#define  TMR0VAL     (*(volatile unsigned short int *) 0x40000004)
#define  TMR0CON_A                                     0x40000008
#define  TMR0CON     (*(volatile unsigned short int *) 0x40000008)
#define  TMR0CLRI_A                                    0x4000000C
#define  TMR0CLRI    (*(volatile unsigned short int *) 0x4000000C)
#define  TMR0CAP_A                                     0x40000010
#define  TMR0CAP     (*(volatile unsigned short int *) 0x40000010)
#define  TMR0ALD_A                                     0x40000014
#define  TMR0ALD     (*(volatile unsigned short int *) 0x40000014)
#define  TMR0AVAL_A                                    0x40000018
#define  TMR0AVAL    (*(volatile unsigned short int *) 0x40000018)
#define  TMR0STA_A                                     0x4000001C
#define  TMR0STA     (*(volatile unsigned short int *) 0x4000001C)
#define  TMR0PCON_A                                    0x40000020
#define  TMR0PCON    (*(volatile unsigned short int *) 0x40000020)
#define  TMR0PMAT_A                                    0x40000024
#define  TMR0PMAT    (*(volatile unsigned short int *) 0x40000024)

// Base address for module: TMR1
#define  TMR1_BASE_ADDR  0x40000400

// Register addresses:
#define  TMR1LD_A                                      0x40000400
#define  TMR1LD      (*(volatile unsigned short int *) 0x40000400)
#define  TMR1VAL_A                                     0x40000404
#define  TMR1VAL     (*(volatile unsigned short int *) 0x40000404)
#define  TMR1CON_A                                     0x40000408
#define  TMR1CON     (*(volatile unsigned short int *) 0x40000408)
#define  TMR1CLRI_A                                    0x4000040C
#define  TMR1CLRI    (*(volatile unsigned short int *) 0x4000040C)
#define  TMR1CAP_A                                     0x40000410
#define  TMR1CAP     (*(volatile unsigned short int *) 0x40000410)
#define  TMR1ALD_A                                     0x40000414
#define  TMR1ALD     (*(volatile unsigned short int *) 0x40000414)
#define  TMR1AVAL_A                                    0x40000418
#define  TMR1AVAL    (*(volatile unsigned short int *) 0x40000418)
#define  TMR1STA_A                                     0x4000041C
#define  TMR1STA     (*(volatile unsigned short int *) 0x4000041C)
#define  TMR1PCON_A                                    0x40000420
#define  TMR1PCON    (*(volatile unsigned short int *) 0x40000420)
#define  TMR1PMAT_A                                    0x40000424
#define  TMR1PMAT    (*(volatile unsigned short int *) 0x40000424)

// Base address for module: TMR2
#define  TMR2_BASE_ADDR  0x40000800

// Register addresses:
#define  TMR2LD_A                                      0x40000800
#define  TMR2LD      (*(volatile unsigned short int *) 0x40000800)
#define  TMR2VAL_A                                     0x40000804
#define  TMR2VAL     (*(volatile unsigned short int *) 0x40000804)
#define  TMR2CON_A                                     0x40000808
#define  TMR2CON     (*(volatile unsigned short int *) 0x40000808)
#define  TMR2CLRI_A                                    0x4000080C
#define  TMR2CLRI    (*(volatile unsigned short int *) 0x4000080C)
#define  TMR2CAP_A                                     0x40000810
#define  TMR2CAP     (*(volatile unsigned short int *) 0x40000810)
#define  TMR2ALD_A                                     0x40000814
#define  TMR2ALD     (*(volatile unsigned short int *) 0x40000814)
#define  TMR2AVAL_A                                    0x40000818
#define  TMR2AVAL    (*(volatile unsigned short int *) 0x40000818)
#define  TMR2STA_A                                     0x4000081C
#define  TMR2STA     (*(volatile unsigned short int *) 0x4000081C)
#define  TMR2PCON_A                                    0x40000820
#define  TMR2PCON    (*(volatile unsigned short int *) 0x40000820)
#define  TMR2PMAT_A                                    0x40000824
#define  TMR2PMAT    (*(volatile unsigned short int *) 0x40000824)

// Base address for module: beeper
#define  beeper_BASE_ADDR  0x40005C00

// Register addresses:
#define  BEEP_CFG_A                                       0x40005C00
#define  BEEP_CFG       (*(volatile unsigned short int *) 0x40005C00)
#define  BEEP_STAT_A                                      0x40005C04
#define  BEEP_STAT      (*(volatile unsigned short int *) 0x40005C04)
#define  BEEP_TONE_A_A                                    0x40005C08
#define  BEEP_TONE_A    (*(volatile unsigned short int *) 0x40005C08)
#define  BEEP_TONE_B_A                                    0x40005C0C
#define  BEEP_TONE_B    (*(volatile unsigned short int *) 0x40005C0C)

// Base address for module: bus_matrix
#define  bus_matrix_BASE_ADDR  0x4004C800

// Register addresses:
#define  BMARBIT0_A                                    0x4004C800
#define  BMARBIT0    (*(volatile unsigned long      *) 0x4004C800)
#define  BMARBIT1_A                                    0x4004C804
#define  BMARBIT1    (*(volatile unsigned long      *) 0x4004C804)
#define  BMARBIT2_A                                    0x4004C808
#define  BMARBIT2    (*(volatile unsigned long      *) 0x4004C808)
#define  BMARBIT3_A                                    0x4004C80C
#define  BMARBIT3    (*(volatile unsigned long      *) 0x4004C80C)

// Base address for module: clocking
#define  clocking_BASE_ADDR  0x4004C100

// Register addresses:
#define  OSCKEY_A                                       0x4004C10C
#define  OSCKEY       (*(volatile unsigned long      *) 0x4004C10C)
#define  OSCCTRL_A                                      0x4004C110
#define  OSCCTRL      (*(volatile unsigned long      *) 0x4004C110)
#define  TOSCCTRL0_A                                    0x4004C114
#define  TOSCCTRL0    (*(volatile unsigned long      *) 0x4004C114)
#define  CLKCON0_A                                      0x4004C300
#define  CLKCON0      (*(volatile unsigned long      *) 0x4004C300)
#define  CLKCON1_A                                      0x4004C304
#define  CLKCON1      (*(volatile unsigned long      *) 0x4004C304)
#define  CLKCON3_A                                      0x4004C30C
#define  CLKCON3      (*(volatile unsigned long      *) 0x4004C30C)
#define  CLKCON5_A                                      0x4004C314
#define  CLKCON5      (*(volatile unsigned long      *) 0x4004C314)
#define  CLKSTAT0_A                                     0x4004C318
#define  CLKSTAT0     (*(volatile unsigned long      *) 0x4004C318)
#define  TCLKTEST_A                                     0x4004C31C
#define  TCLKTEST     (*(volatile unsigned long      *) 0x4004C31C)
#define  TOSCCTRL1_A                                    0x4004C320
#define  TOSCCTRL1    (*(volatile unsigned long      *) 0x4004C320)
#define  TOSCCNFG0_A                                    0x4004C324
#define  TOSCCNFG0    (*(volatile unsigned long      *) 0x4004C324)
#define  TPLLCNFG0_A                                    0x4004C32C
#define  TPLLCNFG0    (*(volatile unsigned long      *) 0x4004C32C)
#define  THFRING_A                                      0x4004C330
#define  THFRING      (*(volatile unsigned long      *) 0x4004C330)

// Base address for module: cortex
#define  cortex_BASE_ADDR  0xE000E000

// Register addresses:
#define  INTNUM_A                                        0xE000E004
#define  INTNUM        (*(volatile unsigned long      *) 0xE000E004)
#define  STKSTA_A                                        0xE000E010
#define  STKSTA        (*(volatile unsigned long      *) 0xE000E010)
#define  STKLD_A                                         0xE000E014
#define  STKLD         (*(volatile unsigned long      *) 0xE000E014)
#define  STKVAL_A                                        0xE000E018
#define  STKVAL        (*(volatile unsigned long      *) 0xE000E018)
#define  STKCAL_A                                        0xE000E01C
#define  STKCAL        (*(volatile unsigned long      *) 0xE000E01C)
#define  INTSETE0_A                                      0xE000E100
#define  INTSETE0      (*(volatile unsigned long      *) 0xE000E100)
#define  INTSETE1_A                                      0xE000E104
#define  INTSETE1      (*(volatile unsigned long      *) 0xE000E104)
#define  INTCLRE0_A                                      0xE000E180
#define  INTCLRE0      (*(volatile unsigned long      *) 0xE000E180)
#define  INTCLRE1_A                                      0xE000E184
#define  INTCLRE1      (*(volatile unsigned long      *) 0xE000E184)
#define  INTSETP0_A                                      0xE000E200
#define  INTSETP0      (*(volatile unsigned long      *) 0xE000E200)
#define  INTSETP1_A                                      0xE000E204
#define  INTSETP1      (*(volatile unsigned long      *) 0xE000E204)
#define  INTCLRP0_A                                      0xE000E280
#define  INTCLRP0      (*(volatile unsigned long      *) 0xE000E280)
#define  INTCLRP1_A                                      0xE000E284
#define  INTCLRP1      (*(volatile unsigned long      *) 0xE000E284)
#define  INTACT0_A                                       0xE000E300
#define  INTACT0       (*(volatile unsigned long      *) 0xE000E300)
#define  INTACT1_A                                       0xE000E304
#define  INTACT1       (*(volatile unsigned long      *) 0xE000E304)
#define  INTPRI0_A                                       0xE000E400
#define  INTPRI0       (*(volatile unsigned long      *) 0xE000E400)
#define  INTPRI1_A                                       0xE000E404
#define  INTPRI1       (*(volatile unsigned long      *) 0xE000E404)
#define  INTPRI2_A                                       0xE000E408
#define  INTPRI2       (*(volatile unsigned long      *) 0xE000E408)
#define  INTPRI3_A                                       0xE000E40C
#define  INTPRI3       (*(volatile unsigned long      *) 0xE000E40C)
#define  INTPRI4_A                                       0xE000E410
#define  INTPRI4       (*(volatile unsigned long      *) 0xE000E410)
#define  INTPRI5_A                                       0xE000E414
#define  INTPRI5       (*(volatile unsigned long      *) 0xE000E414)
#define  INTPRI6_A                                       0xE000E418
#define  INTPRI6       (*(volatile unsigned long      *) 0xE000E418)
#define  INTPRI7_A                                       0xE000E41C
#define  INTPRI7       (*(volatile unsigned long      *) 0xE000E41C)
#define  INTPRI8_A                                       0xE000E420
#define  INTPRI8       (*(volatile unsigned long      *) 0xE000E420)
#define  INTPRI9_A                                       0xE000E424
#define  INTPRI9       (*(volatile unsigned long      *) 0xE000E424)
#define  INTPRI10_A                                      0xE000E428
#define  INTPRI10      (*(volatile unsigned long      *) 0xE000E428)
#define  INTCPID_A                                       0xE000ED00
#define  INTCPID       (*(volatile unsigned long      *) 0xE000ED00)
#define  INTSTA_A                                        0xE000ED04
#define  INTSTA        (*(volatile unsigned long      *) 0xE000ED04)
#define  INTVEC_A                                        0xE000ED08
#define  INTVEC        (*(volatile unsigned long      *) 0xE000ED08)
#define  INTAIRC_A                                       0xE000ED0C
#define  INTAIRC       (*(volatile unsigned long      *) 0xE000ED0C)
#define  INTCON0_A                                       0xE000ED10
#define  INTCON0       (*(volatile unsigned short int *) 0xE000ED10)
#define  INTCON1_A                                       0xE000ED14
#define  INTCON1       (*(volatile unsigned long      *) 0xE000ED14)
#define  INTSHPRIO0_A                                    0xE000ED18
#define  INTSHPRIO0    (*(volatile unsigned long      *) 0xE000ED18)
#define  INTSHPRIO1_A                                    0xE000ED1C
#define  INTSHPRIO1    (*(volatile unsigned long      *) 0xE000ED1C)
#define  INTSHPRIO3_A                                    0xE000ED20
#define  INTSHPRIO3    (*(volatile unsigned long      *) 0xE000ED20)
#define  INTSHCSR_A                                      0xE000ED24
#define  INTSHCSR      (*(volatile unsigned long      *) 0xE000ED24)
#define  INTCFSR_A                                       0xE000ED28
#define  INTCFSR       (*(volatile unsigned long      *) 0xE000ED28)
#define  INTHFSR_A                                       0xE000ED2C
#define  INTHFSR       (*(volatile unsigned long      *) 0xE000ED2C)
#define  INTDFSR_A                                       0xE000ED30
#define  INTDFSR       (*(volatile unsigned long      *) 0xE000ED30)
#define  INTMMAR_A                                       0xE000ED34
#define  INTMMAR       (*(volatile unsigned long      *) 0xE000ED34)
#define  INTBFAR_A                                       0xE000ED38
#define  INTBFAR       (*(volatile unsigned long      *) 0xE000ED38)
#define  INTAFSR_A                                       0xE000ED3C
#define  INTAFSR       (*(volatile unsigned long      *) 0xE000ED3C)
#define  INTPFR0_A                                       0xE000ED40
#define  INTPFR0       (*(volatile unsigned long      *) 0xE000ED40)
#define  INTPFR1_A                                       0xE000ED44
#define  INTPFR1       (*(volatile unsigned long      *) 0xE000ED44)
#define  INTDFR0_A                                       0xE000ED48
#define  INTDFR0       (*(volatile unsigned long      *) 0xE000ED48)
#define  INTAFR0_A                                       0xE000ED4C
#define  INTAFR0       (*(volatile unsigned long      *) 0xE000ED4C)
#define  INTMMFR0_A                                      0xE000ED50
#define  INTMMFR0      (*(volatile unsigned long      *) 0xE000ED50)
#define  INTMMFR1_A                                      0xE000ED54
#define  INTMMFR1      (*(volatile unsigned long      *) 0xE000ED54)
#define  INTMMFR2_A                                      0xE000ED58
#define  INTMMFR2      (*(volatile unsigned long      *) 0xE000ED58)
#define  INTMMFR3_A                                      0xE000ED5C
#define  INTMMFR3      (*(volatile unsigned long      *) 0xE000ED5C)
#define  INTISAR0_A                                      0xE000ED60
#define  INTISAR0      (*(volatile unsigned long      *) 0xE000ED60)
#define  INTISAR1_A                                      0xE000ED64
#define  INTISAR1      (*(volatile unsigned long      *) 0xE000ED64)
#define  INTISAR2_A                                      0xE000ED68
#define  INTISAR2      (*(volatile unsigned long      *) 0xE000ED68)
#define  INTISAR3_A                                      0xE000ED6C
#define  INTISAR3      (*(volatile unsigned long      *) 0xE000ED6C)
#define  INTISAR4_A                                      0xE000ED70
#define  INTISAR4      (*(volatile unsigned long      *) 0xE000ED70)
#define  INTTRGI_A                                       0xE000EF00
#define  INTTRGI       (*(volatile unsigned long      *) 0xE000EF00)
#define  INTPID4_A                                       0xE000EFD0
#define  INTPID4       (*(volatile unsigned long      *) 0xE000EFD0)
#define  INTPID5_A                                       0xE000EFD4
#define  INTPID5       (*(volatile unsigned long      *) 0xE000EFD4)
#define  INTPID6_A                                       0xE000EFD8
#define  INTPID6       (*(volatile unsigned long      *) 0xE000EFD8)
#define  INTPID7_A                                       0xE000EFDC
#define  INTPID7       (*(volatile unsigned long      *) 0xE000EFDC)
#define  INTPID0_A                                       0xE000EFE0
#define  INTPID0       (*(volatile unsigned long      *) 0xE000EFE0)
#define  INTPID1_A                                       0xE000EFE4
#define  INTPID1       (*(volatile unsigned long      *) 0xE000EFE4)
#define  INTPID2_A                                       0xE000EFE8
#define  INTPID2       (*(volatile unsigned long      *) 0xE000EFE8)
#define  INTPID3_A                                       0xE000EFEC
#define  INTPID3       (*(volatile unsigned long      *) 0xE000EFEC)
#define  INTCID0_A                                       0xE000EFF0
#define  INTCID0       (*(volatile unsigned long      *) 0xE000EFF0)
#define  INTCID1_A                                       0xE000EFF4
#define  INTCID1       (*(volatile unsigned long      *) 0xE000EFF4)
#define  INTCID2_A                                       0xE000EFF8
#define  INTCID2       (*(volatile unsigned long      *) 0xE000EFF8)
#define  INTCID3_A                                       0xE000EFFC
#define  INTCID3       (*(volatile unsigned long      *) 0xE000EFFC)

// Base address for module: crc
#define  crc_BASE_ADDR  0x40040000

// Register addresses:
#define  CRC_CTL_A                                       0x40040000
#define  CRC_CTL       (*(volatile unsigned long      *) 0x40040000)
#define  CRC_IPDATA_A                                    0x40040004
#define  CRC_IPDATA    (*(volatile unsigned long      *) 0x40040004)
#define  CRC_RESULT_A                                    0x40040008
#define  CRC_RESULT    (*(volatile unsigned long      *) 0x40040008)
#define  CRC_POLY_A                                      0x4004000C
#define  CRC_POLY      (*(volatile unsigned long      *) 0x4004000C)

// Base address for module: crypto
#define  crypto_BASE_ADDR  0x40044000

// Register addresses:
#define  CFG_A                                          0x40044000
#define  CFG          (*(volatile unsigned long      *) 0x40044000)
#define  DATALEN_A                                      0x40044004
#define  DATALEN      (*(volatile unsigned long      *) 0x40044004)
#define  PREFIXLEN_A                                    0x40044008
#define  PREFIXLEN    (*(volatile unsigned long      *) 0x40044008)
#define  INTEN_A                                        0x4004400C
#define  INTEN        (*(volatile unsigned long      *) 0x4004400C)
#define  STAT_A                                         0x40044010
#define  STAT         (*(volatile unsigned long      *) 0x40044010)
#define  INBUF_A                                        0x40044014
#define  INBUF        (*(volatile unsigned long      *) 0x40044014)
#define  OUTBUF_A                                       0x40044018
#define  OUTBUF       (*(volatile unsigned long      *) 0x40044018)
#define  NONCE0_A                                       0x4004401C
#define  NONCE0       (*(volatile unsigned long      *) 0x4004401C)
#define  NONCE1_A                                       0x40044020
#define  NONCE1       (*(volatile unsigned long      *) 0x40044020)
#define  NONCE2_A                                       0x40044024
#define  NONCE2       (*(volatile unsigned long      *) 0x40044024)
#define  NONCE3_A                                       0x40044028
#define  NONCE3       (*(volatile unsigned long      *) 0x40044028)
#define  AESKEY0_A                                      0x4004402C
#define  AESKEY0      (*(volatile unsigned long      *) 0x4004402C)
#define  AESKEY1_A                                      0x40044030
#define  AESKEY1      (*(volatile unsigned long      *) 0x40044030)
#define  AESKEY2_A                                      0x40044034
#define  AESKEY2      (*(volatile unsigned long      *) 0x40044034)
#define  AESKEY3_A                                      0x40044038
#define  AESKEY3      (*(volatile unsigned long      *) 0x40044038)
#define  AESKEY4_A                                      0x4004403C
#define  AESKEY4      (*(volatile unsigned long      *) 0x4004403C)
#define  AESKEY5_A                                      0x40044040
#define  AESKEY5      (*(volatile unsigned long      *) 0x40044040)
#define  AESKEY6_A                                      0x40044044
#define  AESKEY6      (*(volatile unsigned long      *) 0x40044044)
#define  AESKEY7_A                                      0x40044048
#define  AESKEY7      (*(volatile unsigned long      *) 0x40044048)
#define  CNTRINIT_A                                     0x4004404C
#define  CNTRINIT     (*(volatile unsigned long      *) 0x4004404C)
#define  SHAH0_A                                        0x40044050
#define  SHAH0        (*(volatile unsigned long      *) 0x40044050)
#define  SHAH1_A                                        0x40044054
#define  SHAH1        (*(volatile unsigned long      *) 0x40044054)
#define  SHAH2_A                                        0x40044058
#define  SHAH2        (*(volatile unsigned long      *) 0x40044058)
#define  SHAH3_A                                        0x4004405C
#define  SHAH3        (*(volatile unsigned long      *) 0x4004405C)
#define  SHAH4_A                                        0x40044060
#define  SHAH4        (*(volatile unsigned long      *) 0x40044060)
#define  SHAH5_A                                        0x40044064
#define  SHAH5        (*(volatile unsigned long      *) 0x40044064)
#define  SHAH6_A                                        0x40044068
#define  SHAH6        (*(volatile unsigned long      *) 0x40044068)
#define  SHAH7_A                                        0x4004406C
#define  SHAH7        (*(volatile unsigned long      *) 0x4004406C)

// Base address for module: dma
#define  dma_BASE_ADDR  0x40010000

// Register addresses:
#define  DMASTA_A                                               0x40010000
#define  DMASTA               (*(volatile unsigned long      *) 0x40010000)
#define  DMACFG_A                                               0x40010004
#define  DMACFG               (*(volatile unsigned long      *) 0x40010004)
#define  DMAPDBPTR_A                                            0x40010008
#define  DMAPDBPTR            (*(volatile unsigned long      *) 0x40010008)
#define  DMAADBPTR_A                                            0x4001000C
#define  DMAADBPTR            (*(volatile unsigned long      *) 0x4001000C)
#define  DMASWREQ_A                                             0x40010014
#define  DMASWREQ             (*(volatile unsigned long      *) 0x40010014)
#define  DMARMSKSET_A                                           0x40010020
#define  DMARMSKSET           (*(volatile unsigned long      *) 0x40010020)
#define  DMARMSKCLR_A                                           0x40010024
#define  DMARMSKCLR           (*(volatile unsigned long      *) 0x40010024)
#define  DMAENSET_A                                             0x40010028
#define  DMAENSET             (*(volatile unsigned long      *) 0x40010028)
#define  DMAENCLR_A                                             0x4001002C
#define  DMAENCLR             (*(volatile unsigned long      *) 0x4001002C)
#define  DMAALTSET_A                                            0x40010030
#define  DMAALTSET            (*(volatile unsigned long      *) 0x40010030)
#define  DMAALTCLR_A                                            0x40010034
#define  DMAALTCLR            (*(volatile unsigned long      *) 0x40010034)
#define  DMAPRISET_A                                            0x40010038
#define  DMAPRISET            (*(volatile unsigned long      *) 0x40010038)
#define  DMAPRICLR_A                                            0x4001003C
#define  DMAPRICLR            (*(volatile unsigned long      *) 0x4001003C)
#define  DMAERRCHNLCLR_A                                        0x40010048
#define  DMAERRCHNLCLR        (*(volatile unsigned long      *) 0x40010048)
#define  DMAERRCLR_A                                            0x4001004C
#define  DMAERRCLR            (*(volatile unsigned long      *) 0x4001004C)
#define  DMAINVALIDDESCCLR_A                                    0x40010050
#define  DMAINVALIDDESCCLR    (*(volatile unsigned long      *) 0x40010050)
#define  DMABSSET_A                                             0x40010800
#define  DMABSSET             (*(volatile unsigned long      *) 0x40010800)
#define  DMABSCLR_A                                             0x40010804
#define  DMABSCLR             (*(volatile unsigned long      *) 0x40010804)
#define  DMASRCADSSET_A                                         0x40010810
#define  DMASRCADSSET         (*(volatile unsigned long      *) 0x40010810)
#define  DMASRCADCLR_A                                          0x40010814
#define  DMASRCADCLR          (*(volatile unsigned long      *) 0x40010814)
#define  DMADSTADSET_A                                          0x40010818
#define  DMADSTADSET          (*(volatile unsigned long      *) 0x40010818)
#define  DMADSTADCLR_A                                          0x4001081C
#define  DMADSTADCLR          (*(volatile unsigned long      *) 0x4001081C)
#define  DMAREVID_A                                             0x40010FE0
#define  DMAREVID             (*(volatile unsigned long      *) 0x40010FE0)

// Base address for module: gpio
#define  gpio_BASE_ADDR  0x40020000

// Register addresses:
#define  GP0CON_A                                     0x40020000
#define  GP0CON     (*(volatile unsigned long      *) 0x40020000)
#define  GP0OEN_A                                     0x40020004
#define  GP0OEN     (*(volatile unsigned short int *) 0x40020004)
#define  GP0PE_A                                      0x40020008
#define  GP0PE      (*(volatile unsigned short int *) 0x40020008)
#define  GP0IEN_A                                     0x4002000C
#define  GP0IEN     (*(volatile unsigned short int *) 0x4002000C)
#define  GP0IN_A                                      0x40020010
#define  GP0IN      (*(volatile unsigned short int *) 0x40020010)
#define  GP0OUT_A                                     0x40020014
#define  GP0OUT     (*(volatile unsigned short int *) 0x40020014)
#define  GP0SET_A                                     0x40020018
#define  GP0SET     (*(volatile unsigned short int *) 0x40020018)
#define  GP0CLR_A                                     0x4002001C
#define  GP0CLR     (*(volatile unsigned short int *) 0x4002001C)
#define  GP0TGL_A                                     0x40020020
#define  GP0TGL     (*(volatile unsigned short int *) 0x40020020)
#define  GP0POL_A                                     0x40020024
#define  GP0POL     (*(volatile unsigned short int *) 0x40020024)
#define  GP0IENA_A                                    0x40020028
#define  GP0IENA    (*(volatile unsigned short int *) 0x40020028)
#define  GP0IENB_A                                    0x4002002C
#define  GP0IENB    (*(volatile unsigned short int *) 0x4002002C)
#define  GP0INT_A                                     0x40020030
#define  GP0INT     (*(volatile unsigned short int *) 0x40020030)
#define  GP0DS_A                                      0x40020034
#define  GP0DS      (*(volatile unsigned short int *) 0x40020034)
#define  GP1CON_A                                     0x40020040
#define  GP1CON     (*(volatile unsigned long      *) 0x40020040)
#define  GP1OEN_A                                     0x40020044
#define  GP1OEN     (*(volatile unsigned short int *) 0x40020044)
#define  GP1PE_A                                      0x40020048
#define  GP1PE      (*(volatile unsigned short int *) 0x40020048)
#define  GP1IEN_A                                     0x4002004C
#define  GP1IEN     (*(volatile unsigned short int *) 0x4002004C)
#define  GP1IN_A                                      0x40020050
#define  GP1IN      (*(volatile unsigned short int *) 0x40020050)
#define  GP1OUT_A                                     0x40020054
#define  GP1OUT     (*(volatile unsigned short int *) 0x40020054)
#define  GP1SET_A                                     0x40020058
#define  GP1SET     (*(volatile unsigned short int *) 0x40020058)
#define  GP1CLR_A                                     0x4002005C
#define  GP1CLR     (*(volatile unsigned short int *) 0x4002005C)
#define  GP1TGL_A                                     0x40020060
#define  GP1TGL     (*(volatile unsigned short int *) 0x40020060)
#define  GP1POL_A                                     0x40020064
#define  GP1POL     (*(volatile unsigned short int *) 0x40020064)
#define  GP1IENA_A                                    0x40020068
#define  GP1IENA    (*(volatile unsigned short int *) 0x40020068)
#define  GP1IENB_A                                    0x4002006C
#define  GP1IENB    (*(volatile unsigned short int *) 0x4002006C)
#define  GP1INT_A                                     0x40020070
#define  GP1INT     (*(volatile unsigned short int *) 0x40020070)
#define  GP1DS_A                                      0x40020074
#define  GP1DS      (*(volatile unsigned short int *) 0x40020074)
#define  GP2CON_A                                     0x40020080
#define  GP2CON     (*(volatile unsigned long      *) 0x40020080)
#define  GP2OEN_A                                     0x40020084
#define  GP2OEN     (*(volatile unsigned short int *) 0x40020084)
#define  GP2PE_A                                      0x40020088
#define  GP2PE      (*(volatile unsigned short int *) 0x40020088)
#define  GP2IEN_A                                     0x4002008C
#define  GP2IEN     (*(volatile unsigned short int *) 0x4002008C)
#define  GP2IN_A                                      0x40020090
#define  GP2IN      (*(volatile unsigned short int *) 0x40020090)
#define  GP2OUT_A                                     0x40020094
#define  GP2OUT     (*(volatile unsigned short int *) 0x40020094)
#define  GP2SET_A                                     0x40020098
#define  GP2SET     (*(volatile unsigned short int *) 0x40020098)
#define  GP2CLR_A                                     0x4002009C
#define  GP2CLR     (*(volatile unsigned short int *) 0x4002009C)
#define  GP2TGL_A                                     0x400200A0
#define  GP2TGL     (*(volatile unsigned short int *) 0x400200A0)
#define  GP2POL_A                                     0x400200A4
#define  GP2POL     (*(volatile unsigned short int *) 0x400200A4)
#define  GP2IENA_A                                    0x400200A8
#define  GP2IENA    (*(volatile unsigned short int *) 0x400200A8)
#define  GP2IENB_A                                    0x400200AC
#define  GP2IENB    (*(volatile unsigned short int *) 0x400200AC)
#define  GP2INT_A                                     0x400200B0
#define  GP2INT     (*(volatile unsigned short int *) 0x400200B0)
#define  GP2DS_A                                      0x400200B4
#define  GP2DS      (*(volatile unsigned short int *) 0x400200B4)

// Base address for module: i2cf
#define  i2cf_BASE_ADDR  0x40003000

// Register addresses:
#define  I2CFMCON_A                                       0x40003000
#define  I2CFMCON       (*(volatile unsigned short int *) 0x40003000)
#define  I2CFMSTA_A                                       0x40003004
#define  I2CFMSTA       (*(volatile unsigned short int *) 0x40003004)
#define  I2CFMRX_A                                        0x40003008
#define  I2CFMRX        (*(volatile unsigned short int *) 0x40003008)
#define  I2CFMTX_A                                        0x4000300C
#define  I2CFMTX        (*(volatile unsigned short int *) 0x4000300C)
#define  I2CFMRXCNT_A                                     0x40003010
#define  I2CFMRXCNT     (*(volatile unsigned short int *) 0x40003010)
#define  I2CFMCRXCNT_A                                    0x40003014
#define  I2CFMCRXCNT    (*(volatile unsigned short int *) 0x40003014)
#define  I2CFADR1_A                                       0x40003018
#define  I2CFADR1       (*(volatile unsigned short int *) 0x40003018)
#define  I2CFADR2_A                                       0x4000301C
#define  I2CFADR2       (*(volatile unsigned short int *) 0x4000301C)
#define  I2CFBYT_A                                        0x40003020
#define  I2CFBYT        (*(volatile unsigned short int *) 0x40003020)
#define  I2CFDIV_A                                        0x40003024
#define  I2CFDIV        (*(volatile unsigned short int *) 0x40003024)
#define  I2CFSCON_A                                       0x40003028
#define  I2CFSCON       (*(volatile unsigned short int *) 0x40003028)
#define  I2CFSSTA_A                                       0x4000302C
#define  I2CFSSTA       (*(volatile unsigned short int *) 0x4000302C)
#define  I2CFSRX_A                                        0x40003030
#define  I2CFSRX        (*(volatile unsigned short int *) 0x40003030)
#define  I2CFSTX_A                                        0x40003034
#define  I2CFSTX        (*(volatile unsigned short int *) 0x40003034)
#define  I2CFALT_A                                        0x40003038
#define  I2CFALT        (*(volatile unsigned short int *) 0x40003038)
#define  I2CFID0_A                                        0x4000303C
#define  I2CFID0        (*(volatile unsigned short int *) 0x4000303C)
#define  I2CFID1_A                                        0x40003040
#define  I2CFID1        (*(volatile unsigned short int *) 0x40003040)
#define  I2CFID2_A                                        0x40003044
#define  I2CFID2        (*(volatile unsigned short int *) 0x40003044)
#define  I2CFID3_A                                        0x40003048
#define  I2CFID3        (*(volatile unsigned short int *) 0x40003048)
#define  I2CFSTA_A                                        0x4000304C
#define  I2CFSTA        (*(volatile unsigned short int *) 0x4000304C)
#define  I2CFSHCON_A                                      0x40003050
#define  I2CFSHCON      (*(volatile unsigned short int *) 0x40003050)
#define  I2CFTCTL_A                                       0x40003054
#define  I2CFTCTL       (*(volatile unsigned short int *) 0x40003054)
#define  I2CFASSCL_A                                      0x40003058
#define  I2CFASSCL      (*(volatile unsigned short int *) 0x40003058)

// Base address for module: rtc0
#define  rtc0_BASE_ADDR  0x40001000

// Register addresses:
#define  RTC0CR0_A                                      0x40001000
#define  RTC0CR0      (*(volatile unsigned long      *) 0x40001000)
#define  RTC0SR0_A                                      0x40001004
#define  RTC0SR0      (*(volatile unsigned long      *) 0x40001004)
#define  RTC0SR1_A                                      0x40001008
#define  RTC0SR1      (*(volatile unsigned long      *) 0x40001008)
#define  RTC0CNT0_A                                     0x4000100C
#define  RTC0CNT0     (*(volatile unsigned long      *) 0x4000100C)
#define  RTC0CNT1_A                                     0x40001010
#define  RTC0CNT1     (*(volatile unsigned short int *) 0x40001010)
#define  RTC0ALM0_A                                     0x40001014
#define  RTC0ALM0     (*(volatile unsigned long      *) 0x40001014)
#define  RTC0ALM1_A                                     0x40001018
#define  RTC0ALM1     (*(volatile unsigned short int *) 0x40001018)
#define  RTC0TRM_A                                      0x4000101C
#define  RTC0TRM      (*(volatile unsigned short int *) 0x4000101C)
#define  RTC0GWY_A                                      0x40001020
#define  RTC0GWY      (*(volatile unsigned short int *) 0x40001020)
#define  RTC0DBG_A                                      0x40001024
#define  RTC0DBG      (*(volatile unsigned short int *) 0x40001024)
#define  RTC0CR1_A                                      0x40001028
#define  RTC0CR1      (*(volatile unsigned short int *) 0x40001028)
#define  RTC0SR2_A                                      0x4000102C
#define  RTC0SR2      (*(volatile unsigned short int *) 0x4000102C)
#define  RTC0SNAP0_A                                    0x40001030
#define  RTC0SNAP0    (*(volatile unsigned long      *) 0x40001030)
#define  RTC0SNAP1_A                                    0x40001034
#define  RTC0SNAP1    (*(volatile unsigned short int *) 0x40001034)
#define  RTC0SNAP2_A                                    0x40001038
#define  RTC0SNAP2    (*(volatile unsigned long      *) 0x40001038)
#define  RTC0MOD_A                                      0x4000103C
#define  RTC0MOD      (*(volatile unsigned long      *) 0x4000103C)
#define  RTC0CNT2_A                                     0x40001040
#define  RTC0CNT2     (*(volatile unsigned long      *) 0x40001040)
#define  RTC0ALM2_A                                     0x40001044
#define  RTC0ALM2     (*(volatile unsigned long      *) 0x40001044)

// Base address for module: rtc1
#define  rtc1_BASE_ADDR  0x40001400

// Register addresses:
#define  RTC1CR0_A                                      0x40001400
#define  RTC1CR0      (*(volatile unsigned long      *) 0x40001400)
#define  RTC1SR0_A                                      0x40001404
#define  RTC1SR0      (*(volatile unsigned long      *) 0x40001404)
#define  RTC1SR1_A                                      0x40001408
#define  RTC1SR1      (*(volatile unsigned long      *) 0x40001408)
#define  RTC1CNT0_A                                     0x4000140C
#define  RTC1CNT0     (*(volatile unsigned long      *) 0x4000140C)
#define  RTC1CNT1_A                                     0x40001410
#define  RTC1CNT1     (*(volatile unsigned short int *) 0x40001410)
#define  RTC1ALM0_A                                     0x40001414
#define  RTC1ALM0     (*(volatile unsigned long      *) 0x40001414)
#define  RTC1ALM1_A                                     0x40001418
#define  RTC1ALM1     (*(volatile unsigned short int *) 0x40001418)
#define  RTC1TRM_A                                      0x4000141C
#define  RTC1TRM      (*(volatile unsigned short int *) 0x4000141C)
#define  RTC1GWY_A                                      0x40001420
#define  RTC1GWY      (*(volatile unsigned short int *) 0x40001420)
#define  RTC1DBG_A                                      0x40001424
#define  RTC1DBG      (*(volatile unsigned short int *) 0x40001424)
#define  RTC1CR1_A                                      0x40001428
#define  RTC1CR1      (*(volatile unsigned short int *) 0x40001428)
#define  RTC1SR2_A                                      0x4000142C
#define  RTC1SR2      (*(volatile unsigned short int *) 0x4000142C)
#define  RTC1SNAP0_A                                    0x40001430
#define  RTC1SNAP0    (*(volatile unsigned long      *) 0x40001430)
#define  RTC1SNAP1_A                                    0x40001434
#define  RTC1SNAP1    (*(volatile unsigned short int *) 0x40001434)
#define  RTC1SNAP2_A                                    0x40001438
#define  RTC1SNAP2    (*(volatile unsigned long      *) 0x40001438)
#define  RTC1MOD_A                                      0x4000143C
#define  RTC1MOD      (*(volatile unsigned long      *) 0x4000143C)
#define  RTC1CNT2_A                                     0x40001440
#define  RTC1CNT2     (*(volatile unsigned long      *) 0x40001440)
#define  RTC1ALM2_A                                     0x40001444
#define  RTC1ALM2     (*(volatile unsigned long      *) 0x40001444)

// Base address for module: sport
#define  sport_BASE_ADDR  0x40038000

// Register addresses:
#define  SPORTCTL_A_A                                            0x40038000
#define  SPORTCTL_A            (*(volatile unsigned long      *) 0x40038000)
#define  SPORTDIV_A_A                                            0x40038004
#define  SPORTDIV_A            (*(volatile unsigned long      *) 0x40038004)
#define  SPORTINT_EN_A_A                                         0x40038008
#define  SPORTINT_EN_A         (*(volatile unsigned long      *) 0x40038008)
#define  SPORTSTAT_A_A                                           0x4003800C
#define  SPORTSTAT_A           (*(volatile unsigned long      *) 0x4003800C)
#define  SPORTNUM_TRAN_A_A                                       0x40038010
#define  SPORTNUM_TRAN_A       (*(volatile unsigned long      *) 0x40038010)
#define  SPORTTIM_CONVT_A_A                                      0x40038014
#define  SPORTTIM_CONVT_A      (*(volatile unsigned long      *) 0x40038014)
#define  SPORTTX_A_A                                             0x40038020
#define  SPORTTX_A             (*(volatile unsigned long      *) 0x40038020)
#define  SPORTRX_A_A                                             0x40038028
#define  SPORTRX_A             (*(volatile unsigned long      *) 0x40038028)
#define  SPORTNUMTRAN_CNT_A_A                                    0x40038038
#define  SPORTNUMTRAN_CNT_A    (*(volatile unsigned long      *) 0x40038038)
#define  SPORTCTL_B_A                                            0x40038040
#define  SPORTCTL_B            (*(volatile unsigned long      *) 0x40038040)
#define  SPORTDIV_B_A                                            0x40038044
#define  SPORTDIV_B            (*(volatile unsigned long      *) 0x40038044)
#define  SPORTINT_EN_B_A                                         0x40038048
#define  SPORTINT_EN_B         (*(volatile unsigned long      *) 0x40038048)
#define  SPORTSTAT_B_A                                           0x4003804C
#define  SPORTSTAT_B           (*(volatile unsigned long      *) 0x4003804C)
#define  SPORTNUM_TRAN_B_A                                       0x40038050
#define  SPORTNUM_TRAN_B       (*(volatile unsigned long      *) 0x40038050)
#define  SPORTTIM_CONVT_B_A                                      0x40038054
#define  SPORTTIM_CONVT_B      (*(volatile unsigned long      *) 0x40038054)
#define  SPORTTX_B_A                                             0x40038060
#define  SPORTTX_B             (*(volatile unsigned long      *) 0x40038060)
#define  SPORTRX_B_A                                             0x40038068
#define  SPORTRX_B             (*(volatile unsigned long      *) 0x40038068)
#define  SPORTNUMTRAN_CNT_B_A                                    0x40038078
#define  SPORTNUMTRAN_CNT_B    (*(volatile unsigned long      *) 0x40038078)

// Base address for module: sys
#define  sys_BASE_ADDR  0x40002000

// Register addresses:
#define  SYSADIID_A                                     0x40002020
#define  SYSADIID     (*(volatile unsigned short int *) 0x40002020)
#define  SYSCHIPID_A                                    0x40002024
#define  SYSCHIPID    (*(volatile unsigned short int *) 0x40002024)
#define  SYSSWDEN_A                                     0x40002040
#define  SYSSWDEN     (*(volatile unsigned short int *) 0x40002040)

// Base address for module: uart
#define  uart_BASE_ADDR  0x40005000

// Register addresses:
#define  COMRX_A                                      0x40005000
#define  COMRX      (*(volatile unsigned short int *) 0x40005000)
#define  COMTX_A                                      0x40005000
#define  COMTX      (*(volatile unsigned short int *) 0x40005000)
#define  COMIEN_A                                     0x40005004
#define  COMIEN     (*(volatile unsigned short int *) 0x40005004)
#define  COMIIR_A                                     0x40005008
#define  COMIIR     (*(volatile unsigned short int *) 0x40005008)
#define  COMLCR_A                                     0x4000500C
#define  COMLCR     (*(volatile unsigned short int *) 0x4000500C)
#define  COMMCR_A                                     0x40005010
#define  COMMCR     (*(volatile unsigned short int *) 0x40005010)
#define  COMLSR_A                                     0x40005014
#define  COMLSR     (*(volatile unsigned short int *) 0x40005014)
#define  COMMSR_A                                     0x40005018
#define  COMMSR     (*(volatile unsigned short int *) 0x40005018)
#define  COMSCR_A                                     0x4000501C
#define  COMSCR     (*(volatile unsigned short int *) 0x4000501C)
#define  COMMCFG_A                                    0x40005020
#define  COMMCFG    (*(volatile unsigned short int *) 0x40005020)
#define  COMFBR_A                                     0x40005024
#define  COMFBR     (*(volatile unsigned short int *) 0x40005024)
#define  COMDIV_A                                     0x40005028
#define  COMDIV     (*(volatile unsigned short int *) 0x40005028)
#define  COMCTL_A                                     0x40005030
#define  COMCTL     (*(volatile unsigned short int *) 0x40005030)

// Base address for module: wdt
#define  wdt_BASE_ADDR  0x40002C00

// Register addresses:
#define  WDTLOAD_A                                         0x40002C00
#define  WDTLOAD         (*(volatile unsigned short int *) 0x40002C00)
#define  WDTCCOUNT_A                                       0x40002C04
#define  WDTCCOUNT       (*(volatile unsigned short int *) 0x40002C04)
#define  WDTCTRL_A                                         0x40002C08
#define  WDTCTRL         (*(volatile unsigned short int *) 0x40002C08)
#define  WDTRESTART_A                                      0x40002C0C
#define  WDTRESTART      (*(volatile unsigned short int *) 0x40002C0C)
#define  WDTRESETCTRL_A                                    0x40002C10
#define  WDTRESETCTRL    (*(volatile unsigned short int *) 0x40002C10)
#define  WDTACOUNT_A                                       0x40002C14
#define  WDTACOUNT       (*(volatile unsigned short int *) 0x40002C14)
#define  WDTSTATUS_A                                       0x40002C18
#define  WDTSTATUS       (*(volatile unsigned short int *) 0x40002C18)

#endif // __MMR_XML_H__
