#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

//with using index i
void removeDp(string str, string ans, int i, int map[26]) {

  if (i == str.size()) {
    cout << ans << " " << endl;
    return;
  }
  int mapIdx = (int)(str[i] - 'a');
  if (map[mapIdx]) {
    removeDp(str, ans, i + 1, map);
  } else {
    map[mapIdx] = true;
    removeDp(str, ans + str[i], i + 1, map);
  }
}

int main() {
  string str = "appnnacollege";
  string ans = "";
  int map[26] = {false};
  removeDp(str, ans, 0, map);
  return 0;
}