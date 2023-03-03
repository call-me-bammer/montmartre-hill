#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

ll solution(vector<int> sequence) {
    ll answer = 0;

    vector<int> pulse_1(sequence.size()), pulse_2(sequence.size());

    for (int i = 0; i < sequence.size(); i++) {
      
      if (i % 2 == 0) {
        pulse_1[i] = 1;
        pulse_2[i] = -1;
      } else {
        pulse_1[i] = -1;
        pulse_2[i] = 1;
      }

      pulse_1[i] = sequence[i] * pulse_1[i];
      pulse_2[i] = sequence[i] * pulse_2[i];
    }

    vector<ll> result_1(sequence.size()), result_2(sequence.size());

    result_1[0] = pulse_1[0];
    for (int i = 1; i < sequence.size(); i++) {
      result_1[i] = result_1[i-1] + pulse_1[i] > pulse_1[i]
                  ? result_1[i-1] + pulse_1[i]
                  : pulse_1[i];
    }

    result_2[0] = pulse_2[0];
    for (int i = 1; i < sequence.size(); i++) {
      result_2[i] = result_2[i-1] + pulse_2[i] > pulse_2[i]
                  ? result_2[i-1] + pulse_2[i]
                  : pulse_2[i];
    }

    answer = max(*max_element(result_1.begin(), result_1.end()),
                *max_element(result_2.begin(), result_2.end()));

    return answer;
}

int main() {
  vector<int> sequence = {2, 3, -6, 1, 3, -1, 2, 4}; // 10
  cout << solution(sequence) << '\n';
  return 0;
}
