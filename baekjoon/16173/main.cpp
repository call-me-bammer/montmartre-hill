#include <iostream>
#include <queue>
using namespace std;

int m[3][3];
bool isVisit[3][3];
int d[][2] = { {0, 1}, {1, 0} };

void bfs(int n, queue<pair<int, int>> q) {
    while (!q.empty()) {
        pair<int, int> r = q.front();
        q.pop();

        isVisit[r.first][r.second] = 1;

        if (m[r.first][r.second] == 0)
            continue;

        for (int i = 0; i < 2; i++) {
    
            int x = r.first + d[i][0] * m[r.first][r.second];
            int y = r.second + d[i][1] * m[r.first][r.second];

            if (x >= n || x < 0)
                continue;
            if (y >= n || y < 0)
                continue;
            if (isVisit[x][y] == 1)
                continue;

            if (m[x][y] == 0) {
                isVisit[x][y] = 1;
                continue;
            }

            q.push(make_pair(x, y));
            isVisit[x][y] = 1;
            if (m[x][y] == -1)
                return;
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
            isVisit[i][j] = 0;
        }
    }

    // bfs
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));

    bfs(n, q);

    if (isVisit[n-1][n-1] == 1) {
        cout << "HaruHaru\n";
    } else {
        cout << "Hing\n";
    }

    return 0;
}
