// Created by Sitao Zhu on 08/01/2024

#include <iostream>

int main()
{
  using namespace std;
  cout.setf(ios_base::fixed, ios_base::floatfield);
  float tree = 3; // int 转变为 float
  int guess(3.9832); // double 转变成int
  int debt = 7.2E12; // 整型超出c++的范围, 程序编译会报错 warning: overflow in implicit constant conversion 
  cout << "tree = " << tree << endl;
  cout << "guess = " << guess << endl;
  cout << "debt = " << debt << endl;
  return 0;
}
