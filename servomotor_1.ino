/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 28 May 2015
  by Michael C. Miller
  modified 8 Nov 2013
  by Scott Fitzgerald

  http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#define switch D3
#define led D4
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  pinMode(D3,INPUT);
  pinMode(D4,OUTPUT);
  
  myservo.attach(D2);  // attaches the servo on GIO2 to the servo object
  Serial.begin(9600);
}

void loop() {
  boolean state;
  state=digitalRead(D3);
  digitalWrite(led,state);
 // digitalWrite (led,state);
  delay(500);
  int pos;
if(state == HIGH)
{
 
  for (pos = 0; pos <= 180; pos += 1)
  { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);
    Serial.print("pos value is ");
    Serial.println(pos);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position

  }
  for (pos = 180; pos >= 0; pos -= 1) 
  { // goes from 180 degrees to 0 degrees
    myservo.write(pos);
    Serial.print("pos value is :");
    Serial.println(pos);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
else{
  myservo.write(0);
}
  }
