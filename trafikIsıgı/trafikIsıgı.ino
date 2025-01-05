//ÇOK FAZLA IŞIK OLDUĞU İÇİN İSİMLENDİRME YAPARIZ

const int carRed = 10;
const int carYellow = 9;
const int carGreen = 8;

const int humanRed = 7;
const int humanGreen = 6;


void setup() {

  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(humanRed, OUTPUT);
  pinMode(humanGreen, OUTPUT);

}

void loop() {

  digitalWrite(humanGreen, HIGH);
  digitalWrite(carRed, HIGH);
  delay(5000);
  digitalWrite(humanGreen, LOW);
  digitalWrite(humanRed, HIGH);
  delay(1000);
  digitalWrite(humanRed, LOW);
  delay(1000);
  digitalWrite(humanRed, HIGH);
  delay(1000);
  digitalWrite(humanRed, LOW);
  delay(1000);
  digitalWrite(humanRed, HIGH);
  delay(3000);
  digitalWrite(carRed, LOW);
  digitalWrite(carGreen, HIGH);
  delay(10000);
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(3000);
  digitalWrite(carYellow, LOW);
  digitalWrite(humanRed, LOW);

}
