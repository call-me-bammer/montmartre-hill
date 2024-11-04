#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxScore = 0;
    int a, d, g;
    for (int i = 0; i < n; i++) {
        cin >> a >> d >> g;

        int score = a * (d + g);
        if (a == (d + g)) {
            score *= 2;
        }

        if (score > maxScore) {
            maxScore = score;
        }
    }

    cout << maxScore << '\n';
    return 0;
}
