#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int** alpha = new int*[2];
    for (int i = 0; i < 2; i++)
        alpha[i] = new int[26]();
    
    array<string, 2> s;
    cin >> s[0] >> s[1];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            alpha[i][s[i][j] - 'a']++;
        }
    }

    int out = 0;

    for (int i = 0; i < 26; i++)
    {
        out += abs(alpha[0][i] - alpha[1][i]);
    }

    cout << out << endl;

    delete alpha;
    return 0;
}
