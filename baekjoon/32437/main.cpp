#include <iostream>
#include <vector>
using namespace std;

int euclidean(int a, int b);
void make_coprime(int &a, int &b);

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> v;
  // a = 1, b = 2
  v.push_back(make_pair(1, 2));

  for (int i = 1; i < n; i++) {
    pair<int, int> p = v.back();
    int a = p.first;
    int b = p.second;
    v.push_back(make_pair(b, a + b));
  }

  int a = v.back().first;
  int b = v.back().second;
  
  // make coprime
  make_coprime(a, b);
  cout << a << endl;
  return 0;
}

int euclidean(int a, int b) {
  int r = a % b;
  if (r != 0) {
    return euclidean(b, r);
  }
  return b;
}

void make_coprime(int &a, int &b) {
  int g = euclidean(a, b);
  a /= g;
  b /= g;
}
