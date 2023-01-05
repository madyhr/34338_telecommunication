int rgbRed = 8;
int rgbGreen = 10;
int rgbBlue = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(rgbRed, OUTPUT);
  pinMode(rgbGreen,OUTPUT);
  pinMode(rgbBlue,OUTPUT);
  pinMode(A0,INPUT); // potentiometer pin
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (3.3 / 1023.0); //conversion from digital sensor value to analog voltage
  Serial.println(voltage,3);
  // Conversion factor 255/2.3 is to convert to the RGB values interval 0-255, reaching 255 at 2.3V. 
  int b = floor(255/2.3 * voltage); //linear increase
  int r = floor(255 + 0.03*255/2.3*voltage*255/2.3*voltage -5.5*255/2.3*voltage); //parabolic function of voltage, found through experimentation/DESMOS
  int g = floor(-0.04*255/2.3*voltage*255/2.3*voltage + 10*255/2.3*voltage - 500);  //parabolic function of voltage, found through experimentation/DESMOS
  analogWrite(rgbRed,r);
  analogWrite(rgbBlue,b);
  analogWrite(rgbGreen,g);
}

