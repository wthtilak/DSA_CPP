#include <iostream>
#define endl '\n'
using namespace std;

// virtual functions is a member function that you expect to be redefinced in a
// derived classes.

class Parent {
public:
  void show() { cout << "Parent show..\n"; }

  virtual void hello() { cout << "\nparent hello\n"; }
};

class Child : public Parent {
public:
  void hello() { cout << "\nchild hello.!\n"; }
};

int main() {

  Child child1;  // creating child object

  Parent *ptr;   // 
  ptr = &child1; // runn time binding (compiler doesn't know)

  ptr->hello();  // virtual function showing runtime polymorphism
    cout<<endl;

  return 0;
}
