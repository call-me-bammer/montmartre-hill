#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
  vector<int> answer;

  int height = park.size();
  int width = park[0].length();

  int y, x;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (park[i][j] == 'S') {
        y = i;
        x = j;
        break;
      }
    }
  }

  for (string r : routes) {
    char d = r[0];
    int l = stoi(r.substr(2, 1));
    l = ((d == 'E' || d == 'S') ? l : -l);

    int _x = x + l;
    int _y = y + l;

    bool flag = true;

    if ((d == 'E') || (d == 'W')) {
      if ((_x < 0) || (_x >= width))
        continue;

      string t;
      if (l < 0) t = park[y].substr(_x, -l + 1);
      else t = park[y].substr(x, l + 1);
      
      if (t.find('X') != string::npos)
        continue;
      x = _x;
      
    } else if (d == 'S') {
      if (_y >= height)
        continue;

      for (int i = y + 1; i <= _y; i++) {
        if (park[i][x] == 'X') {
          flag = false;
          break;
        }
      }

      if (flag)
        y = _y;
    } else {
      if (_y < 0)
        continue;

      for (int i = y - 1; i >= _y; i--) {
        if (park[i][x] == 'X') {
          flag = false;
          break;
        }
      }

      if (flag)
        y = _y;
    }
  }

  answer.push_back(y);
  answer.push_back(x);

  return answer;
}

int main() {
  // {2, 1} is expected
  //vector<int> result = solution({"SOO","OOO","OOO"}, {"E 2","S 2","W 1"});
  // {0, 1} is expected
  //vector<int> result = solution({"SOO","OXX","OOO"}, {"E 2","S 2","W 1"});
  // {0, 0} is expected
  vector<int> result = solution({"OSO","OOO","OXO","OOO"}, {"E 2","S 3","W 1"});
  cout << result[0] << ", " << result[1] << '\n';
  return 0;
}
