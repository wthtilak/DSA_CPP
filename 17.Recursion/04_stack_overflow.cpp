#include <iostream>
#define endl '\n'
using namespace std;

void func()
{
    cout<<"function calling.\n";
    func(); // infinite loop
}
int main()
{
    func(); // segmentation fault
    // to avoid this in your codebase
    //always add base cases (smallest problem solution)
    return 0;
}