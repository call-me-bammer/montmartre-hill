#include <iostream>
using namespace std;

int main() {
    string name;
    int age, weight;

    while (true) {
        cin >> name >> age >> weight;

        if (name == "#") {
            break;
        }

        cout << name << ' '
             << (age > 17 || weight >= 80
             ? "Senior\n" : "Junior\n");
    }

    return 0;
}
