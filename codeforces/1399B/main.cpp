#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int t, n;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin >> n;

        int a, b, ma, mb;
        std::vector<int> va, vb;

        for (int j = 0; j < n; j++)
        {
            std::cin >> a;
            va.push_back(a);
        }

        for (int z = 0; z < n; z++)
        {
            std::cin >> b;
            vb.push_back(b);
        }

        ma = *std::min_element(va.begin(), va.end());
        mb = *std::min_element(vb.begin(), vb.end());
    
        long long out = 0;

        for (size_t it = 0; it < va.size(); it++)
        {
            out += std::max(va[it] - ma, vb[it] - mb);
        }

        std::cout << out << '\n';
    }

    return 0;
}
