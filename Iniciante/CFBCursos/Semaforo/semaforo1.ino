// C++ code
//

#define LED_VERDE 10 //variavel (uso variavel para calculos) vs #define
#define LED_AMARELO 9
#define LED_VERMELHO 8

void setup()
{
  pinMode(LED_VERMELHO,OUTPUT);
  pinMode(LED_AMARELO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);

}

void vermelho(int tmp){
  digitalWrite(LED_VERMELHO,HIGH);
  digitalWrite(LED_AMARELO,LOW);
  digitalWrite(LED_VERDE,LOW);
  delay(tmp);
}

void verde(int tmp){
  digitalWrite(LED_VERMELHO,LOW);
  digitalWrite(LED_AMARELO,LOW);
  digitalWrite(LED_VERDE,HIGH);
  delay(tmp);
}

void amarelo(int tmp){
  digitalWrite(LED_VERMELHO,LOW);
  digitalWrite(LED_AMARELO,HIGH);
  digitalWrite(LED_VERDE,LOW);
  delay(tmp);
}


void loop()
{
 
 vermelho(7000);
 
 verde(9000);
  
 amarelo(2000);
  
}