#include <msp430.h> 

 /*
    Created 9/15/2018
    Author: Dylan Dancel
    Last Edited: 9/19/2018

    This is a simple blinking LED program which allows the LED to blink when an
    integer x gets counted up to a certain value. As long as x is not a multiple
    of 3000 the light will be on. Once it counts up to a multiple 3000 the light
    turn off. This
*/

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= 0x01; //sets bit 0 to output (Green led)
	P1SEL &= ~BIT0; //sets multiplexer to 0x01

	int x; //count integer
	x = 1; //x to 1

	while(1){


	   if(x%3000 == 0) //checks to see if x is a multiple of 3000
	   P1OUT ^= 0x01; //toggle through  XOR
	   x += 1; //x counts up





	}
	

}
