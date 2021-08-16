#include <KeyboardButton.h>

const int UpButton = 8;
const int DownButton = 9;
const int StartButton = 7;
const int SelectButton = 11;
const int GreenButton = 2;
const int RedButton = 3;
const int YellowButton = 4;
const int BlueButton = 5;
const int OrangeButton = 6;

void setup(){
   Serial.begin(9600);
   pinMode(UpButton, INPUT);
   pinMode(DownButton, INPUT);
   pinMode(StartButton, INPUT);
   pinMode(SelectButton, INPUT);
   pinMode(GreenButton, INPUT);
   pinMode(RedButton, INPUT);
   pinMode(YellowButton, INPUT);
   pinMode(BlueButton, INPUT);
   pinMode(OrangeButton, INPUT);
} 
void loop(){
   if(digitalRead(UpButton) == HIGH){
  Serial.println("Up:");
  delay(100);
   }
   if(digitalRead(DownButton) == HIGH){
  Serial.println("Down:");
  delay(100);
   }
   if(digitalRead(GreenButton) == HIGH){
  Serial.println("Green:");
  delay(100);
   }
   if(digitalRead(RedButton) == HIGH){
  Serial.println("Red:");
  delay(100);
   }
   if(digitalRead(YellowButton) == HIGH){
  Serial.println("Yellow:");
  delay(100);
   }
   if(digitalRead(BlueButton) == HIGH){
  Serial.println("Blue:");
  delay(100);
   }
   if(digitalRead(OrangeButton) == HIGH){
  Serial.println("Orange:");
  delay(100);
   }
   if(digitalRead(StartButton) == HIGH){
  Serial.println("Start:");
  delay(100);
   }
   if(digitalRead(SelectButton) == HIGH){
  Serial.println("Select:");
  delay(100);
   }
}
