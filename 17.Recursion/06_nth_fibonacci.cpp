#include <iostream>
#define endl '\n'
using namespace std;

// print nth fibonacci sequence using recursion

int fibonacci_term(int n) {
  if (n == 0 || n == 1)
    return n;

  return fibonacci_term(n - 1) + fibonacci_term(n - 2);
}

int main() {

  int n = 5;
  cout << "Fibonacci " << n << "th term is :" << fibonacci_term(n);

  return 0;
}
