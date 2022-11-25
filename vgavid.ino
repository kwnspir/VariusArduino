#include <Adafruit_GFX.h>  // include Adafruit graphics library
#include "VGA.h"           // include VGA library
 
// initialize the VGA library
VGA display = VGA();
String c="";

void setup(void) {
  Serial.begin(115200);
  display.begin();
  display.delay(5000);     // wait 5 seconds
  display.clearDisplay();  // clear the screen buffer
  display.setTextSize(1);
  display.setTextColor(WHITE);
  
}
 
void loop() {
  display.clearDisplay();
  //display.println("Hello World !!!");
  display.println(analogRead(A0));
  if(Serial.available()){
    c=Serial.readString();
  }else{
    c="Debug";  
  }
  display.println(c);
  //display.println("erert23");
  display.delay(250);
}
