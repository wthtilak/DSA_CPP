#include <iostream>
using namespace std;
// work gets done atleast once irrespective of condition


int main()
{
    int val = 1;
    do
    {
        cout << "Apna clg in do-while loop.!";
    }while (val > 5);
    
    //using while loop
    while (val >5)
    {
        cout << "Apna clg in while loop.!";
    }
    

    return 0;
}