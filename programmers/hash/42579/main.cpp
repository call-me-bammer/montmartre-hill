#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef pair<int, int> node;

bool cmp1(node a, node b);
bool cmp2(pair<string, int> a, pair<string, int> b);

vector<int> solution(vector<string> genres, vector<int> plays) {
  vector<int> answer;

  map<string, int> plays_per_genre;
  map<string, vector<node>> song_per_genre;
  

  for (int i = 0; i < plays.size(); i++) {
    string g = genres[i];
    int p = plays[i];

    if (plays_per_genre.find(g) != plays_per_genre.end()) {
      plays_per_genre[g] += p;
    } else {
      plays_per_genre[g] = p;
    }

    if (song_per_genre.find(g) != song_per_genre.end()) {
      song_per_genre[g].push_back({p, i});
    } else {
      song_per_genre[g].push_back({p, i});
    }
  }

  for (auto& [key, value] : song_per_genre) {
    sort(value.begin(), value.end(), cmp1);
  }

  vector<pair<string, int>> v(plays_per_genre.begin(), plays_per_genre.end());
  sort(v.begin(), v.end(), cmp2);

  for (auto i : v) {
    for (int j = 0; j < min(2, (int)song_per_genre[i.first].size()); j++) {
      answer.push_back(song_per_genre[i.first][j].second);
    }
  }

  return answer;
}

bool cmp1(node a, node b) {
  if (a.first > b.first)
    return true;
  return false;
}

bool cmp2(pair<string, int> a, pair<string, int> b) {
  if (a.second > b.second)
    return true;
  return false;
}

int main() {
  vector<int> v = solution({"classic", "pop", "classic", "classic", "pop"}, {500, 600, 150, 800, 2500});
  for (int i : v)
    cout << i << ' ';
  cout << '\n';

  return 0;
}
