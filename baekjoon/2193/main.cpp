#include <iostream>
using namespace std;

// f[90] = 2,880,067,194,370,816,120;
uint64_t f[91] = {0, 1, 1};

int main() {

    int n;
    cin >> n;

    if (n < 3) {
        cout << f[n] << '\n';
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    cout << f[n] << '\n';

    return 0;
}
