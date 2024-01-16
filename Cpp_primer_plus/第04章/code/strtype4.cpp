/*
* Created by Sitao Zhu on 16-01-2024
*/

#include <iostream>
#include <string>
#include <cstring>

int main()
{
  using namespace std;
  char charr[20];
  string str;

  cout << "Length of string in charr before input:\n"
       << strlen(charr) << endl;
  cout << "Length of string in str before input:\n"
       << str.size() << endl;
  cout << "Enter a line of text:\n";
  cin.getline(charr, 20); // 读取一行，指定最大长度
  cout << "You entered: " << charr << endl;
  cout << "Enter another line of text:\n";
  getline(cin, str); // cin作为参数，不指定长度
  cout << "You entered: " << str << endl;

  cout << "The length of string in charr after input: "
       << strlen(charr) << endl;
  cout << "The length of string in str after input: "
       << str.size() << endl;
  return 0;
  
}
