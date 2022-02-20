#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;

#define DIRECTIVE_CONSTANT 4

int d[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int* isVisited;

void dfs(list<int>* g, int n, int v);
vector<pair<int, int>> find_adj(int** map, int n, int a, int b);
int cnt_visited(int* iv, int n);

// debug function
void print_map(int** map, int n);
void print_graph(list<int>* g, int n);

int main()
{
    int n;
    cin >> n;

    int** map = new int*[n];
    for (int i = 0; i < n; i++)
        map[i] = new int[n]();

    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        for (int j = 0; j < n; j++)
        {
            map[i][j] = s[j] - '0';
        }
    }

    //print_map(map, n);

    // make graph using adjacency list
    list<int> g[n * n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 0)
                continue;

            // ex. (0, 1) => <{0, 2}, {1, 1}>
            vector<pair<int, int>> v = find_adj(map, n, i, j);

            for (auto it : v)
            {
                int x = i * n + j;
                int y = it.first * n + it.second;

                // remove duplicate case
                if (find(g[x].begin(), g[x].end(), y) == g[x].end())
                    g[x].push_back(y);

                if (find(g[y].begin(), g[y].end(), x) == g[y].end())
                    g[y].push_back(x);
            }
        }
    }

    //print_graph(g, n * n);

    // dfs
    isVisited = new int[n * n]();
    int before = 0;

    int cnt = 0;
    vector<int> out;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int v = i * n + j;

            if ((map[i][j] == 1) && (isVisited[v] == 0))
            {
                dfs(g, n * n, v);
                cnt++;
            }
            
            int after = cnt_visited(isVisited, n * n);
            
            if (before != after)
            {
                out.push_back(after - before);
                before = after;
            }
        }
    }

    sort(out.begin(), out.end());

    cout << cnt << endl;
    for (auto it : out)
        cout << it << endl;

    return 0;
}

void dfs(list<int>* g, int n, int v)
{
    if (isVisited[v] == 1)
        return;

    isVisited[v] = 1;

    // start dfs from v
    for (auto it : g[v])
    {
        if (isVisited[it] == 0)
            dfs(g, n, it);
    }
}

vector<pair<int, int>> find_adj(int** map, int n, int a, int b)
{
    // return adj. nodes with map[a][b]

    vector<pair<int, int>> v;

    for (int i = 0; i < DIRECTIVE_CONSTANT; i++)
    {
        int x = a + d[i][0];
        int y = b + d[i][1];

        if ((x < 0) || (x >= n))
            continue;

        if ((y < 0) || (y >= n))
            continue;

        if (map[x][y] == 1)
            v.push_back(make_pair(x, y));
    }

    return v;
}

int cnt_visited(int* iv, int n)
{
    int out = 0;

    for (int i = 0; i < n; i++)
    {
        if (iv[i] == 1)
            out++;
    }

    return out;
}

void print_map(int** map, int n)
{
    cout << "==============" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "===============" << endl;
}

void print_graph(list<int>* g, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " : ";

        for (auto it : g[i])
        {
            cout << it << ' ';

            if (it != g[i].back())
                cout << "-> ";
        }
        cout << endl;
    }

    cout << "===============" << endl;
}
