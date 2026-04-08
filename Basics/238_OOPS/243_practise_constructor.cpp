#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

class User {
  int id;
  string password;

public:
  string uname;

  User(int id) { this->id = id; }
  // getter
  string getPassword() { return password; }
  // setter
  void setPassword(string password) { this->password = password; }
};

int main() {

  User user1(1);
  user1.uname = "Tilak";
  user1.setPassword("meow");

  cout << "Uname :" << user1.uname << endl;
  cout << "Password :" << user1.getPassword() << endl;

  return 0;
}