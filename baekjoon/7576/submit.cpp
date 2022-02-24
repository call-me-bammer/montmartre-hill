#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

#define DIRECTIVE_CONSTANT 4

int d[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int* isVisited;
int* ripe_date;

void bfs(list<int>* g, int n, queue<int> q);
vector<pair<int, int>> find_node(int** farm, int n, int m, int a, int b);
int count_visited(int n);

int main()
{
    int n, m;
    cin >> m >> n;

    int** farm = new int*[n];
    for (int i = 0; i < n; i++)
        farm[i] = new int[m];

    int tomato;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tomato;
            farm[i][j] = tomato;
        }
    }

    // meke graph using adjancency list
    // * root '0' connects with all '1's of farm
    list<int> g[n * m + 1];

    ripe_date = new int[n * m + 1]();
    queue<int> q;

    int max = n * m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // if -1, ripe_date[] = -1;
            if (farm[i][j] == -1)
            {
                ripe_date[i * m + j + 1] = -1;
                max--;
                continue;
            }
            
            // if 1, connect with node '0'
            if (farm[i][j] == 1)
            {
                g[0].push_back(i * m + j + 1);
                g[i * m + j + 1].push_back(0);
            }

            // if 0 or 1, find adjacent nodes
            vector<pair<int, int>> v = find_node(farm, n, m, i, j);

            for (auto it : v)
            {
                int x = i * m + j + 1;
                int y = it.first * m + it.second + 1;

                if (find(g[x].begin(), g[x].end(), y) == g[x].end())
                    g[x].push_back(y);

                if (find(g[y].begin(), g[y].end(), x) == g[y].end())
                    g[y].push_back(x);
            }
        }
    }

    isVisited = new int[n * m + 1]();

    // bfs
    q.push(0);

    isVisited[0] = 1;
    ripe_date[0] = -1;

    bfs(g, n * m, q);

    // if ripe case, count_visited() == max.
    if (count_visited(n * m) == max)
        cout << *max_element(ripe_date + 1, ripe_date + n * m + 1) << '\n';

    else
        cout << -1 << '\n';

    // free memory
    delete isVisited;
    delete ripe_date;

    return 0;
}

void bfs(list<int>* g, int n, queue<int> q)
{
    while (q.size() != 0)
    {
        // initially root is '0'
        int root = q.front();
        q.pop();

        for (auto it : g[root])
        {
            if (isVisited[it] == 1)
                continue;

            q.push(it);

            isVisited[it] = 1;
            ripe_date[it] = ripe_date[root] + 1;
        }

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

        if (farm[x][y] != -1)
            v.push_back(make_pair(x, y));
    }

    return v;
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
