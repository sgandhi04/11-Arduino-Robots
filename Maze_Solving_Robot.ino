void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int Right = digitalRead(3);
  int Left = digitalRead(2);
  int Middle = digitalRead(1);
  Serial.println (Right);
  Serial.println (Left);
  Serial.println (Middle);

if ((Left==0) && (Middle==0) && (Right==1)) {
  left();
}
else if ((Left==0) && (Middle==1) && (Right==0)) {
  left();
}
else if ((Left==0) && (Middle==1) && (Right==1)) {
  left();
}
else if ((Left==1) && (Middle==0) && (Right==0)) {
  forward();
}
else if ((Left==1) && (Middle==0) && (Right==1)) {
  forward();
}
else if ((Left==1) && (Middle==1) && (Right==0)) {
  right();
}
else if ((Left==1) && (Middle==1) && (Right==1)) {
  right();
}
else if ((Left==0) && (Middle==0) && (Right==0)) {
  forward();
  delay(500);
  if  ((Left==1) && (Middle==0) && (Right==1)) {
  backward();
  delay(400);
  left();
}
else if ((Left==0) && (Middle==0) && (Right==0)) {
  stoprobot();
}
}
}
void forward() {
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (13, HIGH);
  Serial.println("forward");
}
void right() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  Serial.println("right");
}
void left() {
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  Serial.println("left");
}
void stoprobot(){
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("stoprobot");  
}
void backward() {
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
  Serial.println("backward");
}
  
