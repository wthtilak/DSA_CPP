#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

// For a given integer array of size N. You have to ﬁnd all the occurrences
// (indices) of a given element (Key) and print them.
// Use a recursive function to solve this problem.
// Sample Input : arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key = 2
// Sample Output : 1 5 7 8

void occurrences(vector<int> arr, int i, int key) {

  if (i == arr.size())
    return;

  if (arr[i] == key) {
    cout << i << " ";
  }

  return occurrences(arr, i + 1, key);
}

int main() {
  vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};

  occurrences(arr, 0, 2); // 1 5 7 8

  return 0;
}