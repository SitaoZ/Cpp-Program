// Created by Sitzo Zhu on 07/01/2024

#include <iostream>

int main() 
{
  using namespace std;
  char ch = 'M';
  int i = ch; 
  cout "The ASCII code for " << ch << " is " << i << endl;

  cout << "Add one to the character code: " << endl;
  ch = ch + 1;
  i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  // 使用cout.pu展示字符
  cout << "Displaying char ch using cout.put(ch): ";
  cout.put(ch);

  // 使用cout.pu展示字符常量
  cout.put('!');
  cout << endl << "Done" << endl;
  return 0;
}
