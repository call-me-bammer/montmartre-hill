#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int idx1 = 0, idx2 = 0;

    for (int i = 0; i < goal.size(); i++) {
      if (cards1[idx1] == goal[i]) { idx1++; }
      else if (cards2[idx2] == goal[i]) { idx2++; }
      else {
        answer = "No";
        break;
      }
    }

    return answer;
}

int main() {
  vector<string> c1 = {"i", "water", "drink"};
  vector<string> c2 = {"want", "to"};
  vector<string> g = {"i", "want", "to", "drink", "water"};

  cout << solution(c1, c2, g) << '\n';
  return 0;
}
