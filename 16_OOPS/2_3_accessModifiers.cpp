#include <iostream>
#include<string>
#define endl '\n'

using namespace std;

class Student {
  string name;
  float cgpa;

public:
  // methods
  void getPercentage() { cout << (cgpa * 10) << "% \n"; }

  // setters
  void setName(string namev) { this->name = namev; }
  void setCgpa(float cgpav) { this->cgpa = cgpav; }
  // getters
  string getName() { return name; }
  float getCgpa() { return cgpa; }
};

int main() {
  Student s1;

  s1.setName("Tilak");
  s1.setCgpa(9);

  cout << s1.getName()<<endl;
  cout << s1.getCgpa()<<endl;

  return 0;
}