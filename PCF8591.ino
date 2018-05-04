//#include "Arduino.h"
#include "PCF8591.h"
#define PCF8591_I2C_ADDRESS 0x48

PCF8591 pcf8591(PCF8591_I2C_ADDRESS);

void setup()
{
	Serial.begin(9600);
	pcf8591.begin();
}

void loop()
{
	PCF8591::AnalogInput ai = pcf8591.analogReadAll();
	Serial.print(ai.ain0);
	Serial.print(" - ");
	Serial.print(ai.ain1);
	Serial.print(" - ");
	Serial.print(ai.ain2);
	Serial.print(" - ");
	Serial.println(ai.ain3);
  pcf8591.analogWrite(ai.ain0);
  //delay(300);
}
