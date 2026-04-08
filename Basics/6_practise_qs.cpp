#include <iostream>
using namespace std;

int main() {
  // bool of True ->1 || False -> 0
  // anything other than 0 will give 1
  cout << (bool)3 + 2 << endl; // 3
  cout << bool(0) << endl;     // 0
  cout << bool(2) << endl;     // 1

  int a;
  cin >> a;
  cout << a << endl;

  // predict the output
  cout << (23.5 + 2 + 'A'); // 90.5

  return 0;
};

