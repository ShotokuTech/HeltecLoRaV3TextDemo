
#include <Wire.h>  
#include "HT_SSD1306Wire.h"

SSD1306Wire  factory_display(0x3c, 500000, SDA_OLED, SCL_OLED, GEOMETRY_128_64, RST_OLED); // addr , freq , i2c group , resolution , rst

void VextON(void)
{
  pinMode(Vext,OUTPUT);
  digitalWrite(Vext, LOW);
}

void VextOFF(void) //Vext default OFF
{
  pinMode(Vext,OUTPUT);
  digitalWrite(Vext, HIGH);
}

void setup()
{
	Serial.begin(115200);
	VextON();
	delay(100);
	factory_display.init();
	factory_display.clear();
	factory_display.display();

	pinMode(LED ,OUTPUT);
	digitalWrite(LED, LOW);
}

void loop()
{
  factory_display.clear();
  factory_display.display();  
  factory_display.setFont(ArialMT_Plain_10);
  factory_display.drawString(0, 0, "012345678901234567890");
  factory_display.drawString(0, 10, "012345678901234567890");
  factory_display.drawString(0, 20, "012345678901234567890");
  factory_display.drawString(0, 30, "012345678901234567890");
  factory_display.drawString(0, 40, "012345678901234567890");
  factory_display.drawString(0, 50, "012345678901234567890");
  factory_display.display();
  delay(5000);
  factory_display.clear();
  factory_display.display();  
  factory_display.setFont(ArialMT_Plain_16);
  factory_display.drawString(0, 0, "01234567890123");
  factory_display.drawString(0, 16, "01234567890123");
  factory_display.drawString(0, 32, "01234567890123");
  factory_display.drawString(0, 48, "01234567890123");
  factory_display.display();
  delay(5000);  
  factory_display.clear();
  factory_display.display();  
  factory_display.setFont(ArialMT_Plain_24);
  factory_display.drawString(0, 0, "012345678901234567890");
  factory_display.drawString(0, 24, "012345678901234567890");
  factory_display.display();   
  delay(5000);
  factory_display.clear();
  factory_display.display();  
  factory_display.setFont(ArialMT_Plain_10);
  factory_display.setTextAlignment(TEXT_ALIGN_CENTER);
  factory_display.drawString(64, 0, "Current Reading");
  factory_display.setTextAlignment(TEXT_ALIGN_LEFT);
  factory_display.drawString(0, 10, "Sensor One");
  factory_display.setTextAlignment(TEXT_ALIGN_RIGHT);
  factory_display.drawString(128, 10, "1234.50");
  factory_display.setTextAlignment(TEXT_ALIGN_LEFT);
  factory_display.drawString(0, 20, "Sensor Two");
  factory_display.setTextAlignment(TEXT_ALIGN_RIGHT);
  factory_display.drawString(128, 20, "543.21");  
  factory_display.display();
  delay(5000);
  factory_display.clear();
  factory_display.display();       
  factory_display.setFont(ArialMT_Plain_10);
  factory_display.setTextAlignment(TEXT_ALIGN_LEFT);
  factory_display.drawStringMaxWidth(0, 0, 128,"I have been many years training in the Way of Strategy, called Ni Ten Ichi Ryu, and now I think I will explain it in writing for the first time." );
  factory_display.display();
  delay(5000);
}
