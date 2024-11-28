#include <iostream>
using namespace std;

#define MAX_SIZE 10000

int main() {
    int n, k;
    cin >> n >> k;

    int diamonds[MAX_SIZE + 1] = {};
    int max_n = 0;

    for (int i = 1; i <= n; i++) {
        int diamond;
        cin >> diamond;

        if (diamond > max_n)
            max_n = diamond;

        diamonds[diamond]++;
    }

    int j = 1;
    int max_diamonds = 0;
    while (j < max_n) {
        int sum = 0;
        for (int i = j; i <= j + k; i++) {
            if (i > max_n)
                break;
            sum += diamonds[i];
        }

        if (sum > max_diamonds)
            max_diamonds = sum;

        j++;
    }

    cout << max_diamonds << '\n';
    return 0;
}
