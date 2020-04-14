#include "ControllerReader.h"
 
void setupControllerReader() {
  CH[0] = 3;
  CH[1] = 5;
  CH[2] = 6;
  CH[3] = 9;
  CH[4] = 10;
  CH[5] = 11;
  
  for(int i = 0; i < channels; i++) {
      pinMode(CH[i], INPUT);
  }
}
 
void updateControllerReader() {
  
  //all
  //for(int i = 0; i < channels; i++) {
    //PWM[i] = pulseIn(CH[i], HIGH);
  //}


   //RIGHT SIDE
  PWM[0] = pulseIn(CH[0], HIGH);
  PWM[2] = pulseIn(CH[2], HIGH);
  PWM[1] = pulseIn(CH[1], HIGH);

  //LEFT SIDE
  PWM[3] = pulseIn(CH[3], HIGH);
  PWM[5] = pulseIn(CH[5], HIGH);
  
  //pwm 0 swa a
  //pwm 1 left stick horiz
  //pwm 2 swa a
  //pwm 3 right stick horiz
  //pwm 4 xxx
  //pwm 5 xxx
  //pwm 6

  //channel 1 = right stick horiz
  //channel 2 = right stick vert
  //channel 3 = left stick vert
  //channel 4 = left stick horiz
  //channel 5 = swa a
  //channel 6 = swa b
 //Serial.println(PWM[1]);
}
