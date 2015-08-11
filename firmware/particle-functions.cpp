# include "particle-functions.h"


void WeatherData :: message(int data)     // defined outside class definition
{
 Serial.print("Timestamp: "); Serial.println(weatherTime);
 Serial.print("Temp (F): "); Serial.println(greenhouseTemp);
 Serial.print("Humidity (%): "); Serial.println(greenhouseHumidity);
}

void WeatherData :: weatherData(unsigned int weatherTime, int greenhouseTemp,int greenhouseHumidity,
                                int backupGreenhouseTemp, int backupGreenhouseHumidity,int outsideTemp, 
                                int outsideHumidity, int high, int low)
 {
 _weatherTime = weatherTime;
 _greenhouseTemp = greenhouseTemp;
 _greenhouseHumidity = greenhouseHumidity;
 _backupGreenhouseTemp = backupGreenhouseTemp;
 _backupGreenhouseHumidity = backupGreenhouseHumidity;
 _outsideTemp = outsideTemp;
 _outsideHumidity = outsideHumidity;
 _high = high;
 _low = low;
 }

void WeatherData :: init()
{
 
}
 
