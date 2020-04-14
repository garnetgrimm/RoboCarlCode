#ifndef ControllerReader
#define ControllerReader

#define channels 6

byte CH [channels];
int PWM [channels];

void setupControllerReader();
void updateControllerReader();

#endif
