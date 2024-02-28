#include <iostream>

using namespace std;

int a[1001] = { 0, 1, 3 };

int main() {
    int n;
    cin >> n;

    for (int i = 3; i <= n; i++) {
        a[i] = (a[i - 1] + 2 * a[i - 2]) % 10007;
    }

    cout << a[n] << '\n';
    return 0;
}
