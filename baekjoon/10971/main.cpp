#include <iostream>
#include <algorithm> // for min_element()
#include <vector>
#include <cstring> // for memcpy()
using namespace std;

int n;
int minimum_traversal_cost = 10000000;

int g[10][10];

void traversal(int src, int cost, int visit[], int dst);

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }
    }

    vector<int> dest;

    for (int i = 1; i < n; i++)
    {
        /* candidate of destination */
        if (g[i][0] != 0)
        {
            dest.push_back(i);
        }
    }

    for (int i = 0; i < dest.size(); i++)
    {
        int isVisited[n] = {1, 0, };
        isVisited[dest[i]] = 2;

        // cost : start with g[dst][src]
        traversal(0, g[dest[i]][0], isVisited, dest[i]);
    }

    cout << minimum_traversal_cost << endl;

    return 0;
}

void traversal(int src, int cost, int visit[], int dst)
{
    // termination condition for main recursion
    if ((*min_element(visit, visit + n) != 0) && (g[src][dst] != 0) && (cost + g[src][dst] < minimum_traversal_cost))
    {
        // cost : add g[one-step before dst][dst]
        minimum_traversal_cost = cost + g[src][dst];
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (visit[i] == 0)
        {
            // case. un-visited, but can't traverse because of g[src][i] == 0
            if (g[src][i] == 0)
                continue;

            // copy array
            int v[n];
            memcpy(v, visit, sizeof(int) * n);

            v[i] = 1;

            traversal(i, cost + g[src][i], v, dst);
        }
    }
}
