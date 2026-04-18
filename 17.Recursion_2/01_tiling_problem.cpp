#include <iostream>
#define endl '\n'
using namespace std;

// Tiling Problem (2 x n)floors with (2 x 1)Tiles

int tiling_problem(int n) {
  if (n == 0 || n == 1)
    return 1;
  // vertical
  int ans1 = tiling_problem(n - 1);

  // horizontal
  int ans2 = tiling_problem(n - 2);

  return ans1 + ans2;
}

int main() {

  cout << tiling_problem(4);

  return 0;
}