#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    bool isModified = false;
    
    set<string> s;
    s.insert("Never gonna give you up");
    s.insert("Never gonna let you down");
    s.insert("Never gonna run around and desert you");
    s.insert("Never gonna make you cry");
    s.insert("Never gonna say goodbye");
    s.insert("Never gonna tell a lie and hurt you");
    s.insert("Never gonna stop");

    for (int i = 0; i < n; i++) {   
        string t;
        getline(cin, t);
        if (s.find(t) != s.end()) {
            continue;
        }
        isModified = true;
        break;
    }

    if (isModified) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
