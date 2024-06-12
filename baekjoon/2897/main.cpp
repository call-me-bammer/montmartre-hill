#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    char map[50][50];
    string row;
    for (int i = 0; i < r; i++) {
        cin >> row;
        for (int j = 0; j < row.size(); j++) {
            map[i][j] = row[j];
        }
    }

    int answer[5] = { 0, 0, 0, 0, 0 };
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c - 1; j++) {
            string space = "";
            space.push_back(map[i][j]);
            space.push_back(map[i][j+1]);
            space.push_back(map[i+1][j]);
            space.push_back(map[i+1][j+1]);
            
            if (space.find('#') == string::npos)
                answer[count(space.begin(), space.end(), 'X')]++;
        }
    }

    for (int i = 0; i < 5; i++)
        cout << answer[i] << '\n';

    return 0;
}
