// Create by Sitao Zhu on 07/01/2024

#include <iostream>
using namespace std;

double lightYearToUnit(double lightYear){
  return lightYear * 63240;
}

int main()
{
  double lightYear, Unit;
  cout << "Please enter a light year: ";
  cin >> lightYear;
  Unit = lightYearToUnit(lightYear);
  cout << "The " << lightYear << " light years have " << Unit << " Units." << endl;
  return 0;
}
