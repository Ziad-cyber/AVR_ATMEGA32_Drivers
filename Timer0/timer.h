#ifndef TIMER_H_
#define TIMER_H_
#include "std_macros.h"

void timer0_normal_init();
void timer0_normal_prescaler_1024_init();

void timer0_comp_init();
void timer0_comp_prescaler_1024_init();

void timer0_freq_init();
void set_freq(uint8_t x);

void timer1_pwm_oc1a_init();
void timer1_pwm_oc1a_duty(uint8_t );


#endif /* TIMER_H_ */