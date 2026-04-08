#include <iostream>
using namespace std;

void display(int a[], int n) {
  cout << "Array elements are: ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}


int main() {
  // static mem allocation
  //   int n=5;
  //   int arr[n] = {1,2,3,4,5};
  //   display(arr, n);

  // dynamic
  int n;
  cout << "Enter n:";
  cin >> n;
  int *arr = new int[n];
  // each element would be 0, or garbage if not initialised

  // inserting elements user input
  for (int i = 0; i < n; i++) {
    int data;
    cin >> data;
    arr[i] = data;
  } // 0 index to 4 index

  // let me try to insert more elements
  for (int i = 0; i < 10; i++) {
    arr[n + i] = 80;
  } // index 5 to 14

  display(arr, n);

  // error here
  // malloc(): corrupted top size

  return 0;
}
