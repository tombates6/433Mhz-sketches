#include <RH_ASK.h>
#include <SPI.h>
#include <Servo.h>
#define servoPin 3

Servo myServo;
RH_ASK rfRx;

void setup() {
  rfRx.init();
  myServo.attach(servoPin);
}

void loop() {
  byte buf;
  byte buflen = sizeof(byte);
  if(rfRx.recv((byte*)&buf, &buflen))myServo.write(buf);
}
