#include <iostream>
#define endl '\n'
using namespace std;

// Time: O(logn)
// Here after : si -> starting index & ei -> ending index.

// Input : Rotated, Sorted Array with distinct nums; ascending order
// Find the index of target tar

void printArray(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int search(int arr[], int si, int ei, int tar) {

  if (si > ei)
    return -1;

  int mid = si + (ei - si) / 2;
  if (arr[mid] == tar)
    return mid;

  if (arr[si] <= arr[mid]) {
    // Line 1

    if (arr[si] <= tar && tar <= arr[mid]) {
      // left half
      return search(arr, si, mid - 1, tar);
    } else {
      // right half
      return search(arr, mid + 1, ei, tar);
    }
  } else {
    // Line 2

    if (arr[mid] <= tar && tar <= arr[ei]) {
      // right half
      return search(arr, mid - 1, ei, tar);
    } else {
      // left half
      return search(arr, si, mid + 1, tar);
    }
  }
}

int main() {

  int arr[7] = {4, 5, 6, 7, 0, 1, 2};
  int n = 7;

  cout << "Idx :" << search(arr, 0, n - 1, 0) << endl;

  return 0;
}