#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    int max = 0;

    vector<pair<int, vector<int>>> v;

    for (int i = n; i > 0; i--) {
        
        int a = n;
        int b = i;

        int cnt = 2;
    
        vector<int> t;
        t.push_back(a);
        t.push_back(b);

        while (a - b >= 0) {
            t.push_back(a - b);
            b = a - b;
            a = a - b;
            cnt++;
        }

        if (cnt > max) {
            max = cnt;
            v.push_back(make_pair(max, t));
        }
    }

    cout << max << endl;

    for (auto i : v) {
        if (i.first != max)
            continue;
        for (auto j : i.second) {
            cout << j << ' ';
        }
        cout << endl;
        break;
    }

    return 0;
}
