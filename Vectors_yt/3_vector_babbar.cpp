#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
  cout << "Printing Vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    // cout << v[i] << " ";
    cout << v.at(i) << " ";
  }
  cout << endl;
}
void print2(vector<int> v) {
  cout << "Printing Vector method 2 " << endl;
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {

  // in vector, don't tel size of vector
  // just keep inserting , i will manage the allocation

  //   vector<int> v; // array hi hai

  // insert
  //   v.push_back(1);
  //   v.push_back(2);

  //   int n;
  //   cin >> n;

  //   for (int i = 0; i < n; i++) {
  //     int d;
  //     cin >> d;
  //     v.push_back(d);
  //   }
  //   print(v);

  //   v.clear();
  //   print(v); // blank
  //   v.push_back(40);
  //   print(v); // 40

  // adding more elements to vector
  //   for (int i = 0; i < 10; ++i) {
  //     v.push_back(80);
  //   }
  //   print(v);

  // Deletion in Vector

  //   // pop -> delete -> END
  //   // 1->2->3->4->5
  //   v.pop_back();
  //   print(v); // 1-> 2-> 3-> 4
  //   v.pop_back();
  //   print(v); // 1-> 2-> 3-> 4

  // capacity and size
  //   while (1) {
  //     int d;
  //     cin >> d;
  //     v.push_back(d);
  //     cout << "Capacity " << v.capacity() << "size " << v.size() << endl;
  //   }

  // vector initialisation
  //    vector <int> arr1;// default with no data,0 size

  // init with n size with specific data
  //    vector<int> arr2(5,-1);
  //  //   print(arr1);

  //   vector<int> arr3{1,2,3,4,5};
  // //   arr3.pop_back();
  // //   print(arr3);

  // how to copy vector
  //  vector<int> arr4={1,2,3,4,5};
  //  vector<int> arr5(arr4);
  //  print(arr5);

  //   vector<char> v;

  //   v.push_back('a');
  //   v.push_back('b');
  //   v.push_back('c');

  //   cout<<"Front Element: "<< v[0]<<endl;
  //   cout<<"Front Element: " <<v.front()<<endl;
  //   cout <<"Back Element: "<< v.back()<<endl;
  //   cout <<"Back Element: " <<v[v.size()-1];

  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_bafck(40);
  print(v);
  print2(v);
  return 0;
}