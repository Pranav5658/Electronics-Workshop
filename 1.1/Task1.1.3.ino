void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH){
    Serial.println("Motion");
  }
  else{
    Serial.println("No motion");
  }
  delay(500);
}
