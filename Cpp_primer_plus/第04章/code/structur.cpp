// structur.cpp 

#include <iostream>

struct inflatable // 结构声明
{
  char name[20];
  float volume;
  double price;

};

int main()
{
  using namespace std;
  inflatable guest = {
    "Glorious Gloria", // name value
    1.88, // volume value
    29.99 // price vaule
  };
  inflatable pal = {
    "Audacious Arthur",
    3.12,
    32.99
  };
  cout << "Expand your guest list with " << guest.name;
  cout << " and " << pal.name << "!\n";
  cout << "Your can have both for $";
  cout << guest.price + pal.price << "!\n";
  return 0;
}
