#include <iostream>
using namespace std;

int main() {

    int n, p;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        cin >> p;

        if (p != i)
            count++;
    }
    
    cout << count << endl;
    return 0;
}
