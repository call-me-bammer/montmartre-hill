#include <iostream>

void dfs(int** g, int n, int v);

int* isVisited;
int cnt = -1;

int main()
{
    int n, m;
    std::cin >> n >> m;

    int** g = new int*[n + 1];
    for (int i = 0; i <= n; i++)
        g[i] = new int[n + 1];

    isVisited = new int[n + 1];

    int a, b;

    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
    
        g[a][b] = g[b][a] = 1;
    }

    dfs(g, n, 1);

    std::cout << cnt << std::endl;
    return 0;
}

void dfs(int** g, int n, int v)
{
    isVisited[v] = 1;
    cnt++;

    for (int i = 1; i <= n; i++)
    {
        if ((g[v][i] == 1) && (isVisited[i] == 0))
            dfs(g, n, i);
    }
}
