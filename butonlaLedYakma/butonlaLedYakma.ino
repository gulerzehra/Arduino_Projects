const int ledPin=9;
const int buttonPin=10;

void setup() {
  pinMode(ledPin,OUTPUT);
  // pinMode(buttonPin,INPUT);
  pinMode(buttonPin,INPUT_PULLUP);
  //arduino'nun içindeki pullup direncini kullandım


}

void loop() {
  int deger = digitalRead(buttonPin);
  if(deger == HIGH)
  digitalWrite(ledPin,HIGH);
  else
  digitalWrite(ledPin,LOW);




}
