#include <iostream>
//#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;

    //transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = 0; i < s.length(); i++)
        s[i] = toupper(s[i]);
    
    /*
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a')
            s[i] -= 32;
        cout << s[i];
    }
    cout << '\n';
    */

    cout << s;
    return 0;
}
