#include <iostream>
using namespace std;

int main() {
  char ch = 'A';
  int n = 4;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ch << " ";

      ch++;
    }
    cout << endl;
  }
}

// output 👇
//  A B C D
//  E F G H
//  I J K L
//  M N O P
