void setup() {
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int Sound = digitalRead(2);

  if (Sound == HIGH) {
    digitalWrite(8, HIGH);
    delay(2000);            
    digitalWrite(8, LOW);
  }
}
