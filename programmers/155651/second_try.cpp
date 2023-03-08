#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>

using namespace std;

typedef pair<int, int> node;

bool cmp(vector<string> a, vector<string> b);
int stom(string s);

int solution(vector<vector<string>> book_time) {

  // sort
  vector<vector<string>> books = book_time;
  sort(books.begin(), books.end(), cmp);

  // 
  
  vector<list<node>> vl;

  for (auto i : books) {
    bool flag = 0;
    int t_start = stom(i[0]);
    int t_end = stom(i[1]);

    for (int j = 0; j < vl.size(); j++) {
      int b_end = -10;

      for (list<node>::iterator z = vl[j].begin(); z != vl[j].end(); z++) {
        node b = *z;
        int b_start = b.first;

        if ((b_end + 10 <= t_start) && (t_end + 10 <= b_start)) {
          vl[j].insert(z, make_pair(t_start, t_end));
          flag = 1;
          break;
        }

        b_end = b.second;
      }

      if (flag == 1)
        break;

      if (b_end + 10 <= t_start) {
        vl[j].insert(vl[j].end(), make_pair(t_start, t_end));
        flag = 1;
        break;
      }
    }

    // intersect or initial element
    if (flag == 0) {
      list<node> book = {make_pair(t_start, t_end)};
      vl.push_back(book);
    }
  }

  return vl.size();
}

// notice. strict weak ordering
bool cmp(vector<string> a, vector<string> b) {
  if (stom(a[0]) < stom(b[0]))
    return true;
  return false; 
}

// string to minutes
int stom(string s) {
  int result = 0;
  int n = 600;

  for (int i = 0; i < s.length(); i++) {
    if (i < 2) {
      result += (s[i] - '0') * n;
      n /= 10;
    } else if (i == 2) {
      n *= 10;
      n /= 6;
    } else {
      result += (s[i] - '0') * n;
      n /= 10;
    }
  }

  return result;
}

int main() {
  //vector<vector<string>> v = {{"15:00", "17:00"},{"16:40", "18:20"}, {"14:20", "15:20"}, {"14:10", "19:20"}, {"18:20", "21:20"}};
  vector<vector<string>> v = {{"14:20", "15:20"}, {"14:10", "19:20"}, {"18:20", "21:20"}, {"15:00", "17:00"},{"16:40", "18:20"}};
  //vector<vector<string>> v = {{"09:10", "10:10"}, {"10:20", "12:20"}};
  //vector<vector<string>> v = {{"10:00", "10:10"}, {"10:00", "10:10"}};
  cout << solution(v) << '\n';
  return 0;  
}
