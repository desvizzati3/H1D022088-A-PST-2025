#include <Arduino.h>
#include <Wire.h>


int SDA_pin = D7;
int SCL_pin = D4;

void setup() {
  // put your setup code here, to run once:
 Wire.begin(SDA_pin, SCL_pin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 byte error, address;
 int nDevices;

 Serial.print("Scanning...\n");
 nDevices = 0;

 for(address = 1; address < 127; address++ ) {
   Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if(error==0){
      Serial.print("I2C terbaca pada alamat 0x");
      if(address<16){
        Serial.print("0");
      }
      Serial.print(address,HEX);
      Serial.print("  !\n");

      nDevices++;
    } else if(error==4) {
      Serial.print("Unknown error at address 0x");
      if(address<16){
        Serial.print("0");
      }
      Serial.print(address,HEX);
      
    }
 }
  if(nDevices == 0) {
      Serial.print("Tidak ada perangkat I2C ditemukan\n");
    } else {
      Serial.print("I2C perangkat ditemukan: ");
      Serial.print("\n");
    }

  delay(5000); // wait 5 seconds for next scan
}

