#include <iostream>

int stonetolb(int); // 定义函数

int main() 
{
  using namespace std;
  int stone;
  cout << "Enter the weight in stone: ";
  cin >> stone;
  int pounds = stonetolb(stone); // 函数执行
  cout << stone << " stone = ";
  cout << pounds << " pounds." << endl;
  return 0;
}

// 函数定义的代码
int stonetolb(int sts) {
  return 14 * sts;
}
