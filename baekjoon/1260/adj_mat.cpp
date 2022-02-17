#include <iostream>
#include <vector>

int* isVisited;

void dfs(int** g, int n, int v);
void bfs(int** g, int n, int v);

// DFS & BFS using adjacency matrix
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

    // initialize with zero
    isVisited = new int[n + 1]();

    dfs(g, n, v);
    std::cout << std::endl;

    delete isVisited;

    // initialize with zero
    isVisited = new int[n + 1]();

    bfs(g, n, v);
    std::cout << std::endl;

    delete isVisited;

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

void bfs(int** g, int n, int v)
{
    std::vector<int> q;

    q.push_back(v);

    std::cout << v << ' ';
    isVisited[v] = 1;

    while (q.size() != 0)
    {
        int r = *q.begin();
        q.erase(q.begin());

        for (int i = 1; i <= n; i++)
        {
            if ((g[r][i] == 1) && (isVisited[i] == 0))
            {
                std::cout << i << ' ';
                isVisited[i] = 1;
                
                for (int j = 1; j <= n; j++)
                {
                    if ((g[i][j] == 1) && (isVisited[j] == 0))
                    {
                        q.push_back(i);
                        break;
                    }
                }
            }
        }
    }
}
