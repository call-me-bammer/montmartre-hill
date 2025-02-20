#include <iostream>
#include <vector>
using namespace std;

#define K 1000000007

int fib(int n);
void fibonacci(int n);

int a = 0;
int b = 1;
int countA = 1;
int countB = 0;

int main() {
  int n;
  cin >> n;

  // fib(n);
  fibonacci(n);

  cout << countA << ' ' << countB << endl;
  return 0;
}

int fib(int n) {
  if (n < 3) {
    countA = ++countA % K;
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

void fibonacci(int n) {
  // vector<int> f(n + 1);
  // f[1] = f[2] = 1;
  for (int i = 3; i <= n; i++) {
    a = b;
    b = countA;
    countA = (a + b) % K;
    countB = ++countB % K;
    // f[i] = f[i - 1] + f[i - 2];
  }
  // return f[n];
}
