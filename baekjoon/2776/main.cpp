#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, n, m, x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        unordered_map<int, bool> um;

        for (int j = 0; j < n; j++)
        {
            cin >> x;
            um.insert(make_pair(x, true));
        }

        cin >> m;

        for (int z = 0; z < m; z++)
        {
            cin >> x;

            if (um.find(x) != um.end())
                cout << 1 << '\n';
            
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}
