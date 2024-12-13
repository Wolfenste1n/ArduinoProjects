// First code like an example for GitHub by Madiyar Kenzhebayev
// Simple traffic light logic
const int green = 7;
const int yellow = 8;
const int red = 12;
void blinkYellow() {
  for(int i = 0; i < 5; i++){
    digitalWrite(yellow, HIGH); 
    delay(100);
    digitalWrite(yellow, LOW); 
    delay(100);
  }
}
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}
void loop() {
  digitalWrite(red, HIGH); 
  digitalWrite(yellow, LOW); 
  digitalWrite(green, LOW); 
  delay(5000);
  blinkYellow();
  digitalWrite(red, LOW); 
  digitalWrite(yellow, LOW); 
  digitalWrite(green, HIGH); 
  delay(5000);
  blinkYellow();
}
