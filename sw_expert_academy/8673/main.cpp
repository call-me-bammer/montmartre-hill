#include <iostream>
#include <deque>
#include <cmath>
#include <stdio.h>

using namespace std;

int func(const int a[], int k);

int main()
{
    int T, k;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> k;
        
        deque<int> dq;
        int n;

        for (int j = 0; j < pow(2, k); j++)
        {
            cin >> n;
            dq.push_back(n);
        }

        int answer = 0;

        for (int j = k; j > 0; j--)
        {
            for (int z = 0; z < pow(2, j - 1); z++)
            {
                int a = dq.front();
                dq.pop_front();
                int b = dq.front();
                dq.pop_front();

                answer += abs(a - b);
                dq.push_back(max(a, b));
            }
        }

        printf("#%d %d\n", i, answer);
    }

    return 0;
}
