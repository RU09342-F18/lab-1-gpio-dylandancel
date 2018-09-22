
#include "msp.h"



/**
 *
 *  Created 9/19/2018
    Author: Dylan Dancel
    Last Edited: 9/20/2018

    This program turns the blue LED on and off by button press.
    The button is on when the button isn't pressed and turns off when the button
    is pressed.

 *
 * main.c
 */
void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;     // stop watchdog timer
    P1DIR |= BIT1; //sets the direction of pin 1 BIT1 as an input
    P2DIR |= BIT2; //sets direction of pin 2 BIT2 as an output
    P2OUT |= BIT2; //sets p2out to BIT2
    P2REN |= BIT2; //sets up pull up resistor



    while(1){


        if(P1IN & BIT1) //if button is pressed turns on the off the blue LED

            P2OUT ^= BIT2; //sets p2out depending if the button is pressed or not


    }








}
