#ifndef __isr_h
#define __isr_h
// Hal: exp: #define P_led1 P11 -----------------

// Const: exp: #define D_data 1 ----------------

// Globle Var -----------------------------------------
#ifdef __isr_c
bit b1ms;

#else
extern bit b1ms;
#endif

// Function ------------------------------------