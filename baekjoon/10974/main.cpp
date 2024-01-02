#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);

    do {
        for (auto i: v)
            cout << i << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.begin() + n));

    return 0;
}
