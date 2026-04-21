#include <iostream>
#define endl '\n'
using namespace std;

int friendsPairing(int n) {
  if (n == 0 || n == 1)
    return n;

  return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main() {

  cout << friendsPairing(3);

  return 0;
}