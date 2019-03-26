void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  for(int i=1;i<=5;i++)
  {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
   for(int i=1;i<=5;i++)
  {
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(13,LOW);
    delay(2000);
  }
}
