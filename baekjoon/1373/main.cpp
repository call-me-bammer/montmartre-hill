#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    string out = "";
    int j = 0;
    int d = 0;

    for (int i = 0; i < s.size(); i++)
    {
        d += (s[i] - '0') * pow(2, j);

        j++;

        if ((j == 3) || (i == s.size() - 1))
        {
            out += to_string(d);
            j = 0;
            d = 0;
        }
    }

    reverse(out.begin(), out.end());

    cout << out << endl;

    return 0;
}
