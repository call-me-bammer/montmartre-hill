#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<char> tracks(n);
  for (int i = 0; i < n; i++) {
    cin >> tracks[i];
  }
  char targetTrack;
  cin >> targetTrack;

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (tracks[i] == targetTrack) {
      count++;
    }
  }
  
  cout << count << endl;
  return 0;
}
