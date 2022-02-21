#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
using namespace std;

#define DIRECTIVE_CONSTANT 4

int d[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int* isVisited;
int min_worm;

void dfs(list<int>* g, int n, int v);
vector<pair<int, int>> find_node(int** farm, int n, int m, int a, int b);
int cnt_visited(int* isV, int n);

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
        for (int j = 0; j < n; j++)
            farm[j] = new int[m]();

        int x, y;

        for (int z = 0; z < k; z++)
        {
            cin >> x >> y;
            farm[y][x] = 1;
        }

        list<int> g[n * m];

        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < m; b++)
            {
                if (farm[a][b] == 0)
                    continue;

                vector<pair<int, int>> v = find_node(farm, n, m, a, b);

                for (auto it : v)
                {
                    int n1 = a * m + b;
                    int n2 = it.first * m + it.second;

                    if (find(g[n1].begin(), g[n1].end(), n2) == g[n1].end())
                        g[n1].push_back(n2);

                    if (find(g[n2].begin(), g[n2].end(), n1) == g[n2].end())
                        g[n2].push_back(n1);
                }
            }
        }

        isVisited = new int[n * m]();
        min_worm = 0;

        int before = 0;

        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < m; b++)
            {
                if (farm[a][b] == 0)
                    continue;

                dfs(g, n * m, a * m + b);

                int after = cnt_visited(isVisited, n * m);

                if (before != after)
                {
                    min_worm++;
                    before = after;
                }
            }
        }

        cout << min_worm << '\n';
        
        delete isVisited;
        delete[] farm;
    }

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

vector<pair<int, int>> find_node(int** farm, int n, int m, int a, int b)
{
    vector<pair<int, int>> v;

    for (int i = 0; i < DIRECTIVE_CONSTANT; i++)
    {
        int x = a + d[i][0];
        int y = b + d[i][1];

        if ((x < 0) || (x >= n))
            continue;

        if ((y < 0) || (y >= m))
            continue;

        if (farm[x][y] == 1)
            v.push_back(make_pair(x, y));
    }

    return v;
}

int cnt_visited(int* isV, int n)
{
    int out = 0;

    for (int i = 0; i < n; i++)
    {
        if (isVisited[i])
            out++;
    }

    return out;
}
