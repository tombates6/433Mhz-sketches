#define ledPin 13
#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rfRx;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  rfRx.init();
}

void loop() {
  byte buf;
  byte buflen = sizeof(byte);
  if (rfRx.recv((byte*) &buf, &buflen)) {
    Serial.print("Received: ");
    Serial.println(buf);
    if (buf == 1) digitalWrite(ledPin, HIGH);
    else if (buf == 0) digitalWrite(ledPin, LOW);
    else {
      Serial.println("Did not receive expected input");
    }
  }

}
