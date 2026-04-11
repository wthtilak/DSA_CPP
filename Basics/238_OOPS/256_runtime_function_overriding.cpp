#include <iostream>
#define endl '\n'
using namespace std;

class Parent {
public:
  void show() { cout << "Parent show msg..!!\n"; }
};

class Child : public Parent {
public:
  void show() { cout << "Child show msg.!!\n"; }
};

int main() {
  Parent p1;
  p1.show(); // Parent show msg..!!

  Child c1;
  c1.show();         // Child show msg.!!
  c1.Parent::show(); // Parent show msg..!!

  return 0;
}
