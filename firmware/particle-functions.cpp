# include "particle-functions.h"


void WeatherData :: message(int data)     // defined outside class definition
{
 Serial.print(data);
 Serial.println(" F - current Temperature");
}

void WeatherData :: weatherData()
    {
  
    Serial.print("Timestamp: "); Serial.println(weatherTime);
    Serial.print("Temp (F): "); Serial.println(greenhouseTemp);
    Serial.print("Humidity (%): "); Serial.println(greenhouseHumidity);

}

void WeatherData :: init()
{
 
}
 
