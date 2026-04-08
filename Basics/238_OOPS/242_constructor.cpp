#include <iostream>
#define endl '\n'
using namespace std;

class Car {
  string name;
  string color;

public:
  Car(){
    cout << "Constructor without params.!\n";
  }

  Car(string name, string color) {
    cout << "Constructor with params..\n";
    this->name = name;
    this->color = color;
  }

  void start() { cout << "Car has started..\n"; }

  void stop() { cout << "Car has stopped.\n"; }
  string getName() { return name; }
  string getColor() { return color; }
};

int main() {

    Car c0;
  Car c1("Maruti", "white");

  c1.start();
  c1.stop();
  cout << c1.getName() << endl;
  cout << c1.getColor();

  return 0;
}