const int blueLed = 8;
const int redLed = 9;

void setup()
{
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void blueOn()
{ 
  digitalWrite(blueLed, HIGH);
}

void blueOff()
{
  digitalWrite(blueLed, LOW);
}

void redOn()
{
  digitalWrite(redLed, HIGH);
}

void redOff()
{
  digitalWrite(redLed, LOW);
}

void loop()
{
  int i;
  for (i = 0; i < 10; ++i)
  {
    blueOn();
    delay(50);
    blueOff();
    delay(50);
  }  
  
  for (i = 0; i < 10; ++i)
  {
    redOn();
    delay(50);
    redOff();
    delay(50);
  }
}

