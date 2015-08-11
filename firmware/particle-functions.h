#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <application.h>

class WeatherData
{
 public:
 unsigned int weatherTime;
 int greenhouseTemp;
 int greenhouseHumidity;
 int backupGreenhouseTemp;
 int backupGreenhouseHumidity;
 int outsideTemp;
 int outsideHumidity;
 int high;
 int low;
 
 
 
 void message(int);
 void weatherData(unsigned int, int, int,int,int,int,int,int,int);
 void init();
  
};

#endif
