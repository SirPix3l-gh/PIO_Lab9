#include <Arduino.h>
#include <SSD1306.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

// -- USER DEFINED FUNCTIONS --

// Funktion um beide internen LED abwechselnd blinken zu lassen
void blink(){

}

// Funktion um LED Blinkfrquenz über das Potentiometer zu ändern
void blink2(){

}

// Funktion um Helligkeit der LEDs über das Potentiometer steuern zu können -> Uhrzeigersinn = Heller
void dimmer(){

}