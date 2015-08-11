#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <application.h>

class WeatherData
{
 public:
 unsigned int weatherTime;
 int greenhouseTemp;
 int greenhouseHumidity;
 int outsideTemp;
 int outsideHumidity;
 int backupGreenhouseTemp;
 int backupGreenhouseHumidity;
 int high;
 int low;
 
 
 
 void message(int);
 void weatherData();
 void init();
  
};

#endif
