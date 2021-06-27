#include <Keypad.h>
const int ROWS = 4; //four rows
const int COLUMNS = 4; //four columns
char k [ROWS] [COLUMNS] = {{'1','2','3', 'A'}, {'4', '5', '6', '8'}, {'7', '8', '9', 'C'}, {'*', '0', '#', 'D'}};
byte rowpins[ROWS] = {2,3,4,5};
byte columnpins[COLUMNS] = {6,7,8,9};
Keypad x = Keypad( makeKeymap(k), rowpins, columnpins, ROWS, COLUMNS );
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
char key = x.getKey();
if (key){
Serial.println(key);

if (key=='2') {
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
}
else if (key== '8'){
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (13, HIGH);
}
else if (key== '4' ){
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);
  
}
else if (key== '6'){
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
}
}
}
