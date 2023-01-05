int ledGreen = 13;
int ledYellow = 12;
int ledRed = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // baud rate given in exercise
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  // counting from 0 to 7 in binary using 3 LEDS and changing their state to match
  // LEDS: RED - YELLOW - GREEN
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,LOW);
  Serial.println(0); 
  delay(1000);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,HIGH);
  Serial.println(1);
  delay(1000);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledRed,LOW);
  Serial.println(2);
  delay(1000);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledRed,HIGH);
  Serial.println(3);
  delay(1000);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,LOW);
  Serial.println(4);
  delay(1000);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,HIGH);
  Serial.println(5);
  delay(1000);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledRed,LOW);
  Serial.println(6);
  delay(1000);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledRed,HIGH);
  Serial.println(7);
  delay(1000);
  


}
