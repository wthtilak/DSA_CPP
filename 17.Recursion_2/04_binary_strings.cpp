#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

void binStrings(int n, int lastPlace, string ans) {
  if (n == 0) {
    cout << ans << endl;
    return;
  }
  if (lastPlace != 1) {
    binStrings(n - 1, 0, ans + '0');
    binStrings(n - 1, 1, ans + '1');
  } else {
    binStrings(n - 1, 0, ans + '0');
  }
}

int main() {

  string ans = "";
  binStrings(3, 0, ans);
  return 0;
}