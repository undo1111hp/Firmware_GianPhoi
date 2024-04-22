#include <Arduino.h>

int motor_p = 4;
int motor_n = 5;
int button = 14;

void setup(){	
    pinMode(motor_p, OUTPUT);
    pinMode(motor_n, OUTPUT);
    pinMode(button, INPUT_PULLUP);
}
void loop(){
    if(digitalRead(button) == HIGH){
    digitalWrite(motor_p, LOW);
    digitalWrite(motor_n, HIGH); 
    delay(1000);
    }
    if(digitalRead(button) == LOW){
    digitalWrite(motor_p, LOW);
    digitalWrite(motor_n, LOW); 
    delay(1000);
    }
}

