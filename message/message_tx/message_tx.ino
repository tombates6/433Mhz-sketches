
#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rfDriver;

void setup() {
  rfDriver.init();
}

void loop() {
  const char* msg = "Hello World";
  rfDriver.send((uint8_t *)msg, strlen(msg));
  rfDriver.waitPacketSent();
  delay(1000);
}
