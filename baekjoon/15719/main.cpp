#include <iostream>
#include <vector>
using namespace std;

#define MAX 10000001

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<bool> bitVector(MAX, false);

    int a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (bitVector[a]) {
            break;
        }

        bitVector[a] = true;
    }

    cout << a << '\n';
    return 0;
}
