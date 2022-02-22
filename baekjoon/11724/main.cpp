#include <iostream>
#include <list>
using namespace std;

int* isVisited;
int cc = 0;

void dfs(list<int>* g, int n, int v);
int count_visited(int n);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    list<int> g[n + 1];

    int u, v;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    isVisited = new int[n + 1]();

    int before = 0;

    for (int i = 1; i <= n; i++)
    {
        dfs(g, n, i);
        int after = count_visited(n);

        if (before != after)
        {
            cc++;
            before = after;
        }
    }

    cout << cc << '\n';

    delete isVisited;

    return 0;
}

void dfs(list<int>* g, int n, int v)
{
    if (isVisited[v] == 1)
        return;

    isVisited[v] = 1;

    for (auto it : g[v])
    {
        if (isVisited[it] == 0)
            dfs(g, n, it);
    }
}

int count_visited(int n)
{
    int out = 0;

    for (int i = 1; i <= n; i++)
    {
        if (isVisited[i] == 1)
            out++;
    }

    return out;
}
