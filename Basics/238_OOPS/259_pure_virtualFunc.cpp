#include <iostream>
#define endl '\n'
using namespace std;

//virtual function is a virtual function with no definition/logic
//It is declared by assigning 0 at the time of declaration.

// abstract class
class Shape {
public:
  virtual void draw() = 0; // abstract fnx, pure virtual fnx
};

class Circle : public Shape {
public:
  void draw() { cout << "Draw circle ❍ .\n"; }
};

class Square : public Shape {
public:
  void draw() { cout << "Draw Square ❏ .\n"; }
};

int main() {

  Circle cir1;
  cir1.draw(); // Draw circle ❍ .

  Square sqr1;
  sqr1.draw(); // Draw Square ❏ .

  return 0;
}
