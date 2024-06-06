
//Constants:
const int flexPin = A0; //pin A0 to read analog input

int state = 0;
int lastState = 0;
int stateValue = 0;

//Variables:
int value; //save analog value


void setup(){
  

  Serial.begin(19200);       

}

void loop(){
  
  value = analogRead(flexPin);        
  value = map(value, 700, 900, 0, 255);

    if (value > 0) {
    state = 1;
  } else {
    state = 0;
  }

    if (state != lastState) {
    if (state == 1) {
      Serial.println(1);

    } else {
      Serial.println(0);
      
    }

  }
  lastState = state;
  
  Serial.println((value));               //Print value
  delay(100);                          //Small delay
  
}
