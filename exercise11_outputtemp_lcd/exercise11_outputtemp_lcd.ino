#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F, 16, 2);

//Parameters for moving average
const int numReadings  = 20;
float readings [numReadings];
int readIndex  = 0;
float total  = 0;

// Variables
int sensorVal  = 0;
int D1 = 11;
int D2 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  Serial.begin(115200);

  lcd.begin(); // intialize LCD display and turn on backlight
  lcd.backlight();
}



void loop() {
  readAnalogSmooth();
  Serial.print(F("ais avg : ")); Serial.println(smooth());
  delay(500);
  if (smooth() > 27){ // if moving avg of temperature, smooth(), is above critical level (i.e. 27)
    lcd.clear();
    lcd.print("WARNING!!!");
    delay(1000);
  }
}

void readAnalogSmooth( ) { /* function readAnalogSmooth */
  // Original code from https://stackoverflow.com/users/14002303/harsh-mittal @2023/01/05. 
  // with small edits such as parameter names, and conversion from voltage to temperature
  // and printing to an I2C LCD display
  sensorVal = analogRead(A0); 
  float voltage = sensorVal * (5.0/1023.0); // conversion from sensor reading in bits (2^10-1) to voltage in mV
  float temp = ((voltage*1000)-500)/10; //conversion from mV to deg C, TMP36GZ has offset of 500mV
  Serial.print(F("temp ")); Serial.println(temp);
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.setCursor(0,1);
  lcd.print(smooth());
  lcd.print(" degC");
  
}

float smooth() { /* function smooth */
  ////Perform average on sensor readings
  float average;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read the sensor:
  float voltage = analogRead(A0) * (5.0/1023.0); // conversion from sensor reading in bits (2^10-1) to voltage in mV
  float temp = ((voltage*1000)-500)/10; //conversion from mV to deg C, TMP36GZ has offset of 500mV
  readings[readIndex] = temp;
  // add value to total:
  total = total + readings[readIndex];
  // handle index
  readIndex = readIndex + 1;
  if (readIndex >= numReadings) {
    readIndex = 0;
  }
  // calculate the average:
  average = total / numReadings;

  return average;
}
