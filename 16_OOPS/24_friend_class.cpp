#include <iostream>
#define endl '\n'
using namespace std;

class A{
    string secret = "Secret Message";
    friend class B; // without this there is an error that secret variale is declared private here 
                    // so cannot access in B.

    friend void revealSecret(A &obj);  // making friend function and giving prototype here.
};

class B {
public:
    void showSecret(A &obj)
    {
        cout<< obj.secret<<endl;
    }

};

void revealSecret(A &obj)  // creating friend function 
{
    cout<<obj.secret<<endl;  // accessing private attributes
}


int main()
{
    A a1;
    B b1;

    b1.showSecret(a1); // calling friend class
    
    revealSecret(a1);  // calling friend function
    return 0;
}