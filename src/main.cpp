#include <Arduino.h>

int motor_p = 4; // D2
int motor_n = 5; // D1
int button_left = 14; // D5
int button_right = 12; // D6
int count = 1;

void setup(){	
    pinMode(motor_p, OUTPUT);
    pinMode(motor_n, OUTPUT);
    pinMode(button_left, INPUT_PULLUP);
    pinMode(button_right, INPUT_PULLUP);
}
void loop(){
    int speed = (count*6);
    constrain(speed, 1, 191);
    if(digitalRead(button_left) == HIGH && digitalRead(button_right) == LOW){
    analogWrite(motor_p, LOW);
    analogWrite(motor_n, speed); 
    count++;
    delay(100);
    }
    if(digitalRead(button_left) == LOW && digitalRead(button_right) == HIGH){
    analogWrite(motor_p, LOW);
    analogWrite(motor_n, speed); 
    count++;
    delay(100);
    }
    if(digitalRead(button_left) == HIGH && digitalRead(button_right) == HIGH){
    analogWrite(motor_p, LOW);
    analogWrite(motor_n, LOW); 
    count = 1;
    delay(100);
    }
    if(digitalRead(button_left) == LOW && digitalRead(button_right) == LOW){
    analogWrite(motor_p, LOW);
    analogWrite(motor_n, LOW); 
    count = 1;
    delay(100);
    }
}

