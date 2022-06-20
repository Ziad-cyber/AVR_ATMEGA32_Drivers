#include "ADC.h"

uint16_t adc_data = 0;
void ADC_init(){
	SETBIT(ADMUX,6);
	SETBIT(ADCSRA,7);
	ADCSRA |= 0b111;	
}

uint16_t ADC_read(uint8_t ch){
	ADMUX = ADMUX & 0b11100000; // 
	ADMUX = ADMUX | ch;  // update channel
	SETBIT(ADCSRA, 6);// trigger ADC
	while(READBIT(ADCSRA, 6) == 1){} 
	return ADC;
}


