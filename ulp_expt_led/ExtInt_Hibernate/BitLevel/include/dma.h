
typedef enum 
{
  ch_0 = 0,
  ch_1,
  ch_2,
  ch_3,
  ch_4,
  ch_5,
  ch_6,
  ch_7,
  ch_8,
  ch_9,
  ch_10,
  ch_11,
  ch_12,
  ch_13,
  ch_14,
  ch_15
}DMA_Channel;

typedef enum
{
  Basic,
  Auto,
  Ping_Pong,
  Mem_Scatter_Gather,
  Per_Scatter_Gather  
}DMA_Type;



void DMA_Config(DMA_Channel chnl, unsigned long int * psrc_buff, unsigned long int * pdest_buff, unsigned int len );

void DMA_config_basic_tx_byte(int CH_No,unsigned int words, unsigned char* srcend, unsigned int destend,int dest_inc,int size,int src_inc,int R,int N_1);
void DMA_config_basic_tx_word(int CH_No,unsigned int words, unsigned int* srcend, unsigned int destend,int dest_inc,int size,int src_inc,int R,int N_1);
void DMA_config_basic_rx_word(int CH_No,unsigned int words, unsigned int srcend, unsigned int* destend,int dest_inc,int size,int src_inc,int R,int N_1);
void DMA_config_basic_tx_hword(int CH_No,unsigned int words, unsigned short* srcend, unsigned int destend,int dest_inc,int size,int src_inc,int R,int N_1);
void DMA_config_basic_rx_hword(int CH_No,unsigned int words, unsigned int srcend, unsigned short* destend,int dest_inc,int size,int src_inc,int R,int N_1);


 void DMA_config_autoreq(int CH_No,unsigned int words, unsigned int* srcend, unsigned int*destend,int dest_inc,int size,int src_inc,int R,int N_1);
 