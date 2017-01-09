
const int ap1 = A0; 
const int ap2 = A1;
int sv1 = 0;        
int ov1 = 0;    
int sv2 = 0;      
int ov2= 0;  
void setup()
{
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop() 
{
  analogReference(EXTERNAL);    //connect 3.3v to AREF
  // read the analog in value:
  sv1 = analogRead(ap1);            
   ov1 = map(sv1, 0, 1023, 0, 255);  
  delay(2);                     
  sv2 = analogRead(ap2);            
 ov2 = map(sv2, 0, 1023, 0, 255); 
    delay(2);                 

  Serial.print("Xsensor1 = " );                       
  Serial.print(sv1);      
  Serial.print("\t output1 = ");      
  Serial.println(ov1);   

  Serial.print("Ysensor2 = " );                       
  Serial.print(sv2);      
  Serial.print("\t output2 = ");      
  Serial.println(ov2);   

  if(analogRead(ap1)<514 &&analogRead (ap2)<463) // for backward movement 
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
  }
  else
  {
    if(analogRead(ap1)<486 &&analogRead (ap2)>508) // for left turn
    {
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
    }
    else
    {
      if(analogRead(ap1)>512 &&analogRead (ap2)>560) // for forward
      {
        digitalWrite(13,LOW);
        digitalWrite(12,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(10,HIGH);
      }
      else
      {
        if(analogRead(ap1)>550 &&analogRead (ap2)>512)//for right turn
        {
          digitalWrite(13,HIGH);
          digitalWrite(12,LOW);
          digitalWrite(11,LOW);
          digitalWrite(10,HIGH);
        }

        else
        {
          digitalWrite(13,HIGH);
          digitalWrite(12,HIGH);
          digitalWrite(11,HIGH);
          digitalWrite(10,HIGH);
        }
      }
    }
  }
}

