#include <iostream>
#include <string>
#include <vector>
#define endl '\n'
using namespace std;

// Apply Merge sort to sort an array of Strings. (Assume that all the characters
// in all the Strings are in lowercase). (EASY)
// Sample Input 1 : arr = { "sun", "earth", "mars", "mercury" }
// Sample Output 1 : arr = { "earth", "mars", "mercury", "sun"}

void printArray(const vector<string> &arr, int n) { // used const here for fast reading + cannot modify original.
  for (auto i : arr) {
    cout << i << " ";
  }
  cout << endl;
}

void merge(vector<string> &arr, int si, int mid, int ei) {

  vector<string> temp;
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

void mergeSort(vector<string> &arr, int si, int ei) {// use & when passing vector string or arrays for faster access.
  if (si >= ei)
    return;

  int mid = si + (ei - si) / 2;
  mergeSort(arr, si, mid);
  mergeSort(arr, mid + 1, ei);

  merge(arr, si, mid, ei);
}

int main() {
  vector<string> arr{"sun", "earth", "mars", "mercury"};

  printArray(arr, arr.size());
  mergeSort(arr, 0, arr.size() - 1);
  printArray(arr, arr.size());
}
