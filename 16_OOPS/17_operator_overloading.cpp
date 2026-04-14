#include <iostream>
using namespace std;

// operator overloading is basically  creating a function to overload an
// operator for our customised use.
// The example is shown below...

class Complex {
  int real, img;

public:
  Complex(int r, int i) {
    this->real = r;
    this->img = i;
  }

  void showNum() { cout << real << " + " << img << "i\n"; }

  // operator overloading
  Complex operator+(Complex &c2) {
    int resReal = this->real + c2.real;
    int resImg = this->img + c2.img;
    Complex c3(resReal, resImg);
    // cout << "res :";
    // c3.showNum();
    return c3;
  }
};
int main() {
  Complex c1(1, 3);
  Complex c2(2, 4);

  c1.showNum();
  c2.showNum();
  Complex c3 = c1 + c2; // When you write c1 + c2 in main():
  // The left side(c1) becomes the caller of the function
  // Its data is accessed using the this->pointer(e.g., this->real)
  // The right side(c2) is passed into the function as the argument &c2.

  // """cout<<"res : "<<c3.showNum();"""
  // above line is error bcoz showNum() is a
  // void function and already returns a cout so we cant call a void
  // function inside a cout .. fix is below

  cout << "res :";
  c3.showNum(); // res :3 + 7i
  return 0;
}