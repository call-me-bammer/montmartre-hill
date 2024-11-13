#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    
    unordered_map<char, char> m;
    m['i'] = 'e';
    m['e'] = 'i';
    m['I'] = 'E';
    m['E'] = 'I';

    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) != m.end()) {
                s[i] =m[s[i]];
            }
        }
        cout << s << '\n';
    }
    return 0;
}
