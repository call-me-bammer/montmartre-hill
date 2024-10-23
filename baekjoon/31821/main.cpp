#include <iostream>
using namespace std;

int main() {
    int n, m, menu;
    int sum = 0;
    int prices[11];
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> prices[i];
    }

    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> menu;
        sum += prices[menu];
    }

    cout << sum << '\n';
    return 0;
}
