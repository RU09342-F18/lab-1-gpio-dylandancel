#include "msp.h"


/**
 * main.c
 *
 *  Created 9/20/2018
    Author: Dylan Dancel
    Last Edited: 9/20/2018
 *
 *
 *  This program blinks the MSP432P401R red and blue LED. The frequency which these
 *  LEDS blink can be adjusted by changing that number is being modulo'd with
 *  the x integer.
 *
 *
 */
int main(void)
 {
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1DIR |= 0x01; //sets the direction of pin 1  bit 0 as output (red LED)
    P2DIR |= BIT2; //sets direction PIN 2 bit 2 as output (blue LED)

    int x; //establish int x for counter
    x = 1; //sets x = 1

    //while loop to continue blinking
    while(1){

     //conditional to assign the red LED a certain clock cycle

    //red
    if(x%10000==0) //Counts up to 10000 before toggling the light
    {
    P1OUT ^= BIT0; //toggles by xor operation
    }

    if(x%30000==0) //counts up to 30000 before toggling the light
     {
     P2OUT ^= BIT2; // toggles by XOR operation
     x = 0; //manual reset
    }
    x = x+ 1; //increases x by one


    }
}
