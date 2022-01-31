#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int possible_team(int x, int y, int z);

int main()
{
    int n, t;
    cin >> n;

    vector<int> x, y, z;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;

        switch (t)
        {
            case 1:
                x.push_back(i);
                break;
            case 2:
                y.push_back(i);
                break;
            case 3:
                z.push_back(i);
        }
    }

    int teams = possible_team(x.size(), y.size(), z.size());

    cout << teams << endl;

    vector<int>::iterator xitr, yitr, zitr;
    
    xitr = x.begin();
    yitr = y.begin();
    zitr = z.begin();
    
    for (int i = 0; i < teams; i++)
    {
        cout << xitr[i] << ' '
             << yitr[i] << ' '
             << zitr[i] << endl;
    }

    return 0;
}

int possible_team(int x, int y, int z)
{
    int tmp = min(x, y);

    return min(tmp, z);
}
