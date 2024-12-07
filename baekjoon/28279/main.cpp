#include <iostream>
#include <deque>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    deque<int> dq;

    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a;
        switch (a) {
            case 1:
                cin >> b;
                dq.push_front(b);
                break;
            case 2:
                cin >> b;
                dq.push_back(b);
                break;
            case 3:
                if (dq.empty()) {
                    cout << -1 << '\n';
                } else {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
                break;
            case 4:
                if (dq.empty()) {
                    cout << -1 << '\n';
                } else {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
                break;
            case 5:
                cout << dq.size() << '\n';
                break;
            case 6:
                if (dq.empty()) {
                    cout << 1 << '\n';
                } else {
                    cout << 0 << '\n';
                }
                break;
            case 7:
                if (dq.empty()) {
                    cout << -1 << '\n';
                } else {
                    cout << dq.front() << '\n';
                }
                break;
            case 8:
                if (dq.empty()) {
                    cout << -1 << '\n';
                } else {
                    cout << dq.back() << '\n';
                }
                break;
        }
    }

    return 0;
}
