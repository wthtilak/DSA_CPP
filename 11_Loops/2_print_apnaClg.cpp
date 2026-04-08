#include <iostream>
using namespace std;
// plb: print apna clg 5 times
// for additional thing ive added a counter showing no of times it printed


int main()
{

    int counter = 1;
    for (int i = 1; i <= 5; i++)//same as: i=0;i<5;i++
    {
        cout << "Apna College - " << counter << endl;
        counter++;
    }

    return 0;
}

//      output 👇
// Apna College - 1
// Apna College - 2
// Apna College - 3
// Apna College - 4
// Apna College - 5

