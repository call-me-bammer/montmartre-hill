#include <iostream>

int* isVisited;

void dfs(int** g, int n, int v);

int main()
{
    int n, m, v;
    std::cin >> n >> m >> v;
    
    int** g = new int*[n + 1];
    for (int i = 1; i <= n; i++)
        g[i] = new int[n + 1];

    int x, y;

    for (int i = 0; i < m; i++)
    {
        std::cin >> x >> y;
        g[x][y] = g[y][x] = 1;
    }

    isVisited = new int[n + 1];

    dfs(g, n, v);
    std::cout << std::endl;

    // test print
    /*
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << g[i][j] << " ";
        }
        std::cout << std::endl;
    }
    */

    return 0;
}

void dfs(int** g, int n, int v)
{
    if (isVisited[v] == 0)
    {
        std::cout << v << ' ';
        isVisited[v] = 1;
    }

    else
        return;

    for (int i = 1; i <= n; i++)
    {
        if (g[v][i] == 1)
            dfs(g, n, i);
    }
}
