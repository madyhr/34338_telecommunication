int button = 13; // pin on ARDUINO
int ledRed = 11; // pin on ARDUINO

void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == false){
    // if button is pressed (false)
    digitalWrite(ledRed, HIGH);
    // then turn LED on.
  }
  else;
    // if button is not pressed, then let LED stay turned off. 
    digitalWrite(ledRed,LOW);
}


