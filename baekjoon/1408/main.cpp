#include <iostream>
#include <string>
using namespace std;

string secondToOut(int s);
string toFormattedString(int d);

int main()
{
    string a, b;
    cin >> a >> b;

    int current = stoi(a.substr(0, 2)) * 3600
                + stoi(a.substr(3, 2)) * 60
                + stoi(a.substr(6, 2));

    int start = stoi(b.substr(0, 2)) * 3600
              + stoi(b.substr(3, 2)) * 60
              + stoi(b.substr(6, 2));

    int seconds = start - current;

    cout << secondToOut(seconds) << endl;
    
    return 0;
}

string secondToOut(int s)
{
    int remain = (s < 0 ? 86400 + s : s);

    int h = remain / 3600;
    remain %= 3600;

    int m = remain / 60;
    remain %= 60;

    string out = toFormattedString(h) + ":" + toFormattedString(m) + ":" + toFormattedString(remain);

    return out;
}

string toFormattedString(int d)
{
    string out = to_string(d);

    if (out.size() == 1)
        out = "0" + out;

    return out;
}
