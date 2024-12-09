#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[1000] = { 0 };
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }

    int a[1000] = { 0 };
    for (int i = 0; i <= x[1]; i++) {
        a[1] = i;

        bool flag = true;
        for (int j = 2; j <= n; j++) {
            a[j] = x[j - 1] - a[j - 1];
            if (a[j] < 0) {
                break;
                flag = false;
            }
        }

        if (flag && x[n] == a[n] + a[1]) {
            break;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << '\n';
    }

    return 0;
}
