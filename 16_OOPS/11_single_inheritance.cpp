#include <iostream>
#define endl '\n'
using namespace std;

// single level inheritance.

class Animal {
public:
  string color;

  void eat() { cout << "Eating.\n"; }
  void breathe() { cout << "Breathing.\n"; }
};

class Fish : public Animal { // standard way to write OOP Inheritance is to use
                             // public here.!!
public:
  int fins;

  void swim() {
    eat();
    breathe();
    cout << "Swim.\n";
  }
};

int main() {

  Fish f1;
  f1.fins = 3;
  cout << f1.fins << endl;
  f1.swim();

  f1.eat();
  f1.breathe();
  return 0;
}