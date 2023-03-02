#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> Node;

int bfs(queue<Node> q, vector<string> maps, Node c);

int solution(vector<string> maps) {
    int answer = 0;
    int time;

    // find s, l, e
    Node s;
    vector<Node> v(2);

    for (int i = 0; i < maps.size(); i++) {
      for (int j = 0; j < maps[i].length(); j++) {
        if (maps[i][j] == 'S')
          s = make_pair(i, j);
        else if (maps[i][j] == 'L')
          v[0] = make_pair(i, j);
        else if (maps[i][j] == 'E')
          v[1] = make_pair(i, j);
      }
    }
  
    // bfs
    queue<Node> q;
    q.push(s);

    for (auto i : v) {
      time = bfs(q, maps, i);
      if (time == -1) { return time; }
      answer += time;

      q = queue<Node>();
      q.push(i);
    }

    return answer;
}

int bfs(queue<Node> q, vector<string> maps, Node c) {
  int qCnt = q.size();
  int d[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  
  int** isVisited = new int*[maps.size()];
  for (int i = 0; i < maps.size(); i++)
    isVisited[i] = new int[maps[0].length()]();

  int steps = 0;

  while (!q.empty()) {
    Node r = q.front();
    q.pop();
    qCnt--;

    if ((r.first == c.first) && (r.second == c.second))
      return steps;

    isVisited[r.first][r.second] = 1;

    for (int z = 0; z < 4; z++) {
      int i = r.first + d[z][0];
      int j = r.second + d[z][1]; 

      if ((i < 0) || (i >= maps.size()))
        continue;

      if ((j < 0) || (j >= maps[0].length()))
        continue;

      if ((maps[i][j] != 'X') && (isVisited[i][j] == 0)) {
        q.push(make_pair(i, j));
        isVisited[i][j] = 1;
      }
    }

    if (qCnt == 0) {
      qCnt = q.size();
      steps++;
    }
  }

  return -1;
}

int main() {
  //vector<string> maps = {"SOOOL","XXXXO","OOOOO","OXXXX","OOOOE"};
  //vector<string> maps = {"LOOXS","OOOOX","OOOOO","OOOOO","EOOOO"};
  //vector<string> maps = {"SOOOOL","XXXXXO","OOOOOO","OXXXXX","OOOOOE"};
  vector<string> maps = {"SOOOO","OOOXL","OOXXO","EOOOO"};
  
  cout << solution(maps) << '\n';
  return 0;
}
