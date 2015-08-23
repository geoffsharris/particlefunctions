#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <application.h>

// setup class to hold weather data and functions to get data
// load information by calling weatherData() and passing variables
// get data by calling vaious functions to return data values
// no need to initialize object in main portion of program
// should set up object named "weather" to call for information - example weather.greenhouseTemp();
// will return current greenhouse temeprature

class WeatherData
{
 public:
 // constructors
 void weatherData();
 void weatherData(unsigned int weatherTime, int greenhouseTemp,int greenhouseHumidity,
                  int backupGreenhouseTemp, int backupGreenhouseHumidity,int outsideTemp,
                  int outsideHumidity, int solar, int high, int low);
 // methods 
 void message(int);
 unsigned int weatherTime();
 int greenhouseTemp();
 int greenhouseHumidity();
 int backupGreenhouseTemp();
 int backupGreenhouseHumidity();
 int outsideTemp();
 int outsideHumidity();
 int solar();
 int high();
 int low();
 
 // variables
 unsigned int m_weatherTime;
 int m_greenhouseTemp;
 int m_greenhouseHumidity;
 int m_backupGreenhouseTemp;
 int m_backupGreenhouseHumidity;
 int m_outsideTemp;
 int m_outsideHumidity;
 int m_solar;
 int m_high;
 int m_low;
 
 
// private:
 unsigned int _weatherTime;
 int _greenhouseTemp;
 int _greenhouseHumidity;
 int _backupGreenhouseTemp;
 int _backupGreenhouseHumidity;
 int _outsideTemp;
 int _outsideHumidity;
 int _solar;
 int _high;
 int _low;
  
};
extern WeatherData weather;

#endif
