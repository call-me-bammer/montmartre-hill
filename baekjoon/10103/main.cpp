#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ap = 100, bp = 100;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    
    if (a > b) {
      bp -= a;
    } else if (a < b) {
      ap -= b;
    }
  }
  
  cout << ap << endl
       << bp << endl;
  return 0;
}
