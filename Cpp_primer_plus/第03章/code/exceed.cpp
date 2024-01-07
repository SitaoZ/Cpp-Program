#include <iostream>
#define ZERO 0  // 定义ZERO的值为0
#include <climits>

// 说明溢出的效应


int main()
{
  using namespace std;
  short sam = SHRT_MAX;
  unsigned short sue = sam;

  cout << "Sam has " << sam << " dollors and Sue has " << sue ;
  cout << " dollors deposited. " << endl
       << "Add $1 to each account." << endl << "Now ";
  sam = sam + 1;
  sue = sue + 1;
  cout << "Sam has " << sam << " dollors and Sue has " << sue ;
  cout << " dollors deposited.\nPoor sam!" << endl;

  sam = ZERO;
  sue = ZERO;
  cout << "Sam has " << sam << " dollors and Sue has " << sue ;
  cout << " dollors deposited. " << endl
       << "Take $1 from each account." << endl << "Now ";
  sam = sam - 1;
  sue = sue - 1;
  cout << "Sam has " << sam << " dollors and Sue has " << sue ;
  cout << " dollors deposited." << endl << "Lucky Sue!" << endl;
  return 0;
}
