#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool winO = false;
bool winX = false;

void is_win(string s);
void check_win_col(vector<string> board, int j);
void check_win_row(vector<string> board, int i);
void check_win_dig(vector<string> board);

int solution(vector<string> board) {
    int answer = 1;
    int o = 0, x = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '.') { continue; }

            char c = board[i][j];
            c == 'O' ? o++ : x++;

            if (i == 0)
                check_win_col(board, j);

            if (j == 0)
                check_win_row(board, i);
        }
    }

    check_win_dig(board);

    if (winO && winX) {
        answer = 0;
    } else if ((winO) && (o != x + 1)) {
        answer = 0;
    } else if ((winX) && (o != x)) {
        answer = 0;
    } else if ((o != x) && (o != x + 1)) {
        answer = 0;
    }

    return answer;
}

void is_win(string s) {
    if (s == "OOO")
        winO = true;
    else if (s == "XXX")
        winX = true;
}

void check_win_col(vector<string> board, int j) {
    string s;
    for (int i = 0; i < 3; i++)
        s += board[i][j];
    is_win(s);
}

void check_win_row(vector<string> board, int i) {
    string s;
    for (int j = 0; j < 3; j++)
        s += board[i][j];
    is_win(s);
}

void check_win_dig(vector<string> board) {
    string p, q;
    for (int i = 0; i < 3; i++) {
        p += board[i][i];
        q += board[i][2-i];
    }
    is_win(p);
    is_win(q);
}

int main() {
    vector<string> board;
    
    board.push_back("...");
    board.push_back("...");
    board.push_back("...");

    cout << solution(board) << '\n';
    return 0;
}
