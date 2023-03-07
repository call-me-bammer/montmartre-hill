#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

typedef pair<int, int> node;

int dfs(int i, int j, vector<string> maps, int** isVisited);

vector<int> solution(vector<string> maps) {
    // return ascending order
    vector<int> answer;

    int** isVisited = new int*[maps.size()];
    for (int i = 0; i < maps.size(); i++)
      isVisited[i] = new int[maps[i].length()]();

    for (int i = 0; i < maps.size(); i++) {
      for (int j = 0; j < maps[i].length(); j++) {
        if ((maps[i][j] != 'X') && (isVisited[i][j] == 0))
          answer.push_back(dfs(i, j, maps, isVisited));
      }
    }

    if (answer.empty()) {
      answer.push_back(-1);
      return answer;
    }

    // sort ascending order
    sort(answer.begin(), answer.end());
    return answer;
}

int dfs(int i, int j, vector<string> maps, int** isVisited) {
  int result = 0;
  stack<node> s;

  s.push(make_pair(i, j));
  result += maps[i][j] - '0';
  isVisited[i][j] = 1;
  
  int d[][4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  while (!s.empty()) {
    node r = s.top();
    s.pop();

    for (int z = 0; z < 4; z++) {
      int y = r.first + d[z][0];
      int x = r.second + d[z][1];
      
      // check range
      if ((y < 0) || (y >= maps.size()))
        continue;

      if ((x < 0) || (x >= maps[0].length()))
        continue;
       
      if ((maps[y][x] != 'X') && (isVisited[y][x] == 0)) {
        s.push(make_pair(y, x));
        result += maps[y][x] - '0';
        isVisited[y][x] = 1;
      }
    }
  }

  return result;
}

int main() {
  vector<string> maps = {"X591X","X1X5X","X231X", "1XXX1"};
  vector<int> result = solution(maps);
  for (int i : result) {
    cout << i << ' ';
  }
  cout << '\n';
  return 0;
}
