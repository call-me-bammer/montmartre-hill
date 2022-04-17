#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    string s;

    while (1)
    {
        cin >> c;
        if (c == '#')
            break;

        int cnt = 0;

        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == tolower(c)) || (s[i] == toupper(c)))
                cnt++;
        }

        cout << c << ' ' << cnt << endl;
    }

    return 0;
}
