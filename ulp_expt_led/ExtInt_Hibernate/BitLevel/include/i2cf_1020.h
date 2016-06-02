#ifndef I2CF_H
#define I2CF_H
#include <inttypes.h>
typedef volatile struct I2CF_s {
  uint16_t MCON;
  uint16_t _reserved_2;
  uint16_t MSTA;
  uint16_t _reserved_6;
  uint16_t MRX;
  uint16_t _reserved_A;
  uint16_t MTX;
  uint16_t _reserved_E;
  uint16_t MRXCNT;
  uint16_t _reserved_12;
  uint16_t MCRXCNT;
  uint16_t _reserved_16;
  uint16_t ADR1;
  uint16_t _reserved_1A;
  uint16_t ADR2;
  uint16_t _reserved_1E;
  uint16_t BYT;
  uint16_t _reserved_22;
  uint16_t DIV;
  uint16_t _reserved_26;
  uint16_t SCON;
  uint16_t _reserved_2A;
  uint16_t SSTA;
  uint16_t _reserved_2E;
  uint16_t SRX;
  uint16_t _reserved_32;
  uint16_t STX;
  uint16_t _reserved_36;
  uint16_t ALT;
  uint16_t _reserved_3A;
  uint16_t ID0;
  uint16_t _reserved_3E;
  uint16_t ID1;
  uint16_t _reserved_42;
  uint16_t ID2;
  uint16_t _reserved_46;
  uint16_t ID3;
  uint16_t _reserved_4A;
  uint16_t FSTA;
  uint16_t _reserved_4E;
  uint16_t SHCON;
  uint16_t _reserved_52;
  uint16_t TCTL;
} *I2CF_t;
#define I2CF ((I2CF_t)0x40003000)


// I2C Master Control register.  
#define I2CM_EN             0x01
#define I2CM_BOFFD          0x02
#define I2CM_INTLOOPEN      0x04
#define I2CM_STRCLEN        0x08
#define I2CM_RXR_IEN        0x10
#define I2CM_TXR_IEN        0x20
#define I2CM_ALOST_IEN      0x40
#define I2CM_NACK_IEN       0x80
#define I2CM_TCOMPIEN       0x100
#define I2CM_DEC_FSTAT_ONTX 0x200
#define I2CM_BUS_CLR        0x1000
#define I2CM_PRESTOP_BUS_CLR 0x2000



// I2C Master Status register bits
#define I2CM_TXREQ          0x04
#define I2CM_RXREQ          0x08
#define I2C_NOACKA          0x10
#define I2C_ARBLOST         0x20
#define I2C_MBUSY           0x40
#define I2C_NOACKD          0x80
#define I2CM_TCOMP          0x100
#define I2C_RXOFLOW         0x200
#define I2C_LBUSY           0x400
#define I2C_STOP            0x800
#define I2C_TXOFLOW         0x1000


// I2C Status register bits
/*#define I2CS_TXFS_EREQ_NUM       0
#define I2CS_TXUFLOW_NUM         1
#define I2CS_TXREQ_NUM           2
#define I2CS_RXREQ_NUM           3
#define I2CS_RXOFLOW_NUM         4
#define I2CS_NOACK_NUM           5
#define I2CS_BUSY_NUM            6
#define I2CS_GCINT_NUM           7
#define I2CS_STOP_NUM            10
#define I2CS_REPSTART_NUM        13
#define I2CS_START_NUM           14*/

  // I2C Control register.  
  #define I2CS_EN              0x01
  #define I2CS_ADR10EN         0x02
  #define I2CS_GCEN            0x04
  #define I2CS_HGCEN           0x08
  #define I2CS_GCSBCLR         0x10
  #define I2CS_EARLYTXR        0x20
  #define I2CS_STRCLEN         0x40
  #define I2CS_NACK            0x80
  #define I2CS_STOP_IEN        0x100
  #define I2CS_RXR_IEN         0x200
  #define I2CS_TXR_IEN         0x400
  #define I2CS_DEC_FSTAT_ONTX  0x800
  #define I2CS_REPSTART_IEN    0x1000
// I2C Status register bits
#define I2CS_TXFS_EREQ       0x01
#define I2CS_TXUFLOW         0x02
#define I2CS_TXREQ           0x04
#define I2CS_RXREQ           0x08
#define I2CS_RXOFLOW         0x10
#define I2CS_NOACK           0x20
#define I2CS_BUSY            0x40
#define I2CS_GCINT           0x80
#define I2CS_GCID            0x100
#define I2CS_STOP            0x400
#define I2CS_ID_MAT          0x800
#define I2CS_REPSTART        0x2000
#define I2CS_START           0x4000


#endif
