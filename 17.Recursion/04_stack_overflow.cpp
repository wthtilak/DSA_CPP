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
    return 0;
}