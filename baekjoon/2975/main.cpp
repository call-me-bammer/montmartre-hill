#include <iostream>
using namespace std;

int main() {
  int balance, amount;
  char transactionType;
  
  while (true) {
    cin >> balance >> transactionType >> amount;
    if (balance == 0 && transactionType == 'W' && amount == 0) {
      break;
    }

    if (transactionType == 'W') {
      balance -= amount;
    } else if (transactionType == 'D') {
      balance += amount;
    }

    if (balance < -200) {
      cout << "Not allowed" << endl;
    } else {
      cout << balance << endl;
   }
  }

  return 0;
}
