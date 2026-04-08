#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

// string notes
// C++ strings are objects of pre-defined string class in STL
// C++ Strings have useful "member functions"
// c++ Strings are dynamic (their size can change at run time).
// C++ Strings are support operators like(+, ==, >, < etc.)
// C++ Strings are stored "contiguosly" in memory

int main() {
  string str = "hello";
  cout << str << endl;

  str = "yellow";
  cout << str << endl;

  string str2;
  cout << "Enter a string : ";
  //   cin >> str2;
  getline(cin, str2);
  cout << str2 << endl;

  return 0;
}