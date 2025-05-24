#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n % 2 == 0) {
    cout << "Duck";
  } else {
    cout << "Goose";
  }
  cout << endl;

  return 0;
}
