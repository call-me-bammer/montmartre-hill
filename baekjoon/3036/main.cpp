#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int a, b;
    cin >> a;
    for (int i = 1; i < n; i++) {
        cin >> b;

        int _a = a;
        int _b = b;
        int c;
        while (_b) {
            c = _a % _b;
            _a = _b;
            _b = c;
        }

        cout << a / _a << '/' << b / _a << '\n';
    }

    return 0;
}
