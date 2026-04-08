#include <iostream>
using namespace std;
// automatic type conversion
//done by compiler to aviod data loss

int main()
{
    int x = 4;
    cout<<sizeof(x) <<endl;

    float f1 = 5;
    cout<<sizeof(f1) <<endl;

    cout << (10 /3)<<endl;
    cout << (10 /3.0)<<endl;


    char ch = 'A';
    cout<< "Adding 1 to A : " <<ch + 1 <<endl; // output->66
 
    cout<< ('A' - 0) << endl;
    cout<< ('a' - 0) << endl;

// bool-> char-> int-> float-> double

    // implicit type casting will ake bigger data type automatically

    return 0;
};