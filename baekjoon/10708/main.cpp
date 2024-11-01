#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int target[101];
    for (int i = 1; i <= m; i++) {
        cin >> target[i];
    }

    int score[101] = { 0 };
    int b;
    for (int i = 1; i <= m; i++) {
        // target[i]
        for (int j = 1; j <= n; j++) {
            cin >> b;
            if (j == target[i]) {
                score[j]++;
            }
            else if (b == target[i]) {
                score[j]++;
            }
            else {
                score[target[i]]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << score[i] << '\n';
    }

    return 0;
}
