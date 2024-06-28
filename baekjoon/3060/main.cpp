#include <iostream>
using namespace std;

#define MAX_PIGS 6
typedef long long ll;

int calc(int a);

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        ll n;
        cin >> n;

        ll feed = n;
        ll p[MAX_PIGS + 1];

        for (int j = 1; j <= MAX_PIGS; j++) {
            cin >> p[j];
            feed -= p[j];
        }

        int answer = 1;

        if (feed < 0) {
            cout << answer << '\n';
            continue;
        }

        feed = n;

        while (feed >= 0) {
            feed = n;
            ll q[MAX_PIGS];
            for (int j = 1; j <= MAX_PIGS; j++) {
                q[j] = p[j] + p[calc(j-1)] + p[calc(j+1)] + p[calc(j+3)];
                feed -= q[j];
            }

            for (int j = 1; j <= MAX_PIGS; j++) {
                p[j] = q[j];
            }

            if (feed >= 0) {
                answer++;
            }
        }

        cout << answer + 1 << '\n';
    }

    return 0;
}

int calc(int a) {
    if (a == 0) {
        return MAX_PIGS;
    } else if (a > MAX_PIGS) {
        return a - MAX_PIGS;
    } else {
        return a;
    }
}
