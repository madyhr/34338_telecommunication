// libraries for reading comma delimited string
// pins for components
int rgbRed = 8;
int rgbGreen = 10;
int rgbBlue = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(rgbRed,OUTPUT);
  pinMode(rgbGreen,OUTPUT);
  pinMode(rgbBlue,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  if (Serial.available()){
      String myString = Serial.readStringUntil('\n');
      int commaIndex = myString.indexOf(',');
      //  Search for the next comma just after the first
      int secondCommaIndex = myString.indexOf(',', commaIndex + 1);
      String firstValue = myString.substring(0, commaIndex);
      String secondValue = myString.substring(commaIndex + 1, secondCommaIndex);
      String thirdValue = myString.substring(secondCommaIndex + 1); // To the end of the string
      int r = firstValue.toInt();
      int g = secondValue.toInt();
      int b = thirdValue.toInt();
      
      analogWrite(rgbRed, r);
      analogWrite(rgbGreen, g);
      analogWrite(rgbBlue, b);


  }
}
