#include <iostream>
using namespace std;
// manual type conversion
// forced by programmer

int main()
{
    cout << (int)'A' << endl;
    float PI = 3.14;

    cout << (int)PI << endl;
    cout << ((float)10 / 3) << endl; // 3.3333
    cout << char('A' + 4) << endl;   //

    return 0;
};