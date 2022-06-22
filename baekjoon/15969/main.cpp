#include <iostream>
using namespace std;

int main() {

    int n, score;
    cin >> n;

    int max = 0;
    int min = 0;
    
    int maxScoreDiff = 0;

    cin >> score;
    max = score;
    min = score;

    for (int i = 1; i < n; i++) {
        cin >> score;

        if (max < score) max = score;
        if (min > score) min = score;
    }

    maxScoreDiff = max - min;

    cout << maxScoreDiff << endl;

    return 0;
}
