#include <msp430.h> 


/**
 *
 *
 *
 *  Created 9/15/2018
    Author: Dylan Dancel
    Last Edited: 9/19/2018

    The function of this program is to blink 2 different LEDS at 2 different rates.
    To do this a counter is used to set a "frequency" for the blink rate. This be
    changed by adjusting the number that is being modulo'd with x.

 * main.c
 */
int main(void)
 {
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1SEL &= ~BIT0; //sets selector multiplexer 1b'01
    P1DIR |= 0x41; //sets the direction of bit 6 and bit 0 as outputs

    int x; //establish int x for counter
    x = 1; //sets x = 1
    //while loop to continue blinking
    while(1){

     //conditional to assign the red LED a certain clock cycle

    //green
    if(x%3000==0) //Counts up to 3000 before toggling the light
    {
    P1OUT ^= BIT0;
    }

    if(x%4000==0) //counts up to 4000 before toggling the light
     {
     P1OUT ^= BIT6; //sets the output to bit 0 and toggles by XOR operation
     x = 0; //manual reset
    }
    x = x+ 1; //increases x by one


    }
}
