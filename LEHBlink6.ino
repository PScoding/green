/*
  Blink
  Turns on an LED on for one second, then off for one second, repeated

  This code is adapted from the example in the public domain, 
  with reference to Grove shield for Arduino
  by Mrs Stewart & Mr Smeaton LEH

  Hardware stup - attach a single colour LED to a Grove module attached to D6
 */


  // the setup function runs once when you press reset or power the board
  
void setup() {
  
  pinMode(6, OUTPUT);   // initialize pin D6 on the Grove shield as an output.
}

// the loop function runs over and over again forever

void loop() {
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
