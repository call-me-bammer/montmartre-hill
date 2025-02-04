#include <iostream>
#include <vector>
using namespace std;

void nQueen(vector<vector<int>> &board, int row);
void checkBoard(vector<vector<int>> &board, int x, int y, int a);

int n;
int theCase = 0;

// test stdin
// int a;

int main() {
  cin >> n;

  vector<vector<int>> board(n, vector<int>(n, 0));
  nQueen(board, 0); // row 0 to n - 1

  cout << theCase << '\n';
  return 0;
}

void nQueen(vector<vector<int>> &board, int row) {
  // when row reaches n, print the board
  if (row == n) {
    theCase++;
    // test print
    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < n; j++) {
    //     cout << board[i][j] << ' ';
    //   }
    //   cout << '\n';
    // }
    // cin >> a;
    return;
  }

  for (int col = 0; col < n; col++) {
    if (board[row][col] == 0) {
      checkBoard(board, row, col, 1);  
      nQueen(board, row + 1);
      checkBoard(board, row, col, -1);
    }
  }
}

void checkBoard(vector<vector<int>> &board, int x, int y, int a) {
  // check row and column
  for (int i = 0; i < n; i++) {
    board[x][i] += a;
    board[i][y] += a;
  }
  board[x][y] -= a;

  // check diagonal
  for (int i = 1; i < n; i++) {
    if (x + i < n && y + i < n) 
      board[x + i][y + i] += a;
    if (x + i < n && y - i >= 0)
      board[x + i][y - i] += a; 
    if (x - i >= 0 && y + i < n)
      board[x - i][y + i] += a; 
    if (x - i >= 0 && y - i >= 0)
      board[x - i][y - i] += a;  
  }
}
