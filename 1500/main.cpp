#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll int_pow(ll base, int exp);

int main() {
    ll s, k;
    cin >> s >> k;

    ll a = s / k;
    int c = s % k;
    int b = k - c;

    cout << int_pow(a, b) * int_pow(a + 1, c) << '\n';

    return 0;
}

ll int_pow(ll base, int exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}
