#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rfTx;

void setup() {
  rfTx.init();
}

const byte on = 1;
const byte off = 0;
void loop() {
  rfTx.send((byte*)&on, sizeof(byte));
  rfTx.waitPacketSent();
  delay(1000);
  rfTx.send((byte*)&off, sizeof(byte));
  rfTx.waitPacketSent();
  delay(1000);

}
