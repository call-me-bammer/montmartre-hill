#include <iostream>
using namespace std;

int main() {

    int n, store;
    cin >> n;

    int order = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> store;

        if (order == store) {
            count++;
            order++;
        }

        if (order == 3) {
            order = 0;
        }
    }

    cout << count << endl;
    return 0;
}
