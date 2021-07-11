// Change the pins according to your circuit
#define buttonGreen 13
#define buttonYellow 12
#define buttonRed 11
#define ledGreen 7
#define ledYellow 6
#define ledRed 5

void setup()
{
  // Buttons
  pinMode(buttonGreen, INPUT);
  pinMode(buttonYellow, INPUT);
  pinMode(buttonRed, INPUT);
  // LED
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}
void loop()
{
  int buttonGreenState = digitalRead(buttonGreen);
  int buttonYellowState = digitalRead(buttonYellow);
  int buttonRedState = digitalRead(buttonRed);
  
  if(buttonGreenState == HIGH) {
    digitalWrite(ledGreen, HIGH);
  }
  else {
    digitalWrite(ledGreen, LOW);
  }
  delay(10);
  
  if(buttonYellowState == HIGH) {
    digitalWrite(ledYellow, HIGH);
  }
  else {
    digitalWrite(ledYellow, LOW);
  }
  delay(10);
  
  if(buttonRedState == HIGH) {
    digitalWrite(ledRed, HIGH);
  }
  else {
    digitalWrite(ledRed, LOW);
  }
  delay(10);
}
