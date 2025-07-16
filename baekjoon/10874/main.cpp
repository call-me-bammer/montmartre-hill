#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> jail;
  for (int i = 1; i <= n; i++) {
    int score = 0;
    for (int j = 1; j <= 10; j++) {
      int t;
      cin >> t;
      if (t == (j-1) % 5 + 1) {
        score += 1;
      }
    }
    if (score == 10) {
      jail.push_back(i);
    } 
  }

  for (auto student : jail) {
    cout << student << endl;
  }

  return 0; 
}
