#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int i = 0;
  string s;
  for (int j = 0; j < 3; j++) {
    cin >> s;

    try {
      int n = stoi(s);
      i = n;
    } catch (invalid_argument &e) {
      // do nothing
    }

    if (i != 0) {
      i++;
    }
  }

  string answer = to_string(i);
  if (i % 3 == 0 && i % 5 == 0) {
    answer = "FizzBuzz";
  } else if (i % 3 == 0) {
    answer = "Fizz";
  } else if (i % 5 == 0) {
    answer = "Buzz";
  }

  cout << answer << endl;
  return 0;
}
