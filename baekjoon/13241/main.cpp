#include <iostream>
using namespace std;

int main() {
  long long int a, b;
  cin >> a >> b;

  if (a > b) {
    long long int tmp = a;
    a = b;
    b = tmp;
  }

  long long int lcm = b;
  while (lcm % a != 0) {
    lcm += b;
  }

  cout << lcm << endl;
  return 0;
}
