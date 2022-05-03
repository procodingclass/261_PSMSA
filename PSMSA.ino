#include <ESP32Servo.h>

const byte servo_pin = 27;
const byte pot_pin = 26;

Servo servo;

void setup(){

  Serial.begin(115200);
  servo.attach(servo_pin);
  servo.write(0);
  delay(1000);
}

void loop(){

  int pot = analogRead(pot_pin);
  int angle = map(pot , 0 , 4095 , 0 , 180);
  servo.write(angle);

  //  for better working of simulator
  delay(10);
}