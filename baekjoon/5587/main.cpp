#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

#define SG 0
#define GS 1

// 1 6 7 9 10
// 2 3 4 5 8

int main() {
  int n;
  cin >> n;

  vector<deque<int>> dq(2);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    dq[0].push_back(x);
  }
  sort(dq[0].begin(), dq[0].end());

  for (int i = 1; i <= 2 * n; i++) {
    if (find(dq[0].begin(), dq[0].end(), i) == dq[0].end()) {
      dq[1].push_back(i);
    }
  }

  int score[2] = {n, n};

  int turn = 0;
  int current = 0;

  while (true) {
    if (current == 0) {
      current = dq[turn].front();
      dq[turn].pop_front();
      score[1 - turn]--;
      turn = 1 - turn;
    } else {
      bool found = false;
      for (auto i = dq[turn].begin(); i != dq[turn].end(); i++) {
        if (*i > current) {
          current = *i;
          dq[turn].erase(i);
          score[1 - turn]--;
          found = true;
          break;
        }
      }
      if (!found) {
        current = 0;
      }
      turn = 1 - turn;
    }

    if (score[GS] == 0 || score[SG] == 0) {
      break;
    }
  }

  cout << score[SG] << '\n' << score[GS] << '\n';
  return 0;
}
