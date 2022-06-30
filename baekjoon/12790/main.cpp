#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    int hp, mp, ap, dp;
    int _hp, _mp, _ap, _dp;

    for (int i = 0; i < t; i++) {
        cin >> hp >> mp >> ap >> dp;
        cin >> _hp >> _mp >> _ap >> _dp;

        hp += _hp;        
        mp += _mp;

        if (hp < 1) hp = 1;
        if (mp < 1) mp = 1;

        ap += _ap;
        dp += _dp;

        if (ap < 0) ap = 0;

        int power = hp + 5 * mp + 2 * ap + 2 * dp;

        cout << power << endl;
    }

    return 0;
}
