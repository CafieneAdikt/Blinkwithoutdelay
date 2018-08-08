/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
*/

#include <Arduino.h> // to let the editor know what platform you are using


unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(13, OUTPUT);
}

void loop() {

  // set variable that stores the current time
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // change the state of the led to opposite of previous state 
    digitalWrite(13, !digitalRead(13));
  }
} //end loop