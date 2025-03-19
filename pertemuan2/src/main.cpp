#include <Arduino.h>

//declare variabel
int echoPin = D1;
int trigPin = D3;
int ledPin = D0;

//declare variabel untuk menampung waktu dan jarak
long duration;
int distance;


void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
 

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

  //displat serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  //set LED berdasarkan kondisi
    if(distance<=10){
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }

    delay(1000);
}

