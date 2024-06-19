#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

typedef int LogoId;
typedef int LogoScore;

struct Logo {
    LogoId id;
    LogoScore score;
    int firstVotes;
    int secondVotes;
};

bool compareLogos(const Logo& a, const Logo& b) {
    if (a.score != b.score)
        return a.score > b.score;
    if (a.firstVotes != b.firstVotes)
        return a.firstVotes > b.firstVotes;
    return a.secondVotes > b.secondVotes;
}

void CalculateLogoScores(unordered_map<LogoId, Logo>& logos, int number_of_voters) {
    for (int i = 0; i < number_of_voters; i++) {
        int numberOfVotes;
        cin >> numberOfVotes;

        LogoScore logoScore = 3;
        for (int j = numberOfVotes; j >= 1; j--) {
            LogoId logoId;
            cin >> logoId;

            if (logos.find(logoId) == logos.end()) {
                logos[logoId] = { logoId, 0, 0, 0 };
            }

            logos[logoId].score += logoScore;

            if (logoScore == 3) {
                logos[logoId].firstVotes++;
            } else if (logoScore == 2) {
                logos[logoId].secondVotes++;
            }

            logoScore--;
        }
    }
}

int main() {
    int number_of_voters;

    while (true) {
        cin >> number_of_voters;

        if (number_of_voters == 0)
            break;

        unordered_map<LogoId, Logo> logos;

        CalculateLogoScores(logos, number_of_voters);
        
        // sort
        vector<Logo> logoList;
        for (const auto& logo : logos) {
            logoList.push_back(logo.second);
        }

        sort(logoList.begin(), logoList.end(), compareLogos);

        int highestScore = logoList[0].score;
        int highestFirstVotes = logoList[0].firstVotes;
        int highestSecondVotes = logoList[0].secondVotes;

        vector<int> winners;
        for (const auto& logo : logoList) {
            if (logo.score == highestScore
             && logo.firstVotes == highestFirstVotes
             && logo.secondVotes == highestSecondVotes) {
                winners.push_back(logo.id);
             } else {
                break;
             }
        }

        sort(winners.begin(), winners.end());

        for (int i = 0; i < winners.size(); i++) {
            cout << winners[i];
            if (i != winners.size() - 1)
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
