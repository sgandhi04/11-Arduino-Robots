void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int X = analogRead(A1);
  int Y = analogRead(A2);
  String result = "x:" + String(X) + "\ty:" + String(Y);
  Serial.println (result);

  if (X<=260) { //move left
    digitalWrite (10, HIGH);
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    digitalWrite (13, HIGH);
    
  }
   
   else if (Y>=370) { //move forward
    digitalWrite (10, HIGH);
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    digitalWrite (13, LOW);
    
  }
   else if (Y<=270) { //move backward
    digitalWrite (10, HIGH);
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    digitalWrite (13, LOW);
    
  }
    else if (X>=385) { //move right
    digitalWrite (10, HIGH);
    digitalWrite (11, HIGH);
    digitalWrite (12, HIGH);
    digitalWrite (13, LOW);
    
  }

    else if ((X>=330 && X<=340) && (Y>310 && Y<=350)){  //Don't move
    digitalWrite (10, HIGH);
    digitalWrite (11, HIGH);
    digitalWrite (12, HIGH);
    digitalWrite (13, LOW);
    
  }
  
  



}
