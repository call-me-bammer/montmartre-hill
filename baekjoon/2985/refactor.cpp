#include <iostream>
using namespace std;

bool tryPrint(int a, int b, int c, char op, bool reverse = false);

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (tryPrint(a, b, c, '+')) return 0;
  if (tryPrint(a, b, c, '-')) return 0;
  if (tryPrint(a, b, c, '*')) return 0;
  if (tryPrint(a, b, c, '/')) return 0;

  if (tryPrint(a, b, c, '+', true)) return 0;
  if (tryPrint(a, b, c, '-', true)) return 0;
  if (tryPrint(a, b, c, '*', true)) return 0;
  if (tryPrint(a, b, c, '/', true)) return 0;

  cout << "never reached\n";
  return -1;
}

bool tryPrint(int a, int b, int c, char op, bool reverse) {
  switch (op) {
    case '+':
      if ((!reverse && a+b==c) || (reverse && a==b+c)) 
      {
        printf(reverse ? "%d=%d+%d\n" : "%d+%d=%d\n", a, b, c);
        return true;
      }
    case '-':
      if ((!reverse && a-b==c) || (reverse && a==b-c))
      {
        printf(reverse ? "%d=%d-%d\n" : "%d-%d=%d\n", a, b, c);
        return true;
      }
    case '*':
      if ((!reverse && a*b==c) || (reverse && a==b*c))
      {
        printf(reverse ? "%d=%d*%d\n" : "%d*%d=%d\n", a, b, c);
        return true;
      }
    case '/':
      if ((!reverse && b!=0 && a/b==c) || (reverse && c!=0 && a==b/c))
      {
        printf(reverse ? "%d=%d/%d\n" : "%d/%d=%d\n", a, b, c);
        return true;
      }
  }
  return false;
}
