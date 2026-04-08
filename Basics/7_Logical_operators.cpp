#include <iostream>
using namespace std;
/*
And (&&)
    --> combining the two operands.(a && b)
        "both must be TRUE"

or (||)
    -->        "both must be TRUE"


Not(!)

*/
int main()
{

    // Logical Operators 0-> False; 1 -> True
    cout << "And Operator" << endl;
    cout << ((3 < 5) && (4 < 3)) << endl;
    
    cout << "OR Operator " << endl;
    cout << ((3 < 5) || (4 < 3)) << endl;//

    cout << "Not Operator " << endl;
    cout << !(3 < 5) << endl; // 0

    
    return 0;
};
