#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> cows(11, -1);
  int crossings = 0;

  for (int i = 0; i < n; i++) {
    int cow, pos;
    cin >> cow >> pos;
  
    if (cows[cow] == -1) {
      cows[cow] = pos;
      continue;
    }

    if (cows[cow] != pos) {
      crossings++;
      cows[cow] = pos;
    }
  }

  cout << crossings << endl;
  return 0;
}
