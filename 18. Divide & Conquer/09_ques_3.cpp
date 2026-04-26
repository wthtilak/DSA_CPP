// Given an array of integers. Find the Inversion Count in the array. (HARD)
// Inversion Count: For an array, inversion count indicates how far (or close)
// the array is from being sorted. If the array is already sorted then the
// inversion count is 0. If an array is sorted in the reverse order then the
// inversion count is the maximum.

// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i <
// j.

// Sample Input 1 : N = 5, arr[ ] = {2, 4, 1, 3, 5}
// Sample Output 1 : 3, because it has 3 inversions - (2, 1), (4, 1), (4, 3).

// Sample Input 2 : N = 5, arr[ ] = {2, 3, 4, 5, 6}
// Sample Output 2 : 0, because the array is already sorted

// Sample Input 3 : N = 3, arr[] = {5, 5, 5}
// Sample Output 3 : 0, because all the elements of the array are the same &
// already in a sorted manner.

#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

// Total time complexity : O(n²)
// Space complexity : O(1)

int InvCount =0; 
void printArray(vector<int> &arr, int n) {
  for (auto i : arr) {
    cout << i << " ";
  }
  cout << endl;
}

void merge(vector <int> &arr, int si, int mid, int ei) {
  vector<int> temp;
  int i = si;
  int j = mid + 1;

  while (i <= mid && j <= ei) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i++]);
    } else {
      temp.push_back(arr[j++]);
      InvCount += mid-i+1;  // calculation of inversions
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

void mergeSort(vector<int> &arr, int si, int ei) {
  if (si >= ei)
    return;

  int mid = si+ (ei-si) / 2; // optimised mid

  mergeSort(arr, si, mid);     // left subarray
  mergeSort(arr, mid + 1, ei); // right subarray

  merge(arr, si, mid, ei); // conquer
}


int main() {
  vector<int> arr{2, 4, 1, 3, 5};
  int n = arr.size();
  printArray(arr, n);

  mergeSort(arr, 0, n-1);
  printArray(arr, n);
  cout<<"Inversion Count :"<<InvCount<<endl;
  
}

