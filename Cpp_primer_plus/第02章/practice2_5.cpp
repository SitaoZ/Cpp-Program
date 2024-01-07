// Created by Sitao Zhu on 07/01/2024

#include <iostream>
using namespace std;

double centigradeTofahrenheit(double cent){
  return 1.8 * cent + 32.0;
}

int main ()
{
  double centigrade, fahrenheit;
  cout << "Please enter the centigrade: ";
  cin >> centigrade;
  fahrenheit = centigradeTofahrenheit(centigrade);
  cout << "The centigrade " << centigrade << " is " << fahrenheit << " fahrenheit." << endl;
  return 0;
}
