void setup() {
  Serial.begin(9600);  
  pinMode(A0, INPUT);  
}

void loop() {

  int LDR = analogRead(A0);   
  Serial.println(LDR);
  delay(100);
  
}

