#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[4];
    int maxiAll = 0;
    int maxCnt, maxTmp, sameCnt;

    for (int i = 0; i < n; i++) {

        int* d = new int[7]();
        vector<int> candy;
        
        maxTmp = 0;
        maxCnt = 0;
        sameCnt = 0;

        for (int j = 0; j < 4; j++) {
            cin >> a[j];
            if (maxTmp < a[j])
                maxTmp = a[j];

            if (d[a[j]] == 1) {
                sameCnt++;
                candy.push_back(a[j]);
            }

            d[a[j]]++;
        }

        maxCnt = *max_element(d, d + 7);

        if (maxCnt == 4) {
            maxiAll = max(maxiAll, 50000 + candy[0] * 5000);
        } else if (maxCnt == 3) {
            maxiAll = max(maxiAll, 10000 + candy[0] * 1000);
        } else if (sameCnt == 2) {
            maxiAll = max(maxiAll, 2000 + candy[0] * 500 + candy[1] * 500);
        } else if (maxCnt == 2) {
            maxiAll = max(maxiAll, 1000 + candy[0] * 100);
        } else {
            maxiAll = max(maxiAll, maxTmp * 100);
        }

        delete d;
    }

    cout << maxiAll << endl;

    return 0;
}
