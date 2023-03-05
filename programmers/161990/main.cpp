#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
  vector<int> answer;

  int lux = wallpaper.size();
  int rdx = -1;
  int luy = wallpaper[0].length();
  int rdy = -1;
    
  for (int i = 0; i < wallpaper.size(); i++) {
    for (int j = 0; j < wallpaper[0].length(); j++) {
      if (wallpaper[i][j] != '#')
        continue;

      lux = (lux > i ? i : lux);
      rdx = (rdx < i ? i : rdx);

      luy = (luy > j ? j : luy);
      rdy = (rdy < j ? j : rdy);
    }
  }
  
  answer = {lux, luy, rdx + 1, rdy + 1};
  return answer;
}

int main() {
  // 1, 3, 5, 8
  vector<string> wallpaper = {"..........", ".....#....", "......##..", "...##.....", "....#....."};
  vector<int> pos = solution(wallpaper);

  for (auto i : pos)
    cout << i << ' ';
  cout << '\n';

  return 0;
}
