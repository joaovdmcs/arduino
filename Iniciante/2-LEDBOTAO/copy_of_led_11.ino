// C++ code
//
#define LED 13
#define BOTAO 2

int butState = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop()
{
  butState = digitalRead(BOTAO);
  if (butState == HIGH) digitalWrite(LED,HIGH);
  else digitalWrite(LED,LOW);
  
  delay(10);
}