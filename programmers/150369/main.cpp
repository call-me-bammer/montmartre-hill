#include <iostream>
#include <string>
#include <vector>

using namespace std;

void adjustIdx(vector<int> v, int& idx);

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
  long long answer = 0;

  int idxD = n, idxP = n;

  adjustIdx(deliveries, idxD);
  adjustIdx(pickups, idxP);
  
  while ((idxD != 0) || (idxP != 0)) {
    answer += max(idxD, idxP) * 2;

    int capD = 0;
    while ((idxD != 0) && (capD != cap)) {
      if (capD + deliveries[idxD - 1] > cap) {
        deliveries[idxD - 1] -= (cap - capD);
        capD = cap;
      } else {
        capD += deliveries[idxD - 1];
        deliveries[idxD - 1] = 0;
        idxD--;
        adjustIdx(deliveries, idxD);
      }
    }

    int capP = 0;
    while ((idxP != 0) && (capP != cap)) {
      if (capP + pickups[idxP - 1] > cap) {
        pickups[idxP - 1] -= (cap - capP);
        capP = cap;
      } else {
        capP += pickups[idxP - 1];
        pickups[idxP - 1] = 0;
        idxP--;
        adjustIdx(pickups, idxP);
      }
    }
  }

  return answer;
}

void adjustIdx(vector<int> v, int& idx) {
  while ((idx != 0) && (v[idx - 1] == 0))
    idx--;
}

int main() {
  cout << solution(4, 5, {1, 0, 3, 1, 2}, {0, 3, 0, 4, 0}) << '\n';
  cout << solution(2, 7, {1, 0, 2, 0, 1, 0, 2}, {0, 2, 0, 1, 0, 2, 0}) << '\n';
  return 0;
}
