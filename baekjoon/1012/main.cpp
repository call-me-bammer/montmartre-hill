#include <iostream>
#include <vector>
using namespace std;

void farm_print(int** f, int m, int n);
void graph_print(int** g, int m, int n);
void make_adj_mat(int** f, int** g, int m, int n);
vector<pair<int, int>> get_adj_node(int i, int j, int m, int n);
void dfs(int** g, int m, int n);

int min_worm;
int* isVisited;
int cnt;

int d[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    int m, n, k;
    
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;
    
        int** farm = new int*[n];
        for (int a = 0; a < n; a++)
            farm[a] = new int[m]();

        int x, y;

        for (int j = 0; j < k; j++)
        {
            cin >> x >> y;

            farm[y][x] = 1;
        }

        farm_print(farm, m, n);

        // make graph using adj. mat.
        int** g = new int*[m * n];
        for (int a = 0; a < m * n; a++)
            g[a] = new int[m * n]();

        make_adj_mat(farm, g, m, n);

        graph_print(g, m, n);

        min_worm = 0;
        cnt = 0;
        isVisited = new int[m * n]();

        // TODO :: do DFS
        // if valid, min_worm++.
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < m; b++)
            {
                int before = cnt;
                dfs(g, m * n, a * n + b);
                int after = cnt;

                if (before != after)
                    min_worm++;
            }
        }

        cout << min_worm << '\n';

        delete isVisited;
    }

    return 0;
}

void farm_print(int** f, int m, int n)
{
    cout << "========farm=======\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << f[i][j] << ' ';
        }
        cout << '\n';
    }
}

void make_adj_mat(int** f, int** g, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (f[i][j] != 1)
                continue;

            vector<pair<int, int>> v = get_adj_node(i, j, m, n);

            for (auto it : v)
            {
                if (f[it.first][it.second] != 0)
                    continue;

                g[i * n + j][it.first * n + it.second] = g[it.first * n + it.second][i * n + j] = 1;
            }
        }
    }
}

void graph_print(int** g, int m, int n)
{
    cout << "========graph======\n";

    for (int i = 0; i < m * n; i++)
    {
        for (int j = 0; j < m * n; j++)
        {
            cout << g[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << "===================\n";  
}

void dfs(int** g, int n, int v)
{
    if (isVisited[v] == 1)
        return;

    cnt++;

    isVisited[v] = 1;
    
    for (int i = 0; i < n; i++)
    {
        if ((g[v][i] == 1) && (isVisited[i] == 0))
            dfs(g, n, i);
    }
}

vector<pair<int, int>> get_adj_node(int i, int j, int m, int n)
{
    vector<pair<int, int>> v;

    for (int a = 0; a < 4; a++)
    {
        v.push_back(make_pair(i + d[a][0], j + d[a][1]));

        if ((0 > v.back().first) || (v.back().first >= n))
        {
            v.pop_back();
            continue;
        }

        if ((0 > v.back().second) || (v.back().second >= m))
        {
            v.pop_back();
            continue;
        }
    }

    return v;
}
