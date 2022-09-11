#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
using namespace std;

#define RANGE 1000000

int main()
{
    int n;

    clock_t start, end;
    start = clock();

    int p[RANGE] = {1, 1, 0, };
    vector<int> v;

    for (int i = 0; i < RANGE; i++)
    {
        if (p[i] == 1)
            continue;

        v.push_back(i);

        for (int j = i * 2; j < RANGE; j += i)
            p[j] = 1;
    }

    end = clock();

    while (cin >> n)
    {
        if (n == 0)
            break;

        // parametric search
        int l = 0;
        int r = v.size() - 1;
        
        // TODO. verify
        int h;

        while (l <= r)
        {
            int m = (l + r) / 2;
            
            if (v[m] > n)
                r = m - 1;
            
            else {
                l = m + 1;
                h = m;
            }
            // can't find exact value
        }

        cout << "h : " << v[h] << endl;

        while (p[n - v[h]] != 0)
            h--;

        cout << n << " = " << n - v[h] << " + " << v[h] << '\n';
    }

    cout << "running time : "
         << fixed << setprecision(6)
         << (double)(end - start) / CLOCKS_PER_SEC << '\n';

    return 0;
}
