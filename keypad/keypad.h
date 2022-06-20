#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "std_macros.h"

#define INIT_KEYPAD_PORT DDRC = 0x0f; PORTC = 0xf0;


#define C1(x)  if(x == 0) CLRBIT(PORTC,0); else SETBIT(PORTC,0);
#define C2(x)  if(x == 0) CLRBIT(PORTC,1); else SETBIT(PORTC,1);
#define C3(x)  if(x == 0) CLRBIT(PORTC,2); else SETBIT(PORTC,2);
#define C4(x)  if(x == 0) CLRBIT(PORTC,3); else SETBIT(PORTC,3);

#define  C5 READBIT(PINC,4)
#define  C6 READBIT(PINC,5)
#define  C7 READBIT(PINC,6)
#define  C8 READBIT(PINC,7)

void keypad_init();

uint8_t keypad_read();


#endif /* KEYPAD_H_ */