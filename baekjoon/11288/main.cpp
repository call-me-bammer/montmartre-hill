#include <iostream>
#include <limits>
#include <string>
#include <cmath>
using namespace std;

typedef long long ll;

ll modExp(ll base, ll exp, ll mod)
{
    ll result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main()
{
    ll n, a, b;
    string s;

    cin >> n >> a >> b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s);

    ll offset = modExp(a, b, 26);

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            cout << ' ';
            continue;
        }
        cout << (char)(s[i] - offset < 'A' ? s[i] - offset + 26 : s[i] - offset);
    }
    cout << '\n';

    return 0;
}
