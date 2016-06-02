#ifndef CRC_H
#define CRC_H

#include <inttypes.h>

// Two sets of CRC routines are provided,
//    a small routine computed bit-by-bit
//    a fast routine computed using lookup tables
// Two byte orders are provided, MSB & LSB first
//
// These routines are generic and will work with any size polynomial
//    for LSB first, LSB of polynomial is implied and
//       CRC & polynomial are right justified (no shifts needed)
//    for MSB first, MSB of polynomial is implied and
//       CRC & polynomial should be left justified
//          starting crc & polynomial will need << (32-width)
//          final crc will need >> (32-width)
    
uint32_t crc_lsb_small_byte(uint32_t crc, uint32_t poly, uint8_t data);
uint32_t crc_msb_small_byte(uint32_t crc, uint32_t poly, uint8_t data);
uint32_t crc_lsb_small(uint32_t crc, uint32_t poly, uint8_t *data, int n);
uint32_t crc_msb_small(uint32_t crc, uint32_t poly, uint8_t *data, int n);

uint32_t crc_lsb_fast(uint32_t crc, uint32_t *table, uint8_t *data, int n);
uint32_t crc_msb_fast(uint32_t crc, uint32_t *table, uint8_t *data, int n);
void crc_lsb_fast_table(uint32_t poly, uint32_t *table);
void crc_msb_fast_table(uint32_t poly, uint32_t *table);

// standard CRC32 polynomial
#define CRC32_POLY_MSB	    0x04C11DB7
#define CRC32_POLY_LSB	    0xEDB88320

// check constants if appended CRC is inverted
#define CRC32_CHECK_MSB	    0xC704DD7B
#define CRC32_CHECK_LSB	    0xDEBB20E3

#endif
