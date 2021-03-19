int BUTTONstate1 = 0;

int BUTTONstate2 = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  BUTTONstate1 = digitalRead(2);
  if (BUTTONstate1 == HIGH) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  BUTTONstate2 = digitalRead(4);
  if (BUTTONstate2 == HIGH) {
    digitalWrite(12, LOW);
  } else {
    digitalWrite(12, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}