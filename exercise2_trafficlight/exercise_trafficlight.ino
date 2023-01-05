int ledGreen = 13;
int ledYellow = 12;
int ledRed = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledGreen,HIGH); // Green light on
  Serial.println("GO"); // Print "GO" on new line
  delay(4000);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,HIGH); // Yellow light on
  Serial.println("SLOW DOWN"); // Print "SLOW DOWN" on new line
  delay(2000);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,HIGH); // Red light on
  Serial.println("STOP"); // Print "STOP" on new line
  delay(4000);
  digitalWrite(ledRed,LOW);
}


