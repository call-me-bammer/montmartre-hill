#include <iostream>

using namespace std;

int main()
{
    int TC;
    cin >> TC;

    int n;
    string a, b;

    for (int i = 1; i <= TC; i++)
    {
        int answer = 0;

        cin >> n >> a >> b;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == b[j])
                answer++;
        }

        printf("#%d %d\n", i, answer);
    }

    return 0;
}
