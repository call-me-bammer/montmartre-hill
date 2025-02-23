#include <iostream>
using namespace std;

int main() {
  
  while (true) {
    int n;
    cin >> n;
    if (!n) break;

    int sum = 0;
    for (int i = n; i > 0; i--) {
      sum += i;
    }
    cout << sum << '\n';
  }
  
  return 0;
}
