#include <iostream>
#define endl '\n'
using namespace std;

//Static Variables : Variables declared as static in a function are created & initialised once for the lifetime of 
//the program. (IN FUNCION)

//Static Variables in a class are created & initialised once.
//They are shared by all the objects of class. (In CLASS)

class Example {
public:
  static int x; // only declaration
};

int Example::x = 0; // must be initialised outside the class.

int main() {
  Example e1;
  Example e2;
  Example e3;

  cout << e1.x++ << endl; // 0
  cout << e2.x++ << endl; // 1
  cout << e3.x++ << endl; // 2

  return 0;
}