#include <SoftwareSerial.h>
SoftwareSerial bt (0, 1);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(13, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);




}

void loop() {
  // put your main code here, to run repeatedly:
  if (bt.available()) {
    char bob = bt.read();
    Serial.println(bob);
    if (bob == 'f') {
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);


    }
    else if (bob == 'b') {
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);


    }
    else if (bob == 'r') {
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);


    }
    else if (bob == 'r') {
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);


    }



  }


}
