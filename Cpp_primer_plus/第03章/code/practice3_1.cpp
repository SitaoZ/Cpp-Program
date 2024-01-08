// Create by Sitao Zhu on 08/01/2024

#include <iostream>
using namespace std;

const int foot2inch = 12;

int main() 
{
  int height = 0;
  cout << "Please enter your height in inch: __\b\b";
  cin >> height;

  int foot = height / foot2inch;
  float inch = height % foot2inch;
  cout << "Your height in inch is: " << height 
         << "; transforming in foot and inch is: " 
         << foot << " foot "
         << inch << " inch." << endl;

    return 0;
}
