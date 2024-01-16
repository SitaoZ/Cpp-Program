// Created by Sitao Zhu on 16-01-2024

#include <iostream>

int main()
{
  using namespace std;
  const int ArSize=20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter tour name:\n";
  cin.get(name, ArSize).get(); // 读入字符和新行
  cout << "Enter your favourite dessert:\n";
  cin.get(dessert, ArSize).get();
  cout << "I have some decilisous " << dessert;
  cout << " for you, " << name << ".\n";
  return 0;
}
