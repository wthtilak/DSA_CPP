#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int firstOccur(vector<int> arr, int i, int target) {
  if (i == arr.size())
    return -1;

  if (arr[i] == target)
    return i;

  return firstOccur(arr, i + 1, target);
}

int main() {

  vector<int> arr = {1, 2, 3, 3, 3, 4};

  cout <<"Target at index :" <<firstOccur(arr, 0, 3);
}