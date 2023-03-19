#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int global_col;

bool cmp(vector<int> a, vector<int> b);

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
  int answer = 0;

  global_col = col - 1;
  sort(data.begin(), data.end(), cmp);

  #ifdef DEBUG
  for (vector<int> v : data) {
    for (int i : v) {
      cout << i << ' ';
    }
    cout << '\n';
  }
  #endif

  for (int i = row_begin - 1; i < row_end; i++) {
    int t = 0;
    for (int j = 0; j < data[i].size(); j++) {
      t += data[i][j] % (i + 1);
    }
    answer ^= t;
  }

  return answer;
}

bool cmp(vector<int> a, vector<int> b) {
  int c = global_col;
  if (a[c] < b[c]) {
    return true;
  } else if (a[c] > b[c]) {
    return false;
  } else if (a[0] > b[0]) {
    return true;
  } else {
    return false;
  }
}

int main() {
  vector<vector<int>> data = {{2,2,6}, {1,5,10}, {4,2,9}, {3,8,3}};
  cout << solution(data, 2, 2, 3) << '\n'; // 4
  return 0;
}
