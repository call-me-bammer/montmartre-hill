#include <iostream>
#include <vector>
#include <queue>
#include <set>

#define N_MAX 100001

using namespace std;

vector<set<int>> g(N_MAX);
bool check[N_MAX] = { false };
vector<int> testPath;
int idx = 0;

bool isRightPath = true;

void bfs(queue<int> q) {
    
    if (testPath[idx] != 1) {
        isRightPath = false;
        return;
    }

    idx++;

    while (!q.empty()) {
        int r = q.front();
        q.pop();

        if (check[r] == false)
            check[r] = true;

        int unchecked = 0;
        for (int i: g[r]) {
            if (!check[i])
                unchecked++;
        }

        while (unchecked) {
            if (g[r].find(testPath[idx]) != g[r].end()) {
                q.push(testPath[idx]);
                idx++;
            } else {
                isRightPath = false;
                return;
            }
            unchecked--;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a, b;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }


    for (int i = 0; i < n; i++)
    {
        cin >> a;
        testPath.push_back(a);
    }

    queue<int> q;
    q.push(1);
    bfs(q);

    cout << (isRightPath ? 1 : 0) << '\n';
    return 0;
}
