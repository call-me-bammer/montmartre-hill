#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void bfs(int** g, int n, int v);
std::vector<int> getAdjV(int** maze, int n, int m, int v);
int update_length(int r, int i);

void test_maze_print(int** maze, int n, int m);
void test_adj_print(int** adj, int n, int m);

int** isVisited;

int main()
{
    int n, m;
    std::cin >> n >> m;

    // initialize 2d array maze
    int** maze = new int*[n + 1];
    for (int i = 0; i <= n; i++)
        maze[i] = new int[m + 1];

    // 1. get maze line
    std::string line;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> line;
    
        // 2. string line to 2d array
        for (int j = 1; j <= m; j++)
        {
            maze[i][j] = line[j-1] - '0';
        }
    }

    test_maze_print(maze, n, m);

    // 3. 2d array to adjacency matrix
    int** adj = new int*[n * m + 1];
    for (int i = 0; i <= n * m; i++)
        adj[i] = new int[n * m + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (maze[i + 1][j] == 0)
                continue;

            // TODO :: v를 줬을 떄 x, y로 변환해서 넘기기. 그러면 인접한 노드를 쉽고 정확하게 구할 수 있음
            std::vector<int> v = getAdjV(maze, n, m, i * m + j);

            for (auto it : v)
            {
                adj[it][i * m + j] = adj[i * m + j][it] = 1;
            }
        }
    }

    test_adj_print(adj, n, m);

    // 4. BFS to find shortest-path
    // init. visit array with zero
    isVisited = new int*[n * m + 1];
    for (int i = 0; i <= n * m + 1; i++)
        isVisited[i] = new int[2]();

    // if bfs meet n * m th node, shortest-path exists.
    bfs(adj, n * m, 1);

    // TODO :: 문법이 맞나
    std::cout << *std::min_element(isVisited[v][1] + 1, isVisited[v][1] + n * m - 1) << std::endl;
    return 0;
}

void bfs(int** g, int n, int v)
{
    std::vector<int> q;

    isVisited[v][0] = 1;
    isVisited[v][1] = 1;

    q.push_back(v);

    while (q.size() != 0)
    {
        int r = *q.begin();
        q.erase(q.begin());

        if (r == n)
            break;

        // TODO :: 그냥 복잡하게 업데이트할 필요없이 냅다 BFS 진행될 떄마다 cnt 올리면 그게 답 아닌가
        for (int i = 1; i <= n; i++)
        {
            if ((g[r][i] == 1) && (isVisited[i] == 0))
            {
                isVisited[i][0] = 1;
                isVisited[i][1] = update_length(r, i);

                q.push_back(i);
            }
        }

    }
}

std::vector<int> getAdjV(int** maze, int n, int m, int v)
{
    std::vector<int> out;

    int candidates[4] = {v - m, v + m, v - 1, v + 1};

    int x, y;

    for (int i = 0; i < 4; i++)
    {
        candidates[i] - 1 / m

        if ((candidates[i] < 1) || (candidates[i] > n * m))
            continue;

        x = (candidates[i] - 1) / m + 1;
        y = (candidates[i] % m == 0) ? 6 : candidates[i] % m;

        if (maze[x][y] == 1)
            out.push_back(candidates[i]);
    }

    return out;
}

int update_length(int r, int i)
{
    if (isVisited[r][0] == 0)
        return isVisited[r][1] + 1;
    else
        return std::min(isVisited[r][1] + 1, isVisited[i][1]);
}

void test_maze_print(int** maze, int n, int m)
{
    std::cout << "==============" << std::endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            std::cout << maze[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << "==============" << std::endl;
}

void test_adj_print(int** adj, int n, int m)
{
    for (int i = 1; i <= n * m; i++)
    {
        for (int j = 1; j <= n * m; j++)
        {
            std::cout << adj[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << "==============" << std::endl;
}
