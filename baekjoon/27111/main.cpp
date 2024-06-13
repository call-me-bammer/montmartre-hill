#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int log[200001] = { 0 };
    int wrongCount = 0;

    int a, b;
    for (int i = 0; i < n ; i++) {
        cin >> a >> b;

        if (log[a] == 0 && b == 1) {
            log[a] = 1;
            continue;
        }

        if (log[a] == 1 && b == 0) {
            log[a] = 0;
            continue;
        }

        wrongCount++;
    }

    wrongCount += count(log, log + 200001, 1);

    cout << wrongCount << '\n';
    return 0;
}
