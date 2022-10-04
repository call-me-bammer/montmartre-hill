#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n, t, p;
    cin >> n;

    int maxSum = 0;

    vector<int> tv;
    vector<int> pv;

    for (int i = 0; i < n; i++) {
        cin >> t >> p;
        tv.push_back(t);
        pv.push_back(p);
    }

    for (int i = 1; i <= n; i++) {

        vector<int> v;
        
        for (int j = 0; j < n; j++) {
            if (j < i)
                v.push_back(1);
            else
                v.push_back(0);
        }

        sort(v.begin(), v.end());

        do {
            int days = 0;
            int pSum = 0;

            int z = 0;

            while (z < n) {
                if ((v[z] == 1) && (tv[z] + days <= n)) {
                    pSum += pv[z];
                    days += tv[z];
                    z += tv[z];
                    continue;
                }
                days++;
                z++;
            }

            if (maxSum < pSum)
                maxSum = pSum;

        } while (next_permutation(v.begin(), v.end()));
    }

    cout << maxSum << '\n';
    return 0;
}
