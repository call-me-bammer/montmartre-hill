#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int* a = new int[n + 1]();
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);

    cout << a[k] << '\n';
    return 0;
}

