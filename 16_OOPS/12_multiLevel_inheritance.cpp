#include <iostream>
#define endl '\n'
using namespace std;

// multi level inheritance.

class Animal {
public:
  void eat() { cout << "eats" << endl; }
  void breathe() { cout << "breathe\n"; }
};

class mammal : public Animal {
public:
  string bloodType;
  mammal() { bloodType = "warm"; }
};

class dog : public mammal {
public:
  void tailWag() { cout << "a dog tailing its wag.!\n"; }
};

int main() {

  dog d1;

  cout << d1.bloodType << endl;

  d1.eat();
  d1.breathe();
  d1.tailWag();

  return 0;
}
