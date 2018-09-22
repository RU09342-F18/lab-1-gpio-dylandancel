#include "msp.h"


/**
 * main.c
 *
 *
 *  Created 9/19/2018
    Author: Dylan Dancel
    Last Edited: 9/20/2018

    This program turns on the blue LED on and off at defined multiples by taking
    the modulo of a defined integer x. The frequency at which it can be blinked
    changes as the modulo number changes.
 *
 *
 *
 */
void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;     // stop watchdog timer

    P2DIR |= BIT1; //sets pin2 bit1 as an output (blue LED)

    int x; //establish variable x
    x = 1; //sets x equal to 1

    while(1){


        if(x%30000 == 0) //counts up to a multiple of 30000 before toggling the light

            P2OUT^= 0x02; //sets p2out as bit 1
            x+=1; //increments x by one



    }

}
