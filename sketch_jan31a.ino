
#define BLYNK_PRINT SwSerial
#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10, 11);
#include <BlynkSimpleStream.h>
char auth[] = "2e73bf0a03b64bbebf5529d3a31f9264";
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  SwSerial.begin(9600);
  Blynk.begin(Serial, auth);
}
void loop() 
{ 
  int temp = analogRead(A0);
  temp = temp * 0.48828125;
  if(temp>=35)
  {
   digitalWrite(3,HIGH);
  }
  else
  {
   digitalWrite(3,HIGH);
  }
  Blynk.virtualWrite(V0,temp);
  delay(500);
  Blynk.run();
}
