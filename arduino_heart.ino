void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); 

}

void loop() {
  for (int i=2; i<11; i++){
    digitalWrite(i, HIGH);
    delay(200);
  }
  delay(500);
  
  for(int i=2; i<11; i++){
    digitalWrite(i, LOW);
    delay(5);
    delay(500);
  }
}
