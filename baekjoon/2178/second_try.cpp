#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <queue>
using namespace std;

#define DIRECTIVE_CONSTANT 4

int d[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int* isVisited;
int* shortest_path;

vector<pair<int, int>> find_node(int** maze, int n, int m, int a, int b);
void bfs(list<int>* g, int n, int v);

void print_maze(int** maze, int n, int m);
void print_graph(list<int>* g, int n);

int main()
{
    int n, m;
    cin >> n >> m;

    int** maze = new int*[n+1];
    for (int i = 0; i <= n; i++)
        maze[i] = new int[m + 1]();

    string s;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            maze[i][j+1] = s[j] - '0';
        }
    }

    print_maze(maze, n, m);

    // make graph using adjancency list
    list<int> g[n * m + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (maze[i][j] == 0)
                continue;

            // ex. (1,3) => {{1,4}, {2,3}}
            vector<pair<int, int>> v = find_node(maze, n, m, i, j);

            for (auto it : v)
            {
                int x = (i-1) * m + j;
                int y = (it.first-1) * m + it.second;

                if (find(g[x].begin(), g[x].end(), y) == g[x].end())
                    g[x].push_back(y);

                if (find(g[y].begin(), g[y].end(), x) == g[y].end())
                    g[y].push_back(x);
            }
        }
    }

    print_graph(g, n * m);

    // bfs
    isVisited = new int[n * m + 1]();
    shortest_path = new int[n * m + 1]();

    bfs(g, n * m, 1);

    for (int i = 1; i <= n*m; i++)
        cout << shortest_path[i] << ' ';
    cout << endl;

    cout << shortest_path[n * m] << endl;
    return 0;
}


vector<pair<int, int>> find_node(int** maze, int n, int m, int a, int b)
{
    vector<pair<int, int>> v;

    for (int i = 0; i < DIRECTIVE_CONSTANT; i++)
    {
        int x = a + d[i][0];
        int y = b + d[i][1];

        if ((x < 1) || (x > n))
            continue;

        if ((y < 1) || (y > m))
            continue;

        if (maze[x][y] == 1)
        {
            cout << "(" << a << ", " << b << ") => " << "(" << x << ", " << y << ")" << endl;
            v.push_back(make_pair(x, y));
        }
    }

    return v;
}

void bfs(list<int>* g, int n, int v)
{
    queue<int> q;

    isVisited[v] = 1;
    shortest_path[v] = 1;

    q.push(v);

    while (q.size() != 0)
    {
        int r = q.front();
        q.pop();

        for (auto it : g[r])
        {
            if (isVisited[it] == 0)
            {
                isVisited[it] = 1;
                shortest_path[it] = shortest_path[r] + 1;
            
                q.push(it);
            }
        }
    }
}

void print_maze(int** maze, int n, int m)
{
    cout << "==============" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << maze[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "==============" << endl;
}

void print_graph(list<int>* g, int n)
{
    for (int i = 1; i <= n; i++)
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

    cout << "==============" << endl;
}
