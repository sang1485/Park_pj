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
    PORTD = 0xff;// shift branch 
	DDRD = 0xff;
	
	int i;
	/* Replace with your application code */
    while (1) 
    {
		for (i=0; i<7; i++)
		{
			PORTD = ~(0x01 << i);
			_delay_ms(500);
		}
		for (i=0; i<7; i++)
		{
			PORTD = ~(0x80 >> i);
			_delay_ms(500);
		}
	}
}

