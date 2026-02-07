float Distance, Duration;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(8, LOW);
  delayMicroseconds(2);
  digitalWrite(8, HIGH);
  delayMicroseconds(10);
  digitalWrite(8, LOW);

  Duration = pulseIn(9, HIGH, 30000);
  Distance = (Duration*0.343)/20;

  if(Duration == 0)
  {
    Serial.println("No Object Detected");
  }
  else
  {
    Serial.println(Duration);
    Serial.println(Distance);

  }
  
  delay(500);
}

