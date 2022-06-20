#include "keypad.h"


// portA for keypad

const uint8_t keypad_matrix[] = {1  ,0  ,3  ,4  ,
					             1  ,2  ,3  ,8  ,
					             4  ,5 ,6 ,12 ,
					             7 ,8 ,9 ,16 };
						   
						   


void keypad_init(){
	INIT_KEYPAD_PORT; //PORTC;
	
}

uint8_t keypad_read(){
	
	C1(0); C2(1); C3(1); C4(1);
	if (C5 == 0) return keypad_matrix[0+4*0];
	if (C6 == 0) return keypad_matrix[1];
	if (C7 == 0) return keypad_matrix[2];
	if (C8 == 0) return keypad_matrix[3];
_delay_ms(1);


	C1(1); C2(0); C3(1); C4(1);
	if (C5 == 0) return keypad_matrix[0+4*1];
	if (C6 == 0) return keypad_matrix[5];
	if (C7 == 0) return keypad_matrix[6];
	if (C8 == 0) return keypad_matrix[7];
_delay_ms(1);

	C1(1); C2(1); C3(0); C4(1);
	if (C5 == 0) return keypad_matrix[0+4*2];
	if (C6 == 0) return keypad_matrix[9];
	if (C7 == 0) return keypad_matrix[10];
	if (C8 == 0) return keypad_matrix[11];
_delay_ms(1);

	C1(1); C2(1); C3(1); C4(0);
	if (C5 == 0) return keypad_matrix[12];
	if (C6 == 0) return keypad_matrix[13];
	if (C7 == 0) return keypad_matrix[14];
	if (C8 == 0) return keypad_matrix[15];

_delay_ms(1);
	
	
	
	return 'k';
}