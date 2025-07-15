#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  string mbti;
  cin >> mbti;

  map<char, char> reversed_mbti = {
    {'E', 'I'}, {'I', 'E'},
    {'S', 'N'}, {'N', 'S'},
    {'T', 'F'}, {'F', 'T'},
    {'J', 'P'}, {'P', 'J'}
  };

  string mbti_reversed = "";
  for (char& c : mbti) {
    mbti_reversed += reversed_mbti[c];
  }

  cout << mbti_reversed << endl;
  return 0;
}
