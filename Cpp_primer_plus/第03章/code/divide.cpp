// Created by Sitao Zhu on 07/01/2024

#include <iostream>

int main()
{
  using namespace std;
  cout.setf(ios_base::fixed, ios_base::floatfield);// fixed-point
  cout << "Integer division: 9/5 = " << 9 / 5 << endl;
  cout << "Float-point division: 9.0/5.0 = ";
  cout << 9.0 / 5.0 << endl;
  cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
  cout << "double constants: 1e7/9.0 = ";
  cout << 1.e7 / 9.0 << endl;
  cout << "float constants: 1e7f/9.0f = ";
  cout << 1.e7 / 9.0f << endl;
  return 0;
}
