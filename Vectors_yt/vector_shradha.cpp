// #include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  /*initialization of vector
  vector <int> vec;
  vector <int> vec = {1,2,3};
  vector <int> vec(5,0);
  */
  vector<int> vec(5, 0);
  // 5 is size & 0 is value stored at each index
  
  // cout << sizeof(vec); 24  
  // cuz 8 bytes of pointers ,it have 3 pointer
  //   (
  // 1.Pointer to the beginning of data
  // 2.Pointer to the end of used elements
  // 3.Pointer to the end of allocated capacity
  //   )
 
  // for each loop
  //   for(int i: vec)
  //   {
  //     cout << vec[i]<< " ";
  //   }

  /* VECTOR FUNCTIONS
    1. size
    2. push_back
    3. pop_back
    4. front
    5. back
    6. ok
  */

  return 0;
}