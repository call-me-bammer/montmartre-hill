#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  int n;
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
  }

  if (sum >= t) {
    cout << "Padaeng_i Happy\n";
  } else {
    cout << "Padaeng_i Cry\n";
  }

  return 0;
}
