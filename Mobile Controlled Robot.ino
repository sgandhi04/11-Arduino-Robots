#define Q1 4
#define Q2 5
#define Q3 6
#define Q4 7

void setup() {
  // put your setup code here, to run once:
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode (Q1, INPUT);
  pinMode (Q2, INPUT);
  pinMode (Q3, INPUT);
  pinMode (Q4, INPUT);
  Serial.begin (9600);



}

void loop() {
  // put your main code here, to run repeatedly:

  int D0 = digitalRead(Q1);
  int D1 = digitalRead (Q2);
  int D2 = digitalRead (Q3);
  int D3 = digitalRead (Q4);
  if ((D0 == 0) && (D1 == 0) && (D2 == 1) && (D3 == 0)) {
    forward();
    Serial.println("Robot Move Forward");
  }
  if ((D0 == 0) && (D1 == 1) && (D2 == 1) && (D3 == 0)) {
    right();
    Serial.println("Robot Move Right");
  }
  if ((D0 == 0) && (D1 == 1) && (D2 == 0) && (D3 == 0)) {
    left();
    Serial.println("Robot Move Left");
  }
  if ((D0 == 0) && (D1 == 1) && (D2 == 0) && (D3 == 1)) {
    stoprobot();
    Serial.println("Stop");
  }
  if ((D0 == 1) && (D1 == 0) && (D2 == 0) && (D3 == 0)) {
    backward();
    Serial.println("Backward");
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
void stoprobot() {
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("stop");

}
void backward() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  Serial.println("stop");

}
