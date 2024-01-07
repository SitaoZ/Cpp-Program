// Created by Sitao Zhu on 07/01/2024

#include <iostream>
using namespace std;

void timestamp(int hour, int minute){
  cout << hour << ":" << minute << endl;
}

int main() 
{
  int hour, minute;
  cout << "Enter the number of hours: ";
  cin >> hour;
  cout << "Enter the number of minute: ";
  cin >> minute;
  timestamp(hour, minute);
  return 0;
}
