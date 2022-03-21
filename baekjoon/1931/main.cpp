#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b);

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    int a, b;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), cmp);

    int start = 0;
    int out = 0;

    for (auto i : v)
    {
        if (start <= i.first)
        {
            start = i.second;
            out++;
        }
    }

    cout << out << endl;

    return 0;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;

    else if ((a.second == b.second) && (a.first <= b.first))
        return true;

    else
        return false;
}
