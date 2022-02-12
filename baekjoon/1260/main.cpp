#include <iostream>

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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << g[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
