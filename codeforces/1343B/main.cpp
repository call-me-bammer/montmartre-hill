#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n % 4 != 0)
        {
            cout << "NO" << '\n';
            continue;
        }

        cout << "YES" << '\n';

        vector<int> v, w;

        for (int j = 1; j <= n / 2; j++)
        {
            v.push_back(2 * j);

            if (j <= n / 4)
            {
                w.push_back(2 * j - 1);
            }

            else
            {
                w.push_back(2 * j + 1);
            }
        }
        
        for (auto z : v)
            cout << z << ' ';
        
        for (auto z : w)
            cout << z << ' ';

        cout << '\n';
    }

    return 0;
}
