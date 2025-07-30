#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int score = 0;
  int bonus = 0;
  for (int i = 1; i <= n; i++) {
    if (s[i - 1] == 'O') {
      score += i + bonus;
      bonus++;
    } else {
      bonus = 0;
    }
  }

  cout << score << endl;
  return 0;
}
