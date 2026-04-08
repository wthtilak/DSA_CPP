#include <iostream>
#define endl '\n'
using namespace std;

namespace {
int ans = 1;
}

void fastExpo(int x, int n) {

  while (n > 0) {
    int lastBit = n & 1;

    if (lastBit) {
      ans = ans * x;
    }
    x *= x;
    n = n >> 1;
  }
  cout << ans << endl;
};

int main() {
  fastExpo(3, 5);

  return 0;
}