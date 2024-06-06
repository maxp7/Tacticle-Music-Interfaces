#include "Buttons.h"

//------Notes-------------
#define NOTE_ONE 72
#define NOTE_TWO 75
#define NOTE_THREE 76
#define NOTE_FOUR 77
#define NOTE_FIVE 79


#define NOTE_ON_CMD 0x90
#define NOTE_OFF_CMD 0x80
#define MAX_MIDI_VELOCITY 127

//------------------------

int NUMBER_BUTTONS = 6;

Button Button1(2, 28);
Button Button2(3, 29);
Button Button3(4, 35);
Button Button4(5, 36);
Button Button5(6, 38);
Button Button6(7, 49);


Button *Buttons[] {&Button1, &Button2, &Button3, &Button4, &Button5, &Button6};



void setup() {
  Serial.begin(9600);


}

void loop() {



  if (NUMBER_BUTTONS != 0) {
    updateButtons();

  }
}

void updateButtons() {

  for (int i = 0; i < NUMBER_BUTTONS; i++) {
    int state = Buttons[i]->getButtonState();

    //  Button is pressed
    if (state == 0)
    {
      midiNoteOn(Buttons[i]->Note, 127);
      delay(50);
    }

    //  Button is not pressed
    if (state == 1)
    {
      midiNoteOff(Buttons[i]->Note, 0);
    }
  }

}



// Send MIDI note ON
void midiNoteOn(byte note, byte midiVelocity)
{
  Serial.write(NOTE_ON_CMD);
  Serial.write(note);
  Serial.write(midiVelocity);
}

//Send MIDI note OFF
void midiNoteOff(byte note, byte midiVelocity)
{
  Serial.write(NOTE_OFF_CMD);
  Serial.write(note);
  Serial.write(midiVelocity);
}
