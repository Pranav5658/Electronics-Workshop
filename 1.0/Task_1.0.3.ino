bool led = LOW;
bool pButton = HIGH;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(11, OUTPUT);

  digitalWrite(11, LOW);
}

void loop() {
  bool cButton = digitalRead(2);

  if (pButton == LOW && cButton == HIGH) {
    if(led == LOW){
      led = HIGH;
    }else{
      led = LOW;
    }
     
    digitalWrite(11, led);
    delay(50);                       
  }

  pButton = cButton;
}

