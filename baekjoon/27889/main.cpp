#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<string, string> m;
    m["NLCS"] = "North London Collegiate School";
    m["BHA"] = "Branksome Hall Asia";
    m["KIS"] = "Korea International School";
    m["SJA"] = "St. Johnsbury Academy";

    cout << m[s] << '\n';
    return 0;
}
