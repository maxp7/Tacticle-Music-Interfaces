


#include <CapacitiveSensor.h>

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2, 3);
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2, 4);
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2, 5);
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2, 6);
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2, 7);
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2, 8);
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2, 9);
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2, 10);
CapacitiveSensor   cs_2_11 = CapacitiveSensor(2, 11);
CapacitiveSensor   cs_2_12 = CapacitiveSensor(2, 12);


int buttonState1 = 0;
int lastButtonState1 = 0;

int buttonState2 = 0;
int lastButtonState2 = 0;

int buttonState3 = 0;
int lastButtonState3 = 0;

int buttonState4 = 0;
int lastButtonState4 = 0;

int buttonState5 = 0;
int lastButtonState5 = 0;

int buttonState6 = 0;
int lastButtonState6 = 0;

int buttonState7 = 0;
int lastButtonState7 = 0;

int buttonState8 = 0;
int lastButtonState8 = 0;

int buttonState9 = 0;
int lastButtonState9 = 0;

int buttonState10 = 0;
int lastButtonState10 = 0;

void setup()
{ 
  Serial.begin(256000);
  cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);  
  cs_2_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_7.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_9.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_10.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_11.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_12.set_CS_AutocaL_Millis(0xFFFFFFFF);  
}

void loop(){

  // Set the sensitivity of the sensors.
  long total1 =  cs_2_3.capacitiveSensor(15);
  long total2 =  cs_2_4.capacitiveSensor(15);
  long total3 =  cs_2_5.capacitiveSensor(15);
  long total4 =  cs_2_6.capacitiveSensor(15);
  long total5 =  cs_2_7.capacitiveSensor(15);
  long total6 =  cs_2_8.capacitiveSensor(15);
  long total7 =  cs_2_9.capacitiveSensor(15);
  long total8 =  cs_2_10.capacitiveSensor(15);
  long total9 =  cs_2_11.capacitiveSensor(15);
  long total10 =  cs_2_12.capacitiveSensor(15);

  if (total1 > 100) {
    buttonState1 = 1;
  } else {
    buttonState1 = 0;
  }
  if (total2 > 100) {
    buttonState2 = 1;
  } else {
    buttonState2 = 0;
  }
  if (total3 > 100) {
    buttonState3 = 1;
  } else {
    buttonState3 = 0;
  }
  if (total4 > 100) {
    buttonState4 = 1;
  } else {
    buttonState4 = 0;
  }
  if (total5 > 100) {
    buttonState5 = 1;
  } else {
    buttonState5 = 0;
  }
  if (total6 > 100) {
    buttonState6 = 1;
  } else {
    buttonState6 = 0;
  }
  if (total7 > 100) {
    buttonState7 = 1;
  } else {
    buttonState7 = 0;
  }
  if (total8 > 100) {
    buttonState8 = 1;
  } else {
    buttonState8 = 0;
  }
  if (total9 > 100) {
    buttonState9 = 1;
  } else {
    buttonState9 = 0;
  }
  if (total10 > 100) {
    buttonState10 = 1;
  } else {
    buttonState10 = 0;
  }


  if (buttonState1 != lastButtonState1) {
    if (buttonState1 == HIGH) {
      Serial.println(1);

    } else {
      Serial.println(0);
      
    }

  }
  lastButtonState1 = buttonState1;

  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == HIGH) {
      Serial.println(3);
    } else {
      Serial.println(2);
      
    }

  }
  lastButtonState2 = buttonState2;

  if (buttonState3 != lastButtonState3) {
    if (buttonState3 == HIGH) {
      Serial.println(5);
    } else {
      Serial.println(4);
     
    }

  }
  lastButtonState3 = buttonState3;

  if (buttonState4 != lastButtonState4) {
    if (buttonState4 == HIGH) {
      Serial.println(7);
    } else {
      Serial.println(6);
      
    }

  }
  lastButtonState4 = buttonState4;

  if (buttonState5 != lastButtonState5) {
    if (buttonState5 == HIGH) {
      Serial.println(9);
    } else {
      Serial.println(8);
     
    }

  }
  lastButtonState5 = buttonState5;

  if (buttonState6 != lastButtonState6) {
    if (buttonState6 == HIGH) {
      Serial.println(11);
    } 

  }
  lastButtonState6 = buttonState6;

  if (buttonState7 != lastButtonState7) {
    if (buttonState7 == HIGH) {
      Serial.println(13);
    } 

  }
  lastButtonState7 = buttonState7;

  if (buttonState8 != lastButtonState8) {
    if (buttonState8 == HIGH) {
      Serial.println(15);
    } 

  }
  lastButtonState8 = buttonState8;

  if (buttonState9 != lastButtonState9) {
    if (buttonState9 == HIGH) {
      Serial.println(17);
    } 

  }
  lastButtonState9 = buttonState9;

  if (buttonState10 != lastButtonState10) {
    if (buttonState10 == HIGH) {
      Serial.println(19);
    } 

  }
  lastButtonState10 = buttonState10;


}
