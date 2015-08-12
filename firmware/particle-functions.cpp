# include "particle-functions.h"
# include <application.h>

void WeatherData :: message(int data)     // defined outside class definition
{
 Serial.print("Timestamp: "); Serial.println(_weatherTime);
 Serial.print("Temp (F): "); Serial.println(_greenhouseTemp);
 Serial.print("Humidity (%): "); Serial.println(_greenhouseHumidity);
}

void WeatherData :: weatherData()
{
    _weatherTime = 0;
 _greenhouseTemp = 0;
 _greenhouseHumidity = 0;
 _backupGreenhouseTemp = 0;
 _backupGreenhouseHumidity = 0;
 _outsideTemp = 0;
 _outsideHumidity = 0;
 _high = 0;
 _low = 0;
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
 Spark.function("ghData", greenhouseData);
}

int greenhouseData(String command)
{
    
}

 
