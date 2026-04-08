#include <iostream>
using namespace std;
/*
variable = condition ? statement 1 : statement2;
"If true -> execute 1st statement else 2nd"
*/

int main()
{

    // bool isAdult ; // 1-true; 0->false

    // int age;
    // cout<<"Enter age ; ";
    // cin>>age;

    // if(age>=18)
    // {
    //     isAdult = true;
    // }
    // else
    // {
    //     isAdult = false;
    // }

    // isAdult = age ? true : false;
    // cout << isAdult << endl;

    // largest of 2 numbers
    int a = 5, b = 6;

    int largest = a > b ? a : b;
    cout << "Largest number is : " << largest << endl;

    // odd or Even

    int num = 34;

    bool isEven = num % 2 ? true : false;
    cout << num << " is Even. (output " << isEven << ")." << endl;

    return 0;
};
