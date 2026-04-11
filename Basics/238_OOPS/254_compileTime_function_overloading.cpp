#include <iostream>
#include <string>
using namespace std;

// function overloading is basically just having 2 or more functions with same name but with different parameters
//The example is shown below...

class Print {
public:
    void show(int x)
    {
        cout << "int x:"<< x<<endl;
    }
    void show(string x)
    {
        cout << "string x:"<<x<<endl;
    }

};

int main()
{
    Print obj1;

    obj1.show(35);
    obj1.show("Tilak");
}