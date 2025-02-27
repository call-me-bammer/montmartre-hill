#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int l = 2;
  for (int i = 0; i < n; i++) {
    l += l - 1;
  }
  
  cout << l * l << '\n';
  return 0;
}
