#include <iostream>
#include <string>
using namespace std;

int state_addition(int a, int state);

int main()
{
    string s;
    cin >> s;

    int a = 0;
    int state = 1; // 1 = plus, 0 = minus

    int out = 0;

    for (int i = 0; i < s.size(); i++)
    {
        // meet operator
        if (s[i] == '-')
        {
            out += state_addition(stoi(s.substr(a, i - a)), state);
            a = i + 1;
            
            state = 0;
        }

        else if (s[i] == '+')
        {
            out += state_addition(stoi(s.substr(a, i - a)), state);
            a = i + 1;
        }

        // string-end case
        if (i == s.size() - 1)
            out += state_addition(stoi(s.substr(a, i - a + 1)), state);
    }

    cout << out << endl;

    return 0;
}

int state_addition(int a, int state)
{
    if (state == 0)
        return -a;

    return a;
}
