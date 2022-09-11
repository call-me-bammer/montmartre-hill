#include <iostream>
#include <vector>
using namespace std;

#define RANGE 1000000

/* Goldbach's Conjecture */
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    int p[RANGE] = {1, 1, 0, };
    vector<int> v;

    /* sieve of eratosthenes */
    for (int i = 0; i < RANGE; i++)
    {
        if (p[i] == 1)
            continue;

        v.push_back(i);

        for (int j = i * 2; j < RANGE; j += i)
            p[j] = 1;
    }

    while (cin >> n)
    {
        if (n == 0)
            break;

        // parametric search
        int l = 0;
        int r = v.size() - 1;
        int h;

        while (l <= r)
        {
            int m = (l + r) / 2;
            
            if (v[m] > n)
                r = m - 1;
            
            // it NEVER find exact value
            else {
                l = m + 1;
                h = m; // save for finding maximum
            }
        }

        while (p[n - v[h]] != 0)
            h--;
        
        if ((n - v[h] % 2 == 0) || (v[h] % 2 == 0))
        {
            cout << "Goldbach's conjecture is wrong.\n";
            continue;
        }
    
        cout << n << " = " << n - v[h] << " + " << v[h] << '\n';
    }

    return 0;
}
