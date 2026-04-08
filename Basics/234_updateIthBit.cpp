#include <iostream>
#define endl '\n'
using namespace std;

void updateIthBit(int num, int i, int val) {
  num = num & ~(1 << i); // clear the bit (make it zero)

  num = num | (val << i);
  cout << num << endl;
};

int main() { 
    
    updateIthBit(7, 3, 1);
    updateIthBit(7 , 2, 0);
    
    return 0; 

}