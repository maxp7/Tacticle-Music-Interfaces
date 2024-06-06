#include <Button.h>


Button button1(2);
Button button2(3);
Button button3(4);
Button button4(5);
Button button5(6);
Button button6(7);


unsigned long start_time = 0;
unsigned long end_time = 0;
int steps = 0;
int steps_old = 0;
int temp = 0;


int speedState = 0;
int lastSpeedState = 0;


void setup()
{ 
  Serial.begin(256000);
  button1.begin();
  button2.begin();
  button3.begin();
  button4.begin();
  button5.begin();
  button6.begin();

  pinMode(10, INPUT);
}

void loop(){

 
  long start = millis();
  start_time = millis();
  end_time = start_time + 250;
  while (millis() < end_time)
  {
    if (digitalRead(10))
    {
      steps = steps + 1;
      ;
    }

  }
  temp = steps - steps_old;
  steps_old = steps;

  if (temp >= 1) {
    speedState = 1;

  } else {
    speedState = 0;
  }

  if (speedState != lastSpeedState) {

    if (speedState == HIGH) {
      Serial.println(40);
    } else {
      Serial.println(42);
    }
  }


  lastSpeedState = speedState;

  if (temp >= 1) {  
    if (button1.pressed())
    Serial.println(21);

  if (button1.released())
    Serial.println(20);

  if (button2.pressed())
    Serial.println(23);

  if (button2.released())
    Serial.println(22);

  if (button3.pressed())
    Serial.println(25);

  if (button3.released())
    Serial.println(24);

  if (button4.pressed())
    Serial.println(27);

  if (button4.released())
    Serial.println(26);

  if (button5.pressed())
    Serial.println(29);

  if (button5.released())
    Serial.println(28);

  if (button6.pressed())
    Serial.println(31);

  if (button6.released())
    Serial.println(30);

  }
  
  if (temp < 1) {  
    if (button1.pressed())
    Serial.println(20);

  if (button1.released())
    Serial.println(20);

  if (button2.pressed())
    Serial.println(22);

  if (button2.released())
    Serial.println(22);

  if (button3.pressed())
    Serial.println(24);

  if (button3.released())
    Serial.println(24);

  if (button4.pressed())
    Serial.println(26);

  if (button4.released())
    Serial.println(26);

  if (button5.pressed())
    Serial.println(28);

  if (button5.released())
    Serial.println(28);

  if (button6.pressed())
    Serial.println(30);

  if (button6.released())
    Serial.println(30);

  }


}
