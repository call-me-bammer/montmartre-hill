#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> m = {{136, 1000}, {142, 5000}, {148, 10000}, {154, 50000}};

  int sum = 0;

  for (int i = 0; i < n; i++) {
    int w, h;
    cin >> w >> h;

    sum += m[w];
  }

  cout << sum << endl;
  return 0;
}
