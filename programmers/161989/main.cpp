#include <iostream>
#include <string>
#include <vector>

using namespace std;

int adjust_idx(int i, vector<int> section, int idx);

int solution(int n, int m, vector<int> section) {
    int answer = 0;

    int idx = 0;

    for (int i = 1; i <= n; i++) {
      if (i == section[idx]) {
        answer++;
        i += (m - 1);

        idx = adjust_idx(i, section, idx);        
      }
    }

    return answer;
}

int adjust_idx(int i, vector<int> section, int idx) {
  int p = idx;
  while ((section[p] <= i) && (p < section.size()))
    p++;

  return p;
}

int main() {
  vector<int> section = {2, 3, 6};
  cout << solution(8, 4, section); // 2
  return 0;
}
