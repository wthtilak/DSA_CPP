#include <iostream>
#define endl '\n'
using namespace std;

class Example {
public:
  Example() { cout << "Constructor Called.!\n"; }

  ~Example() { cout << "Destructor called.!\n"; }
};

int main() {
  int a = 0;
  if (a == 0) {
    Example e1;   // OUPTUT :: Constructor Called.! Destructor called.! Code ending.!

    // but when object is made static it is created for lifetime ,hence will
    // destroyed just before the main fxn ends
    // static Example e2; // OUPTUT :: Constructor Called.! Code ending.! Destructor called.!
  }
  cout << "Code ending.!\n";

  return 0;
}