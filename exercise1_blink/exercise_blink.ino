String stringRead;
int dotDelay = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()){
    stringRead = Serial.readStringUntil('\n');
    int N = stringRead.length();
    BlinkString(stringRead,N);

  }


}

void BlinkString(String str, int N){
    // Traverse the string
    for (auto ch : str) {

      if (ch == 'A'){        
        digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
        delay(dotDelay);                      // wait for a second
        digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
      }
       if (ch == 'B'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
        delay(dotDelay);                      // wait for a second
        digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
        delay(dotDelay);                      // wait for a second
        digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
        delay(dotDelay);                      // wait for a second
        digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
        delay(dotDelay);
        }                 // wait for a second
        if (ch == 'C'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        }
         if (ch == 'D'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
         }
         if (ch == 'E'){        
        digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
        delay(dotDelay);                      // wait for a second
        digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
        delay(dotDelay);
        }
         if (ch == 'F'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        }
         if (ch == 'G'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'H'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'I'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'J'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'K'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'L'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'M'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'N'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
        
         if (ch == 'O'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'P'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'Q'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'R'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'S'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'T'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        }
         if (ch == 'U'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'V'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'W'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'X'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'Y'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}
         if (ch == 'Z'){        
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay*3);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(dotDelay);
        digitalWrite(LED_BUILTIN, LOW);
        delay(dotDelay);}

    }
}


