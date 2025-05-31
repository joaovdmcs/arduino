// C++ code
//
#define led 3
#define minimo 0
#define maximo 255
#define tmp 10

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i = minimo; i < maximo; i++){
  	analogWrite(led,i);
    //digitalWrite(led,i);
    delay(tmp);
  }
  
  for(int j = maximo; j > minimo; j--){
  	analogWrite(led,j);
    //digitalWrite(led,j);
    delay(tmp);
  }
}