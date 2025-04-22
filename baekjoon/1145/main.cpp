#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v(5);
  for (int i = 0; i < 5; i++) {
    cin >> v[i];
  }

  int most = 1;
  while (true) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
      if (v[i] <= most && most % v[i] == 0) {
        count++;
      }
    }

    if (count >= 3) {
      break;
    }

    most++;
  }

  cout << most << endl;
  return 0;
}
