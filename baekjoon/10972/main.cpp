#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    vector<int> cmp;

    int a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        v.push_back(a);
        cmp.push_back(i);
    }

    next_permutation(v.begin(), v.end());

    if (v == cmp)
        cout << -1 << '\n';

    else
    {
        for (auto i: v)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
