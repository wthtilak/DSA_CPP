#include <iostream>
#define endl '\n';
using namespace std;

int clearIthBit(int num, int i) {
  int bitMask = ~(1 << i); // toggling the result , cuz we want to preserve the other bits

  return (num & bitMask);
};

int main() {

  cout << clearIthBit(6, 1);
  // cout << setIthBit(7, 1) << endl;

  return 0;
}
