#include <iostream>
#include <algorithm>
using namespace std;

int cash_prize(int a[]);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int a[3] = {0};
    int result = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 3; j++)
            cin >> a[j];

        int out = cash_prize(a);

        if (result < out)
            result = out;
    }

    cout << result << endl;

    return 0;
}

int cash_prize(int a[])
{
    int out = 0;
    int d[7] = {0};

    for (int i = 0; i < 3; i++)
        d[a[i]]++;

    int cnt = *max_element(d, d + 7);
    int max = max_element(d, d + 7) - d;

    if (cnt == 3) {
        out = 10000 + max * 1000;

    } else if (cnt == 2) {
        out = 1000 + max * 100;

    } else { // cnt == 1

        for (int i = 6; i > 0; i--) {
            if (d[i] == 1) {
                max = i;
                break;
            }
        }

        out = max * 100;
    }

    return out;
}
