void setup()
{
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (digitalRead(4) == HIGH) {
    digitalWrite(2, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(2, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
