// #include <bits/stdc++.h>
#include <iostream>
// #include <ios>
#define endl '\n';
using namespace std;

int setIthBit(int num, int i) {
  int bitMask = 1 << i;

  return (num | bitMask);
};


int main() {
//   ios_base ::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);

  cout << setIthBit(6, 3) ;
  // cout << setIthBit(7, 1) << endl;


  return 0;
}
