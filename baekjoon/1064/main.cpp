#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

double ccw(double ax, double ay, double bx, double by, double cx, double cy) {
    return (bx - ax) * (cy - ay) - (cx - ax) * (by - ay);
}

int main()
{
    double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    if (ccw(ax, ay, bx, by, cx, cy) == 0) {
        cout << fixed << setprecision(16) << -1.0 << '\n';
        return 0;
    }

    double ab = sqrt(pow((bx - ax), 2.0) + pow((by - ay), 2.0));
    double ac = sqrt(pow((cx - ax), 2.0) + pow((cy - ay), 2.0));
    double bc = sqrt(pow((cx - bx), 2.0) + pow((cy - by), 2.0));

    vector<double> res;
    res.push_back(2 * ab + 2 * ac);
    res.push_back(2 * ab + 2 * bc);
    res.push_back(2 * ac + 2 * bc);

    sort(res.begin(), res.end());

    cout << fixed << setprecision(16) << abs(res[0] - res[2]) << '\n';

    return 0;
}
