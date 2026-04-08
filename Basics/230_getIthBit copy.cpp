// #include <bits/stdc++.h>
#include <iostream>
// #include <ios>
#define endl '\n';
using namespace std;

int getIthBit(int num, int i) {
  int bitMask = 1 << i;
  if (!(num & bitMask))
    return 0;
  return 1;
};


int main() {
//   ios_base ::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);

  cout << getIthBit(6, 2) << endl;
  cout << getIthBit(7, 1) << endl;


  return 0;
}
