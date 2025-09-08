#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  int score = 0;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    if (a.empty() || a.back() + 1 == b) {
      a.push_back(b);
    } else {
      score += a[0];
      a.clear();
      a.push_back(b);
    }
  }
  score += a[0];

  cout << score << endl;
  return 0;
}
