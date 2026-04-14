#include <iostream>
#define endl '\n'
using namespace std;

// Predict The Output

class Base {
public:
  virtual void print() { cout << "Base \n"; }
};

class Derived : public Base {
public:
  void print() override // explicitly overriding the base print function
  {
    cout << "\nDerived\n";
  }
};

int main() {
  Base *b = new Derived(); // runtime polymorphism
  // creating pointe of base class but object of derived classs

  b->print(); // function overriding
  // therefore the object function will be called.
  delete b; // freeing the dynamically allocated memory.

  return 0;

  return 0;
}