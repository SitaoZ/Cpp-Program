// Created by Sitao Zhu on 07/01/2024

#include <iostream>
using namespace std;

double celsiusTofahrenheit(double cent){
  return 1.8 * cent + 32.0;
}

int main ()
{
  double celsius, fahrenheit;
  cout << "Please enter a Celsius value: ";
  cin >> celsius;
  fahrenheit = celsiusTofahrenheit(celsius);
  cout << "The Celsius " << celsius << " is " << fahrenheit << " fahrenheit." << endl;
  return 0;
}
