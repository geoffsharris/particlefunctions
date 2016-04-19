# include "weather.h"
# include <application.h>

WeatherData weatherstation; // creates weather object

void WeatherData :: message(int data)     // this is just for testing, can be removed later
{
 Serial.print("Timestamp: "); Serial.println(_weatherTime);
 Serial.print("Temp (F): "); Serial.println(_greenhouseTemp);
 Serial.print("Humidity (%): "); Serial.println(_greenhouseHumidity);
}

void WeatherData :: weatherData()
{
 _weatherTime = 0;
 _weatherTransmitTime = 0;
 _greenhouseTemp = 0;
 _greenhouseHumidity = 0;
 _backupGreenhouseTemp = 0;
 _backupGreenhouseHumidity = 0;
 _outsideTemp = 0;
 _outsideHumidity = 0;
 _solar = 0;
 _high = 0;
 _low = 0;
}

void WeatherData :: weatherData(unsigned int weatherTime, unsigned int weatherTransmitTime, int greenhouseTemp,int greenhouseHumidity,
                                int backupGreenhouseTemp, int backupGreenhouseHumidity,int outsideTemp, 
                                int outsideHumidity, int solar, int high, int low)
 {
 _weatherTime = weatherTime;
 _weatherTransmitTime = weatherTransmitTime;
 _greenhouseTemp = greenhouseTemp;
 _greenhouseHumidity = greenhouseHumidity;
 _backupGreenhouseTemp = backupGreenhouseTemp;
 _backupGreenhouseHumidity = backupGreenhouseHumidity;
 _outsideTemp = outsideTemp;
 _outsideHumidity = outsideHumidity;
 _solar = solar;
 _high = high;
 _low = low;
 }


unsigned int WeatherData :: weatherTime()
{
    return _weatherTime;
}

unsigned int WeatherData :: weatherTransmitTime()
{
    return _weatherTransmitTime;
}

int WeatherData :: greenhouseTemp()
{
    return _greenhouseTemp;
}

int WeatherData :: greenhouseHumidity()
{
    return _greenhouseHumidity;
}

int WeatherData :: backupGreenhouseTemp()
{
    return _backupGreenhouseTemp;
}

int WeatherData :: backupGreenhouseHumidity()
{
    return _backupGreenhouseHumidity;
}

int WeatherData :: outsideTemp()
{
    return _outsideTemp;
}

int WeatherData :: outsideHumidity()
{
    return _outsideHumidity;
}

int WeatherData :: solar()
{
    return _solar;
}

int WeatherData :: high()
{
    return _high;
}

int WeatherData :: low()
{
    return _low;
}
