#include <algorithm>
#include <iostream>
using namespace std;

void int_reverse_1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      cout << (i) << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter n:";
  cin >> n;
  int_reverse_1(n);
}

