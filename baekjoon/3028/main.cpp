#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    int tmp;
    int ball[3] = {1, 0, 0};

    for (int i = 0; i < s.size(); i++) {
        
        if (s[i] == 'A') {
            tmp = ball[0];
            ball[0] = ball[1];
            ball[1] = tmp;
        } else if (s[i] == 'B') {
            tmp = ball[1];
            ball[1] = ball[2];
            ball[2] = tmp; 
        } else {
            tmp = ball[0];
            ball[0] = ball[2];
            ball[2] = tmp;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (ball[i] == 1) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
