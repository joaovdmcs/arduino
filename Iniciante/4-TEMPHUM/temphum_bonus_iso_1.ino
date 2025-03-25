// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
}

void loop()
{
	int valorSensor = analogRead(A0);
  	
  
  	//Conversion of 10bit analog reading to volts (Should be 1023-1024, but 1020 returns more precise temp.)
  	float voltSensor = (5.0/1020.0) * valorSensor;
  	//Conversion of volts to celsius
  	float temp = (voltSensor - 0.5) * 100;
  
  	int valorHum = analogRead(A1);
  	//Mapping of analog reading from potenciometer input to 0-100 percentage of humidity.
  	float hum = map(valorHum,1023,0,0,100);
 
  	
  	Serial.print("Temperatura: ");
  	Serial.println(temp);
  	Serial.print("Humidade: ");
  	Serial.println(hum);
  
  	if(temp > 24 || temp < 22) Serial.println("Fora do padrao 23+-1C de Temperatura.");
	if(hum > 52 || hum < 48) Serial.println("Fora do padrao 50+-2% de RH.");
  	
  	delay(1000);
  	
}