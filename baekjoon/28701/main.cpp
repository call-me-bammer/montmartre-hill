#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int sum_of_threes = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
        sum_of_threes += (int)pow(i, 3);
    }

    cout << sum << '\n'
         << (int)pow(sum, 2) << '\n'
         << sum_of_threes << '\n';
    
    return 0;
}
