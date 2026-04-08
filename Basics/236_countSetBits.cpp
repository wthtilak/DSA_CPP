#include <iostream>
#define endl '\n'
using namespace std;

// namespace  {  // similar to static int count = 0; (new more cleaner &
// idiomatic approach)
//     int count = 0;
// }

static int count = 0; // later the value got changed
int countSetBits(int n) {

  while (n > 0) {
    int ld = n & 1;
    count += ld;

    n = n >> 1;
  }
  cout << count << endl;
  return count;
};

int main() {

  countSetBits(10);
  cout << count << endl;
  return 0;
}