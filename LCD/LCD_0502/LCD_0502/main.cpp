/*
 * LCD_0502.cpp
 *
 * Created: 2018-05-02 오후 2:20:27
 * Author : stc_161
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "CLCD.h"


int main(void)
{
	CLCD mylcd;
	
    /* Replace with your application code */
    while (1) 
    {
		
		mylcd.LCD_goto_XY(0,0);
		mylcd.LCD_write_string("Hello world!");
		_delay_ms(200);
    }
}

