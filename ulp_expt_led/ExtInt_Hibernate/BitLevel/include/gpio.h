/* ================================================================================
 *
 *     Project      :   gpio
 *     Part         :   
 *     Description  :   Register Definitions
 *
 *     SVN Tag      :   
 *     Date         :   
 *     
 *     !! ADI Confidential !!
 *       INTERNAL USE ONLY
 *
 *     Copyright (c)  Analog Devices, Inc.  All Rights Reserved.
 *     This software is proprietary and confidential to Analog Devices, Inc. and
 *     its licensors.
 *
 *     This file was auto-generated. Do not make local changes to this file.
 *
 * ================================================================================ */

#ifndef _DEF_GPIO_H
#define _DEF_GPIO_H

/* ============================================================================================================================
 *    Some description. (gpio0) Register Address Definitions
 * ============================================================================================================================ */
#define MOD_gpio0_BASE                       0x40000800            /*  Some description.  */
#define MOD_gpio0_MASK                       0x00000FFF            /*  Some description.  */
#define REG_gpio0_GPCON0_3_RESET             0x00000000            /*      Reset Value for GPCON0_3  */
#define REG_gpio0_GPCON0_3                   0x40000800            /*  gpio0 GPIO Port Configuration */
#define REG_gpio0_GPCON4_8_RESET             0x00000000            /*      Reset Value for GPCON4_8  */
#define REG_gpio0_GPCON4_8                   0x40000804            /*  gpio0 GPIO Port Configuration */
#define REG_gpio0_GPOEN_RESET                0x00000000            /*      Reset Value for GPOEN  */
#define REG_gpio0_GPOEN                      0x40000808            /*  gpio0 GPIO Port output enable */
#define REG_gpio0_GPPE_RESET                 0x00000000            /*      Reset Value for GPPE  */
#define REG_gpio0_GPPE                       0x4000080C            /*  gpio0 GPIO Port output pullup/pulldown enable */
#define REG_gpio0_GPIEN_RESET                0x00000000            /*      Reset Value for GPIEN  */
#define REG_gpio0_GPIEN                      0x40000810            /*  gpio0 GPIO Port Input Path Enable */
#define REG_gpio0_GPIN_RESET                 0x00000000            /*      Reset Value for GPIN  */
#define REG_gpio0_GPIN                       0x40000814            /*  gpio0 GPIO Port registered data input */
#define REG_gpio0_GPOUT_RESET                0x00000000            /*      Reset Value for GPOUT  */
#define REG_gpio0_GPOUT                      0x40000818            /*  gpio0 GPIO Port data output */
#define REG_gpio0_GPSET_RESET                0x00000000            /*      Reset Value for GPSET  */
#define REG_gpio0_GPSET                      0x4000081C            /*  gpio0 GPIO Port data out set */
#define REG_gpio0_GPCLR_RESET                0x00000000            /*      Reset Value for GPCLR  */
#define REG_gpio0_GPCLR                      0x40000820            /*  gpio0 GPIO Port data out clear */
#define REG_gpio0_GPTGL_RESET                0x00000000            /*      Reset Value for GPTGL  */
#define REG_gpio0_GPTGL                      0x40000824            /*  gpio0 GPIO Port pin toggle */
#define REG_gpio0_GPPOL_RESET                0x00000000            /*      Reset Value for GPPOL  */
#define REG_gpio0_GPPOL                      0x40000828            /*  gpio0 GPIO Port interrupt polarity */
#define REG_gpio0_GPINTEN_RESET              0x00000000            /*      Reset Value for GPINTEN  */
#define REG_gpio0_GPINTEN                    0x4000082C            /*  gpio0 GPIO Port interrupt A enable */
#define REG_gpio0_GPINT_RESET                0x00000000            /*      Reset Value for GPINT  */
#define REG_gpio0_GPINT                      0x40000830            /*  gpio0 GPIO Port interrupt Status */
#define REG_gpio0_GPDS_RESET                 0x00000000            /*      Reset Value for GPDS  */
#define REG_gpio0_GPDS                       0x40000834            /*  gpio0 GPIO Drive Strength Select */
#define REG_gpio0_GPLOOP_RESET               0x00000000            /*      Reset Value for GPLOOP  */
#define REG_gpio0_GPLOOP                     0x40000838            /*  gpio0 GPIO Out to In Loopback */
#define REG_gpio0_DEBUG_MODE_RESET           0x00000000            /*      Reset Value for DEBUG_MODE  */
#define REG_gpio0_DEBUG_MODE                 0x4000083C            /*  gpio0 GPIO Ports Debug Mode control */

/* ============================================================================================================================
 *    Some description. (gpio) Field BitMasks, Positions & Enumerations 
 * ============================================================================================================================ */
/* -------------------------------------------------------------------------------------------------------------------------
 *        GPCON0_3                             Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPCON0_3_PIN3_CFG          24            /*  p3 configuration bits. Further information is in PIN_MUX HRM. */
#define BITP_GPIO_GPCON0_3_PIN2_CFG          16            /*  p2 configuration bits. Further information is in PIN_MUX HRM. */
#define BITP_GPIO_GPCON0_3_PIN1_CFG           8            /*  p1 configuration bits. Further information is in PIN_MUX HRM. */
#define BITP_GPIO_GPCON0_3_PIN0_CFG           0            /*  p0 configuration bits. Further information is in PIN_MUX HRM. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPCON0_3                             Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPCON0_3_PIN3_CFG          0x3F000000
#define BITM_GPIO_GPCON0_3_PIN2_CFG          0x003F0000
#define BITM_GPIO_GPCON0_3_PIN1_CFG          0x00003F00
#define BITM_GPIO_GPCON0_3_PIN0_CFG          0x0000003F

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPCON4_8                             Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPCON4_8_PIN7_CFG          24            /*  p7 configuration bits. Further information is in PIN_MUX HRM. */
#define BITP_GPIO_GPCON4_8_PIN6_CFG          16            /*  p6 configuration bits. Further information is in PIN_MUX HRM. */
#define BITP_GPIO_GPCON4_8_PIN5_CFG           8            /*  p5 configuration bits. Further information is in PIN_MUX HRM. */
#define BITP_GPIO_GPCON4_8_PIN4_CFG           0            /*  p4 configuration bits. Further information is in PIN_MUX HRM. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPCON4_8                             Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPCON4_8_PIN7_CFG          0x3F000000
#define BITM_GPIO_GPCON4_8_PIN6_CFG          0x003F0000
#define BITM_GPIO_GPCON4_8_PIN5_CFG          0x00003F00
#define BITM_GPIO_GPCON4_8_PIN4_CFG          0x0000003F

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPOEN                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPOEN_OEN                   0            /*  Pin Output Drive enable */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPOEN                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPOEN_OEN                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPPE                                 Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPPE_PE                     0            /*  Pin Pull enable */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPPE                                 Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPPE_PE                    0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPIEN                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPIEN_IEN                   0            /*  Input path enable */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPIEN                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPIEN_IEN                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPIN                                 Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPIN_IN                     0            /*  Registered data input */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPIN                                 Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPIN_IN                    0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPOUT                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPOUT_OUT                   0            /*  Data out */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPOUT                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPOUT_OUT                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPSET                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPSET_SET                   0            /*  Set the output HIGH for the pin */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPSET                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPSET_SET                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPCLR                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPCLR_CLR                   0            /*  Set the output low for the port pin */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPCLR                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPCLR_CLR                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPTGL                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPTGL_TGL                   0            /*  Toggle the output of the port pin */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPTGL                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPTGL_TGL                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPPOL                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPPOL_INTPOL                0            /*  Interrupt polarity. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPPOL                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPPOL_INTPOL               0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPINTEN                              Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPINTEN_INTEN               0            /*  Interrupt enable. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPINTEN                              Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPINTEN_INTEN              0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPINT                                Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPINT_INTSTATUS             0            /*  Interrupt Status */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPINT                                Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPINT_INTSTATUS            0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPDS                                 Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPDS_GPDS                   0            /*  Drive strength select. Each bit is configured to set the drive strength of the corresponding GPIO pin. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPDS                                 Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPDS_GPDS                  0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        GPLOOP                               Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_GPLOOP_GP_LOOP              0            /*  GPIO Loopback, bypassing pads. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        GPLOOP                               Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_GPLOOP_GP_LOOP             0x000000FF

/* -------------------------------------------------------------------------------------------------------------------------
 *        DEBUG_MODE                           Pos               Description
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_DEBUG_MODE_DEBUG_MODE       0            /*  This debug_mode bus is output to the pin_mux where in is used, in conjunction with the functional selects to determine the functionality on the IO pins. Further information is in the PIN_MUX HRM. */
/* ------------------------------------------------------------------------------------------------------------------------- 
 *        DEBUG_MODE                           Masks 
 * ------------------------------------------------------------------------------------------------------------------------- */
#define BITM_GPIO_DEBUG_MODE_DEBUG_MODE      0x000000FF

/* ============================================================================================================================
 *    Trigger Master Definitions
 * ============================================================================================================================ */

/* ============================================================================================================================
 *    Trigger Slave Definitions
 * ============================================================================================================================ */


#endif	/* end ifndef _DEF_GPIO_H */