#include <iostream>
#include <string>

#define NM_MAX 600

using namespace std;

int n, m;
char campus[NM_MAX][NM_MAX];
bool check[NM_MAX][NM_MAX] = { false };
int numOfPeople = 0;

int d[][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

void dfs(int a, int b) {
    check[a][b] = true;

    for (int i = 0; i < 4; i++) {
        int x = a + d[i][0];
        int y = b + d[i][1];

        if (x < 0 || x >= n) continue;
        if (y < 0 || y >= m) continue;
        if (campus[x][y] == 'X') continue;

        if (check[x][y] == 0) {
            if (campus[x][y] == 'P')
                numOfPeople++;
            dfs(x, y);
        }
    }
}

int main() {
    cin >> n >> m;

    int di, dj;

    string line;
    for (int i = 0; i < n; i++) {
        cin >> line;
        for (int j = 0; j < m; j++) {
            campus[i][j] = line[j];
            if (line[j] == 'I') {
                di = i;
                dj = j;
            }
        }
    }

    dfs(di, dj);

    cout << (numOfPeople ? to_string(numOfPeople) : "TT") << '\n';
    return 0;
}
