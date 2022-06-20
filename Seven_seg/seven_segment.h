#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include "std_macros.h"


#define  INIT_7_SEG_PORT DDRA |=0b01111111; DDRC |= 0b11000000; 

#define  EN1(x)  if(x == 0) CLRBIT(PORTC,6); else SETBIT(PORTC,6);
#define  EN2(x)  if(x == 0) CLRBIT(PORTC,7); else SETBIT(PORTC,7);
#define  A(x)    if(x == 0) CLRBIT(PORTA,0); else SETBIT(PORTA,0);
#define  B(x)    if(x == 0) CLRBIT(PORTA,1); else SETBIT(PORTA,1);
#define  C(x)    if(x == 0) CLRBIT(PORTA,2); else SETBIT(PORTA,2);
#define  D(x)    if(x == 0) CLRBIT(PORTA,3); else SETBIT(PORTA,3);
#define  E(x)    if(x == 0) CLRBIT(PORTA,4); else SETBIT(PORTA,4);
#define  F(x)    if(x == 0) CLRBIT(PORTA,5); else SETBIT(PORTA,5);
#define  G(x)    if(x == 0) CLRBIT(PORTA,6); else SETBIT(PORTA,6);


void seven_Seg_init();
void seven_Seg_write(uint8_t x);
void display_number(uint8_t x);



#endif /* SEVEN_SEGMENT_H_ */