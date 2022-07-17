#include <iostream>
using namespace std;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a;
    cin >> n;

    int b = 1;

    bool status = true;

    for (int i = 0; i < n; i++) {
        cin >> a;

        if (a == b) {
            b++;
            continue;
        }

        for (int j = b; j < a; j++) {
            cout << j << '\n';
            status = false;
        }

        b = a + 1;
    }

    if (status) {
        cout << "good job\n";
    }

    return 0;
}
