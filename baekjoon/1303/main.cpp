#include <iostream>
#include <queue>
#include <string>
using namespace std;

#define MAXN 100

int d[][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int n, m;
string war[MAXN];
bool isChecked[MAXN][MAXN];
int white = 0, blue = 0;

void dfs(int i, int j, char color);

int main() {
  cin >> n >> m;

  for (int y = 0; y < m; y++) {
    cin >> war[y];
    for (int x = 0; x < n; x++) {
      isChecked[y][x] = false;
    }
  }

  for (int y = 0; y < m; y++) {
    for (int x = 0; x < n; x++) {
      if (isChecked[y][x]) {
        continue;
      }
      dfs(y, x, war[y][x]);
    }
  }

  cout << white << ' ' << blue << '\n';
  return 0;
}

void dfs(int i, int j, char color) {
  queue<pair<int, int>> q;
  int count = 1;
  isChecked[i][j] = true;
  q.push({i, j});

  while (!q.empty()) {
    pair<int, int> r = q.front();
    q.pop();
    isChecked[r.first][r.second] = true;

    for (int z = 0; z < 4; z++) {
      int y = r.first + d[z][0];
      int x = r.second + d[z][1];

      if (y < 0 || y >= m || x < 0 || x >= n) {
        continue;
      }

      if (isChecked[y][x] || war[y][x] != color) {
        continue;
      }

      isChecked[y][x] = true;
      q.push({y, x});
      count++;
    }
  }

  if (color == 'W') {
    white += count * count;
  } else {
    blue += count * count;
  }
}
