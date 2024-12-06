#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, string> m;
    m["a"] = "as";
    m["i"] = "ios";
    m["y"] = "ios";
    m["l"] = "les";
    m["n"] = "anes";
    m["ne"] = "anes";
    m["o"] = "os";
    m["r"] = "res";
    m["t"] = "tas";
    m["u"] = "us";
    m["v"] = "ves";
    m["w"] = "was";

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.substr(s.size() - 2) == "ne") {
            cout << s.substr(0, s.size() - 2) + m["ne"] << '\n';
        } else if (m.find(s.substr(s.size() - 1)) != m.end()) {
            cout << s.substr(0, s.size() - 1) + m[s.substr(s.size() - 1)] << '\n';
        } else {
            cout << s + "us" << '\n';
        }
    }

    return 0;
}
