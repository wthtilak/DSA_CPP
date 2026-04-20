#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

// with using index i
void removeDuplicates(string str, string ans, int i, int map[26]) {

  if (i == str.size()) {
    cout << ans << " " << endl;
    return;
  }

  int mapIdx = (int)(str[i] - 'a');

  if (map[mapIdx]) { // duplicate string
    removeDuplicates(str, ans, i + 1, map);
  } else { // non duplicate string
    map[mapIdx] = true;
    removeDuplicates(str, ans + str[i], i + 1, map);
  }
}

// without using index i
void removeDuplicates(string str, string ans, int map[26]) {

  if (str.size() == 0) {
    cout << ans << " " << endl;
    return;
  }

  int n = str.size();
  char ch = str[n - 1];
  int mapIdx = (int)(str[n - 1] - 'a');
  str = str.substr(0, n - 1);

  if (map[mapIdx]) // duplicate string
  {
    removeDuplicates(str, ans, map);
  } else { // not duplicate
    map[mapIdx] = true;
    removeDuplicates(str, ch + ans, map);
  }
}

int main() {
  string str = "appnnacollege";
  string ans = "";
  int map[26] = {false};

  removeDuplicates(str, ans, 0, map); // apncoleg

  //   removeDuplicates(str, ans, map); // pnacolge
  return 0;
}