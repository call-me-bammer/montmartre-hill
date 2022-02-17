#include <iostream>
#include <list>
#include <queue>

void dfs(std::list<int>* g, int v);
void bfs(std::list<int>* g, int v);

//void print_graph(std::list<int>* g, int n);

int* isVisited;

int main()
{
    int n, m, v;
    std::cin >> n >> m >> v;

    int a, b;

    std::list<int> g[n + 1];

    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;

        // get edge
        g[a].push_back(b);
        g[b].push_back(a);
    }

    // sort list
    for (int i = 1; i <= n; i++)
    {
        for (auto it : g[i])
        {
            g[i].sort();
        }
    }

    //print_graph(g, n);

    // dfs
    isVisited = new int[n + 1]();
    
    dfs(g, v);
    std::cout << std::endl;

    delete isVisited;

    // bfs
    isVisited = new int[n + 1]();

    bfs(g, v);
    std::cout << std::endl;

    delete isVisited;

    return 0;
}

void dfs(std::list<int>* g, int v)
{
    if (isVisited[v] != 0)
        return;

    isVisited[v] = 1;
    std::cout << v << ' ';

    for (int it : g[v])
    {
        dfs(g, it);
    }
}

void bfs(std::list<int>* g, int v)
{
    if (isVisited[v] != 0)
        return;
    
    isVisited[v] = 1;
    std::cout << v << ' ';

    std::queue<int> q;
    q.push(v);

    while (q.size() != 0)
    {
        int r = q.front();
        q.pop();

        for (int i : g[r])
        {
            if (isVisited[i] == 0)
            {
                isVisited[i] = 1;
                std::cout << i << ' ';
            }
        }

        for (int i : g[r])
        {
            for (int j : g[i])
            {
                if (isVisited[j] == 0)
                {
                    q.push(i);
                    break;
                }
            }
        }
    }
}

/*
void print_graph(std::list<int>* g, int n)
{
    std::cout << "=============" << std::endl;

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " : ";
        for (auto it : g[i])

        {
            std::cout << it;
            if (it != g[i].back())
                std::cout << " -> ";
        }
        std::cout << std::endl;
    }

    std::cout << "=============" << std::endl;
}
*/
