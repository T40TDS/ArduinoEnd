boolean portOpen = false;
int portType = -1;
/*portType index: -1 = unconfigured, 1 = generic serial message, 2 = lcd serial message*/
#include <LiquidCrystal.h>
void setup(){
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);

}

void loop(){
  scanSerial();

}

void scanSerial(){
  if(Serial.available()){
    delay(10);
    String input;
    
    while(Serial.available()>0){
      input += char(Serial.read());
    }
    processSerial(input);
  
  
  }
}

void processSerial(String message){
  if(portOpen = true && portType = 2){
    lcdWrite(message);
  }
  
  if(portOpen = true && portType = 1){
    #ProccessingInstructionsForGenericSerialMessage
  }
  
  if(portOpen = False){
    if(message.equals("BgSrMsg"){
      portOpen = true;
    }
  }
  
  if (portOpen = true && portType = -1){
      if(message.equals("SERIAL-GSM"){
        portType = 1;
      }
      if(message.equals("SERIAL-LCD"){
        portType = 2;
      }
  }

}

void lcdWrite(String message){
     char inputC[message.length()-1];
     for(int i = 0; i <= message.length()-1; i++){
      inputC[i] = input.charAt(i);
     }
             
     for(int i = 0; i <= message.length()-1; i++){
      lcd.write(inputC[i]); 
     }       


}
