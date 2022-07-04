#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

#define SECONDS_OF_A_DAY 86400

int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    // zero case
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }

    double t[n + 1];
    double p[n + 1];
    int l[n + 1];

    string date, time;
    int level;

    int YYYY, MM, DD;
    int hh, mm, ss;

    int startYear;

    // start with 2019, 2020, 2021, 2022
    int daysOfYear[4] = { 365, 366, 365, 0 };
    int daysOfLeafMonth[11] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
    int daysOfMonth[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

    for (int i = 1; i <= n; i++) {
        cin >> date >> time >> level;

        // parse date & time
        // "기준 연도의 1월 1일에서 t(i)까지 며칠 지났나?"

        YYYY = stoi(date.substr(0, 4));
        MM = stoi(date.substr(5, 2));
        DD = stoi(date.substr(8, 2));

        hh = stoi(time.substr(0, 2));
        mm = stoi(time.substr(3, 2));
        ss = stoi(time.substr(6, 2));

        // 1. i == 1에서 기준 연도를 정한다.
        // 연도는 2019, 2020, 2021, 2022 4개가 있다.
        if (i == 1) {
            startYear = YYYY;
        }

        // 2. 기준 연도에서 date까지 며칠 지났나 계산

        int passedDays = 0;

        for (int i = startYear; i < YYYY; i++) {
            passedDays += daysOfYear[i - 2019];
        }

        for (int i = 0; i < MM - 1; i++) {
            if (YYYY == 2020) {
                passedDays += daysOfLeafMonth[i];
            } else {
                passedDays += daysOfMonth[i];
            }
        }

        passedDays += DD - 1;

        t[i] = passedDays;

        // 3. 0000i에서 몇 시간 지났나 보고 날짜로 계산

        int timeToSeconds = hh * 60 * 60 + mm * 60 + ss;

        t[i] += (double)timeToSeconds / SECONDS_OF_A_DAY;

        // get level
        l[i] = level;
    }

    double plSum = 0;
    double pSum = 0;

    // calc. p
    for (int i = 1; i <= n; i++) {
        p[i] = max(pow(0.5, (t[n] - t[i]) / 365), pow(0.9, n - i));
        plSum += p[i] * l[i];
        pSum += p[i];
    }

    double x = plSum / pSum;

    cout << floor(x + 0.5) << '\n';
    return 0;
}
