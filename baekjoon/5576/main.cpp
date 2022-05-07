#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int wScore = 0, kScore = 0;

    int* w = new int[10]();
    int* k = new int[10]();

    for (int i = 0; i < 20; i++) {
        if (i < 10) cin >> w[i];
        else cin >> k[i - 10];
    }

    sort(w, w + 10);
    sort(k, k + 10);

    for (int i = 9; i >= 7; i--) {
        wScore += w[i];
        kScore += k[i];
    }

    cout << wScore << ' ' << kScore << endl;

    return 0;
}
