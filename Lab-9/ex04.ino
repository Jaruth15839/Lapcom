void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

int a = 0;

void loop()
{
  a = analogRead(A0);
  Serial.println(a);
  if (a > 512)
  {
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }
  delay(50);
}
