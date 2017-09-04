/*
 * Hugo Vargas
 * 4/sep/2017
 * 
 * Simple way to change password and name of an hc05 bluetooth
 * module.
 */

//Libraries
#include <SoftwareSerial.h>//Serial library

//Objects
SoftwareSerial BT1(4,5); // RX, TX

//Variables
int vel = 9600;//Communication speed

void setup()
{
  Serial.begin(vel);//Start serial monitor
  Serial.println("Settin up:");

  BT1.begin(vel);//Start blueooth comunication

  delay (1000);//Wait...
  BT1.print("AT+PIN");//Change pin code
  BT1.print("0420");//New pin

  delay(1000);//..for it
  BT1.print("AT+NAMET");//Chance name code  
  BT1.print("New-Name");//New name
}

void loop ()
{
  delay(1000);//Do nothing else
}


