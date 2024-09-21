// based on https://www.picmicrolab.com/7-segment-led-display-pcf8574-i2c-arduino/
// original design and sketch by Nicu FLORICA (niq_ro)

#include <Wire.h>
#define adresa 0x26


void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
}



void loop() {


  //----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0xd7);              // sends 1 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0xf7);              // sends 2 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0x07);              // sends 3 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0xf5);              // sends 4 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0xd5);              // sends 5 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0xc6);              // sends 6 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0x97);              // sends 7 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0xb3);              // sends 8 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0x06);              // sends 9 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0x77);              // sends 0 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
  Wire.beginTransmission(adresa); // transmit to PCF8574
  Wire.write(0x80);              // sends 0 to 7-Segment
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  //-----------------------------------------------------------------------
}
