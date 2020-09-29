/*
 * Rotary encoder library for STM/ other C based MCU.
 */

#ifndef rotary_h
#define rotary_h

#include "main.h"


// Disable this emit codes once per step instead of twice.
#define HALF_STEP

// Values returned by 'process'
// No complete step yet.
#define DIR_NONE 0x0
// Clockwise step.
#define DIR_CW 0x10
// Anti-clockwise step.
#define DIR_CCW 0x20
// Default start state
#define R_START 0x0

unsigned char Pin_process(unsigned int , unsigned int );


#endif
 
