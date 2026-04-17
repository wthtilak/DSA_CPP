#include <iostream>
#define endl '\n'
using namespace std;

int power(int x, int n) {
  if (n == 0)
    return 1;
  
  return x * power(x, n - 1);
}

int main() {
  int x = 2, n = 10;
  cout << "Power of " << x << " raise " << n << " is :" << power(x, n);
}