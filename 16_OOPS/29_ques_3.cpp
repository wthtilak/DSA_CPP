// Create a base class Person with attributes name and age.
// Derive a class Student from Person and add an additional attribute studentID.
// Implement a method displayStudentInfo( ) in the Student class to display all
// details. In main function Student class object will be created in this
// format: Student student("Alice", 20, "S12345");

#include <iostream>
#include <string>
#define endl '\n'

using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
};

class Student : public Person {
private:
  string studentID;

public:
  Student(string name, int age, string studentID) : Person(name, age) {
    this->studentID = studentID;
  }

  void displayStudentInfo() {
    cout << "Student ID:" << this->studentID << endl;
    cout << "Name :" << this->name << endl;
    cout << "Age :" << this->age << endl;
  }
};

int main() {

  Student S1("Reacher", 22, "S123");
  S1.displayStudentInfo();

  return 0;
}
