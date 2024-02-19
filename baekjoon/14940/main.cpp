#include <iostream>
#include <queue>

#define NM_MAX 1000

using namespace std;

int n, m;
int map[NM_MAX][NM_MAX];
int check[NM_MAX][NM_MAX] = { 0 };

int d[][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
int phase = 1;

void bfs(queue<pair<int, int>> q) {
    int qCnt = q.size();

    while (qCnt) {
        pair<int, int> r = q.front();
        q.pop();
        qCnt--;

        check[r.first][r.second] = 1;
        for (int i = 0; i < 4; i++) {
            int x = r.first + d[i][0];
            int y = r.second + d[i][1];

            if (x < 0 || x >= n) continue;
            if (y < 0 || y >= m) continue;

            if (map[x][y] == -1 && check[x][y] == 0) {
                q.push(make_pair(x, y));
                map[x][y] = phase;
                check[x][y] = 1;
            }
        }

        if (!qCnt) {
            qCnt = q.size();
            phase++;
        }
    }
}

int main() {
    cin >> n >> m;

    int a, di, dj;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a;
            if (a == 2) {
                di = i;
                dj = j;
                map[i][j] = 0;
            } else if (a == 1) {
                map[i][j] = -1;
            }
            check[i][j] = 0;
        }
    }

    queue<pair<int, int>> q;
    q.push(make_pair(di, dj));

    bfs(q);    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
