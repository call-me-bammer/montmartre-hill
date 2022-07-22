#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <tuple>
using namespace std;

int main() {

    string cmd, name;
    double cost, price;
    int quantity;

    map<string, tuple<double, double, int>> m;

    double value;
    double profit = 0;

    int report_count = 0;

    while (1) {

        cin >> cmd;

        if (cmd == "new") {
            cin >> name >> cost >> price;
            m[name] = make_tuple(cost, price, 0);
        }

        else if (cmd == "buy") {
            cin >> name >> quantity;

            tuple<double, double, int> tmp = make_tuple(get<0>(m[name]), get<1>(m[name]), get<2>(m[name]) + quantity);
            swap(m[name], tmp);
        }

        else if (cmd == "sell") {
            cin >> name >> quantity;
            profit += (get<1>(m[name]) - get<0>(m[name])) * quantity;

            tuple<double, double, int> tmp = make_tuple(get<0>(m[name]), get<1>(m[name]), get<2>(m[name]) - quantity);
            swap(m[name], tmp);
        }
        
        else if (cmd == "delete") {
            cin >> name;
            profit -= get<0>(m[name]) * get<2>(m[name]);
            m.erase(name);
        }

        else if (cmd == "report") {

            if (report_count > 0) { cout << '\n'; }
            report_count++;

            cout << setw(18 + 17) << "INVENTORY REPORT\n";

            cout << "Item Name"
                 << setw(5 + 6) << "Buy At"
                 << setw(6 + 7) << "Sell At"
                 << setw(6 + 7) << "On Hand"
                 << setw(8 + 6) << "Value\n";

            cout << "---------"
                 << setw(5 + 6) << "------"
                 << setw(6 + 7) << "-------"
                 << setw(6 + 7) << "-------"
                 << setw(8 + 6) << "-----\n";

            value = 0;

            for (auto i : m) {

                if (get<2>(i.second) == 0) {
                    break;
                }

                cout << i.first << setw(20 - i.first.size()) << fixed << setprecision(2) << get<0>(i.second);
                cout << setw(6 + 7) << get<1>(i.second);
                cout << setw(6 + 7) << get<2>(i.second);
                cout << setw(8 + 5) << get<0>(i.second) * get<2>(i.second) << '\n';

                value += get<0>(i.second) * get<2>(i.second);
            }

            cout << "------------------------\n";

            cout << "Total value of inventory" << setw(60 - 25) << value << '\n';
            cout << "Profit since last report" << setw(60 - 25) << profit << '\n';
        
            profit = 0;
        }

        else if (cmd == "*") {
            break;
        }
    }

    return 0;
}
