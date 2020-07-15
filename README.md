# 433Mhz-sketches
This repo is for simple sketches intended to be used as templates for more complex projects. It is intended to outline the basic use cases of the 433Mhz transmitter/receiver. In this README, you will find helpful hints that reflect on issues I overcame while experimenting, along with documentation of what each of the sketches do.
## The importance of Antennas
I found that these were really temperamental when it came to actually having an antenna. After about an hour of tinkering with the code and writing it down verbatim from tons of examples, I finally tried adding antennas to the things, and they worked like a charm. **If you don't have antennas on either of the modules, they will not communicate no matter how close you bring them!** There is a lot to be said for the importance of taking physics into account with your projects.
## Other things to Remember about these modules
* Make sure you include the **SPI** library, as the **RH_ASK** library depends on it.
* Remember that the buffer size on the receiver needs to be the number of characters(including whitespace) that the transmitter sends.
* Sending a string is different from sending a byte or an int. When you send a numerical value, you need to do some tricksy manipulating and send its reference as a pointer (i.e. (byte*) &myVal). My guess is that by doing so it tricks the radio into thinking it is sending an array, which is probably what it needs.
* After you send a packet with `send()`, you need to also tell it to wait until it is sent with `waitPacketSent() before continuing.
## Projects Included
### blink
Sends a simple byte, which the receiver then uses to determine when to turn an LED on or off.
### message
Sends a string of characters, which the receiver prints to the Serial Monitor.
### pot-to-servo
Transmitter reads a pot value and sends it to the receiver, which then moves a servo accordingly. However, the servo visibly lags behind and is choppy, making me think the total time between pot-to-servo is over 100ms. Not the modules you would want for fast responsiveness.
