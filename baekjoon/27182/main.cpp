#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  if (n - 7 > 0) {
    cout << n - 7 << endl;
  } else {
    cout << m + 7 << endl;
  }

  return 0;
}
