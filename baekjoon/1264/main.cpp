#include <iostream>
#include <string>
using namespace std;

char v[10] = {'a', 'e', 'i', 'o', 'u'};

bool isVowels(char c);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;

    int out = 0;

    while (getline(cin, s))
    {
        if (s == "#")
            break;

        for (int i = 0; i < s.size(); i++)
        {
            if (isVowels(s[i]))
                out++;
        }

        cout << out << '\n';

        out = 0;
    }

    return 0;
}

bool isVowels(char c)
{
    for (int i = 0; i < 10; i++)
    {
        if (v[i] == tolower(c))
            return true;
    }

    return false;
}
