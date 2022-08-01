#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int br, bc, dr, dc, jr, jc;
    cin >> br >> bc >> dr >> dc >> jr >> jc;

    int r = abs(jr - br);
    int c = abs(jc - bc);

    int bj = (r >= c ? r : c);
    int dj = abs(jr - dr) + abs(jc - dc);

    if (bj < dj) {
        cout << "bessie\n";
    } else if (bj > dj) {
        cout << "daisy\n";
    } else {
        cout << "tie\n";
    }

    return 0;
}
