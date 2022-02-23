#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        sum += pow(s[i] - '0', 5);
    }

    cout << sum << endl;
    return 0;
}
