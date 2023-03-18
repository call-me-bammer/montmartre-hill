#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

#ifdef DEBUG
#define debug(x) cout << "[Debug] " << #x << " is " << x << '\n'
#else
#define debug(x) ((void)0)
#endif

typedef pair<int, int> node;

int by, bx;

void dfs(queue<node> q, int** b, node g);
bool check_range(int y, int x, int** b);

int solution(vector<string> board) {
  int answer = -1;

  by = board.size();
  bx = board[0].length();

  // make board with 0 initializing
  int** b = new int*[board.size()];
  for (int i = 0; i < board.size(); i++)
    b[i] = new int[board[i].length()]();
  
  // find r, g
  node r, g;
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].length(); j++) {
      if (board[i][j] == 'D') {
        b[i][j] = -1;
      } else if (board[i][j] == 'G') {
        g.first = i;
        g.second = j;
      } else if (board[i][j] == 'R') {
        r.first = i;
        r.second = j;
      }

    }
  }    

  // dfs
  queue<node> q;
  q.push(r);
  dfs(q, b, g);

  // return
  if (b[g.first][g.second] != 0)
    answer = b[g.first][g.second] - 1;

  return answer;
}

void dfs(queue<node> q, int** b, node g) {
  node r = q.front();
  int depth = 1;
  b[r.first][r.second] = depth;
  depth++;

  int d[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  int qCnt = q.size();

  while (!q.empty()) {

    r = q.front();
    q.pop();
    qCnt--;

    // check g
    if (r == g)
      return;

    // adjacent
    for (int i = 0; i < 4; i++) {
      int y = r.first;
      int x = r.second;
      bool flag = false;

      // progress until meet wall
      while (check_range(y + d[i][0], x + d[i][1], b) && (b[y + d[i][0]][x + d[i][1]] != -1)) {
        y += d[i][0];
        x += d[i][1];
        flag = true;
      }

      if (!flag)
        continue;

      // un-visited guarantees min depth
      if (b[y][x] == 0) {
        b[y][x] = depth;
        q.push(make_pair(y, x));
      }
    }

    // increase depth
    if (qCnt == 0) {
      qCnt = q.size();
      depth++;
    }
  }
}

bool check_range(int y, int x, int** b) {
  if ((y < 0) || (y >= by))
    return false;

  if ((x < 0) || (x >= bx))
    return false;

  return true;
}

int main() {
  //vector<string> v = {"...D..R", ".D.G...", "....D.D", "D....D.", "..D...."};
  vector<string> v = {".D.R", "....", ".G..", "...D"};
  cout << solution(v) << '\n';
  return 0;
}
