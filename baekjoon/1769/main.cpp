#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;

    while (s.size() != 1)
    {
        int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i] - '0';
        }

        s = to_string(sum);
        cnt++;
    }

    cout << cnt << endl;

    if (((s[0] - '0') % 3) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
