#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, n;
    cin >> t;

    string s;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;

        int alpha[26] = {0};

        for (int j = 1; j < s.size(); j++)
        {
            if (s[j - 1] == s[j])
            {
                s.erase(j, 1);
                j--;
            }            
        }
        
        for (int j = 0; j < s.size(); j++)
            alpha[s[j] - 65]++;

        if (*max_element(alpha, alpha + 26) > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
