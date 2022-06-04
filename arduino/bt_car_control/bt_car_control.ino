int m1f = 8, m1b = 9, m2f = 10, m2b = 11;

int arr[] = {m1f, m1b, m2f, m2b};

void forward()
{
  digitalWrite(m1f, HIGH);
  digitalWrite(m2f, HIGH);
}

void backward()
{
  digitalWrite(m1b, HIGH);
  digitalWrite(m2b, HIGH);
}

void right()
{
  digitalWrite(m1f, HIGH);
  digitalWrite(m2f, LOW);
}

void left()
{
  digitalWrite(m1f, LOW);
  digitalWrite(m2f, HIGH);
}

void setup()
{
  for (int i = 0; i < 3; i++)
  {
    pinMode(arr[i], OUTPUT);
    digitalWrite(arr[i], LOW);
  }
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available())
  {
      char in = Serial.read();
      Serial.println(in);
  }

  digitalWrite(m2b, HIGH);
}