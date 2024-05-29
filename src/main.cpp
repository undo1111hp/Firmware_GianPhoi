#include<Arduino.h>

const int PIN_MOTOR_CLOCKWISE = 4;                // D2
const int PIN_MOTOR_COUNTER_CLOCKWISE = 5;        // D1
const int PIN_BTN_UP = 14;                        // D5
const int PIN_BTN_DOWN = 12;                      // D6
const int PIN_HALL = 2;                            // D4

int count = 1;

bool buttonUpState() {
  if (digitalRead(PIN_BTN_UP) == 0) {
    Serial.println("[DEBUG] buttonUpState(): Going Up!");
    return 1;
  }
  return 0;
}

bool buttonDownState() {
  if (digitalRead(PIN_BTN_DOWN) == 0) {
    Serial.println("[DEBUG] buttonDownState(): Going Down!");
    return 1;
  }
  return 0;
}

void setMotorSpeed(bool dir, bool val) {

  // dir: direction of motor | 1 for clockwise, 0 for counter clockwise
  // val: value of speed | (currently 1 for on and 0 for 0)

  if (val == 1) {
    if (dir == 1) {
      digitalWrite(PIN_MOTOR_CLOCKWISE, 1);
      digitalWrite(PIN_MOTOR_COUNTER_CLOCKWISE, 0);
    }
    if (dir == 0) {
      digitalWrite(PIN_MOTOR_CLOCKWISE, 0);
      digitalWrite(PIN_MOTOR_COUNTER_CLOCKWISE, 1);
    }
  } else {
    digitalWrite(PIN_MOTOR_CLOCKWISE, 0);
    digitalWrite(PIN_MOTOR_COUNTER_CLOCKWISE, 0);
  }
}

void setup() {
  Serial.begin(9600);
  // wifi_set_sleep_type(MODEM_SLEEP_T);
  pinMode(PIN_MOTOR_CLOCKWISE, OUTPUT);
  pinMode(PIN_MOTOR_COUNTER_CLOCKWISE, OUTPUT);
  pinMode(PIN_BTN_UP, INPUT_PULLUP);
  pinMode(PIN_BTN_DOWN, INPUT_PULLUP);
  pinMode(PIN_HALL, INPUT_PULLUP);
}

void loop() {
  int sensed = digitalRead(PIN_HALL);
  int speed = (count * 6);
  speed = constrain(speed, 1, 191);
 
  if (buttonUpState() && buttonDownState()) {
    setMotorSpeed(0, 0);
  } else if(buttonUpState() && sensed == HIGH) {
    setMotorSpeed(0, 1);
  } else if(buttonDownState() && sensed == HIGH) {
    setMotorSpeed(1, 1);
  } else {
    setMotorSpeed(0, 0);
  }

}
