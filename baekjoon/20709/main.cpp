#include <iostream>
using namespace std;

int condition[3] = { 1, 1, 2 };
bool checkCondition(int a[3]);

int main() {
    int n;
    cin >> n;

    // number, price
    pair<int, int> cheapestPack = make_pair(0, 100001);

    int price;
    string digits;
    for (int i = 0; i < n; i++) {
        cin >> price >> digits;

        int countDigits[3] = { 0 };
        for (int j = 0; j < digits.size(); j++) {
            if (digits[j] - '0' > 2) {
                continue;
            }
            countDigits[digits[j] - '0']++;
        }

        if (!checkCondition(countDigits)) {
            continue;
        }

        // update
        if (cheapestPack.second > price) {
            cheapestPack.first = i + 1;
            cheapestPack.second = price;
        }
    }

    cout << cheapestPack.first << '\n';
    return 0;
}

bool checkCondition(int a[3]) {
    for (int i = 0; i < 3; i++) {
        if (a[i] < condition[i]) {
            return false;
        }
    }

    return true;
}
