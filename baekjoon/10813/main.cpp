#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int* a = new int[n + 1]();
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }

    int p, q;
    for (int i = 0; i < m; i++) {
        cin >> p >> q;
        int tmp = a[p];
        a[p] = a[q];
        a[q] = tmp;
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}
