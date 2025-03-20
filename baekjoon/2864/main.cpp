#include <iostream>
#include <cstring>
using namespace std;

int minimize(string a);
int maximize(string a);

int main() {
  string a, b;
  cin >> a >> b;

  cout << minimize(a) + minimize(b) << ' '
       << maximize(a) + maximize(b) << '\n';
  return 0;
}

int minimize(string a) {
  string temp;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '6') {
      temp += '5';
      continue;
    }
    temp += a[i];
  }
  return stoi(temp);
}

int maximize(string a) {
  string temp;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '5') {
      temp += '6';
      continue;
    }
    temp += a[i];
  }
  return stoi(temp);
}
