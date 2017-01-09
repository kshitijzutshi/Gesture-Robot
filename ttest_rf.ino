

int x=0;
 int y=0;
 int z=0;
void setup() {
 
 pinMode(1,OUTPUT);
   Serial.begin(9600);


}

void loop() {
  x= analogRead(A0); 
  Serial.print("x is=");
    Serial.println(x);
  y=x;
  delay(1000);
   z= analogRead(A0);
    Serial.println("z is=");
    Serial.print(z);
   delay(1000);
  if(y==z)
  {
 digitalWrite(1,HIGH);
 Serial.println("blink");
  }
  {
  if(y!=z)
 {
 digitalWrite(1,LOW);
Serial.println("off");
}
}
}
