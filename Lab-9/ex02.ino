void setup()
{
  pinMode(9, OUTPUT);
}

int brightness = 0;
int fadeAmount = 5;

void loop()
{
  analogWrite(9, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255)
  {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
