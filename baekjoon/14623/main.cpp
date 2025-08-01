#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
  string b1, b2;
  cin >> b1 >> b2;

  // binary multiplication (b1 * b2)
  long long result = 0;
  for (int i = 0; i < b2.size(); i++) {
    if (b2[b2.size() - 1 - i] == '1')
      result += stoll(b1, nullptr, 2) << i;
  }

  // Output the result in binary format
  string resultStr = bitset<64>(result).to_string();

  // not leading zeros
  cout << resultStr.substr(resultStr.find('1')) << endl;
  return 0;
}
