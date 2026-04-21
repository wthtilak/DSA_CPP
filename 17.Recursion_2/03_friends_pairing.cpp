#include <iostream>
#define endl '\n'
using namespace std;

int friendsPairing(int n) {
  if (n == 1 || n == 2)
    return n;

  return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main() {

  cout << friendsPairing(3)<<endl; // ways 4
  cout << friendsPairing(4); // ways 10

  return 0;
}