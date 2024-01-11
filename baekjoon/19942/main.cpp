#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    if (a[0] < b[0])
        return true;
    else if (a[0] > b[0])
        return false;
    else {
        int max = (a.size() > b.size() ? a.size() : b.size());
        int min = (a.size() > b.size() ? b.size() : a.size());
        for (int i = 1; i < max; i++) {
            if (i == min) {
                if (a.size() > b.size())
                    return false;
            }

            else if (a[i] > b[i])
                return false;
            else if (a[i] < b[i])
                return true;
            else
                continue;
        }
    }
    return true;
}

int main()
{
    int n, mp, mf, ms, mv;
    cin >> n >> mp >> mf >> ms >> mv;

    vector<vector<int>> items(n);

    int p, f, s, v, c;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> f >> s >> v >> c;
        items[i].push_back(p);
        items[i].push_back(f);
        items[i].push_back(s);
        items[i].push_back(v);
        items[i].push_back(c);
    }

    vector<vector<int>> result;
    int lowestCost = 10000;

    // combination using permutation
    for (int i = 1; i <= n; i++)
    {
        vector<int> t;
        for (int j = 0; j < i; j++)
            t.push_back(0);
        for (int j = 0; j < n - i; j++)
            t.push_back(1);

        sort(t.begin(), t.end());

        do {
            int sp = 0;
            int sf = 0;
            int ss = 0;
            int sv = 0;
            int sc = 0;

            for (int j = 0; j < n; j++) {
                if (t[j] == 0) {
                    sp += items[j][0];
                    sf += items[j][1];
                    ss += items[j][2];
                    sv += items[j][3];
                    sc += items[j][4];
                }
            }

            if (mp <= sp && mf <= sf && ms <= ss && mv <= sv && lowestCost >= sc)
            {
                lowestCost = sc;
                vector<int> tmp;
                tmp.push_back(sc);
                for (int z = 0; z < t.size(); z++)
                {
                    if (t[z] == 0)
                        tmp.push_back(z + 1);
                }
                result.push_back(tmp);
            }

        } while (next_permutation(t.begin(), t.end()));
    }

    // sort in lexicographically
    sort(result.begin(), result.end(), cmp);

    if (!result.size())
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << result[0][0] << '\n';
        for (int i = 1; i < result[0].size(); i++)
        {
            cout << result[0][i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
