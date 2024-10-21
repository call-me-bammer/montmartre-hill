#include <iostream>
using namespace std;

#define MAX_N 1000

int d[][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };

int main() {
    int n;
    cin >> n;

    char a[MAX_N][MAX_N];

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j];
        }
    }

    int x, y;

    int leftarm = 0;
    int rightarm = 0;
    int body = 0;
    int leftleg = 0;
    int rightleg = 0;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (a[i][j] != '*')
                continue;

            bool flag = true;
            for (int k = 0; k < 4; k++) {
                int xx = i + d[k][0];
                int yy = j + d[k][1];

                if (a[xx][yy] != '*') {
                    flag = false;
                    break;
                }
            }

            if (!flag)
                continue;

            x = i;
            y = j;

            int z = 1;
            while (y - z >= 0) {
                if (a[x][y - z] == '*') {
                    leftarm++;
                    z++;
                } else {
                    break;
                }
            }

            z = 1;
            while (y + z < n) {
                if (a[x][y + z] == '*') {
                    rightarm++;
                    z++;
                } else {
                    break;
                }
            }

            z = 1;
            while (x + z < n) {
                if (a[x + z][y] == '*') {
                    body++;
                    z++;
                } else {
                    break;
                }
            }

            int q = 0;
            while (x + z + q < n) {
                if (a[x + z + q][y - 1] == '*') {
                    leftleg++;
                    q++;
                } else {
                    break;
                }
            }

            q = 0;
            while (x + z + q < n) {
                if (a[x + z + q][y + 1] == '*') {
                    rightleg++;
                    q++;
                } else {
                    break;
                }
            }
        }
    }

    cout << x + 1 << ' ' << y + 1 << endl;
    cout << leftarm << ' ' << rightarm << ' ' << body << ' ' << leftleg << ' ' << rightleg << endl;
    return 0;
}
