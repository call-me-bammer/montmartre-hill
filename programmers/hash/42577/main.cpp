#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
  bool answer = true;

  unordered_map<string, int> um;
  for (int i = 0; i < phone_book.size(); i++) {
    for (int j = 1; j <= phone_book[i].length(); j++) {
      #ifdef DEBUG
      cout << phone_book[i].substr(0, j) << ", " << i << '\n';
      #endif
      if (um.find(phone_book[i].substr(0, j)) != um.end()) {
        um[phone_book[i].substr(0, j)]++;
      } else {
        um[phone_book[i].substr(0, j)] = 1;
      }
    }
  }

  for (int i = 0; i < phone_book.size(); i++) {
    if ((um.find(phone_book[i]) != um.end()) && (um[phone_book[i]] > 1)) {
      answer = false;
      break;
    }
  }

  return answer;
}

int main() {
  if (solution({"12","123","1235","567","88"}))
    cout << "true\n";
  else
    cout << "false\n";
  return 0;
}
