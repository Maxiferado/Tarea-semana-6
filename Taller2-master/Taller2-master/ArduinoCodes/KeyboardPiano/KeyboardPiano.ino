#define KEY_1 2
#define KEY_2 3
#define KEY_3 4
#define KEY_4 5
#define KEY_5 6
#define KEY_6 7

#define KEY_VALUE1 'q'
#define KEY_VALUE2 'w'
#define KEY_VALUE3 'e'
#define KEY_VALUE4 'r'
#define KEY_VALUE5 't'
#define KEY_VALUE6 'y'

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(KEY_1, INPUT_PULLUP);
  pinMode(KEY_2, INPUT_PULLUP);
  pinMode(KEY_3, INPUT_PULLUP);
  pinMode(KEY_4, INPUT_PULLUP);
  pinMode(KEY_5, INPUT_PULLUP);
  pinMode(KEY_6, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {

  if(digitalRead(KEY_1) == LOW){
    Keyboard.press(KEY_VALUE1);
  }
  else{
    Keyboard.release(KEY_VALUE1);
  }
  
  if(digitalRead(KEY_2) == LOW){
    Keyboard.press(KEY_VALUE2);
  }
  else{
    Keyboard.release(KEY_VALUE2);
  }
  
  if(digitalRead(KEY_3) == LOW){
    Keyboard.press(KEY_VALUE3);
  }
  else{
    Keyboard.release(KEY_VALUE3);
  }
  
  if(digitalRead(KEY_4) == LOW){
    Keyboard.press(KEY_VALUE4);
  }
  else{
    Keyboard.release(KEY_VALUE4);
  }
  
  if(digitalRead(KEY_5) == LOW){
    Keyboard.press(KEY_VALUE5);
  }
  else{
    Keyboard.release(KEY_VALUE5);
  }

  if(digitalRead(KEY_6) == LOW){
    Keyboard.press(KEY_VALUE6);
  }
  else{
    Keyboard.release(KEY_VALUE6);
  }

  delay(50);
}

