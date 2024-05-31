#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    vector<int> v;
    v.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        v.push_back(max(v[i-1] + a[i], a[i]));
    }

    cout << *max_element(v.begin(), v.end()) << '\n';
    return 0;
}
