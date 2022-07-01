#include <iostream>
#include <string>
using namespace std;

int main() {

    string n;
    cin >> n;

    int front = 0;
    int back = 0;

    for (int i = 0; i < n.size(); i++) {
        if (i < n.size() / 2) {
            front += n[i] - '0';
        } else {
            back += n[i] - '0';
        }
    }

    if (front == back) {
        cout << "LUCKY" << endl;
    } else {
        cout << "READY" << endl;
    }

    return 0;
}
