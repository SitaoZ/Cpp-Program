// Created by Sitao Zhu on 08/01/2024

#include <iostream>
int main() {
  using namespace std;
  int auks, bats, coots;
  // 下面的声明使用的double,然后将结果转化成int
  auks = 19.99 + 11.99;

  // 类型转化
  bats = (int) 19.99 + (int) 11.99; // old C syntax
  coots = int (19.99) + int (11.99); // new C++ syntax
  cout << "auks = " << auks << ", bats = " << bats;
  cout << ", coots = " << coots <<endl;

  char ch = 'Z';
  cout << "The code for " << ch << " is ";
  cout << int(ch) << endl;
  cout << "Yes, the code is ";
  cout << static_cast<int>(ch) << endl; // 使用 static_cast
  return 0;
}
