// registering pins for LEDS on breadboard
int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int led5 = 11;

void setup() {
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    char ch = Serial.read();
    switch (ch){
      case 97: // if input is 'a'
        digitalWrite(led1,HIGH);
      break;
      case 98: // if input is 'b'
        digitalWrite(led2,HIGH);
      break;
      case 99: // if input is 'c'
        digitalWrite(led3,HIGH);
      break;
      case 100: // if input is 'd'
        digitalWrite(led4,HIGH);
      break;
      case 101: // if input is 'e'
        digitalWrite(led5,HIGH);
      break;
      default: // if input is anything else
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        digitalWrite(led4,LOW);
        digitalWrite(led5,LOW);
      break;

    }
  }
}


