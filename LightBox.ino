#include "Volume.h" // Include the Volume library

Volume vol; // Plug your speaker into the default pin for your board type:
// https://github.com/connornishijima/arduino-volume#supported-pins

void setup() {
  vol.begin();
  
  vol.tone(5, 255); // 100% Volume
  vol.delay(5000);    // Wait for this fade to finish
}
void loop() {
//  byte volumes[4] = {255, 127, 12, 0};   // List of volumes: 100% Volume, 50% Volume, 5% Volume, 0% Volume
//  for (int i = 0; i < 4; i++) { // Iterate through volume list one second at a time
//    vol.tone(440, volumes[i]);
//    vol.delay(1000);
//  }
//
//  vol.tone(50, 255); // 100% Volume
//  vol.delay(5000);    // Wait for this fade to finish
}
