#include   <SRAM.h>

#define BYTE	     0
#define HWORD        1
#define WORD         2
#define NO_INC       3

#define DST_BYTE_INC         (BYTE   << 30)
#define DST_HWORD_INC        (HWORD  << 30) 
#define DST_WORD_INC         (WORD   << 30)
#define DST_NO_INC           (NO_INC << 30)

#define SRC_BYTE_INC         (BYTE   << 26)
#define SRC_HWORD_INC        (HWORD  << 26) 
#define SRC_WORD_INC         (WORD   << 26)
#define SRC_NO_INC           (NO_INC << 26)

#define DST_SIZE_BYTE        (BYTE   << 28)
#define DST_SIZE_HWORD       (HWORD  << 28)
#define DST_SIZE_WORD        (WORD   << 28)

#define SRC_SIZE_BYTE        (BYTE   << 24)
#define SRC_SIZE_HWORD       (HWORD  << 24)
#define SRC_SIZE_WORD        (WORD   << 24)

#define R_POWER_ZERO         (0 << 14)
#define R_POWER_ONE          (1 << 14)
#define R_POWER_TWO          (2 << 14)
#define R_POWER_THREE        (3 << 14)
#define R_POWER_FOUR         (4 << 14)
#define R_POWER_FIVE         (5 << 14)
#define R_POWER_SIX          (6 << 14)
#define R_POWER_SEVEN        (7 << 14)
#define R_POWER_EIGHT        (8 << 14)
#define R_POWER_NINE         (9 << 14)
#define R_POWER_TEN          (10 << 14)


#define NEXT_USEBURST        0x00000008

#define DMA_STOP             0x0
#define DMA_BASIC            0x1
#define DMA_AUTO_REQ         0x2
#define DMA_PING_PONG        0x3
#define DMA_MSTGT_PRI        0x4
#define DMA_MSTGT_ALT        0x5
#define DMA_PSTGT_PRI        0x6
#define DMA_PSTGT_ALT        0x7

#define CHANNEL0              (1 << 0)
#define CHANNEL1              (1 << 1)
#define CHANNEL2              (1 << 2)
#define CHANNEL3              (1 << 3)
#define CHANNEL4              (1 << 4)
#define CHANNEL5              (1 << 5)
#define CHANNEL6              (1 << 6)
#define CHANNEL7              (1 << 7)
#define CHANNEL8              (1 << 8)
#define CHANNEL9              (1 << 9)
#define CHANNEL10             (1 << 10)
#define CHANNEL11             (1 << 11)
#define CHANNEL12             (1 << 12)
#define CHANNEL13             (1 << 13)
#define CHANNEL14             (1 << 14)
#define CHANNEL15             (1 << 15)
#define CHANNEL16             (1 << 16)
#define CHANNEL17             (1 << 17)
#define CHANNEL18             (1 << 18)
#define CHANNEL19             (1 << 19)
#define CHANNEL20             (1 << 20)
#define CHANNEL21             (1 << 21)
#define CHANNEL22             (1 << 22)
#define CHANNEL23             (1 << 23)

#define	PRIMARY		0
#define	PRI		0
#define	ALTERNATE	1
#define	ALT		1

#define CHNL_BITS            4
#define CH0_PRI_CFG_OFF      (0 << 4)
#define CH1_PRI_CFG_OFF      (1 << 4)
#define CH2_PRI_CFG_OFF      (2 << 4)
#define CH3_PRI_CFG_OFF      (3 << 4)
#define CH4_PRI_CFG_OFF      (4 << 4)
#define CH5_PRI_CFG_OFF      (5 << 4)
#define CH6_PRI_CFG_OFF      (6 << 4)
#define CH7_PRI_CFG_OFF      (7 << 4)
#define CH8_PRI_CFG_OFF      (8 << 4)
#define CH9_PRI_CFG_OFF      (9 << 4)
#define CH10_PRI_CFG_OFF     (10 << 4)
#define CH11_PRI_CFG_OFF     (11 << 4)
#define CH12_PRI_CFG_OFF     (12 << 4)
#define CH13_PRI_CFG_OFF     (13 << 4)
#define CH14_PRI_CFG_OFF     (14 << 4)
#define CH15_PRI_CFG_OFF     (15 << 4)

#define CH0_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH0_PRI_CFG_OFF)
#define CH1_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH1_PRI_CFG_OFF)
#define CH2_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH2_PRI_CFG_OFF)
#define CH3_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH3_PRI_CFG_OFF)
#define CH4_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH4_PRI_CFG_OFF)
#define CH5_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH5_PRI_CFG_OFF)
#define CH6_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH6_PRI_CFG_OFF)
#define CH7_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH7_PRI_CFG_OFF)
#define CH8_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH8_PRI_CFG_OFF)
#define CH9_ALT_CFG_OFF      ((ALT << (CHNL_BITS + 4)) + CH9_PRI_CFG_OFF)
#define CH10_ALT_CFG_OFF     ((ALT << (CHNL_BITS + 4)) + CH10_PRI_CFG_OFF)
#define CH11_ALT_CFG_OFF     ((ALT << (CHNL_BITS + 4)) + CH11_PRI_CFG_OFF)
#define CH12_ALT_CFG_OFF     ((ALT << (CHNL_BITS + 4)) + CH12_PRI_CFG_OFF)
#define CH13_ALT_CFG_OFF     ((ALT << (CHNL_BITS + 4)) + CH13_PRI_CFG_OFF)
#define CH14_ALT_CFG_OFF     ((ALT << (CHNL_BITS + 4)) + CH14_PRI_CFG_OFF)
#define CH15_ALT_CFG_OFF     ((ALT << (CHNL_BITS + 4)) + CH15_PRI_CFG_OFF)

#define BYTE_INC_SHIFT       0
#define HWORD_INC_SHIFT      1
#define WORD_INC_SHIFT       2

#define SIZE_BYTE_INC_BYTE     1
#define SIZE_BYTE_INC_HWORD    2
#define SIZE_BYTE_INC_WORD     4
#define SIZE_BYTE_INC_NO_INC   0

#define SIZE_HWORD_INC_BYTE    2
#define SIZE_HWORD_INC_HWORD   2
#define SIZE_HWORD_INC_WORD    4
#define SIZE_HWORD_INC_NO_INC  0

#define SIZE_WORD_INC_BYTE     4
#define SIZE_WORD_INC_HWORD    4
#define SIZE_WORD_INC_WORD     4
#define SIZE_WORD_INC_NO_INC   0


#define CH0_SRC_BASE_OFFSET_0  CH0_SRC_BASE_OFFSET
#define CH1_SRC_BASE_OFFSET_0  CH1_SRC_BASE_OFFSET
#define CH2_SRC_BASE_OFFSET_0  CH2_SRC_BASE_OFFSET
#define CH3_SRC_BASE_OFFSET_0  CH3_SRC_BASE_OFFSET
#define CH4_SRC_BASE_OFFSET_0  CH4_SRC_BASE_OFFSET
#define CH5_SRC_BASE_OFFSET_0  CH5_SRC_BASE_OFFSET
#define CH6_SRC_BASE_OFFSET_0  CH6_SRC_BASE_OFFSET
#define CH7_SRC_BASE_OFFSET_0  CH7_SRC_BASE_OFFSET
#define CH8_SRC_BASE_OFFSET_0  CH8_SRC_BASE_OFFSET
#define CH9_SRC_BASE_OFFSET_0  CH9_SRC_BASE_OFFSET
#define CH10_SRC_BASE_OFFSET_0 CH10_SRC_BASE_OFFSET
#define CH11_SRC_BASE_OFFSET_0 CH11_SRC_BASE_OFFSET
#define CH12_SRC_BASE_OFFSET_0 CH12_SRC_BASE_OFFSET
#define CH13_SRC_BASE_OFFSET_0 CH13_SRC_BASE_OFFSET
#define CH14_SRC_BASE_OFFSET_0 CH14_SRC_BASE_OFFSET
#define CH15_SRC_BASE_OFFSET_0 CH15_SRC_BASE_OFFSET

#define CH0_DST_BASE_OFFSET_0  CH0_DST_BASE_OFFSET
#define CH1_DST_BASE_OFFSET_0  CH1_DST_BASE_OFFSET
#define CH2_DST_BASE_OFFSET_0  CH2_DST_BASE_OFFSET
#define CH3_DST_BASE_OFFSET_0  CH3_DST_BASE_OFFSET
#define CH4_DST_BASE_OFFSET_0  CH4_DST_BASE_OFFSET
#define CH5_DST_BASE_OFFSET_0  CH5_DST_BASE_OFFSET
#define CH6_DST_BASE_OFFSET_0  CH6_DST_BASE_OFFSET
#define CH7_DST_BASE_OFFSET_0  CH7_DST_BASE_OFFSET
#define CH8_DST_BASE_OFFSET_0  CH8_DST_BASE_OFFSET
#define CH9_DST_BASE_OFFSET_0  CH9_DST_BASE_OFFSET
#define CH10_DST_BASE_OFFSET_0 CH10_DST_BASE_OFFSET
#define CH11_DST_BASE_OFFSET_0 CH11_DST_BASE_OFFSET
#define CH12_DST_BASE_OFFSET_0 CH12_DST_BASE_OFFSET
#define CH13_DST_BASE_OFFSET_0 CH13_DST_BASE_OFFSET
#define CH14_DST_BASE_OFFSET_0 CH14_DST_BASE_OFFSET
#define CH15_DST_BASE_OFFSET_0 CH15_DST_BASE_OFFSET

#define  DMA_CFG_BASE         (SYS_SRAM_START_ADDR + DMA_CFG_BASE_OFFSET)

#define  DMA_START_ADDR       SYS_SRAM_START_ADDR

#define  check_ch_dst_data(ch_num,off,data)  read_check(DMA_START_ADDR + CH ## ch_num ## _DST_BASE_OFFSET + off, data,r0,r1)

#define  write_ch_src_data(ch_num,off,data)  write(DMA_START_ADDR + CH ## ch_num ## _SRC_BASE_OFFSET + off, data)


#define  write_ch_scgt_ctrl_cfg(ch_num,index,tr_num,DST_INC,SRC_INC,SRC_SIZE,R_POWER,DMA_TYPE)  write(DMA_START_ADDR + CH ## ch_num ## _SRC_BASE_OFFSET + (index << 4) + 8, \
                                                  (DST_INC << 30) + (SRC_INC << 26) + (SRC_SIZE << 24) + (R_POWER << 14) + (tr_num << 4) + DMA_TYPE)

#define  write_ch_scgt_dst_pntr(ch_num,index,tr_num,add_mult)  write(DMA_START_ADDR + CH ## ch_num ## _SRC_BASE_OFFSET + (index << 4) + 4, \
                                                   DMA_START_ADDR + CH ## ch_num ## _TASK ## index ## _DST_BASE_OFFSET + (tr_num * add_mult) )

#define  write_ch_scgt_src_pntr(ch_num,index,tr_num,add_mult)  write(DMA_START_ADDR  + CH ## ch_num ## _SRC_BASE_OFFSET + (index << 4), \
                                                   DMA_START_ADDR  + CH ## ch_num ## _TASK ## index ## _SRC_BASE_OFFSET + (tr_num * add_mult) )

#define  write_ch_src_pntr(ch_num,pri_alt,tr_num,add_mult)  write(DMA_CFG_BASE + ((pri_alt << (CHNL_BITS + 4)) * pri_alt) + (ch_num << 4) , \
                                                  DMA_START_ADDR  + CH ## ch_num ## _SRC_BASE_OFFSET_ ## pri_alt + (tr_num * add_mult) )

#define  write_ch_dst_pntr(ch_num,pri_alt,tr_num,add_mult)  write(DMA_CFG_BASE + ((pri_alt << (CHNL_BITS + 4)) * pri_alt) + (ch_num << 4) + 4, \
                                                  DMA_START_ADDR  + CH ## ch_num ## _DST_BASE_OFFSET_ ## pri_alt + (tr_num * add_mult) )

#define  write_ch_ctrl_cfg(ch_num,pri_alt,tr_num,DST_INC,SRC_INC,SRC_SIZE,R_POWER,DMA_TYPE)  write(DMA_CFG_BASE + ((pri_alt << (CHNL_BITS + 4)) * pri_alt) + (ch_num <<4) + 8, \
                                              (DST_INC << 30) + (SRC_INC << 26) + (SRC_SIZE << 24) + (R_POWER << 14) + (tr_num << 4) + DMA_TYPE)

#define  write_ch_cfg(ch_num,pri_alt,tr_num,DST_INC,SRC_INC,SRC_SIZE,R_POWER,DMA_TYPE)   write_ch_src_pntr(ch_num,pri_alt,tr_num, SIZE_ ## SRC_SIZE ## _INC_ ## SRC_INC) ; \
                                                                                    write_ch_dst_pntr(ch_num,pri_alt,tr_num,SIZE_ ## SRC_SIZE ## _INC_ ## DST_INC) ; \
                                                                     write_ch_ctrl_cfg(ch_num,pri_alt,tr_num,DST_INC,SRC_INC,SRC_SIZE,R_POWER,DMA_TYPE)

#define  write_ch_cfg_scgt_pri(ch_num,scat_gt_num,DMA_TYPE)   write_ch_src_pntr(ch_num,0,(scat_gt_num * 4 -1), SIZE_WORD_INC_WORD) ; \
                                                              write(DMA_CFG_BASE + (ch_num << 4) + 4,DMA_CFG_BASE + (ch_num << 4) + 0x0C + (1 << (CHNL_BITS + 4))) ; \
                                                              write_ch_ctrl_cfg(ch_num,0,(scat_gt_num * 4 -1),WORD,WORD,WORD,2,DMA_TYPE)


#define  write_ch_cfg_scgt_alt(ch_num,index,tr_num,DST_INC,SRC_INC,SRC_SIZE,R_POWER,DMA_TYPE)   write_ch_scgt_src_pntr(ch_num,index,tr_num, SIZE_ ## SRC_SIZE ## _INC_ ## SRC_INC) ; \
                                                                                    write_ch_scgt_dst_pntr(ch_num,index,tr_num,SIZE_ ## SRC_SIZE ## _INC_ ## DST_INC) ; \
                                                                     write_ch_scgt_ctrl_cfg(ch_num,index,tr_num,DST_INC,SRC_INC,SRC_SIZE,R_POWER,DMA_TYPE)

