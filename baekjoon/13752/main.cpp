#include <iostream>
#include <string>
using namespace std;

string sample = "=";

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t, data;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string out;

        cin >> data;
        
        for (int j = 0; j < data; j++)
        {
            out += "=";
        }

        cout << out << '\n';
    }

    return 0;
}
