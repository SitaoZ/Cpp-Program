/*
* Created by Sitao Zhu on 16-01-2024
* 
*/

#include <iostream>
#include <string>
#include <cstring>

int main() 
{
  using namespace std;
  char charr1[20];
  char charr2[20] = "jaguar";
  string str1;
  string str2 = "panther";

  // 声明对象并赋值
  str1 = str2; // string方法
  strcpy(charr1, charr2); // C风格

  // 追加
  str1 += " paste"; // string方法
  strcat(charr1, " juice"); // C风格

  // 大小
  int len1 = str1.size(); // string方法
  int len2 = strlen(charr1); // C风格

  // 输出
  cout << "The string " << str1 << " contains "
       << len1 << " characters.\n";
  cout << "The string " << charr1 << " contains " 
       << len2 << " characters.\n";
  return 0;
  
  
}
