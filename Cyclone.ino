#include "Cyclone.h"
 
void setupCyclone() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}
 
void updateCyclone() {
  if(PWM[2] > 1550) digitalWrite(A0, HIGH);
  else digitalWrite(A0, LOW);
  if(PWM[2] < 1400) digitalWrite(A2, HIGH);
  else digitalWrite(A2, LOW);
  if(PWM[1] > 1450) digitalWrite(A1, HIGH);
  else digitalWrite(A1, LOW);
}
