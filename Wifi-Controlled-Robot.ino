#include <SoftwareSerial.h>
String ssid = "Chakra View";
String password = "peace and quiet";
SoftwareSerial wifi (8, 9);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  wifi.begin(115200);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  sendat("AT+RST\r\n", 5000);
  sendat("AT+CWMODE=1\r\n", 5000);
  sendat("AT+CWJAP=\"" + ssid + "\",\"" + password + "\"\r\n", 5000);

  delay(1000);
  sendat("AT+CIPMUX=1\r\n", 5000);
  sendat("AT+CIPSERVER=1,80\r\n", 5000);
  sendat("AT+CIFSR\r\n", 5000);
  


}

void loop() {
  // put your main code here, to run repeatedly:

}

String sendat(String command, const int timeout)
{
  String response = "";
  wifi.print(command);
  long int time = millis();
  while ( (time + timeout) > millis())
  {
    while (wifi.available())
    {
      char c = wifi.read();
      response += c;
    }
  }

  Serial.print(response);

  return response;
}
