# include "particle-functions.h"
# include <application.h>

extern WeatherData weather;

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


int greenhouseData(String data)
    {
  

    //Expected parameters in CSV format
    // 1. Unix time stamp
    // 2. current greenhouse temperature
    // 3. current greenhouse humidity

    char copyStr[64];
    data.toCharArray(copyStr,64);
    char *p = strtok(copyStr, ",");

    weather.weatherTime = atoi(p);
    p = strtok(NULL,",");
    weather.greenhouseTemp = atoi(p);
    p = strtok(NULL,",");
    weather.greenhouseHumidity = atoi(p);



return 1;
}
 
