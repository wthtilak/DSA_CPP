#include <iostream>
#define endl '\n'
using namespace std;

//Predict The Output

class A {
public:
  A() { cout << "A Constructor.\n"; }
  ~A() { cout << "A Destructor \n"; }
};

class B : public A {
public:
  B() { cout << "B Constructor.\n"; }
  ~B() { cout << "B Destructor \n"; }
};

int main()
{
    B c1;

    return 0;
}