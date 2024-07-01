#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        if (n == -1) {
            break;
        }

        // variables
        vector<int> v;
        int sum = 0;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                v.push_back(i);
            }
        }

        for (const auto& j : v) {
            sum += j;
        }

        if (sum != n) {
            cout << n << " is NOT perfect.\n";
            continue;
        }

        cout << n << " = ";
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
            cout << *it;
            if (it != v.end() - 1) {
                cout << " + ";
            }
        }
        cout << '\n';
    }

    return 0;
}
