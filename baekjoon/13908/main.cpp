#include <iostream>
#include <string>
#include <set>
using namespace std;

#define MAX_COUNT 10000001

//set<string> pw;
bool pw[MAX_COUNT];
set<char> s;

bool isCandidate(const string& password);

int main() {
    int n, m, a;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a;
        s.insert(a);
    }

    int max_num = 1;
    for (int i = 0; i < n; i++) {
        max_num *= 10;
    }

    for (int num = 0; num < max_num; num++) {
        string password = to_string(num);
        while (password.length() < n) {
            password = '0' + password;
        }

        if (isCandidate(password)) {
            //pw.insert(password);
            pw[stoi(password)] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < MAX_COUNT; i++) {
        if (pw[i]) {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}

bool isCandidate(const string& password) {
    for (char ch : s) {
        if (password.find(to_string(ch)) == string::npos) {
            return false;
        }
    }
    return true;
}
