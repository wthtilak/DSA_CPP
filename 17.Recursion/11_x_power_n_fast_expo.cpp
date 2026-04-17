#include <iostream>
#define endl '\n'
using namespace std;

// Time complexity of O(log n)

int power(int x, int n) {
  if (n == 0)
    return 1;

  int halfPow = power(x, n / 2);
  int halfPowSquare = halfPow * halfPow;

  if (n % 2 == 0)
    return halfPowSquare;

  return x * halfPowSquare;
}

int main() {
  int x = 2, n = 13;
  cout << "Power of " << x << " raise " << n << " is :" << power(x, n);
}