// Description:
//   C header file for the system clocking.
//
// Revision History:
//   25 Dec 2011: Originally coded by Jakub Dudek for Roche project.
//
//------------------------------------------------------------------------

#include <LPP.h>
#include <util.h>
#include <IRQ.h>

#define OSC  0
#define XTAL 1
#define PLL  2
#define GPIO 3

#define OFF 0
#define ON  1

#define OSCKEY_VAL 0xCB14

// muxes
void setSysClkSrc(int sel);
void set32kClkSrc(int sel);
void setSpllSrc(int sel);

// plls
void setupSpll(int M, int N, bool div2, bool irq);
void setupSpllPoll(int M, int N, bool div2, bool irq);
void setupSpllIrq (int M, int N, bool div2);
void setupUpll(int M, int N, bool div2, bool irq);
void setupUpllPoll(int M, int N, bool div2, bool irq);
void setupUpllIrq (int M, int N, bool div2);
void spllOff();
void upllOff();

// oscillators and xtals
void setXtal26(int state);
void setXtal26Poll(int state);
void setXtal26Irq(int state);
void setOsc26Poll(int state);
void setXtal32Poll(int state);
void setXtal32Irq(int state);
void setOsc32Poll(int state);
