#include <iostream>
#define endl '\n';
using namespace std;

bool checkPowerOf2(int num) {
  if (!(num & (num - 1))) // sane as --> (num & (num-1)) == 0
    return true;
  else
    return false;
};

int main() {

  int num;
  cin >> num;

  if (checkPowerOf2(num)) {
    cout << num << " is power of 2." << endl;

  } else {
    cout << num << " is not power of 2." << endl;
  }

  return 0;
}
 