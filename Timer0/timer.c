#include "timer.h"

/*
	init normal mode
	c.c of cpu direct (no prescaler)
	enable overflow interrupt
	enable global interrupt
*/
void timer0_normal_init(){
	TCCR0 |= 1<<FOC0 | 1<<CS00;
	TIMSK |= 1<<TOIE0 ;
	sei();	// SETBIT(SREG,7);
}



/*
	init normal mode
	c.c of cpu direct (no prescaler)
	enable overflow interrupt
	enable global interrupt
*/
void timer0_normal_prescaler_1024_init(){
	TCCR0 |= 1<<FOC0 | 1<<CS00 | 1<<CS02;
	TIMSK |= 1<<TOIE0 ;
	sei();	// SETBIT(SREG,7);
}



void timer0_comp_init(){
	TCCR0 |= 1<<FOC0 | 1<<CS00 | 1<<WGM01;
	OCR0 = 25;
	TIMSK |= 1<<OCIE0 ;
	sei();	// SETBIT(SREG,7);
	
}
void timer0_comp_prescaler_1024_init(){
	TCCR0 |= 1<<FOC0 | 1<<CS00 | 1<<CS02 | 1<<WGM01;
	OCR0 = 250;
	TIMSK |= 1<<OCIE0 ;
	sei();	// SETBIT(SREG,7);
	
}




void timer0_freq_init(){
	TCCR0 |= 1<<FOC0 | 1<<CS00 | 1<<WGM01 | 1<<COM00;
	SETBIT(DDRB, 3);
}

void set_freq(uint8_t x){
	OCR0 = x;	
}

/*
fast freq PWM
non inverting
10 bit
*/
void timer1_pwm_oc1a_init(){
	TCCR1A |= 1<<COM1A1 | 1<<WGM11 | 1<<WGM10;
	TCCR1B |= 1<<WGM12 | 1<<CS10;
	SETBIT(DDRD, 5); 
}
/*

duty = (T(high) / 1024) * 100

T(high) = duty*10.24
*/
void timer1_pwm_oc1a_duty(uint8_t duty){
	
	OCR1A = duty*10.23;
}
