#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (auto i : v)
    {
        cout << i << '\n';
    }

    return 0;
}
