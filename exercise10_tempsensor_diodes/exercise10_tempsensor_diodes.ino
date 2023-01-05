// setting up pins
int ledGreen = 12;
int ledYellow = 10;
int ledRed = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledGreen,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(A0);
  float voltage = sensorVal * (5.0/1023.0); // conversion from sensor reading in bits (2^10-1) to voltage in mV
  float temp = ((voltage*1000)-500)/10; //conversion from mV to deg C, TMP36GZ has offset of 500mV
  int tempint = ceil(temp); // conversion as switch case only compares two integers
  switch(tempint){
    case 25 ... 27: // if temp is between 25 and 27 deg C, then show yellow
      digitalWrite(ledGreen,LOW);
      digitalWrite(ledYellow,HIGH);
      digitalWrite(ledRed,LOW);
      break;
    case 28 ... 50: //if temp is between 28 and 50, then show red
      digitalWrite(ledGreen,LOW);
      digitalWrite(ledYellow,LOW);
      digitalWrite(ledRed,HIGH);
      break;
    default: // if temp is not above 25, then show green
      digitalWrite(ledGreen,HIGH);
      digitalWrite(ledYellow,LOW);
      digitalWrite(ledRed,LOW);
      break;

  }
  Serial.print(temp,1);Serial.println("°C");
  delay(500); //delay to avoid flickering of LEDs
}
