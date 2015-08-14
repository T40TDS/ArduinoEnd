#include <SoftwareSerial.h>
SoftwareSerial ard01Port(6,8);
// TX is 6, RX is 8; Secondary port for communicating with ARD01
void setup(){
  Serial.begin(9600);
  ard01Port.begin(9600);
}

void loop(){
  SendLCD("Testing boop boop");
}

//Implementations Remmaining:
//Communicate with PC
//Others; documented on paper
void SendGenericSerial(String message){
  ard01Port.print("BgSrMsg");
  delay(100);
  ard01Port.print("SERIAL-GSM");
  delay(100);
  ard01Port.print(message);
  delay(100);
  ard01Port.print("EndSrMsg");
}

void SendLCD(String message){
  ard01Port.print("BgSrMsg");
  delay(100);
  ard01Port.print("SERIAL-LCD");
  delay(100);
  ard01Port.print(message);
  delay(100);
  ard01Port.print("EndSrMsg");

}
