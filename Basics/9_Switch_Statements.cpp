#include <iostream>
using namespace std;

int main()
{

    int day;
    cout << "Enter a day from 1 to 7 :";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Enter a valid day.!";
        break;
    }

    return 0;
};
