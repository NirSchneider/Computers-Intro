#ifndef      _bsp_H_
#define      _bsp_H_

#include     "msp430g2553.h"    //<msp430xG46x.h>

#define      PBIN         &P1IN     
#define      PBFLG        &P1IFG 
#define      PBIE         &P1IE 
#define      PBSEL        &P1SEL 
#define      PDIR         &P1DIR

#define      LCD_CONTROL  &P1OUT 

#define      LCD_DATA     &P2OUT 
#define      LCD_DATA_SEL &P2SEL
#define      LCD_DATA_DIR &P2DIR 

#define      MaxADC       03ffh   //0fff in ADC12
#endif











