#include <Arduino.h>

int echoPin = D1;
int trigPin = D3;
int ledPin1 = D4;
int ledPin2 = D6;

// declare variable for time and distance
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //untuk menghitung waktu sinyal diterima
  duration = pulseIn(echoPin, HIGH);

  //menghitung jarak
  distance = duration * 0.034 / 2;

  if(distance<=100){
      digitalWrite(ledPin1, HIGH);
    } else {
      digitalWrite(ledPin2, LOW);
    }

  delay(1000);
}

