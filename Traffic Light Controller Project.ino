// Traffic Light Controller Project
int red = 13;
int yellow = 12;
int green = 11;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  // Red ON for 5 seconds
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
 // Yellow ON for 2 seconds
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
// Green ON for 5 seconds
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
}
