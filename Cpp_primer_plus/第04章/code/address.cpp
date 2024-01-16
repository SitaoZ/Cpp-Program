// address.cpp -- using the & operator to find address

#include <iostream>
int main()
{
  using namespace std;
  int donuts = 6;
  double cpus = 4.5;

  cout << "donuts value = " << donuts;
  cout << " and donuts address = " << &donuts << endl;
  cout << "cpus value = " << cpus;
  cout << " and cpus address = " << &cpus << endl;
  return 0;
}
