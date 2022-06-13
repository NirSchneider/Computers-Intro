#ifndef _bsp_H_
#define _bsp_H

#include <msp430.h>       //MSP430x2xx
//#include <msp430xG46x.h //MSP430x4xx

#define  debounceVal        250
#define  delay62_5ms        0xFFFF

//#define LEDsArrPort        &P1OUT
//#define LedsArrPortDir     &P1DIR
//#define LEDsArrPortSel     &P1SEL

#define SWsArrPort         &P2OUT
#define SWsArrPortDir      &P2DIR
#define SWsArrPortSel      &P2SEL

#define PBsArrPort         &P2IN
#define PBsArrIntPend      &P2IFG
#define PBsArrIntEn        &P2IE
#define PBsArrIntEdgeSel   &P2IES
#define PBsArrPortSel      &P2SEL
#define PBsArrPortDir      &P2DIR

#define FqPort             &P2IN
#define FqPortSel          &P2SEL
#define FqPortDir          &P2DIR

#define LCDconPort         &P2OUT
#define LCDconPortDir      &P2DIR
#define LCDconPortSel      &P2SEL

#define LCDdataPort        &P1OUT
#define LCDdataPortDir     &P1DIR
#define LCDdataPortSel     &P1SEL

#endif