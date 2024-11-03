#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    string result = to_string(d);

    while (result.size() < n) {
        result += to_string(0);
    }

    cout << (result.size() > n ? "No solution" : result) << '\n';
    return 0;
}
