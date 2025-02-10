#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n;
  string s, mbti;
  cin >> s >> n;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> mbti;
    if (s == mbti) {
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
