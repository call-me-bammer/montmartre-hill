#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int p;
    cin >> p;

    string s;
    for (int i = 0; i < p; i++) {
        cin >> s;
        vector<int> v;
        for (int j = 0; j < s.size(); j++)
            v.push_back(s[j] - '0');

        // copy vector
        vector<int> newV = v;
        sort(newV.begin(), newV.end());


        next_permutation(v.begin(), v.end());
        string output = "";
        string compare = "";
        for (int j = 0; j < s.size(); j++) {
            output += to_string(v[j]);
            compare += to_string(newV[j]);
        }

        if (output == compare)
            cout << "BIGGEST\n";
        else
            cout << output << '\n';
    }

    return 0;
}
