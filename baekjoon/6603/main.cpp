#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* implement kC6 combination */
int main()
{
    int k, n;
    int cnt_for_newline = 0;

    // k's range : 6 to 13
    while (cin >> k)
    {
        if (k == 0)
            break;

        if (cnt_for_newline != 0)
            cout << endl;

        cnt_for_newline++;

        vector<int> v;
        vector<int> mask;

        for (int i = 0; i < k; i++)
        {
            cin >> n;
            v.push_back(n);

            if (i < 6)
            {
                mask.push_back(0);
            }

            else
            {
                mask.push_back(1);
            }
        }

        sort(v.begin(), v.end());
        sort(mask.begin(), mask.end());

        do
        {
            for (int i = 0; i < k; i++)
            {
                if (mask[i] == 0)
                    cout << v[i] << ' ';
            }
            cout << endl;

        } while (next_permutation(mask.begin(), mask.end()));
    }

    return 0;
}
