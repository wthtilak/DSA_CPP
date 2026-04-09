#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

class Animal {
public:
  void eat() { cout << "eats\n"; }

  void breathe() { cout << "breathes\n"; }
};

class Bird : public Animal {
public:
  void fly() { cout << "Flies\n"; }
};

class Fish : public Animal {
public:
  void swim() { cout << "Swims\n"; }
};
class mammal : public Animal {
public:
  void walk() { cout << "walks\n"; }
};

int main() {

  mammal m1;
  m1.eat();
  m1.breathe();

  m1.walk();

  return 0;
}