#include <iostream>
using namespace std;

int aplace[][2] = {{ 0, 1 },  { 200, 2 }, { 100, 3 }, { 150, 4 }, { 20, 5 }, { 20, 6 }, { 10, 0 }};
int bplace[][2] = {{ 0, 1 },  { 256, 2 }, { 128, 4 }, { 64, 8 }, { 32, 16 }, { 32, 0 }};

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    int a, b;

    int sum = 0;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        if (a != 0) {
            // assume that a is included in 0st place.
            int arank = 0;
            sum += 500;

            for (int j = 0; (j < 7) && (arank < a); j++) {
                sum -= aplace[j][0];
                arank += aplace[j][1];
            }
        }

        if (b != 0) {
            // assume that b is included in 0st place.
            int brank = 0;
            sum += 512;

            for (int j = 0; (j < 6) && (brank < b); j++) {
                sum -= bplace[j][0];
                brank += bplace[j][1];
            }
        }

        cout << sum * 10000 << '\n';
    
        sum = 0;
    }

    return 0;
}
