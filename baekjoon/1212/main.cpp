#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string oct_to_bin(int o, int i);

int main()
{
    string oct;
    cin >> oct;

    if (oct == "0")
    {
        cout << 0 << endl;
        return 0;
    }

    string bin;

    for (int i = 0; i < oct.size(); i++)
    {
        bin += oct_to_bin(oct[i] - '0', i);
    }

    cout << bin << endl;

    return 0;
}

string oct_to_bin(int o, int i)
{
    string s;

    if (o == 0)
        return "000";

    do
    {
        s += to_string(o % 2);
        o /= 2;
    } while (o != 0);

    if ((i != 0) && (s.size() < 3))
    {
        int size = s.size();
        for (int j = 0; j < 3 - size; j++)
            s += "0";
    }

    reverse(s.begin(), s.end());

    return s;
}
