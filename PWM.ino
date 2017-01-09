void setup()

{
pinMode(2,INPUT);// decoder
pinMode(4,INPUT);// decoder
pinMode(7,INPUT);// decoder
pinMode(12,INPUT);// decoder
pinMode(3,OUTPUT);//pwm
pinMode(11,OUTPUT);//pwm
pinMode(10,OUTPUT);//pwm
pinMode(9,OUTPUT);//pwm
Serial.begin(9600);

}

void loop() 
{
  
if(digitalRead(2)==HIGH && digitalRead(4)==LOW && digitalRead(7)==HIGH && digitalRead(12)==LOW)  //FORWARD
 
  {
    
    analogWrite(9,255);
    analogWrite(11,255);
    digitalWrite(10,LOW);
    digitalWrite(3,LOW);
    Serial.println("FORWARD");
  }
  
  else
  
  if(digitalRead(2)==LOW && digitalRead(4)==HIGH && digitalRead(7)==LOW && digitalRead(12)==HIGH)//BACKWARD
  
  {
    analogWrite(10,255);
    analogWrite(3,255);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
  Serial.println("BACK");
    
  }
   else
  if(digitalRead(2)==LOW && digitalRead(4)==LOW && digitalRead(7)==HIGH && digitalRead(12)==LOW)//left
  {
    analogWrite(10,200);
    analogWrite(11,200);
    digitalWrite(9,LOW);
    digitalWrite(3,LOW);  
     Serial.println("left");
  }
      
   else
  
  if(digitalRead(2)==HIGH && digitalRead(4)==LOW && digitalRead(7)==LOW && digitalRead(12)==HIGH)//righ
  {
  
   
    analogWrite(9,200);
    analogWrite(3,200);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
     Serial.println("right");
    
  }
  
    else
  
 {
   
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(11,HIGH);//STOP
     Serial.println("scop");
  }
}
