int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
int buttonPin = 8;

int pedestrianRequest = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  int buttonState = digitalRead(buttonPin);
  int greenTime = 3000;
  int elapsed = 0;
  while (elapsed < greenTime)
  {
    if (digitalRead(buttonPin) == LOW)
    {
      pedestrianRequest = 1;
      break;
    }
    delay(50);
    elapsed += 50;
  }
  digitalWrite(greenPin, LOW);

  digitalWrite(yellowPin, HIGH);
  delay(1000);
  digitalWrite(yellowPin, LOW);

  digitalWrite(redPin, HIGH);
  if (pedestrianRequest == 1)
  {
    delay(3000);
    pedestrianRequest = 0;
  }
  else
  {
    delay(2000);
  digitalWrite(redPin, LOW);
}
