void setup() {
  // put your setup code here, to run once:
  pinMode (A0,INPUT);
  pinMode (A1, INPUT);
  pinMode (2, INPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(A0);
int y = analogRead(A1);
Serial.println(x);
Serial.println(y);
if (x<100){
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
 
}

else if (x>900) {
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);

}
 
else if (y<100){
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
}

else if (y>900){
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (13, HIGH);
}

else if ((450<y<550) && (450<x<550)) {
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW);
  digitalWrite (13, LOW); 
  
}

}
