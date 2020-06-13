#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rfTx;

void setup() {
  Serial.begin(9600);
  rfTx.init();
}

void loop() {
  byte reading = map(analogRead(A0), 0, 1023, 0, 180);
  rfTx.send((byte*)&reading, sizeof(byte));
  rfTx.waitPacketSent();
}
