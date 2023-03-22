#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, int k, vector<int> enemy) {
  int answer = 0;
  int sum = 0;

  // min heap
  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < enemy.size(); i++) {
    if (i < k) {
      pq.push(enemy[i]);
      answer++;
      continue;
    }

    #ifdef DEBUG
    cout << "min : " << pq.top() << ", enemy[i] : " << enemy[i] << '\n';
    #endif

    if (enemy[i] > pq.top()) {
      sum += pq.top();
      pq.pop();
      pq.push(enemy[i]);
    } else {
      sum += enemy[i];
    }

    if (n < sum)
      break;

    answer++;    
  }

  return answer;
}

int main() {
  cout << solution(7, 3, {4, 2, 4, 5, 3, 3, 1}) << '\n';
  cout << solution(2, 4, {3, 3, 3, 3}) << '\n';
  return 0;
}
