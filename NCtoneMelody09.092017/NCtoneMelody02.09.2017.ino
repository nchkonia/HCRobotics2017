// reference: https://www.arduino.cc/en/Tutorial/toneMelody
// includes frequencies for pitches
#include "pitches.h"

// melody variables for quick building

// the total number of notes that will be used in the melody
int numNotes = 10; 

int i = NOTE_D4;
int v = NOTE_A4;
int iii = NOTE_FS5;
int vii = NOTE_CS5;
int ix = NOTE_E6;

// array for the monotone-defined melody
int melody[] = {i, v, vii, iii, vii, v, i, v, vii, iii};

// array for the duration of each note in melody 
// durations: 1 = whole, 2 = half, etc.
int noteDurations[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 1};

void setup() {
  //iterates over melody:
  for (int noteCurr = 0; noteCurr < numNotes; noteCurr++){
    // note duration is one second dived by note type:
    // quarter note = 1000/4, eighth note = 1000/8, etc.
    int noteDuration = 1000/ noteDurations[noteCurr]; // indexes noteDurations accordingly
    
    // built-in tone function
    // tone( pin, frequency, duration)
    tone(8, melody[noteCurr], noteDuration);

    // pauses between notes
    // example suggests pause = note's duration + 30%
    int pauseBetweenNotes = noteDuration * 1.30;

    // built-in delay function
    delay(pauseBetweenNotes);

    // stopping the note
    // noTone(pin)
    noTone(8);  
  }
}
void loop() {
  // no need to repeat melody, unless there is a need, in which case there is
}
