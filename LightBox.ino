
#include "Volume3.h" // Import the magic juju

#define speakerPin 9 // Connect a speaker from Pin 9 to GND

bool useVol = true; // Are we using volume envelopes?
byte noteCount = 0; // Keeps track of notes played so far

unsigned int scale[9] = {131, 165, 196, 262, 330, 392, 523, 659, 784}; // C Major scale in 3 octaves
byte lastNote = 255; // Stores the last note played

void setup() {
  // Nothing needed here!
}

void loop() {

  int volume = 1023;
  int frequency = 5;
  vol.tone(speakerPin,frequency, volume);
  delay(5000);

}
//  byte note = random(0, 9); // Pick a random note from the scale array
//
//  while (note == lastNote) { // We don't want repeat notes, try again until we find a new one
//    note = random(0, 9);
//  }
//
//  int frequency = scale[note]; // Set tone frequency based on the note we picked
//  int volume = 1023; // Start volume at full 10-bit 1023 value
//
//  if (useVol == true) {
//    // Play the note, and fade it out quickly
//    while (volume > 0) {
//      vol.tone(speakerPin, frequency, volume);
//      volume -= 10;
//      delay(2);
//    }
//  }
//  else {
//    vol.tone(speakerPin, frequency, 1023); // Just use max volume here
//    delay(110);
//    vol.noTone();
//    delay(110);
//  }
//
//  noteCount++;
//  if (noteCount % 20 == 0) { // If we've played 20 notes, switch between tone modes
//    useVol = !useVol;
//  }
//
//  lastNote = note; // Remember the note we picked for next run
//}

//#include "Volume.h" // Include the Volume library
//
//Volume vol; // Plug your speaker into the default pin for your board type:
//// https://github.com/connornishijima/arduino-volume#supported-pins
//
//void setup() {
//  vol.begin();
//  
//  vol.tone(2, 255); // 100% Volume
//  vol.delay(5000);    // Wait for this fade to finish
//}
//void loop() {
////  byte volumes[4] = {255, 127, 12, 0};   // List of volumes: 100% Volume, 50% Volume, 5% Volume, 0% Volume
////  for (int i = 0; i < 4; i++) { // Iterate through volume list one second at a time
////    vol.tone(440, volumes[i]);
////    vol.delay(1000);
////  }
////
////  vol.tone(50, 255); // 100% Volume
////  vol.delay(5000);    // Wait for this fade to finish
//}
