#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;
  istringstream iss(s);
  string token;

  vector<int> v;
  while (getline(iss, token, ',')) {
    int x = stoi(token);
    v.push_back(x);
  }

  for (int i = 0; i < k; i++) {
    vector<int> w;
    for (int j = 0; j < v.size() - 1; j++) {
      int x = v[j+1] - v[j];
      w.push_back(x);
    }
    v = w;
  }
  
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) {
      cout << ',';
    }
  }
  cout << endl;
  return 0;
}
