#include <iostream>
using namespace std;

#define OUT 1000000007
typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, x;
    cin >> n >> x;

    ll a, b;
    ll result = 0;
    for (int i = n; i >= 0; i--) {
        cin >> a >> b;

        if (i == n) {
            result = (a * x) % OUT;
            continue;
        }
        
        result += a;

        if (i != 0) {
            result = (result * x) % OUT;
        }
    }

    cout << result << '\n';
    return 0;
}
