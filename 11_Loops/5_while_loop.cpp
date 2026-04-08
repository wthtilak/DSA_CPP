#include <iostream>
using namespace std;
// "while" loop runs while condition is true

int main()
{
    // int count = 15;
    // while(count <= 35)
    // {
    //     // cout << count << " ";
    //     count ++ ;
    // }
    
    //  print apna clg 5 times

    // int i = 1;
    // while(i  <=5)
    // {
    //     cout << "Apna College.!"<<"\n";
    //     i++;
    // }

    // first n natural numbers

    // int n;
    // int i =1;
    // cout << "Enter a number : ";
    // cin>>n;

    // while(i <=n)
    // {
    //     cout << i <<' ';
    //     i++;
    // }
    
    // sum of first n natural nos

    int n;
    cout << "Enter n : ";
    cin>>n;
    int sum=0;
    int i = 1;
    while(i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum = "<<sum;

    return 0;
}

