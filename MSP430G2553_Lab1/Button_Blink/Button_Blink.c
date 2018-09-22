#include <msp430.h>


/**
 *
 *
 *  Created 9/15/2018
    Author: Dylan Dancel
    Last Edited: 9/19/2018

    This program is to toggle between the red LED and green LED is pressed. If the
    green LED is on the red LED is off, and in vice versa if the button is pressed.
    The circuit that can be seen as a normally closed circuit for the green LED and
    normally open for the RED LED.

 * main.c
 */


int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1DIR |= 0x41; //sets bit 6 and 1 as ouputs
    P1DIR &= ~BIT3; //sets the bit 3 as an input
    P1OUT |= BIT3;  //P1OUT to bit 3
    P1REN |= BIT3; //sets the pull up resistor for bit 3



    while(1){


     //checks to see if button is pressed
     if(P1IN & BIT3){
     P1OUT |= BIT0; //Green LED is on when button is not pushed
     P1OUT &= ~BIT6;  //Red LED is off when the button is not pushed
     }
     else{

         P1OUT &= ~BIT0; //green LED is turned off when button is pushed
         P1OUT |= BIT6; //red LED is turned on when buttton is pushed
     }

    }
}
