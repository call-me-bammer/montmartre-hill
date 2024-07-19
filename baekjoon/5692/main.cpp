#include <iostream>
using namespace std;

int factorial[6] = {1, 1, 2, 6, 24, 120};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int f;

    while (cin >> f)
    {
        if (f == 0)
            break;
        string s = to_string(f);

        int answer = 0;
        for (int i = 0; i < s.size(); i++)
        {
            answer += (s[i] - '0') * factorial[s.size() - i];
        }
        cout << answer << '\n';
    }

    return 0;
}
