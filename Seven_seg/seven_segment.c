#include "seven_segment.h"
// Assume common Cathode



void seven_Seg_init(){
	INIT_7_SEG_PORT;
	// initial
}
// 56 % 10 
void seven_Seg_write(uint8_t x){ // 0 --> 99
	uint8_t Digit1 =  x/10;
	uint8_t Digit2 =  x%10;

	EN1(1);
	EN2(0);
	// print digit1
	display_number(Digit1);
	_delay_ms(1);

	
	EN1(0);
	EN2(1);
	// print digit2
	display_number(Digit2);
	_delay_ms(1);
	
	
}

void display_number(uint8_t x){
	switch(x){
		case 0: A(1); B(1); C(1); D(1); E(1); F(1); G(0); break;
		case 1: A(0); B(0); C(0); D(0); E(1); F(1); G(0); break;
		case 2: A(1); B(1); C(0); D(1); E(1); F(0); G(1); break;
		case 3: A(1); B(1); C(1); D(1); E(0); F(0); G(1); break;
		case 4: A(0); B(1); C(1); D(0); E(0); F(1); G(1); break;
		case 5: A(1); B(0); C(1); D(1); E(0); F(1); G(1); break;
		case 6: A(1); B(0); C(1); D(1); E(1); F(1); G(1); break;
		case 7: A(1); B(1); C(1); D(0); E(0); F(0); G(0); break;
		case 8: A(1); B(1); C(1); D(1); E(1); F(1); G(1); break;
		case 9: A(1); B(1); C(1); D(1); E(0); F(1); G(1); break;
	}
}