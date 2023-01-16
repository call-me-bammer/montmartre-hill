#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, item;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> item;
        v.push_back(item);
    }

    sort(v.begin(), v.end());

    int maxSum = 0;

    do
    {
        int calc = 0;

        for (int i = 0; i < n - 1; i++)
        {
            calc += abs(v[i] - v[i + 1]);
        }

        if (calc > maxSum)
        {
            maxSum = calc;
        }

    } while (next_permutation(v.begin(), v.end()));

    cout << maxSum << endl;
    return 0;
}
