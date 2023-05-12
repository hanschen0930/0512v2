/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/toneMelody
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G3 ,NOTE_A5, NOTE_B5, NOTE_C5,NOTE_D3,
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 8, 4, 4, 4, 8,
};
int ledPin[]={
  2,3,4,5,6,7,8,9
  };
int tonePin = 10;
int ledState;
void setup() {
  for (int thisLed = 0; thisLed <8 ; thisLed++){
     pinMode(ledPin[thisLed],OUTPUT);
    }
 
}

void loop() {
   for (int thisNote = 0; thisNote <sizeof(melody)/sizeof(melody[0]) ; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(tonePin, melody[thisNote], noteDuration); 
    
    if(melody[thisNote] == NOTE_D4){
       digitalWrite(ledPin[0],HIGH);
       ledState=ledPin[0];
      }else if (melody[thisNote] == NOTE_E4){
       digitalWrite(ledPin[1],HIGH);
       ledState=ledPin[1];
      }else if (melody[thisNote] == NOTE_F4){
       digitalWrite(ledPin[2],HIGH);
       ledState=ledPin[2];
      }else if (melody[thisNote] == NOTE_G3){
       digitalWrite(ledPin[3],HIGH);
       ledState=ledPin[3];
      }else if (melody[thisNote] == NOTE_A5){
       digitalWrite(ledPin[4],HIGH);
       ledState=ledPin[4];
      }else if (melody[thisNote] == NOTE_B5){
       digitalWrite(ledPin[5],HIGH);
       ledState=ledPin[5];
      }else if (melody[thisNote] == NOTE_C5){
       digitalWrite(ledPin[6],HIGH);
       ledState=ledPin[6];
      }else if (melody[thisNote] == NOTE_D3){
       digitalWrite(ledPin[7],HIGH);
       ledState=ledPin[7];
      }

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(tonePin);
    digitalWrite(ledState,LOW);
   }
    delay(200);
  }
