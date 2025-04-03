#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int k;
  cin >> k;

  double answer = (k + 2500) * 0.01;
  if (answer < 100) {
    answer = 100;
  } else if (answer > 2000) {
    answer = 2000;
  }

  cout << fixed << setprecision(2)
       << answer << endl;
  return 0;
}
