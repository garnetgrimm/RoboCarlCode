#ifndef MotorController
#define MotorController

#include <Servo.h>

Servo rightMotor;
Servo leftMotor;
int xval;
int yval;
int Rval;
int Lval;

void setupMotorController();
void updateMotorController();

#endif 
