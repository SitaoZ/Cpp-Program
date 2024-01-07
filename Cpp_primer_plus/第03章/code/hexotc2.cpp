/*
* Created by Sitao Zhu on 07/01/2024
* 展示十六进制和八进制数据
*/
#include <iostream>
using namespace std;

int main() 
{
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "Monsieur cuts a striking figure!" << endl;
  cout << "chest = " << chest << " (decimal for 42)" << endl;
  cout << hex; // 将十进制变成16进制
  cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
  cout << oct; // 将十进制转变成8进制
  cout << "inseam = " << inseam << " (octal for 42)" << endl;
  return 0;
}
