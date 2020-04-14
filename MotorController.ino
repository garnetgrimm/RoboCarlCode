#include "MotorController.h"
#include "ControllerReader.h"

void setupMotorController() { 
  leftMotor.attach(10);
  rightMotor.attach(7);
}

void updateMotorController() {
  //pwm 0 = horizontal
  //pwm 1 = verterical
  //val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)

  // 
  if(PWM[3] != 0 && PWM[5] != 0) {
    xval = map(PWM[3] - 1080, 0, 780, 0, 180);     // scale it to use it with the servo (value between 0 and 180)    
    Rval = map(PWM[5] - 1100, 0, 800, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
    Lval = map(PWM[5] - 1100, 0, 800, 0, 180);     // scale it to use it with the servo (value between 0 and 180)

    if(xval > 90+15 || xval < 90-15) {
        Lval = 180-xval;
        Rval = xval;
    }

  } else {
    xval = 90;
    Rval = 90;
    Lval = 90;
  }
  

  leftMotor.write(Lval);                  // sets the servo position according to the scaled value
  rightMotor.write(Rval);                  // sets the servo position according to the scaled value

  Serial.print(PWM[0]);
  Serial.print(", ");
  Serial.print(PWM[1]);
  Serial.print(", ");
  Serial.print(PWM[2]);
  Serial.print(", ");
  Serial.print(PWM[3]);
  Serial.print(", ");
  Serial.print(PWM[5]);
  Serial.print(", ");
  Serial.print(xval);
  Serial.print(", ");
  Serial.print(yval);
  Serial.print(", ");
  Serial.print(Lval);
  Serial.print(", ");
  Serial.print(Rval);
  Serial.print("\n");

  delay(15);  
}

