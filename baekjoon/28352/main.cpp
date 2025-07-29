#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long seconds = 1;
  long long secondsPerWeek = 7 * 24 * 60 * 60;
  for (int i = 2; i <= n; i++) {
    seconds *= i;
  }

  cout << seconds / secondsPerWeek << endl;
  return 0;
}
