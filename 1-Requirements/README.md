Requirements
Introduction
Adjusting the temperature is often one of the first things you do when you get into a vehicle. Whether it's too hot or too cold outside, you want the climate in the car to be exactly how you like it.In the proposed project,we have used sensor which will sense whether driver is seated or not and if he is seated then need to set the temperature accordingly. Based on that our controller will set the heater to required temperature. The Heater will generate the heat and a uart display will show the temperature.Here we have used ATmega328 microcontroller along with switch pins, LED, UART diplay,etc.

Features
The System will sense whether driver is seated or not
The temperature can be altered by driver
Heater will generate the heat accordingly based on driver requirement
Low cost system

SWOT- Strengths, Weakness, Opportunities and Threats

Strengths
The temperature can be modified inside the vehicles easily
Low cost system
Weakness
Its only applicable for those countries which are having low temperature.
Opportunities
It can be implemented by having both Heater and AC.
Threats
Not suitable for average or high temperature places.

4W's and 1'H
WHAT
Seat Temperature Monitoring System
WHERE
used in Automotive Industries
WHEN
At low Temperature

Detail requirements

High Level Requirements
High Level Requirements	Description
HLR1	Microcontroller
HLR2	Temperature Sensor
HLR3	Heat Generation
HLR4	Display
HLR5	Software used

Low Level Requirements
Low Level Requirements	Description
HLR1_LLR1	ATmega328
HLR2_LLR1	Switch pins,LED and ADC
HLR2_LLR2	ADC with PWM-fast
HLR3_LLR1	Thermoelectric module
HLR4_LLR1	UART and LED
HLR5_LLR1	Code Blocks with AVR GCC compiler
HLR5_LLR2	SimulIDE