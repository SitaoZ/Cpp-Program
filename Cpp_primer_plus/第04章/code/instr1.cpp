// Created by Sitao Zhu on 15-01-2024

#include <iostream>
#include <string>

int main()
{
  using namespace std;
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name: \n";
  cin >> name;
  cout << "ENter your favorite dessert: \n";
  cin >> dessert;
  cout << "I have some decilious " << dessert ;
  cout << " for you, " << name << ".\n";
  return 0;
  
}
