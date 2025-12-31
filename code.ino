#include //Includes the library to control an LCD (16x2). int moisture = 56; 
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  
//LCD can be connected to any of the Arduino pins 2–7  
void setup() { pinMode(A0, OUTPUT);  
//Used to power ON/OFF the moisture sensor 
pinMode(A1, INPUT); 
Serial.begin(9600); 
pinMode(8, OUTPUT);  
pinMode(11, OUTPUT); 
pinMode(12, OUTPUT); 
pinMode(13, OUTPUT); 
lcd.begin(16, 2);  
lcd.setCursor(0,0 
lcd.print("Moisture Level:");  
// Displays heading on LCD same as of c programming. } void loop{ digitalWrite(A0, 
HIGH);  
delay(10);  
moisture = analogRead(A1);  
// Read soil moisture value from 0–1023 
digitalWrite(A0, LOW);  
Serial.println(moisture);  
Serial Monitor. int MoisturePercentage = (moisture / 1023.0) * 100; 
//Converts the raw value into percentage (0–100%). 
Serial.print(MoisturePercentage);  
Serial.println("percent moisture");  
digitalWrite(8, LOW);  
digitalWrite(11, LOW); 
digitalWrite(12, LOW);  
lcd.setCursor(6,1);  
LCD. if (moisture < 150) { 
digitalWrite(12, HIGH); //Turns ON LED (or motor/pump). tone(13, 800, 6000); 
// Send 800 Hz sound signal for 6 seconds  
delay(7000);  
//Waits 7 seconds (so buzzer + LED remain ON). } else if(moisture < 600) { 
digitalWrite(11, HIGH); 
}  
else { digitalWrite(8, HIGH); } delay(1000)}
