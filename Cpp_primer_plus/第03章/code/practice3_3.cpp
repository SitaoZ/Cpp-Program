// Created by Sitao Zhu on 09/01/2024

#include <iostream>
using namespace std;
const int degree2minute = 60;
const int minute2second = 60;

int main() 
{
  double degrees, minutes, seconds;

  cout << "Enter a latitude in degrees, minutes, seconds!" << endl; 
  cout << "First, enter the degrees:";
  cin >> degrees;
  cout << "Next, enter the minutes of arc:";
  cin >> minutes;
  cout << "Finally enter the seconds of arc:";
  cin >> seconds;

  double finalDegrees = degrees + minutes/degree2minute + seconds/degree2minute/minute2second;
  cout << degrees <<" degrees, " << minutes <<" minutes, " << seconds << " seconds = " << finalDegrees << " degrees " << endl;
  return 0;
}
