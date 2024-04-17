#include <Arduino.h>
#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rf_driver;

void setup(){
  Serial.begin(9600);
  if (!rf_driver.init()){
    Serial.println("init failed");
  }
}

void loop(){
  const char *msg = "len1";
  rf_driver.send((uint8_t *)msg, strlen(msg));
  rf_driver.waitPacketSent();
  Serial.print("Sent");
  delay(10000);
}
