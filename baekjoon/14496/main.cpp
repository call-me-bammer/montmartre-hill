#include <iostream>
#include <queue>
using namespace std;

int n;
int answer = 1;
int isAVisit[1001] = { 0 };

void bfs(int a, int b, int** g);

int main() {
    int a, b, m;
    cin >> a >> b >> n >> m;

    int** graph = new int*[n + 1];
    for (int i = 0; i <= n; i++) {
        graph[i] = new int[n + 1]();
    }

    for (int i = 0; i < m; i++) {
        int p, q;
        cin >> p >> q;
        graph[p][q] = 1;
        graph[q][p] = 1;
    }

    bfs(a, b, graph);

    if (isAVisit[b] == 0) {
        answer = -1;
    } else if (a == b) {
        answer = 0;
    }

    cout << answer << '\n';

    for (int i = 0; i <= n; i++) {
        delete[] graph[i];
    }
    delete[] graph;

    return 0;
}

void bfs(int a, int b, int** g) {
    queue<int> q;
    q.push(a);

    int qCnt = q.size();
    while (!q.empty()) {
        int r = q.front();
        q.pop();
        qCnt--;

        isAVisit[r] = 1;

        for (int i = 1; i <= n; i++) {
            if (g[r][i] != 0 && isAVisit[i] == 0) {
                q.push(i);
                isAVisit[i] = 1;
            }
        }

        if (isAVisit[b] != 0) {
            break;
        }

        if (qCnt == 0) {
            answer++;
            qCnt += q.size();
        }
    }
}
