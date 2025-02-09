#include <iostream>
using namespace std;

#define MAX 40

int fib(int n);
int fibonacci(int n);

int cnt1 = 0;
int cnt2 = 0;

int main() {
  int n;
  cin >> n;

  fib(n);
  fibonacci(n);

  cout << cnt1 << ' ' << cnt2 << endl;
  return 0;
}

int fib(int n) {
  if (n <= 2) {
    cnt1++;
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int fibonacci(int n) {
  int f[MAX + 1] = { 0, 1, 1 };
  for (int i = 3; i <= n; i++) {
    cnt2++;
    f[i] = f[i - 1] + f[i - 2];
  }
  return f[n];
}
