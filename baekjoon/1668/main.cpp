#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int h[n];

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int whenLookLeft = h[0];
    int whenLookRight = h[n - 1];

    int count = 1;

    for (int i = 1; i < n; i++) {
        if (whenLookLeft < h[i]) {
            whenLookLeft = h[i];
            count++;
        }
    }

    cout << count << endl;

    count = 1;

    for (int i = n - 2; i >= 0; i--) {
        if (whenLookRight < h[i]) {
            whenLookRight = h[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
