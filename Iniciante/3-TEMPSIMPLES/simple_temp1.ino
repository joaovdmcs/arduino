// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
	int valorSensor = analogRead(A0);
  	
  
  	//Conversion of 10bit analog reading to volts
  	float voltSensor = (5.0/1024.0) * valorSensor;
  	//Conversion of volts to celsius
  	float temp = (voltSensor - 0.5) * 100;
  
  	
  	Serial.print("Temperatura: ");
  	Serial.println(temp);
  
  	
  	delay(500);
  	
}