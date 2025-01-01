#include <iostream>
using namespace std;

void update(int s, int c, int l, int i);

int winner = 0;
int ps = 0, pc = 0, pl = 0;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int s, c, l;
    cin >> s >> c >> l;

    if (ps > s)
      continue;
    if (ps < s) {
      update(s, c, l, i);
      continue;
    }

    if (pc < c)
      continue;
    if (pc > c) {
      update(s, c, l, i);
      continue;
    }

    if (pl < l)
      continue;
    if (pl > l) {
      update(s, c, l, i);
      continue;
    }
  }

  cout << winner << '\n';
  return 0;
}

void update(int s, int c, int l, int i) {
  ps = s;
  pc = c;
  pl = l;
  winner = i;
}
