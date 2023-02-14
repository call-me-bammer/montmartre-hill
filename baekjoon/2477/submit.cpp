#include <iostream>
#include <tuple>
using namespace std;

#define SIDE 6

int adj6(int i, int j);

int main() {
  int k;
  cin >> k;

  int d, s;
  tuple<int, int> t[SIDE];

  for (int i = 0; i < 6; i++) {
    cin >> d >> s;
    t[i] = make_tuple(d, s);
  }

  int a[4];
  int idx = 0;

  for (int i = 0; i < 6; i++) {
    for (int j = i, z = 0; j < i + 4; j++, z++) {
      idx = j;
      
      if (j >= SIDE) {
        idx -= 6;
      }

      a[z] = get<0>(t[idx]);
    }

    if ((a[0] == a[2]) && (a[1] == a[3])) {
      idx = i;
      break;
    }
  }

  int area = get<1>(t[idx]) * get<1>(t[adj6(idx, 1)])
           + get<1>(t[adj6(idx, 2)]) * get<1>(t[adj6(idx, 3)])
           + get<1>(t[idx]) * get<1>(t[adj6(idx, 3)]);

  cout << area * k << '\n';

  return 0;
}

int adj6(int i, int j) {
  if (i + j >= SIDE)
    return i + j - 6;
  return i + j;
}
