#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if (!n) {
        cout << 0 << '\n';
        return 0;
    }

    int count[31] = { 0 };
    int vote;
    for (int i = 0; i < n; i++) {
        cin >> vote;
        count[vote]++;
    }

    int b = round(n * 0.15);
    int c = b;
    for (int i = 1; (c > 0) && (i <= 30); i++) {
        int tmp = count[i];
        count[i] = (c > count[i] ? 0 : count[i] - c);
        c -= tmp;
    }

    c = b;
    for (int i = 30; (c > 0) && (i >= 1); i--) {
        int tmp = count[i];
        count[i] = (c > count[i] ? 0 : count[i] - c);
        c -= tmp;
    }

    int difficulty = 0;

    for (int i = 1; i <= 30; i++) {
        difficulty += i * count[i];
    }

    cout << round(difficulty / (float)(n - 2 * b)) << '\n';
    return 0;
}
