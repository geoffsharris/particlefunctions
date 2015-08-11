# include "particle-functions.h"
# include <application.h>


void Weatherdata :: message(int data)     // defined outside class definition
{
 Serial.print(data);
 Serial.println(" F - current Temperature");
}

void Weatherdata :: weatherData()
    {
  
    Serial.print("Timestamp: "); Serial.println(weather_time);
    Serial.print("Temp (F): "); Serial.println(GH_temp);
    Serial.print("Humidity (%): "); Serial.println(GH_humidity);

}


 
