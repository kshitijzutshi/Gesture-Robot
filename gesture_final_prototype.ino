/*
  Gesture control prototype
  @author S Sachin
  Reads an analog input from ADLX 335 and gives the necessary output to H-bridge via rf module
  NOtE:??? represents unknown int values wich must be calibrated to get desired outputs
  This code has to be used considerin necessary pin configurations
 */
void setup()
{
 
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}



void loop() 
{
  if(analogRead (A1)>410 && analogRead(A1)<435) // for backward movement 
  {
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
     Serial.println("back");
    // delay(1000);
  }
  else
  {
    if(analogRead (A0)>275 &&analogRead(A0)<300 )// for left turn
    {
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      Serial.println("left");
     // delay(1000);
    }
    else
    {
      if(analogRead (A1)>265 && analogRead(A1)<305) // for forward
      {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
         Serial.print("forward = ");
         //Serial.println(A1);
         //delay(1000);
      }
      else
      {
        if(analogRead(A0)>410 &&analogRead (A0)<430)//for right turn
        {
          digitalWrite(8,HIGH);
          digitalWrite(9,LOW);
          digitalWrite(10,LOW);
          digitalWrite(11,HIGH);
          Serial.println("right");
         // delay(1000);
        }

        else
        {
          digitalWrite(8,HIGH);
          digitalWrite(9,HIGH);
          digitalWrite(10,HIGH);
          digitalWrite(11,HIGH);  
         Serial.println("stop");  //to keep it off
  // delay(1000);
      }
      }
    }
  }
}

