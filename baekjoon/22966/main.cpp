#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    vector<pair<int, string>> v;
    string s;

    for (int i = 0; i < t; i++)
    {
        cin >> s >> n;
        v.push_back(make_pair(n, s));
    }

    sort(v.begin(), v.end());

    cout << v[0].second << endl;
    return 0;
}
