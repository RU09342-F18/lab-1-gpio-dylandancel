

Created 9/15/2017
Author: Dylan Dancel
Last Edited: 9/19/2018

The simple blinking LED is can be programmed into the MSP430G2553 processor. This is achieved by
setting the P1's direction to bit 0. This sets it as an output and connects it to the gree,n LED. An variable
x is introduced to implement the blinking capability via an incrementer. As x counts up a conditiontal 
is checked and and turns off the LED accordingly based on the current value of x. This can be adjusted
by changing the number that is being modulo'd. 