#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, string> m;
    m["Algorithm"] = "204";
    m["DataAnalysis"] = "207";
    m["ArtificialIntelligence"] = "302";
    m["CyberSecurity"] = "B101";
    m["Network"] = "303";
    m["Startup"] = "501";
    m["TestStrategy"] = "105";

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << m[s] << '\n';
    }

    return 0;
}
