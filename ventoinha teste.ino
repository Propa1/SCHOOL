const int ventoinha = 15;

void setup() {
  pinMode(ventoinha, OUTPUT);
}

void loop() {
  digitalWrite(ventoinha, HIGH);
  delay(5000);
  digitalWrite(ventoinha, LOW);
  delay(5000);
}