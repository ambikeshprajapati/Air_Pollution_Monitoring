#include <LiquidCrystal.h>
int sensorValue;
const int rs = 7, en = A1, d4 = A2,d5 = A3, d6 = A4, d7 = A5;
const int buzzer=8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){  
lcd.begin(16, 2);
Serial.begin(9600);                          
}
void loop(){
sensorValue = analogRead(0);      
Serial.print("AirQua=");
Serial.print(sensorValue);              
Serial.println(" PPM");
if(sensorValue>400)
digitalWrite(buzzer,HIGH);
else
digitalWrite(buzzer,LOW);
lcd.setCursor(0,0);
lcd.print("ArQ=");
lcd.print(sensorValue);
lcd.print(" PPM");
lcd.println("       "); 
lcd.print("  ");
delay(100);                                
}
