#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int lastOccur(const vector<int> &arr, int i, int target) { // passed the actual vector array by reference
  if (i == arr.size())
    return -1;

  int idxFound = lastOccur(arr, i + 1, target);
  if (idxFound == -1 && arr[i] == target) {
    return i;
  }

  return idxFound;
}

int main() {

  vector<int> arr = {1, 2, 3, 3, 3, 4};

  cout << "Target at index :" << lastOccur(arr, 0, 3);
}