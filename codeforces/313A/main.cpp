#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 10)
    {
        cout << n << endl;
        return 0;
    }

    int max_account = -1000000001;

    for (int i = to_string(n).size() - 2; i < to_string(n).size(); i++)
    {
        string s = to_string(n);

        s.erase(i, 1);

        max_account = max(stoi(s), max_account);
    }

    cout << max_account << endl;
    return 0;
}
