#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

class Car {

public:
  string name;
  string color;
  int *mileage;

  Car(string name, string color) {
    this->name = name;
    this->color = color;
    mileage = new int;
    *mileage = 12;
  }

  // making custom constructor
  Car(Car &original) { // have to create custom constructor for deep copy
    cout << "Calling custom constructor.!\n";
    this->name = original.name;
    this->color = original.color;
    this->mileage = new int();
    *mileage = *original.mileage;
    // this->mileage = original.mileage; // default for shallow copy
  }

  // destructor
  ~Car() {
    cout << "Deleting object.." << endl;
    if (mileage != NULL) {
      delete mileage;
      mileage = NULL;
    }
  }
};

int main() {

  Car c1("maruti", "white");
  cout << c1.name << endl;  // maruti
  cout << c1.color << endl; // white
  cout << *c1.mileage << endl;

  return 0;
}