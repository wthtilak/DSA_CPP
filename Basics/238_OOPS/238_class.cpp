#include <iostream>
#define endl '\n'
using namespace std;

class Student{
    string name;
    float cgpa;

    // methods
    void getPercentage()
    {
        cout << (cgpa * 10)<<"% \n";
    }
};


int main() {
    Student s1;
    cout<< sizeof(Student)<<endl;
    cout<< sizeof(s1)<<endl;

  return 0;
}