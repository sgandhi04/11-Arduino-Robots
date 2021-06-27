boolean firedetected=false;
void setup() {
  // put your setup code here, to run once:
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
int M = digitalRead(5);
int L = digitalRead(4);
int R = digitalRead(6);
Serial.println (M);
Serial.println (L);
Serial.println (R);
if (L ==0 && R==0  && M ==0){
digitalWrite (10, HIGH);
digitalWrite (11, HIGH);
digitalWrite (12, HIGH);
digitalWrite (13, HIGH);
}
if (M==1){
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
digitalWrite (12, HIGH);
digitalWrite (13, LOW);
firedetected=true;
}
else if (L==1){
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
digitalWrite (12, HIGH);
digitalWrite (13, HIGH);
firedetected=true;
}
else if (R==1){
digitalWrite (10, HIGH);
digitalWrite (11, HIGH);
digitalWrite (12, HIGH);
digitalWrite (13, LOW);
firedetected=true;
}
delay(500);
if (firedetected==true){
delay(2000);
digitalWrite (10, HIGH);
digitalWrite (11, HIGH);
digitalWrite (12, HIGH);
digitalWrite (13, HIGH);
digitalWrite (2, HIGH);
digitalWrite (3, LOW);
delay(1000);
digitalWrite (2, HIGH);
digitalWrite (3, HIGH);
firedetected=false;


}
}
