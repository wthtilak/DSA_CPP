#include <iostream>
#define endl '\n'
// #include "236_countSetBits.cpp"
using namespace std;

int clearIbits(int n, int i) {
  int bitMask = ~0 << i;
  return (n & bitMask);
};

int main() {

  //   extern int count;
  //   cout << count << endl;
  
  cout << clearIbits(15, 2) << endl;
  return 0;
}