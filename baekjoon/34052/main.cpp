#include <iostream>
using namespace std;

int main() {
  int n, m = 0;
  for (int i = 0; i < 4; i++) {
    cin >> n;
    m += n;
  }

  if (m <= 1500) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
