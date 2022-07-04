#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int alphaId[26] = {0};
int alphaDj[26] = {0};

int main() {

    int n, m, sLen;
    cin >> n >> m >> sLen;

    char dj[n][m];
    string s;

    string line;

    // store positions of Dungeon for alphaId
    map<char, vector<pair<int, int>>> posDj;

    for (int i = 0; i < n; i++) {
        cin >> line;
        for (int j = 0; j < m; j++) {
            dj[i][j] = line[j];
            alphaDj[line[j] - 'a']++;
            posDj[line[j]].push_back(make_pair(i, j));
        }
    }

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        alphaId[s[i] - 'a']++;
    }

    // find c
    int c = 2500;

    for (int i = 0; i < 26; i++) {
        if (alphaId[i] > 0) {
            c = min(c, alphaDj[i] / alphaId[i]);
        }
    }

    int cy = 0, cx = 0;
    int dy = 0, dx = 0;
    string path;

    for (int i = 0; i < c; i++) {

        for (int j = 0; j < s.size(); j++) {

            dy = posDj[s[j]].front().first;
            dx = posDj[s[j]].front().second;

            while (1) {

                if (cy < dy) { // down
                    cy++;
                    path += 'D';
                } else if (cy > dy) { // up
                    cy--;
                    path += 'U';
                } else if (cx < dx) { // right
                    cx++;
                    path += 'R';
                } else if (cx > dx) { // left
                    cx--;
                    path += 'L';
                }

                else {
                    path += 'P';
                    posDj[s[j]].erase(posDj[s[j]].begin());
                    break;
                }
            }
        }
    }

    dy = n - 1;
    dx = m - 1;

    while (1) {

        if (cy < dy) { // down
            cy++;
            path += 'D';
        } else if (cy > dy) { // up
            cy--;
            path += 'U';
        } else if (cx < dx) { // right
            cx++;
            path += 'R';
        } else if (cx > dx) { // left
            cx--;
            path += 'L';
        }

        else {
            break;
        }
    }

    cout << c << ' ' << path.length() << '\n'
         << path << '\n';

    return 0;
}
