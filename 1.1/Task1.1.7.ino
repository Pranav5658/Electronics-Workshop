#include <DHT.h>

const int DHT11_Pin = 4;
const int Time_Delay = 2000;

float Humidity, Temperature;

DHT My_DHT11(DHT11_Pin, DHT11);

void setup() 
{
  Serial.begin(9600);

  My_DHT11.begin();
}

void loop() 
{
  Humidity = My_DHT11.readHumidity();
  Temperature = My_DHT11.readTemperature();

  if(isnan(Humidity) || isnan(Temperature))
  {
    Serial.println("Reading Failed");
  }
  else
  {
    Serial.print("Humidty : ");
    Serial.print(Humidity);
    Serial.print("%, Temperature : ");
    Serial.print(Temperature);
    Serial.println("°C"); 
  }
    
  delay(Time_Delay);
}
