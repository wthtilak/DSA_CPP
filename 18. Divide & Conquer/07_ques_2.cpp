#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

// Given an array nums of size n, return the majority element. (MEDIUM)
// The "majority element" is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array. Sample
// Input 1 : nums = [3,2,3] Sample Output 1 : 3 Sample Input 2 : nums =
// [2,2,1,1,1,2,2] Sample Output 2 : 2

void printArray(vector<int> &arr, int n) { // Final Time Complexity : O(n logn)
  // Total Space Complexity : O(n)

  for (auto i : arr) {
    cout << i << " ";
  }
  cout << endl;
}

void merge(vector<int> &arr, int si, int mid, int ei) {

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
  // copy back to original array
  int x = 0;
  for (int idx = si; idx <= ei; idx++) {
    arr[idx] = temp[x++];
  }
}

void mergeSort(vector<int> &arr, int si,int ei) { // use & when passing vector int arrays for faster access.
  if (si >= ei)
    return;

  int mid = si + (ei - si) / 2;
  mergeSort(arr, si, mid);
  mergeSort(arr, mid + 1, ei);

  merge(arr, si, mid, ei);
}

int main() {
  vector<int> arr{2, 2, 1, 1, 1, 2, 2};

  printArray(arr, arr.size());
  mergeSort(arr, 0, arr.size() - 1);
  printArray(arr, arr.size());
  cout << "Majority Element = "<< arr[arr.size()/2]; // this is just array indexing so T.C & S.C = O(1).
}
