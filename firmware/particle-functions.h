#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <application.h>

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
 void init();
 // variables
 unsigned int weatherTime;
 int greenhouseTemp;
 int greenhouseHumidity;
 int backupGreenhouseTemp;
 int backupGreenhouseHumidity;
 int outsideTemp;
 int outsideHumidity;
 int solar;
 int high;
 int low;
 
 
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

int greenhouseData(String command);

#endif
