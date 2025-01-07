#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> v;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  string answer = "";
  for (int j = 0; j < m; j++) {
    // count A, C, G, T
    int dna[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
      if (v[i][j] == 'A') {
        dna[0]++;
      } else if (v[i][j] == 'C') {
        dna[1]++;
      } else if (v[i][j] == 'G') {
        dna[2]++;
      } else if (v[i][j] == 'T') {
        dna[3]++;
      }
    }
    // find the most frequent character
    int maxIndex = 0;
    for (int i = 1; i < 4; i++) {
      if (dna[i] > dna[maxIndex]) {
        maxIndex = i;
      }
    }
    // find the most frequent character
    // if there are multiple characters with the same frequency,
    // select lexicographically smallest character
    if (maxIndex == 0) {
      answer += 'A';
    } else if (maxIndex == 1) {
      answer += 'C';
    } else if (maxIndex == 2) {
      answer += 'G';
    } else if (maxIndex == 3) {
      answer += 'T';
    }
  }

  // calculate the Hamming distance
  int hd = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] != answer[j]) {
        hd++;
      }
    }
  }

  cout << answer << '\n' << hd << '\n';
  return 0;
}
