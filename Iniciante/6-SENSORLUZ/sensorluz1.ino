// C++ code
//
const int LED = 9;
const int LDR = A0;

int analogPhot = 0;

void setup()
{
  
  pinMode(LED,OUTPUT);
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}

void loop()
{
 
  analogPhot = analogRead(LDR);
  
  Serial.println(analogPhot);
  
  //analogWrite instead of digitalWrite because its not digital (i.e. 0 or 1)
  //gap of 923-26 by resistor of 
  analogWrite(LED,map(analogPhot,923,26,0,255));
  
  delay(100);
  
}