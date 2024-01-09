// Created by Sitao Zhu on 09/01/2024

#include <iostream>
using namespace std;

const int foot2inch = 12;
const float inch2meter = 0.0254;
const float kg2pounds = 2.2;

double calBMI(double height, double weight){
  double bmi ;
  bmi = weight/(height*height);
  return bmi;
}

int main()
{
  double foot, inch, pounds;
  cout << "Entnr your height in foot: __\b\b";
  cin >> foot;
  cout << "Enter your height in inch: __\b\b";
  cin >> inch;
  cout << "Enter your weight in pounds: __\b\b";
  cin >> pounds;
  
  double height, weight;
  // 装换单位
  height = (foot*12 + inch)/inch2meter;
  weight = pounds/kg2pounds;
  double bmi = calBMI(height, weight);
  cout << "Your BMI index is: " << bmi << endl;
  return 0;
}
