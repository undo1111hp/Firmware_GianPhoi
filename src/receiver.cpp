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
    uint8_t lenh[2];
    uint8_t buflen = sizeof(lenh);
    if (rf_driver.recv(lenh, &buflen)){
      if((char*)lenh == "l1"){
        // dong co 1 len;
        Serial.println("l1");
      }    
      if((char*)lenh == "l2"){
        // dong co 2 len;
        Serial.println("l2");
      }  
      if((char*)lenh == "x1"){
        // dong co 1 xuong;
        Serial.println("x1");
      }  
      if((char*)lenh == "x2"){
        // dong co 2 xuong;
        Serial.println("x2");
      }     
    }
}
