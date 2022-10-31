#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b);

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, m, a;
  cin >> n;

  ll sum;

  for (ll i = 0; i < n; i++) {
    cin >> m;

    vector<ll> v, t;
    
    for (ll j = 0; j < m; j++) {
      cin >> a;
      v.push_back(a);
    }

    sum = 0;

    for (ll j = 0; j < 2; j++)
      t.push_back(1);

    for (ll j = 0; j < m - 2; j++)
      t.push_back(0);

    sort(t.begin(), t.end());

    do {
      ll a = 0;
      ll b = 0;

      ll count = 0;

      for (auto j : t) {
        if ((j == 1) && (a == 0))
          a = count;
        else if ((j == 1) && (b == 0))
          b = count;
        count++;
      }

      sum += gcd(v[a], v[b]);
    } while (next_permutation(t.begin(), t.end()));

    cout << sum << '\n';
  }

  return 0;
}

ll gcd(ll a, ll b) {
  ll r;
  
  while (a % b != 0) {
    r = a % b;
    a = b;
    b = r;
  }

  return b;
}
