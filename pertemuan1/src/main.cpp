#include <Arduino.h>

// put function declarations here:
int LED1 = D0;
int LED4 = D1;
int LED2 = D2;
int LED3 = D3;
int LED5 = D6;
int LED6 = D7;
int LED7 = D5;
int LED8 = D8;


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
 pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}

void loop() {
digitalWrite(LED1, HIGH);
delay(40);
digitalWrite(LED1, LOW);

digitalWrite(LED3, HIGH);
delay(40);
digitalWrite(LED3, LOW);

digitalWrite(LED2, HIGH);
delay(40);
digitalWrite(LED2, LOW);

digitalWrite(LED4, HIGH);
delay(40);  
digitalWrite(LED4, LOW);

digitalWrite(LED5, HIGH);
delay(40); 
digitalWrite(LED5, LOW);

digitalWrite(LED6, HIGH);
delay(40); 
digitalWrite(LED6, LOW);

digitalWrite(LED7, HIGH);
delay(40);
digitalWrite(LED7, LOW);

digitalWrite(LED8, HIGH);
delay(40);
digitalWrite(LED8, LOW);



}

