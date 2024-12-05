#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

int main() {
    int n, m;
    cin >> n >> m;

    string cityNames[MAX];
    for (int i = 0; i < n; i++) {
        cin >> cityNames[i];
    }

    string countyName = "";
    for (int i = 0; i < m; i++) {
        int votesForletters[26] = { 0 };
        int maxVotes = 0;
        for (int j = 0; j < n; j++) {
            int index = cityNames[j][i] - 'a';
            votesForletters[index]++;
            if (maxVotes < votesForletters[index]) {
                maxVotes = votesForletters[index];
            }
        }
        for (int j = 0; j < 26; j++) {
            if (votesForletters[j] == maxVotes) {
                countyName += (char)('a' + j);
                break;
            }
        }
    }

    cout << countyName << endl;
    return 0;
}
