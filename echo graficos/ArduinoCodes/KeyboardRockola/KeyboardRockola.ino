#include <TimerOne.h>

#define KEY_1 11
#define KEY_2 12
#define LEDSTRIP 9

#define KEY_VALUE1 KEY_F8
#define KEY_VALUE2 KEY_F9

volatile boolean blinkStrip = false;
volatile boolean stripState = false; // false if off and true is on
boolean keypress = false;


void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(KEY_1, INPUT_PULLUP);
  pinMode(KEY_2, INPUT_PULLUP);
  pinMode(LEDSTRIP,OUTPUT);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(blinkStripHandler); // blink a LED strip every 1 seconds
  Keyboard.begin();
}

void blinkStripHandler(void){
  if(blinkStrip == true){
    if(stripState == true){
      digitalWrite(LEDSTRIP,LOW);
      stripState = false;
    }
    else{
      digitalWrite(LEDSTRIP,HIGH);
      stripState = true; 
    }
  }
}


void loop() {

  keypress = false;
  
  if(digitalRead(KEY_1) == LOW){
    Keyboard.press(KEY_VALUE1);
    keypress = true;
  }
  else{
    Keyboard.release(KEY_VALUE1);
  }
  
  if(digitalRead(KEY_2) == LOW){
    Keyboard.press(KEY_VALUE2);
    keypress = true;
  }
  else{
    Keyboard.release(KEY_VALUE2);
  }

  if(keypress){
    noInterrupts();
    blinkStrip = false;
    interrupts();
    digitalWrite(LEDSTRIP,HIGH);
    stripState = true;
  }
  else{
      noInterrupts();
      blinkStrip = true;
      interrupts();
  }
  
  delay(50);
}

//
