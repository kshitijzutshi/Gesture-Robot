
int x=0;
int y=0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  digitalWrite(2,HIGH);
Serial.begin(9600);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() 


{
 
  x=analogRead(A0);
  y=analogRead(A1);
  Serial.print("x is");
  Serial.println(x);
  Serial.print("\t");
  delay(1000);
  Serial.print("y is");
Serial.println(y);
    delay(1000);
  

}
