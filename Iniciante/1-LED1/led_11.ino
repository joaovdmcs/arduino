// C++ code
//
#define PINO 13

void setup()
{
  pinMode(PINO, OUTPUT);
}

void loop()
{
  digitalWrite(PINO, HIGH);
  delay(1000); // Espera 1 segundo
  digitalWrite(PINO, LOW);
  delay(1000); // Espera 1 segundo e reset
}