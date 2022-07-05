#include <iostream>
using namespace std;

int col[4] = {0, 0, 0, 0};
int row[4] = {0, 0};

int d[][2] = { {0, 0}, {0, 1}, {0, -1}, {-1, 0}, {1, 0} };

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, x, y, k;
    cin >> n >> m >> x >> y >> k;

    int map[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    int r, c;
    int cmd;

    int tmp;

    for (int i = 0; i < k; i++) {
        cin >> cmd;

        r = x + d[cmd][0];
        c = y + d[cmd][1];

        // continue to ignore
        if ((r < 0) || (r >= n))
            continue;

        if ((c < 0) || (c >= m))
            continue;

        // move
        if (cmd == 1) {

            tmp = row[1];

            row[1] = col[1];
            col[1] = row[0];
            row[0] = col[3];

            col[3] = tmp;
        }

        else if (cmd == 2) {

            tmp = row[0];

            row[0] = col[1];
            col[1] = row[1];
            row[1] = col[3];

            col[3] = tmp;
        }

        else if (cmd == 3) {

            tmp = col[0];

            for (int j = 0; j < 3; j++) {
                col[j] = col[j + 1];
            }

            col[3] = tmp;
        }

        else if (cmd == 4) {

            tmp = col[3];

            for (int j = 3; j > 0; j--) {
                col[j] = col[j - 1];
            }

            col[0] = tmp;
        }

        x = r;
        y = c;

        if (map[x][y] == 0) {
            map[x][y] = col[3];
        } else {
            col[3] = map[x][y];
            map[x][y] = 0;
        }

        // print top
        cout << col[1] << '\n';
    }

    return 0;
}
