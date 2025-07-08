#include <iostream>
using namespace std;

void setMax(int l, int &v);

int main() {
  int n, m, x;
  cin >> n >> m;

  int nm = 0, mm = 0;
  setMax(n, nm);
  setMax(m, mm);

  cout << nm + mm << endl;
  return 0;
}

void setMax(int l, int &v) {
  for (int i = 0; i < l; i++) {
    int x;
    cin >> x;
    if (x > v) {
      v = x;
    }
  }
}
