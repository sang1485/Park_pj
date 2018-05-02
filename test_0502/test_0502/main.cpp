/*
 * test_0502.cpp
 *
 * Created: 2018-05-02 오전 10:52:05
 * Author : stc_161
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    PORTD = 0xff;  // master branch
	DDRD = 0xff;
	/* Replace with your application code */
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(500);
		PORTD = 0xff;
		_delay_ms(500);
    }
}

