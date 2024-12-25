#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n % 2024 == 0 && n <= 100000) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
