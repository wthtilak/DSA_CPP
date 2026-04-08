#include <iostream>
using namespace std;
// plb : print the pattern
// * * * *
// * * * *
// * * * *
// * * * *


int main()
{

    int row,col;
    cout << "Enter no of row and col : ";
    cin >> row >> col ;
    

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }


    // reverse
    // for(int i= 5; i >= 1; i--)
    // {
    //     cout << i<<" ";
    // }
    // return 0;
}