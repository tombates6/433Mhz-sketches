#include <RH_ASK.h>
#include <SPI.h>

//RX pin is automatically assigned to pin 11. 
RH_ASK rfRx;

void setup() {
  Serial.begin(9600);
  rfRx.init();
}

void loop() {
  // put your main code here, to run repeatedly:

}
