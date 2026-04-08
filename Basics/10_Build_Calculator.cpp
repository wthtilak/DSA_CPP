#include <iostream>
using namespace std;
// Build a calculator using switch for the 4 basic arithmetic operations (+, -, /, *)

int main()
{

    int num1, num2, op;
    cout << "Enter num 1 : ";
    cin >> num1;
    cout << "Enter num 2 : " << endl;
    cin >> num2;

    cout << "Choose operators in between from :\n1. +\n2. -\n3. *\n4. /\n";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Summation is :" << num1 + num2;
        break;

    case 2:
        cout << "Subtration is :" << num1 - num2;
        break;

    case 3:
        cout << "Multiplication is :" << num1 * num2;
        break;

    case 4:
        if (num2 == 0)
        {
            cout << "Division not psbl.!"<<endl;
            break;
        }
        else
        {
            cout << "Division is :" << ((float)num1 / num2); 
            // explicit type casting here to get float ans
        }
        break;

    default:
        cout << "Enter valid Number .!" << endl;
        
    }

    return 0;
};
