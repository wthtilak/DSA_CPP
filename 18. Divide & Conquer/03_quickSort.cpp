#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

// Time: O(n2) (worst), avg case : O(nlogn)
// Space: O(1)
// Here after : si -> starting index & ei -> ending index.

void printArray(vector<int> &arr, int n) {

  for (auto i : arr) {
    cout << i << " ";
  }
  cout << endl;
}
int partition(vector<int> &arr, int si, int ei) {

  int i = si - 1;
  int pivot = arr[ei];

  for (int j = si; j < ei; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  i++;
  swap(arr[i], arr[ei]);

  // pivotIdx = i
  return i;
}

void quickSort(vector<int> &arr, int si, int ei) {
  if (si >= ei) {
    return;
  }

  int pivotIdx = partition(arr, si, ei);

  quickSort(arr, si, pivotIdx - 1); // left half
  quickSort(arr, pivotIdx + 1, ei); // right half
}

int main() {
  vector<int> arr = {6, 3, 7, 5, 2, 4};
  int n = arr.size();

  printArray(arr, n); // 6 3 7 5 2 4

  quickSort(arr, 0, n - 1);

  printArray(arr, n); // 2 3 4 5 6 7

  return 0;
}