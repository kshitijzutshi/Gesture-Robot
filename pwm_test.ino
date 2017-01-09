void setup() {
 pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  analogWrite(5,64);
  Serial.println("half");
  delay(5000);
analogWrite(5,255);
Serial.println("full");
delay(5000);
}
