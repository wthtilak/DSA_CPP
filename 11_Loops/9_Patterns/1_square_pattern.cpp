#include <iostream>
using namespace std;

int main() {

  // character pattern
    int n = 4;
  //   for (int i = 0; i < n; i++) {
  //     char c = 'A';
  //     for (int j = 0; j < n; j++) {
  //       cout << c;
  //       c = c + 1;
  //     }
  //     cout << endl;
  //   }

  // star square pattern
    for (int i=0; i < n; i++)
    {
      for (int j=0; j <n; j++) {
          cout << "*";
      }
      cout << endl;
    }

  // number square pattern
//   int n = 4;
//   for (int i = 0; i < n; i++) {
//     int k = 1;
//     for (int j = 0; j < n; j++) {
//       cout << k;
//       k = k + 1;
//     }
//     cout << endl;
//   }

  // output 👇
  // 1234
  // 1234
  // 1234
  // 1234

  // print n no of elements in each line
    // int num = 1, n = 3;
    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < n; j++) {
    //     cout << num << " ";
    //     num++;
    //   }
    //   cout << endl;
    // }
  
  // output 👇
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 

  return 0;
}