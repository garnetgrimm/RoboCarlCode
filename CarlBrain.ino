#include "AudioPlayer.h"
#include "MotorController.h"
#include "ControllerReader.h"
 
void setup() {
  Serial.begin(9600);
  setupControllerReader();
  setupMotorController();
  setupCyclone();
  setupAudioPlayer();
}

void loop() {
  updateAudioPlayer();
  updateControllerReader();
  updateMotorController();
  updateCyclone();
}

