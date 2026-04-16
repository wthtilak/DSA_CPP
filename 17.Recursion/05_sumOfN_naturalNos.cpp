#include <iostream>
#define endl '\n'
using namespace std;

int sumNterms(int n) {

  if (n == 1)
    return 1;

  return n + sumNterms(n - 1);
}

int main() {

  int n = 56;
  int ans = sumNterms(n);
  cout << "Sum of " << n << " terms is :" << ans;
  return 0;
}