#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // a + b + c = n
  int n;
  cin >> n;

  int n_of_triangles = 0;
  // set a as the longest side
  // ex. n = 9, a = 4 or 3
  for (int a = (n + 1) / 2 - 1; a >= n - a * 2; a--) {
    /* O(N) solution */
    int max_b = a;
    int min_c = n - a - max_b;
    // max_b - min_c = a - n + a + max_b = 3a - n
    
    // if n = 17, answer is 8.
    // if a = 8, {b, c} = {8, 1}, {7, 2}, {6, 3}, {5, 4}
    // if a = 7, {b, c} = {7, 3}, {6, 4}, {5, 5}
    // if a = 6, {b, c} = {6, 5}
    n_of_triangles += ceil((3 * a - n + 1) / 2.0);

    /*
    // O(N^2) solution
    for (int b = a; b >= n - a - b; b--) {
      int c = n - a - b;
      n_of_triangles++;
    }
    */
  }

  cout << n_of_triangles << endl;
  return 0;
}
