#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynksimpleEsp8266.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

char auth[] = “”;
char ssid[] = “”;
char pass[] = “”;

void setup() {
  pinMode (trig, OUTPUT);
  pinMode (echo, INPUT);
  pinMode (relay, OUTPUT);
  
  Wire.begin(D2, D1);
  
  lcd.init();
  lcd.backlight();
  
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(10L, Wlevel);
  
  digitalWrite(relay, HIGH);
}

void Wlevel() {

  if (pinValue == 1) { 
    digitalWrite(relay, LOW); 
    lcd.setCursor(0, 1); 
    lcd.print("Motor is ON "); 
  } 
  else if (pinValue == 0) { 
    digitalWrite(relay, HIGH); 
    lcd.setCursor(0, 1); 
    lcd.print("Motor is OFF"); 
  }
  
}

digitalWrite(trig, LOW);
delayMicroseconds (4); digitalWrite(trig, HIGH); delayMicroseconds (10);
digitalWrite(trig, LOW);

long t = pulseIn (echo, HIGH);
long cm = t / 29 / 2;
lcd.setCursor(0, 1); 
lcd.print("Water level is %f cm", cm); 
