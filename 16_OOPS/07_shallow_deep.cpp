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
};

int main() {

  Car c1("maruti", "white");
  //   Car c2(c1);
  cout << "C1 before changed :"<<*c1.mileage << endl; // 12

  Car c3(c1);                    // calling custom constructor
  cout << c3.name << endl;       // maruti
  cout << c3.color << endl;      // white
  cout << "C3 before changed:"<< *(c3.mileage) << endl; // 12
  
  *c1.mileage = 8;
  cout << "C1 after changed:"<<*c1.mileage << endl; // 8
  cout << "C3 before changed: "<< *(c3.mileage) << endl; // 12

  *c3.mileage = 19;
  cout << "C3 after changed:"<< *(c3.mileage) << endl; // 12

  return 0;
}