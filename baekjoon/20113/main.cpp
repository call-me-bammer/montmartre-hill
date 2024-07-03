#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int* voted = new int[n + 1]();
    int mostVoted = 0;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x == 0) {
            continue;
        }
        voted[x]++;

        if (voted[x] > mostVoted) {
            mostVoted = voted[x];
        }
    }

    int maxVotedCount = 0;
    int candidate = 0;
    for (int i = 1; i <=n; i++) {
        if (voted[i] == mostVoted) {
            candidate = i;
            maxVotedCount++;
        }
    }

    if (maxVotedCount == 1) {
        cout << candidate << '\n';
    } else {
        cout << "skipped\n";
    }

    delete[] voted;
    return 0;
}
