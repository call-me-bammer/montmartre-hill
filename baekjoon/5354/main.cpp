#include <iostream>
using namespace std;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            for (int z = 0; z < n; z++) {
                if ((j != 0) && (j != n - 1) && (z != 0) && (z != n - 1))
                    cout << "J";
                else
                    cout << "#";
            }
            cout << '\n';
        }

        if (i != t - 1)
            cout << '\n';
    }

    return 0;
}
