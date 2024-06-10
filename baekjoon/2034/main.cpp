#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string notes = "CDEFGAB";
    int nextDistances[] = {0, 2, 4, 5, 7, 9, 11};

    int howManyNote = 0;
    cin >> howManyNote;

    vector<int> score;
    int note;
    for (int i = 0; i < howManyNote; i++) {
        cin >> note;
        score.push_back(note);
    }

    vector<pair<char, char>> possiblePairs;
    for (int i = 0; i < notes.size(); i++) {
        int next_index = nextDistances[i];
        char initial_note = notes[i];
        char current_note = initial_note;

        bool isValid = true;

        for (int j = 0; j < score.size(); j++) {
            next_index += score[j];
            
            while (next_index < 0) {
                next_index += 12;
            }
            next_index %= 12;

            bool isFound = false;

            int z;            
            for (z = 0; z < notes.size(); z++) {
                if (next_index == nextDistances[z]) {
                    isFound = true;
                    break;
                }
            }
            
            if (!isFound) {
                isValid = false;
                break;
            }
            current_note = notes[z];
        }

        if (isValid) {
            possiblePairs.push_back(make_pair(initial_note, current_note));
        }
    }

    sort(possiblePairs.begin(), possiblePairs.end());

    for (auto p: possiblePairs) {
        cout << p.first << ' ' << p.second << '\n';
    }

    return 0;
}
