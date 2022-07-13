#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    int n, sum = 0;

    string s;
    getline(cin, s);

    istringstream is(s);

    while (is >> n) {
        sum += n;
    }

    cout << sum << endl;
    return 0;
}
