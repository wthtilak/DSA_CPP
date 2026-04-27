// Create a class BankAccount with private attributes accountNumber and
// balance. Implement public methods deposit(), withdraw(), and getBalance()
// to manage the account.

#include <iostream>
#define endl '\n'

using namespace std;

class BankAccount {
private:
  int accountNumber;
  double balance;

public:
  BankAccount(int actNum, double bal) {
    this->accountNumber = actNum;
    this->balance = bal;
  }

  void Deposit(double Amount) { balance += Amount; }

  void withdraw(int Amount) {
    if (Amount <= balance) {
      balance -= Amount;
      cout << Amount << "rs debited.!\n";
    } else {
      cout << "No sufficient balance for this withdrawal.\n";
    }
  }

  double getBalance() { return balance; }
};

int main() {

  BankAccount A1(12345, 0);

  A1.Deposit(150);
  cout << A1.getBalance() << endl; // 150

  A1.withdraw(35); // 35rs debited.!

  cout << A1.getBalance() << endl; // 115
}