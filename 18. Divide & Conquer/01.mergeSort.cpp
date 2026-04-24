#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

// Time: O(n log n) (always)
// Space: O(n) (extra vector used)
// Here after : si -> starting index & ei -> ending index.

void merge(int arr[], int si, int mid, int ei) {
  vector<int> temp;
  int i = si;
  int j = mid + 1;

  while (i <= mid && j <= ei) {
    if (arr[i] < arr[j]) {
      temp.push_back(arr[i++]);
    } else {
      temp.push_back(arr[j++]);
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i++]);
  }

  while (j <= ei) {
    temp.push_back(arr[j++]);
  }

  // vector to original printArray
  int x = 0;
  for (int idx = si; idx <= ei; idx++) {
    arr[idx] = temp[x++];
  }
}

void mergeSort(int arr[], int si, int ei) {
  if (si >= ei)
    return;

  int mid = si+ (ei-si) / 2; // optimised mid

  mergeSort(arr, si, mid);     // left subarray
  mergeSort(arr, mid + 1, ei); // right subarray

  merge(arr, si, mid, ei); // conquer
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {6, 3, 7, 5, 2, 4};
  int n = 6;

  cout<<"Array before:"<<endl;
  printArray(arr, n);

  mergeSort(arr, 0, n - 1);
  cout<<"Array After:"<<endl;

  printArray(arr, n); // 2 3 4 5 6 7

  return 0;
}