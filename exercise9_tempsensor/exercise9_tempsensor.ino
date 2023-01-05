

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);
  float voltage = sensorVal * (5.0/1023.0); // conversion from sensor reading in bits to voltage in mV
  float temp = ((voltage*1000)-500)/10; //conversion from mV to deg C, TMP36GZ has offset of 500mV
  Serial.print(voltage,1);Serial.println(" V");
  
  Serial.print(temp,1);Serial.println("°C");
  delay(1000);

}
