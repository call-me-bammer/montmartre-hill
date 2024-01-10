#include <iostream>
#include <vector>

#define N_MAX 2000

using namespace std;

bool reachFive = false;
bool check[N_MAX] = { false };

void dfs(vector<vector<int>>& g, int root, int depth)
{
    if (depth == 5) {
        reachFive = true;
        return;
    }

    check[root] = true;

    for (int i: g[root]) {
        if (check[i] == false) {
            dfs(g, i, depth + 1);
            if (reachFive)
                return;
        }
    }

    check[root] = false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    // dfs to each node
    for (int i = 0; i < n; i++)
    {
        dfs(g, i, 1);
        if (reachFive)
            break;
    }

    cout << (reachFive ? 1 : 0) << '\n';
    return 0;
}
