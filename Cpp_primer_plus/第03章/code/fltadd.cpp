// Created by Sitao Zhu on 07/01/2024

#include <iostream>

int main()
{
  using namespace std;
  float a = 2.34E+22f;
  float b = a + 1.0f;

  cout << "a = " << a << endl;
  cout << "b - a = " << b - a << endl; // 结果为0，因为float只表示小数点后6或7位，原先a小数点后面有23位，因此为0；
  return 0;
  
}
