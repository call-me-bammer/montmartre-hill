#include <iostream>
#include <iomanip>
using namespace std;

#define N 5

int main() {
    double exchange_rates[N + 1][N + 1];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> exchange_rates[i][j];
        }
    }

    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        int path[10];
        for (int i = 0; i < n; i++) {
            cin >> path[i];
        }
        double m;
        cin >> m;

        // let's go to the trip
        int current_country = 1;
        for (int i = 0; i < n; i++) {
            m *= exchange_rates[current_country][path[i]];
            m = (int)(m * 100 + 0.5) / 100.0;
            current_country = path[i];
        }

        // way back home
        m *= exchange_rates[current_country][1];
        m = (int)(m * 100 + 0.5) / 100.0;
        current_country = 1;

        cout << fixed << setprecision(2) << m << '\n';
    }

    return 0;
}
