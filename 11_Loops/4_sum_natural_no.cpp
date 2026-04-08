#include <iostream>
using namespace std;
// plb : print sum of nos from 1 to n (user input)
// 1 +2+3+4+5+6 => 21
// 2nd way : (n*(n+1))/2

int main()
{
    int n;
    int sum=0;
    cout << "Enter a no. : ";
    cin>>n;

    for (int i = 0; i<= n; i++)
    {
        sum = sum+ i;
        
    }
    cout << "Sum upto "<<n<< " natural number is :"<<sum;

    // 2nd way -- using formula
    // cout << (n*(n+1)/2);

    return 0;
}