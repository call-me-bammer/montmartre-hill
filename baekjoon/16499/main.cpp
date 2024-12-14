#include <iostream>
#include <algorithm> // std::equal
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    vector<array<int, 26>> words;

    for (int i = 0; i < n; i++) {
        array<int, 26> word = { 0 };
        string s;
        cin >> s;

        for (int j = 0; j < s.size(); j++) {
            word[s[j] - 'a']++;
        }

        if (find(words.begin(), words.end(), word) == words.end()) {
            count++;
            words.push_back(word);
        }
    }

    cout << count << '\n';
    return 0;
}
