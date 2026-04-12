#include <iostream>
#define endl '\n'
using namespace std;

// Abstraction --->> Hiding all unnceccary details & showing only
// the important parts.
// abstract class doesn't create an object & must have a pure virtual function

class Shape {
public:
  void draw(); // we dont know which type of shape
               // to draw there are various
               // types of shapes therefore -->> pure virtual function
};

int main() {
  cout << endl;
  return 0;
}
