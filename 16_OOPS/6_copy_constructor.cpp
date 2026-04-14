#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

class Car {

public:
  string name;
  string color;

  Car(string name, string color) {
    this->name = name;
    this->color = color;
  }
  // making custom constructor
  Car (Car &original)
  {
    cout << "Calling custom constructor.!\n";
    this->name = original.name;
    this->color = original.color;
  }


};

int main() {

  Car c1("maruti", "white");

//   Car c2(c1);

    Car c3(c1); // calling custom constructor
  cout << c3.name << endl; // maruti
  cout << c3.color << endl; // white

  return 0;
}