`ifndef __MMR_PKG_SV__
`define __MMR_PKG_SV__

// This file was auto-generated using the mmr-defs script.

package mmr_pkg;

// Register addresses for module: CacheFlash
localparam  FEESTAT             = 32'h4001_8000;
localparam  FEEIEN              = 32'h4001_8004;
localparam  FEECMD              = 32'h4001_8008;
localparam  FEEKH_ADDR          = 32'h4001_800c;
localparam  FEEKH_DATA0         = 32'h4001_8010;
localparam  FEEKH_DATA1         = 32'h4001_8014;
localparam  FEEPAGE_ADDR0       = 32'h4001_8018;
localparam  FEEPAGE_ADDR1       = 32'h4001_801c;
localparam  FEEKEY              = 32'h4001_8020;
localparam  FEEWR_ABORT_ADDR    = 32'h4001_8024;
localparam  FEEWRPROT           = 32'h4001_8028;
localparam  FEESIGNATURE        = 32'h4001_802c;
localparam  FEEUCFG             = 32'h4001_8030;
localparam  FEETIME_PARAM0      = 32'h4001_8034;
localparam  FEETIME_PARAM1      = 32'h4001_8038;
localparam  FEEABORT_EN_LO      = 32'h4001_803c;
localparam  FEEABORT_EN_HI      = 32'h4001_8040;
localparam  FEEECC_CFG          = 32'h4001_8044;
localparam  FEEECC_ADDR         = 32'h4001_8048;
localparam  FEEADI_POR_CFG      = 32'h4001_804c;
localparam  FEEADI_POR_SEC      = 32'h4001_8050;
localparam  FEEADI_VOL_CFG      = 32'h4001_8054;
localparam  FEECACHESTAT        = 32'h4001_8058;
localparam  FEECACHESETUP       = 32'h4001_805c;
localparam  FEECACHEKEY         = 32'h4001_8060;
localparam  FEECACHETMSETUP     = 32'h4001_8064;
localparam  FEECACHETMSETADDR   = 32'h4001_8068;
localparam  FEECACHETMTAG       = 32'h4001_806c;
localparam  FEECACHETMD0LOW     = 32'h4001_8070;
localparam  FEECACHETMD0HIGH    = 32'h4001_8074;
localparam  FEECACHETMD1LOW     = 32'h4001_8078;
localparam  FEECACHETMD1HIGH    = 32'h4001_807c;
localparam  FEECACHEMISSCNTR    = 32'h4001_8080;
localparam  FEEICACHELASTADDR   = 32'h4001_8084;
localparam  FEEDCACHELASTADDR   = 32'h4001_8088;
localparam  FEEDFT_STAT         = 32'h4001_808c;
localparam  FEEDFT_CTRL         = 32'h4001_8090;
localparam  FEEDFT_CMD          = 32'h4001_8094;
localparam  FEEDFT_PIN_REG      = 32'h4001_8098;
localparam  FEEDFT_XADR_REG     = 32'h4001_809c;
localparam  FEEDFT_YADR_REG     = 32'h4001_80a0;
localparam  FEEDFT_DATA_L_REG   = 32'h4001_80a4;
localparam  FEEDFT_DATA_H_REG   = 32'h4001_80a8;
localparam  FEEDFT_CTRL_REG     = 32'h4001_80ac;
localparam  FEEDFT_GRP_REG      = 32'h4001_80b0;
localparam  FEEDFT_IP_REG       = 32'h4001_80b4;
localparam  FEEDFT_BIT_REG      = 32'h4001_80b8;
localparam  FEEDFT_PEND         = 32'h4001_80bc;
localparam  FEEDFT_PROBE        = 32'h4001_80c0;
localparam  FEETST_CFG          = 32'h4001_80c4;
localparam  FEETST_CMD_KEY      = 32'h4001_80c8;
localparam  FEETM_DATA0         = 32'h4001_80cc;
localparam  FEETM_DATA1         = 32'h4001_80d0;
localparam  FEETM_DATA2         = 32'h4001_80d4;
localparam  FEEKH_DATA2         = 32'h4001_80d8;
localparam  FEEFLSH_TC          = 32'h4001_80dc;

// Register addresses for module: EXTINT
localparam  EXTINTEI0CFG   = 32'h4004_c080;
localparam  EXTINTNMICFG   = 32'h4004_c08c;
localparam  EXTINTEICLR    = 32'h4004_c090;
localparam  EXTINTNMICLR   = 32'h4004_c094;

// Register addresses for module: PMG
localparam  INTR_CNTRL0          = 32'h4004_c000;
localparam  PSM_STATUS           = 32'h4004_c004;
localparam  PWRMOD               = 32'h4004_c008;
localparam  PWRKEY               = 32'h4004_c00c;
localparam  SHUTDOWN_STATUS      = 32'h4004_c010;
localparam  SRAMRET              = 32'h4004_c014;
localparam  SW_TST_LV0           = 32'h4004_c024;
localparam  SW_TST_LV1           = 32'h4004_c028;
localparam  SW_TST_HV            = 32'h4004_c02c;
localparam  TESTPROT             = 32'h4004_c030;
localparam  LP_TST_REF0          = 32'h4004_c034;
localparam  PMG_TRIM             = 32'h4004_c038;
localparam  RSTSTA               = 32'h4004_c040;
localparam  CNTRL1               = 32'h4004_c044;
localparam  WK_TST               = 32'h4004_c048;
localparam  ANA_TST1             = 32'h4004_c04c;
localparam  ANA_TST2             = 32'h4004_c050;
localparam  DIG_TST1             = 32'h4004_c054;
localparam  HP_LDO_TST           = 32'h4004_c058;
localparam  VREG_TST             = 32'h4004_c230;
localparam  LP_TST_REF1          = 32'h4004_c238;
localparam  LP_TST_BLOCK0        = 32'h4004_c23c;
localparam  LP_TST_BLOCK1        = 32'h4004_c240;
localparam  SRAMCNTRL            = 32'h4004_c260;
localparam  SRAM_INIT_STATUS     = 32'h4004_c264;
localparam  CLEAR_LATCH_GPIOS    = 32'h4004_c268;
localparam  SCRATCHPAD_IMAGE     = 32'h4004_c26c;
localparam  SCRATCHPAD_3V_READ   = 32'h4004_c270;

// Register addresses for module: PTI
localparam  PTIRST_ISR_STARTADDR   = 32'h4004_cd00;
localparam  PTIRST_STACK_POINTER   = 32'h4004_cd04;
localparam  PTIPTI_CONTROL         = 32'h4004_cd08;

// Register addresses for module: RNG
localparam  RNGCTL        = 32'h4004_0400;
localparam  RNGLEN        = 32'h4004_0404;
localparam  RNGSTAT       = 32'h4004_0408;
localparam  RNGDATA       = 32'h4004_040c;
localparam  RNGOSCCNT     = 32'h4004_0410;
localparam  RNGOSCDIFF0   = 32'h4004_0414;
localparam  RNGOSCDIFF1   = 32'h4004_0415;
localparam  RNGOSCDIFF2   = 32'h4004_0416;
localparam  RNGOSCDIFF3   = 32'h4004_0417;

// Register addresses for module: SPI0
localparam  SPI0STAT          = 32'h4000_4000;
localparam  SPI0RX            = 32'h4000_4004;
localparam  SPI0TX            = 32'h4000_4008;
localparam  SPI0DIV           = 32'h4000_400c;
localparam  SPI0CTL           = 32'h4000_4010;
localparam  SPI0IEN           = 32'h4000_4014;
localparam  SPI0CNT           = 32'h4000_4018;
localparam  SPI0DMA           = 32'h4000_401c;
localparam  SPI0FIFO_STAT     = 32'h4000_4020;
localparam  SPI0RD_CTL        = 32'h4000_4024;
localparam  SPI0FLOW_CTL      = 32'h4000_4028;
localparam  SPI0WAIT_TMR      = 32'h4000_402c;
localparam  SPI0CS_CTL        = 32'h4000_4030;
localparam  SPI0CS_OVERRIDE   = 32'h4000_4034;
localparam  SPI0XFR_CNT       = 32'h4000_4038;

// Register addresses for module: SPI1
localparam  SPI1STAT          = 32'h4000_4400;
localparam  SPI1RX            = 32'h4000_4404;
localparam  SPI1TX            = 32'h4000_4408;
localparam  SPI1DIV           = 32'h4000_440c;
localparam  SPI1CTL           = 32'h4000_4410;
localparam  SPI1IEN           = 32'h4000_4414;
localparam  SPI1CNT           = 32'h4000_4418;
localparam  SPI1DMA           = 32'h4000_441c;
localparam  SPI1FIFO_STAT     = 32'h4000_4420;
localparam  SPI1RD_CTL        = 32'h4000_4424;
localparam  SPI1FLOW_CTL      = 32'h4000_4428;
localparam  SPI1WAIT_TMR      = 32'h4000_442c;
localparam  SPI1CS_CTL        = 32'h4000_4430;
localparam  SPI1CS_OVERRIDE   = 32'h4000_4434;
localparam  SPI1XFR_CNT       = 32'h4000_4438;

// Register addresses for module: SPIH
localparam  SPIHSTAT          = 32'h4002_4000;
localparam  SPIHRX            = 32'h4002_4004;
localparam  SPIHTX            = 32'h4002_4008;
localparam  SPIHDIV           = 32'h4002_400c;
localparam  SPIHCTL           = 32'h4002_4010;
localparam  SPIHIEN           = 32'h4002_4014;
localparam  SPIHCNT           = 32'h4002_4018;
localparam  SPIHDMA           = 32'h4002_401c;
localparam  SPIHFIFO_STAT     = 32'h4002_4020;
localparam  SPIHRD_CTL        = 32'h4002_4024;
localparam  SPIHFLOW_CTL      = 32'h4002_4028;
localparam  SPIHWAIT_TMR      = 32'h4002_402c;
localparam  SPIHCS_CTL        = 32'h4002_4030;
localparam  SPIHCS_OVERRIDE   = 32'h4002_4034;
localparam  SPIHXFR_CNT       = 32'h4002_4038;

// Register addresses for module: TMR0
localparam  TMR0LD     = 32'h4000_0000;
localparam  TMR0VAL    = 32'h4000_0004;
localparam  TMR0CON    = 32'h4000_0008;
localparam  TMR0CLRI   = 32'h4000_000c;
localparam  TMR0CAP    = 32'h4000_0010;
localparam  TMR0ALD    = 32'h4000_0014;
localparam  TMR0AVAL   = 32'h4000_0018;
localparam  TMR0STA    = 32'h4000_001c;
localparam  TMR0PCON   = 32'h4000_0020;
localparam  TMR0PMAT   = 32'h4000_0024;

// Register addresses for module: TMR1
localparam  TMR1LD     = 32'h4000_0400;
localparam  TMR1VAL    = 32'h4000_0404;
localparam  TMR1CON    = 32'h4000_0408;
localparam  TMR1CLRI   = 32'h4000_040c;
localparam  TMR1CAP    = 32'h4000_0410;
localparam  TMR1ALD    = 32'h4000_0414;
localparam  TMR1AVAL   = 32'h4000_0418;
localparam  TMR1STA    = 32'h4000_041c;
localparam  TMR1PCON   = 32'h4000_0420;
localparam  TMR1PMAT   = 32'h4000_0424;

// Register addresses for module: TMR2
localparam  TMR2LD     = 32'h4000_0800;
localparam  TMR2VAL    = 32'h4000_0804;
localparam  TMR2CON    = 32'h4000_0808;
localparam  TMR2CLRI   = 32'h4000_080c;
localparam  TMR2CAP    = 32'h4000_0810;
localparam  TMR2ALD    = 32'h4000_0814;
localparam  TMR2AVAL   = 32'h4000_0818;
localparam  TMR2STA    = 32'h4000_081c;
localparam  TMR2PCON   = 32'h4000_0820;
localparam  TMR2PMAT   = 32'h4000_0824;

// Register addresses for module: beeper
localparam  BEEP_CFG      = 32'h4000_5c00;
localparam  BEEP_STAT     = 32'h4000_5c04;
localparam  BEEP_TONE_A   = 32'h4000_5c08;
localparam  BEEP_TONE_B   = 32'h4000_5c0c;

// Register addresses for module: bus_matrix
localparam  BMARBIT0   = 32'h4004_c800;
localparam  BMARBIT1   = 32'h4004_c804;
localparam  BMARBIT2   = 32'h4004_c808;
localparam  BMARBIT3   = 32'h4004_c80c;

// Register addresses for module: clocking
localparam  OSCKEY      = 32'h4004_c10c;
localparam  OSCCTRL     = 32'h4004_c110;
localparam  TOSCCTRL0   = 32'h4004_c114;
localparam  CLKCON0     = 32'h4004_c300;
localparam  CLKCON1     = 32'h4004_c304;
localparam  CLKCON3     = 32'h4004_c30c;
localparam  CLKCON5     = 32'h4004_c314;
localparam  CLKSTAT0    = 32'h4004_c318;
localparam  TCLKTEST    = 32'h4004_c31c;
localparam  TOSCCTRL1   = 32'h4004_c320;
localparam  TOSCCNFG0   = 32'h4004_c324;
localparam  TPLLCNFG0   = 32'h4004_c32c;
localparam  THFRING     = 32'h4004_c330;

// Register addresses for module: cortex
localparam  INTNUM       = 32'he000_e004;
localparam  STKSTA       = 32'he000_e010;
localparam  STKLD        = 32'he000_e014;
localparam  STKVAL       = 32'he000_e018;
localparam  STKCAL       = 32'he000_e01c;
localparam  INTSETE0     = 32'he000_e100;
localparam  INTSETE1     = 32'he000_e104;
localparam  INTCLRE0     = 32'he000_e180;
localparam  INTCLRE1     = 32'he000_e184;
localparam  INTSETP0     = 32'he000_e200;
localparam  INTSETP1     = 32'he000_e204;
localparam  INTCLRP0     = 32'he000_e280;
localparam  INTCLRP1     = 32'he000_e284;
localparam  INTACT0      = 32'he000_e300;
localparam  INTACT1      = 32'he000_e304;
localparam  INTPRI0      = 32'he000_e400;
localparam  INTPRI1      = 32'he000_e404;
localparam  INTPRI2      = 32'he000_e408;
localparam  INTPRI3      = 32'he000_e40c;
localparam  INTPRI4      = 32'he000_e410;
localparam  INTPRI5      = 32'he000_e414;
localparam  INTPRI6      = 32'he000_e418;
localparam  INTPRI7      = 32'he000_e41c;
localparam  INTPRI8      = 32'he000_e420;
localparam  INTPRI9      = 32'he000_e424;
localparam  INTPRI10     = 32'he000_e428;
localparam  INTCPID      = 32'he000_ed00;
localparam  INTSTA       = 32'he000_ed04;
localparam  INTVEC       = 32'he000_ed08;
localparam  INTAIRC      = 32'he000_ed0c;
localparam  INTCON0      = 32'he000_ed10;
localparam  INTCON1      = 32'he000_ed14;
localparam  INTSHPRIO0   = 32'he000_ed18;
localparam  INTSHPRIO1   = 32'he000_ed1c;
localparam  INTSHPRIO3   = 32'he000_ed20;
localparam  INTSHCSR     = 32'he000_ed24;
localparam  INTCFSR      = 32'he000_ed28;
localparam  INTHFSR      = 32'he000_ed2c;
localparam  INTDFSR      = 32'he000_ed30;
localparam  INTMMAR      = 32'he000_ed34;
localparam  INTBFAR      = 32'he000_ed38;
localparam  INTAFSR      = 32'he000_ed3c;
localparam  INTPFR0      = 32'he000_ed40;
localparam  INTPFR1      = 32'he000_ed44;
localparam  INTDFR0      = 32'he000_ed48;
localparam  INTAFR0      = 32'he000_ed4c;
localparam  INTMMFR0     = 32'he000_ed50;
localparam  INTMMFR1     = 32'he000_ed54;
localparam  INTMMFR2     = 32'he000_ed58;
localparam  INTMMFR3     = 32'he000_ed5c;
localparam  INTISAR0     = 32'he000_ed60;
localparam  INTISAR1     = 32'he000_ed64;
localparam  INTISAR2     = 32'he000_ed68;
localparam  INTISAR3     = 32'he000_ed6c;
localparam  INTISAR4     = 32'he000_ed70;
localparam  INTTRGI      = 32'he000_ef00;
localparam  INTPID4      = 32'he000_efd0;
localparam  INTPID5      = 32'he000_efd4;
localparam  INTPID6      = 32'he000_efd8;
localparam  INTPID7      = 32'he000_efdc;
localparam  INTPID0      = 32'he000_efe0;
localparam  INTPID1      = 32'he000_efe4;
localparam  INTPID2      = 32'he000_efe8;
localparam  INTPID3      = 32'he000_efec;
localparam  INTCID0      = 32'he000_eff0;
localparam  INTCID1      = 32'he000_eff4;
localparam  INTCID2      = 32'he000_eff8;
localparam  INTCID3      = 32'he000_effc;

// Register addresses for module: crc
localparam  CRC_CTL      = 32'h4004_0000;
localparam  CRC_IPDATA   = 32'h4004_0004;
localparam  CRC_RESULT   = 32'h4004_0008;
localparam  CRC_POLY     = 32'h4004_000c;

// Register addresses for module: crypto
localparam  CFG         = 32'h4004_4000;
localparam  DATALEN     = 32'h4004_4004;
localparam  PREFIXLEN   = 32'h4004_4008;
localparam  INTEN       = 32'h4004_400c;
localparam  STAT        = 32'h4004_4010;
localparam  INBUF       = 32'h4004_4014;
localparam  OUTBUF      = 32'h4004_4018;
localparam  NONCE0      = 32'h4004_401c;
localparam  NONCE1      = 32'h4004_4020;
localparam  NONCE2      = 32'h4004_4024;
localparam  NONCE3      = 32'h4004_4028;
localparam  AESKEY0     = 32'h4004_402c;
localparam  AESKEY1     = 32'h4004_4030;
localparam  AESKEY2     = 32'h4004_4034;
localparam  AESKEY3     = 32'h4004_4038;
localparam  AESKEY4     = 32'h4004_403c;
localparam  AESKEY5     = 32'h4004_4040;
localparam  AESKEY6     = 32'h4004_4044;
localparam  AESKEY7     = 32'h4004_4048;
localparam  CNTRINIT    = 32'h4004_404c;
localparam  SHAH0       = 32'h4004_4050;
localparam  SHAH1       = 32'h4004_4054;
localparam  SHAH2       = 32'h4004_4058;
localparam  SHAH3       = 32'h4004_405c;
localparam  SHAH4       = 32'h4004_4060;
localparam  SHAH5       = 32'h4004_4064;
localparam  SHAH6       = 32'h4004_4068;
localparam  SHAH7       = 32'h4004_406c;

// Register addresses for module: dma
localparam  DMASTA              = 32'h4001_0000;
localparam  DMACFG              = 32'h4001_0004;
localparam  DMAPDBPTR           = 32'h4001_0008;
localparam  DMAADBPTR           = 32'h4001_000c;
localparam  DMASWREQ            = 32'h4001_0014;
localparam  DMARMSKSET          = 32'h4001_0020;
localparam  DMARMSKCLR          = 32'h4001_0024;
localparam  DMAENSET            = 32'h4001_0028;
localparam  DMAENCLR            = 32'h4001_002c;
localparam  DMAALTSET           = 32'h4001_0030;
localparam  DMAALTCLR           = 32'h4001_0034;
localparam  DMAPRISET           = 32'h4001_0038;
localparam  DMAPRICLR           = 32'h4001_003c;
localparam  DMAERRCHNLCLR       = 32'h4001_0048;
localparam  DMAERRCLR           = 32'h4001_004c;
localparam  DMAINVALIDDESCCLR   = 32'h4001_0050;
localparam  DMABSSET            = 32'h4001_0800;
localparam  DMABSCLR            = 32'h4001_0804;
localparam  DMASRCADSSET        = 32'h4001_0810;
localparam  DMASRCADCLR         = 32'h4001_0814;
localparam  DMADSTADSET         = 32'h4001_0818;
localparam  DMADSTADCLR         = 32'h4001_081c;
localparam  DMAREVID            = 32'h4001_0fe0;

// Register addresses for module: gpio
localparam  GP0CON    = 32'h4002_0000;
localparam  GP0OEN    = 32'h4002_0004;
localparam  GP0PE     = 32'h4002_0008;
localparam  GP0IEN    = 32'h4002_000c;
localparam  GP0IN     = 32'h4002_0010;
localparam  GP0OUT    = 32'h4002_0014;
localparam  GP0SET    = 32'h4002_0018;
localparam  GP0CLR    = 32'h4002_001c;
localparam  GP0TGL    = 32'h4002_0020;
localparam  GP0POL    = 32'h4002_0024;
localparam  GP0IENA   = 32'h4002_0028;
localparam  GP0IENB   = 32'h4002_002c;
localparam  GP0INT    = 32'h4002_0030;
localparam  GP0DS     = 32'h4002_0034;
localparam  GP1CON    = 32'h4002_0040;
localparam  GP1OEN    = 32'h4002_0044;
localparam  GP1PE     = 32'h4002_0048;
localparam  GP1IEN    = 32'h4002_004c;
localparam  GP1IN     = 32'h4002_0050;
localparam  GP1OUT    = 32'h4002_0054;
localparam  GP1SET    = 32'h4002_0058;
localparam  GP1CLR    = 32'h4002_005c;
localparam  GP1TGL    = 32'h4002_0060;
localparam  GP1POL    = 32'h4002_0064;
localparam  GP1IENA   = 32'h4002_0068;
localparam  GP1IENB   = 32'h4002_006c;
localparam  GP1INT    = 32'h4002_0070;
localparam  GP1DS     = 32'h4002_0074;
localparam  GP2CON    = 32'h4002_0080;
localparam  GP2OEN    = 32'h4002_0084;
localparam  GP2PE     = 32'h4002_0088;
localparam  GP2IEN    = 32'h4002_008c;
localparam  GP2IN     = 32'h4002_0090;
localparam  GP2OUT    = 32'h4002_0094;
localparam  GP2SET    = 32'h4002_0098;
localparam  GP2CLR    = 32'h4002_009c;
localparam  GP2TGL    = 32'h4002_00a0;
localparam  GP2POL    = 32'h4002_00a4;
localparam  GP2IENA   = 32'h4002_00a8;
localparam  GP2IENB   = 32'h4002_00ac;
localparam  GP2INT    = 32'h4002_00b0;
localparam  GP2DS     = 32'h4002_00b4;

// Register addresses for module: i2cf
localparam  I2CFMCON      = 32'h4000_3000;
localparam  I2CFMSTA      = 32'h4000_3004;
localparam  I2CFMRX       = 32'h4000_3008;
localparam  I2CFMTX       = 32'h4000_300c;
localparam  I2CFMRXCNT    = 32'h4000_3010;
localparam  I2CFMCRXCNT   = 32'h4000_3014;
localparam  I2CFADR1      = 32'h4000_3018;
localparam  I2CFADR2      = 32'h4000_301c;
localparam  I2CFBYT       = 32'h4000_3020;
localparam  I2CFDIV       = 32'h4000_3024;
localparam  I2CFSCON      = 32'h4000_3028;
localparam  I2CFSSTA      = 32'h4000_302c;
localparam  I2CFSRX       = 32'h4000_3030;
localparam  I2CFSTX       = 32'h4000_3034;
localparam  I2CFALT       = 32'h4000_3038;
localparam  I2CFID0       = 32'h4000_303c;
localparam  I2CFID1       = 32'h4000_3040;
localparam  I2CFID2       = 32'h4000_3044;
localparam  I2CFID3       = 32'h4000_3048;
localparam  I2CFSTA       = 32'h4000_304c;
localparam  I2CFSHCON     = 32'h4000_3050;
localparam  I2CFTCTL      = 32'h4000_3054;
localparam  I2CFASSCL     = 32'h4000_3058;

// Register addresses for module: rtc0
localparam  RTC0CR0     = 32'h4000_1000;
localparam  RTC0SR0     = 32'h4000_1004;
localparam  RTC0SR1     = 32'h4000_1008;
localparam  RTC0CNT0    = 32'h4000_100c;
localparam  RTC0CNT1    = 32'h4000_1010;
localparam  RTC0ALM0    = 32'h4000_1014;
localparam  RTC0ALM1    = 32'h4000_1018;
localparam  RTC0TRM     = 32'h4000_101c;
localparam  RTC0GWY     = 32'h4000_1020;
localparam  RTC0DBG     = 32'h4000_1024;
localparam  RTC0CR1     = 32'h4000_1028;
localparam  RTC0SR2     = 32'h4000_102c;
localparam  RTC0SNAP0   = 32'h4000_1030;
localparam  RTC0SNAP1   = 32'h4000_1034;
localparam  RTC0SNAP2   = 32'h4000_1038;
localparam  RTC0MOD     = 32'h4000_103c;
localparam  RTC0CNT2    = 32'h4000_1040;
localparam  RTC0ALM2    = 32'h4000_1044;

// Register addresses for module: rtc1
localparam  RTC1CR0     = 32'h4000_1400;
localparam  RTC1SR0     = 32'h4000_1404;
localparam  RTC1SR1     = 32'h4000_1408;
localparam  RTC1CNT0    = 32'h4000_140c;
localparam  RTC1CNT1    = 32'h4000_1410;
localparam  RTC1ALM0    = 32'h4000_1414;
localparam  RTC1ALM1    = 32'h4000_1418;
localparam  RTC1TRM     = 32'h4000_141c;
localparam  RTC1GWY     = 32'h4000_1420;
localparam  RTC1DBG     = 32'h4000_1424;
localparam  RTC1CR1     = 32'h4000_1428;
localparam  RTC1SR2     = 32'h4000_142c;
localparam  RTC1SNAP0   = 32'h4000_1430;
localparam  RTC1SNAP1   = 32'h4000_1434;
localparam  RTC1SNAP2   = 32'h4000_1438;
localparam  RTC1MOD     = 32'h4000_143c;
localparam  RTC1CNT2    = 32'h4000_1440;
localparam  RTC1ALM2    = 32'h4000_1444;

// Register addresses for module: sport
localparam  SPORTCTL_A           = 32'h4003_8000;
localparam  SPORTDIV_A           = 32'h4003_8004;
localparam  SPORTINT_EN_A        = 32'h4003_8008;
localparam  SPORTSTAT_A          = 32'h4003_800c;
localparam  SPORTNUM_TRAN_A      = 32'h4003_8010;
localparam  SPORTTIM_CONVT_A     = 32'h4003_8014;
localparam  SPORTTX_A            = 32'h4003_8020;
localparam  SPORTRX_A            = 32'h4003_8028;
localparam  SPORTNUMTRAN_CNT_A   = 32'h4003_8038;
localparam  SPORTCTL_B           = 32'h4003_8040;
localparam  SPORTDIV_B           = 32'h4003_8044;
localparam  SPORTINT_EN_B        = 32'h4003_8048;
localparam  SPORTSTAT_B          = 32'h4003_804c;
localparam  SPORTNUM_TRAN_B      = 32'h4003_8050;
localparam  SPORTTIM_CONVT_B     = 32'h4003_8054;
localparam  SPORTTX_B            = 32'h4003_8060;
localparam  SPORTRX_B            = 32'h4003_8068;
localparam  SPORTNUMTRAN_CNT_B   = 32'h4003_8078;

// Register addresses for module: sys
localparam  SYSADIID    = 32'h4000_2020;
localparam  SYSCHIPID   = 32'h4000_2024;
localparam  SYSSWDEN    = 32'h4000_2040;

// Register addresses for module: uart
localparam  COMRX     = 32'h4000_5000;
localparam  COMTX     = 32'h4000_5000;
localparam  COMIEN    = 32'h4000_5004;
localparam  COMIIR    = 32'h4000_5008;
localparam  COMLCR    = 32'h4000_500c;
localparam  COMMCR    = 32'h4000_5010;
localparam  COMLSR    = 32'h4000_5014;
localparam  COMMSR    = 32'h4000_5018;
localparam  COMSCR    = 32'h4000_501c;
localparam  COMMCFG   = 32'h4000_5020;
localparam  COMFBR    = 32'h4000_5024;
localparam  COMDIV    = 32'h4000_5028;
localparam  COMCTL    = 32'h4000_5030;

// Register addresses for module: wdt
localparam  WDTLOAD        = 32'h4000_2c00;
localparam  WDTCCOUNT      = 32'h4000_2c04;
localparam  WDTCTRL        = 32'h4000_2c08;
localparam  WDTRESTART     = 32'h4000_2c0c;
localparam  WDTRESETCTRL   = 32'h4000_2c10;
localparam  WDTACOUNT      = 32'h4000_2c14;
localparam  WDTSTATUS      = 32'h4000_2c18;

endpackage

`endif // __MMR_PKG_SV__
