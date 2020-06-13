# 433Mhz-sketches
	This repo is for simple sketches intended to be used as templates for more complex projects. It is intended to outline the basic use cases of the 433Mhz transmitter/receiver. In this README, you will find helpful hints that reflect on issues I overcame while experimenting, along with documentation of what each of the sketches do.
## The importance of Antennas
	I found that these were really temperamental when it came to actually having an antenna. After about an hour of tinkering with the code and writing it down verbatim from tons of examples, I finally tried adding antennas to the things, and they worked like a charm. **If you don't have antennas on either of the modules, they will not communicate no matter how close you bring them!** There is a lot to be said for the importance of taking physics into account with your projects.
## Other things to Remember about these modules
* Make sure you include the **SPI** library, as the **RH_ASK** library depends on it.
* Remember that the buffer size on the receiver needs to be the number of characters(including whitespace) that the transmitter sends.
## Projects Included
###blink
Sends a simple byte, which the receiver then uses to determine when to turn an LED on or off.
###message
Sends a string of characters, which the receiver prints to the Serial Monitor.
