


const int groundpin = 18;             
const int powerpin = 19;              
const int xpin = A3;                 
const int ypin = A2;                 
const int zpin = A1;                  
int x;
int ma;
void setup()
{
  
  Serial.begin(9600);

  pinMode(groundpin, OUTPUT);
  pinMode(powerpin, OUTPUT);
  digitalWrite(groundpin, LOW);
  digitalWrite(powerpin, HIGH);
}

void loop()
{
  
  
  x=analogRead(xpin);
  ma=map(x,0,1023,0,255);
  Serial.println(ma);

  Serial.print("\t");

  delay(100);
}
