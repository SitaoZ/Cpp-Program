#include <iostream>
#include <cmath>

int main() 
{
  using namespace std;
  double area;        // 定义面积变量
  cout << "Enter the floor area, in square feet, of your home: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout << "That's the equivalent of a square " << side
       << " feet to side." << endl;
  cout << "How fascinating!" << endl;
  return 0;
}
