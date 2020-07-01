
#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rfDriver;

void setup() {
  rfDriver.init();
  Serial.begin(9600);
  Serial.println("Ready for action!");
}

void loop() {
  uint8_t buf[11];
  uint8_t buflen = sizeof(buf);
  if(rfDriver.recv(buf, &buflen)) {
    Serial.print("Message Received: ");
    Serial.println((char*)buf); 
  }

}
