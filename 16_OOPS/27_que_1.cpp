// Create a class to store Complex numbers. Using operator overloading,
// create the logic to subtract one complex number from another.

// Note - In Complex numbers, the real part of 1st gets subtracted from the real
// part of 2nd number. Same goes for the imaginary part.

#include <iostream>
#define endl '\n'
using namespace std;

class Complex {
  int real, img;

public:
  Complex(int real, int img) {
    this->real = real;
    this->img = img;
  }
  void showNum() { cout << real << " + " << img << "i" << endl; }

  // operator overloading
  Complex operator-(Complex &C2) {
    int resReal = this->real - C2.real;
    int resImg = this->img - C2.img;

    Complex c3(resReal, resImg);
    return c3;
  }
};

int main() {
  Complex c1(7, 6);
  Complex c2(2, 5);

  c1.showNum();
  c2.showNum();

  Complex c3 = c1 - c2;
  cout << "res :";
  c3.showNum();
}
