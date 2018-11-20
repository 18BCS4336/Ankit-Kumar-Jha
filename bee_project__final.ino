


void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
}

void loop() {
 int x=digitalRead(2);
    if(x==HIGH)
  {
    digitalWrite(3,HIGH);
    delay(100);
    digitalWrite(3,LOW);
    delay (100);
  }
  digitalWrite(3,LOW);
  // put your main code here, to run repeatedly:

}
