// Created by Sitzo Zhu on 16-01-2024

#include <iostream>

int main()
{
  using namespace std;
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name: \n";
  cin.getline(name, ArSize); // 读取整行
  cout << "Enter your favourite dessert:\n";
  cin.getline(dessert, ArSize); // 读取第二行
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
  return 0;
}

// getline 它通过换行符来确定行尾，但不保存换行符
