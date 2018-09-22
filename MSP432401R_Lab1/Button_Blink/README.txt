Created 9/20/2018
Last edited: 9/21/2018
Author: Dylan Dancel

This code makes a button blink on the MSP432401R processor. This input is set to pin1 BIT1 which allows
for the button to toggle the switch. The output is set to pin2 BIT2 this sets up the blue LED to turn off
when the button is pressed. A pull up resistor must be enabled for safety as an overload of current is not created.
This pull up resistor is set to BIT2.