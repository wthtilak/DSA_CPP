#include <iostream>
using namespace std;

void oddOrEven(int num) {
  if (num & 1) {
    cout << "\nodd\n";
  } else {
    cout << "\neven\n";
  }
  cout <<endl;
}
int main()

{
  oddOrEven(1);
//   cout << "\n";
}
