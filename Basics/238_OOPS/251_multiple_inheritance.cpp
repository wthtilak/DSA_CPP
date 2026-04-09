#include <iostream>
#define endl '\n'
#include <string>
using namespace std;

// multiple level inheritance.

class Teacher {
public:
  string subject;
  int salary;
  string name; // teacher name
};

class Student {
public:
  int rollNo;
  float cgpa;
  string name; // student name 
};

class TA : public Teacher, public Student {
public:
    string name; // TA name

};

int main() { 
    TA t1;
    Teacher T1;

    
    t1.name = "Tilak";
    cout << "TA name :"<< t1.name<<endl;
    
    t1.salary = 1000;
    cout<< "TA Salary :"<<t1.salary<<endl;
    
    t1.rollNo = 42;
    cout << "TA Rollno :"<<t1.rollNo<<endl;
    
    t1.cgpa = 8.9;
    cout <<"TA cgpa :"<<t1.cgpa<<endl;
    
    //
    T1.name = "supriya"; // this one is making another object of Teacher
    cout << T1.name<< endl;

    t1.Teacher::name = "Priya";  // using scope resolution operator 
    cout <<"Teacher name :"<< t1.Teacher::name<<endl;
    
    t1.Student::name = "saourav"; // using scope resolution operator
    cout <<"Student name:"<< t1.Student::name<<endl;
    

    return 0;

}