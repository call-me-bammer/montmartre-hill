#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

void getDate(string date, int& y, int& m, int& d);
bool itBeDiscard(int pY, int pM, int pD, int y, int m, int d);

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
  vector<int> answer;

  map<char, int> m;
  int py, pm, pd;
  int yyyy, mm, dd;
  int e;
  char c;
  string t = "";

  getDate(today, py, pm, pd);


  for (string s : terms) {
    stringstream ss(s);

    while (ss >> t) {
      if (t[0] >= 'A')
        c = t[0];
      else
        e = stoi(t);
    }
    m[c] = e;
  }

  int idx = 1;
  for (string s : privacies) {
    stringstream ss(s);

    while (ss >> t) {
      if (t[0] >= 'A')
        e = m[t[0]];
      else
        getDate(t, yyyy, mm, dd);
    }

    // adjust
    mm += e;
    while (mm > 12) {
      mm -= 12;
      yyyy++;
    }

    // compare date
    if (itBeDiscard(py, pm, pd, yyyy, mm, dd))
      answer.push_back(idx);
    idx++;
  }

  return answer;
}

void getDate(string date, int& y, int& m, int& d) {
  stringstream ss(date);
  char del = '.';
  ss >> y >> del >> m >> del >> d;
}

bool itBeDiscard(int pY, int pM, int pD, int y, int m, int d) {
  if (pY < y)
    return false;
  else if (pY > y)
    return true;
  else if (pM < m)
    return false;
  else if (pM > m)
    return true;
  else if (pD < d)
    return false;
  else
    return true;
}

int main() {
  vector<int> answer = solution("2022.05.19", {"A 3"}, {"2022.02.19 A", "2022.02.20 A"});
  for (int a : answer)
    cout << a << ' ';
  cout << '\n';
  return 0;
}
