#include <iostream>
using namespace std;
#define ll  int 
#define X 25

int main()
{
    // const int num = 20;
    // int num2 = 25;

    // num = 30;
    // num2 = 30;

    // ll x;
    // ll y;
    // cout<<sizeof(x)<<endl;
    // cout<<sizeof(y);
    cout<<X<<endl;
    
    int x = 25;
    int* px = &x;
    cout<<*(px);
    

    return 0;
}