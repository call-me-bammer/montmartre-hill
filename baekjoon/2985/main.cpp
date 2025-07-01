#include <iostream>
using namespace std;

bool calc1(int a, int b, int c);
bool calc2(int a, int b, int c);

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (!(calc1(a, b, c) || calc2(a, b, c))) {
    cout << "no dap\n";
    return -1;
  }

  return 0;
}

bool calc1(int a, int b, int c) {
  if (a + b == c) {
    printf("%d+%d=%d\n", a, b, c);
  } else if (a - b == c) {
    printf("%d-%d=%d\n", a, b, c);
  } else if (a * b == c) {
    printf("%d*%d=%d\n", a, b, c);
  } else if (b != 0 && a / b == c) {
    printf("%d/%d=%d\n", a, b, c);
  } else {
    return false;
  }
  return true;
}

bool calc2(int a, int b, int c) {
  if (a == b + c) {
    printf("%d=%d+%d\n", a, b, c);
  } else if (a == b - c) {
    printf("%d=%d-%d\n", a, b, c);
  } else if (a == b * c) {
    printf("%d=%d*%d\n", a, b, c);
  } else if (c != 0 && a == b / c) {
    printf("%d=%d/%d\n", a, b, c);
  } else {
    return false;
  }
  return true;
}
