#include <iostream>
#define endl '\n'
using namespace std;

int num_decreasing(int n) {
  if (n == 1) // base case always on top
    return 1;

  cout << n << " ";             // kaam
  return num_decreasing(n - 1); // faith, next call
}

void print(int n) { // same function using void
  if (n <= 0)
    return;

  cout << n << " ";
  print(n - 1);
}

int main() {

  // using recursion
  int ans = num_decreasing(5);
  cout << ans << " ";

  //  print(5); //5 4 3 2 1

  // using loops
  //  for(int i=10; i>0; i--)
  //  {
  //      cout<<i<<" ";
  //  }

  // using while loops
  // int n = 10;
  // while (n > 0)
  // {
  //     cout << n << " ";
  //     n--;
  // }

  return 0;
}
