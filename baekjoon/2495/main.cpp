#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    for (int i = 0; i < 3; i++)
    {
        cin >> s;

        int max = 1;
        int c = 1;

        for (int j = 1; j < s.size(); j++)
        {
            if (s[j - 1] == s[j])
                c++;

            else
                c = 1;

            if (c > max)
                max = c;
        }

        cout << max << endl;
    }

    return 0;
}
