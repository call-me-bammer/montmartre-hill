#include <iostream>
#include <string>
#include <sstream>
#include <deque>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while (n--) {
    string line;
    getline(cin, line);

    istringstream iss(line);
    deque<string> words;

    string word;
    while (iss >> word) {
      words.push_back(word);
    }

    int x = 0;
    while (x < 2) {
      words.push_back(words.front());
      words.pop_front();
      x++;
    }

    for (int i = 0; i < words.size(); i++) {
      if (i) cout << ' ';
      cout << words[i];
    }
    cout << endl;
  }

  return 0;
}
