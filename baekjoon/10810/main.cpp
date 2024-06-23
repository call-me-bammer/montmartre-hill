#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int answer[101] = { 0 };
    int i, j, k;

    for (int a = 0; a < m; a++) {
        cin >> i >> j >> k;

        for (int b = i; b <= j; b++) {
            answer[b] = k;
        }
    }

    for (int a = 1; a <= n; a++) {
        cout << answer[a];
        if (a != n) {
            cout << ' ';
        }
    }
    cout << '\n';
    return 0;
}
