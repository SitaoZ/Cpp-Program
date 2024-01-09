// Created by Sitao Zhu on 09/01/2024

#include <iostream>

using namespace std;

const int hourPerDay = 24;
const int minutePerHour = 60;
const int secondPerMinute = 60;


int main()
{
  long seconds;
  cout << "Enter the numbers of seconds:";
  cin >> seconds;
  int second, minute, hour, day;
  
  int secondsPerDay = hourPerDay * minutePerHour * secondPerMinute;
  int secondsPerHour = minutePerHour * secondPerMinute;
  
  day = seconds / secondsPerDay;
  hour = (seconds % secondsPerDay) / secondsPerHour;
  minute = (seconds % secondsPerDay % secondsPerHour) / secondPerMinute;
  second = ((seconds % secondsPerDay) % secondsPerHour) % secondPerMinute;
  cout << seconds << " seconds = " 
       << day << " days, " 
       << hour << " hours, " 
       << minute << " minutes, " 
       << second << " seconds. " << endl;
  return 0;
  
}
