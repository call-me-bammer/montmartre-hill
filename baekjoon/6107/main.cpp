#include <iostream>
using namespace std;

int d[][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int main() {
    int r, c;
    cin >> r >> c;

    int m[50][50] = {0, };

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }

    int maxDepth = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < 8; k++) {
                
                int x = i + d[k][0];
                int y = j + d[k][1];

                if (x < 0 || x >= r || y < 0 || y >= c) {
                    continue;
                }

                if (m[i][j] == m[x][y] && m[i][j] > maxDepth) {
                    maxDepth = m[i][j];
                }
            }
        }
    }

    cout << maxDepth << endl;
    return 0;
}
