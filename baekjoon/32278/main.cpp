#include <iostream>
using namespace std;

#define SHORT_MAX 32767
#define INT_MAX 2147483647

typedef long long ll;

int main() {
  ll n;
  cin >> n;

  if (n <= SHORT_MAX && n >= -SHORT_MAX - 1) {
    cout << "short\n";
  } else if (n <= INT_MAX && n >= -INT_MAX - 1) {
    cout << "int\n";
  } else {
    cout << "long long\n";
  }

  return 0;
}
