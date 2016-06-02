// True Random Number Generator
// (aka "Non-Deterministic Random Bit Generator" by the people at NIST)

#ifndef RNG_H
#define RNG_H

/* Ideally this would be generated from coda, 
   but nobody has written a C-struct register script yet.
 */

#include <inttypes.h>

typedef volatile struct rng_s {
    uint16_t    CTL,    _2,
                LEN,    _6,
                STAT,   _10;
    uint32_t    DATA,
                OSCCNT;
    int8_t      OSCDIFF[4];
} rng_t, *rng_p;

#ifndef RNG_BASE_ADDR
#define RNG_BASE_ADDR 0x40040400
#endif

#define hrng ((rng_p)RNG_BASE_ADDR)

#endif
