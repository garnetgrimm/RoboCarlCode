#include "AudioPlayer.h"

void setupAudioPlayer() { 
  pinMode(A3, OUTPUT);
  digitalWrite(A3, 1032/2);
  delay(3000);
  digitalWrite(A3, LOW);
  delay(200);
  digitalWrite(A3, 1032/2);
  
}
void updateAudioPlayer() {
   //digitalWrite(2, HIGH);
}
