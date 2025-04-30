#include <Arduino.h>
#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(D1);

}

void loop() {,
 myservo.write(180); // tell servo to go to position in variable 'pos'
 delay(2000);
 myservo.write(0); // tell servo to go to position in variable 'pos'
 delay(2000);
 myservo.write(180); // tell servo to go to position in variable 'pos'
 delay(2000);



 for(int pos = 0; pos <=180; pos++){
  myservo.write(pos); // tell servo to go to position in variable 'pos'
  delay(10); // waits 15ms for the servo to reach the position
 }
 for(int pos=180; pos>=0; pos--){
  myservo.write(pos);
  delay(10);
 }
}


