void setup()
{
  Serial.begin(9600);

  pinMode(A1, INPUT);
}

void loop()
{
  Serial.print("la temperatura es ");
  Serial.print(map(analogRead(A1), 0, 1023, -49.8, 449.6));
  Serial.println("grados");
  delay(1000); // Wait for 1000 millisecond(s)
}
