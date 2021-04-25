#define buttonGreen pin1
#define buttonYellow pin2
#define buttonRed pin3
#define ledGreen pin4
#define ledYellow pin5
#define ledRed pin6

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
  
  if(buttonGreenState == HIGH){digitalWrite(ledGreen, HIGH);}
  else{digitalWrite(ledGreen, LOW);}
  delay(10);
  
  if(buttonYellowState == HIGH){digitalWrite(ledYellow, HIGH);}
  else{digitalWrite(ledYellow, LOW);}
  delay(10);
  
  if(buttonRedState == HIGH){digitalWrite(ledRed, HIGH);}
  else{digitalWrite(ledRed, LOW);}
  delay(10);
}
