#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

char c[9] = {'/', '-', '\\', '(', '@', '?', '>', '&', '%'};

char find(char c);

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    
    while (1)
    {
        cin >> s;
        if (s == "#")
            break;

        int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            sum += pow(8, s.size() - 1 - i) * (distance(c, find(c, c + 9, s[i])) - 1);
        }
        cout << sum << '\n';
    }

    return 0;
}
