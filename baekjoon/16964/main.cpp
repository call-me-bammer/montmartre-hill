#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define N_MAX 100001

bool check[N_MAX] = { false };
vector<int> order;
vector<int> result;
bool rightOrder = true;

vector<set<int>> g(N_MAX);
int idx = 0;

void dfs(int x) {
    if (check[x] == true) {
        return;
    }

    check[x] = true;
    result.push_back(x);

    idx++;

    for (int y : g[x]) {
        if (g[x].find(order[idx]) != g[x].end()) {
            dfs(order[idx]);
        } else if (check[y] == false) {
            dfs(y);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a, b;
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        order.push_back(a);
    }

    dfs(1);

    for (int i = 0; i < n; i++)
    {
        if (order[i] != result[i]) {
            rightOrder = false;
            break;
        }
    }

    cout << (rightOrder ? 1 : 0) << '\n';
    return 0;
}
