#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000] = { 0 };
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int b[1000] = { 1, 0 };

    for (int i = 1; i < n; i++) {
        int b_local = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && b_local < b[j]) {
                b_local = b[j];
            }
        }
        b[i] = b_local + 1;
    }

    int max_len = 1;
    for (int i = 0; i < n; i++) {
        if (max_len < b[i])
            max_len = b[i];
    }

    cout << max_len << '\n';
    return 0;
}
