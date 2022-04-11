#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string revInt(string s);

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int sum = stoi(revInt(a)) + stoi(revInt(b));
    string out = to_string(sum);

    reverse(out.begin(), out.end());

    cout << revInt(out) << endl;
    return 0;
}

string revInt(string s)
{
    int idx = 0;

    while (s[idx] == '0')
        idx++;

    return s.substr(idx);
}
