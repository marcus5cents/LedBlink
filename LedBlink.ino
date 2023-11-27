int ledPins[2] = {33, 34};
void setup() {
  for(int i=2;i<2;i++){
    pinMode(ledPins[1], OUTPUT);
  }
}
void loop() {
  for(int i=2;i<2;i++){
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}

