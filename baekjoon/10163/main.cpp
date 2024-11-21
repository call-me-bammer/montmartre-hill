#include <iostream>
using namespace std;

int main() {
    int m[1001][1001] = {}; // set to 0

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x, y, w, h;
        cin >> x >> y >> w >> h;

        for (int j = x; j < x + w; j++) {
            for (int z = y; z < y + h; z++) {
                m[j][z] = i;
            }
        }
    }

    int area[101] = {};

    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            if (m[i][j] != 0) {
                area[m[i][j]]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << area[i] << '\n';
    }

    return 0;
}
