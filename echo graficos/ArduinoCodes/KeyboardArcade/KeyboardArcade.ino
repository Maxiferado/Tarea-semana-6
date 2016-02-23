#define KEY_UP 2
#define KEY_DOWN 8
#define KEY_LEFT 4
#define KEY_RIGHT 5
#define KEY_SPACE 6
#define KEY_Z 7

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(KEY_UP, INPUT_PULLUP);
  pinMode(KEY_DOWN, INPUT_PULLUP);
  pinMode(KEY_LEFT, INPUT_PULLUP);
  pinMode(KEY_RIGHT, INPUT_PULLUP);
  pinMode(KEY_SPACE, INPUT_PULLUP);
  pinMode(KEY_Z, INPUT_PULLUP);
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {

  if(digitalRead(KEY_UP) == LOW){
    Keyboard.press(KEY_UP_ARROW);
    Serial.println("KEY_UP PRESS");
  }
  else{
    Keyboard.release(KEY_UP_ARROW);
  }
  
  if(digitalRead(KEY_DOWN) == LOW){
    Keyboard.press(KEY_DOWN_ARROW);
  }
  else{
    Keyboard.release(KEY_DOWN_ARROW);
  }
  
  if(digitalRead(KEY_LEFT) == LOW){
    Keyboard.press(KEY_LEFT_ARROW);
  }
  else{
    Keyboard.release(KEY_LEFT_ARROW);
  }
  
  if(digitalRead(KEY_RIGHT) == LOW){
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  else{
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  
  if(digitalRead(KEY_SPACE) == LOW){
    Keyboard.press(' ');
  }
  else{
    Keyboard.release(' ');
  }

  if(digitalRead(KEY_Z) == LOW){
    Keyboard.press('z');
  }
  else{
    Keyboard.release('z');
  }

  delay(50);
}


//





