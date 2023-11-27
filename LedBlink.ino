int ledPins[2] = {33, 34};
void setup() {
  for(int i=2;i<2;i++){
    pinMode(ledPins[1], OUTPUT);
  }
}
void loop() {
  digitalWrite(ledPins[0], HIGH);
  delay(500);
  digitalWrite(ledPins[0], LOW;
  digitalWrite(ledPins[1], HIGH);
  delay(500);
  digitalWrite(ledPins[1], LOW;
}

