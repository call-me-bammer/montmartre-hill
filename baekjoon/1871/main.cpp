#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void parse_string(string s);

int main()
{
    int n;
    cin >> n;

    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        parse_string(s);
    }

    return 0;
}

void parse_string(string s)
{
    int first = 0, second = 0;

    for (int i = 0; i < 3; i++)
        first += pow(26, 2 - i) * (s[i] - 'A');

    second = stoi(s.substr(4));

    if (abs(first - second) <= 100) {
        cout << "nice" << endl;
    } else {
        cout << "not nice" << endl;
    }
}
