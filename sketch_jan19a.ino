/*
  Gesture control prototype
  @author S Sachin
  Reads an analog input from ADLX 335 and gives the necessary output to H-bridge via rf module
  NOtE:??? represents unknown int values wich must be calibrated to get desired outputs
  This code has to be used considerin necessary pin configurations
 */
void setup()
{
 
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  
}



void loop() 
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(2000);
 
   digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(2000);
}
