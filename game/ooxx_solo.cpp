#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

// 打印遊戲板
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// 檢查是否有玩家獲勝
bool checkWin(const vector<vector<char>>& board, char player) {
    // 檢查行和列
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;  // 水平獲勝
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;  // 垂直獲勝
        }
    }
    // 檢查對角線
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;  // 對角線獲勝
    }
    return false;  // 沒有獲勝
}

// 判斷遊戲是否結束（平局或有玩家獲勝）
bool isGameOver(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;  // 還有空位，遊戲繼續
            }
        }
    }
    return true;  // 沒有空位，遊戲結束
}

// 電腦下棋
void computerMove(vector<vector<char>>& board, char computerChar) {
    srand(time(0));
    while (true) {
        int row = rand() % 3;
        int col = rand() % 3;
        if (board[row][col] == ' ') {
            board[row][col] = computerChar;
            break;
        }
    }
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));  // 初始化遊戲板
    char playerChar, computerChar;

    cout << "選擇玩家棋子（X 或 O）：";
    cin >> playerChar;
    computerChar = (playerChar == 'X') ? 'O' : 'X';

    while (true) {
        // 玩家下棋
        cout << "當前遊戲板：" << endl;
        printBoard(board);
        int row, col;
        cout << "輪到你下棋，請輸入座標（行 列）：";
        cin >> row >> col;
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "輸入無效！請重新輸入。" << endl;
            continue;
        }
        board[row - 1][col - 1] = playerChar;
        if (checkWin(board, playerChar)) {
            cout << "恭喜你獲勝！" << endl;
            break;
        }
        if (isGameOver(board)) {
            cout << "遊戲結束，平局！" << endl;
            break;
        }

        // 電腦下棋
        computerMove(board, computerChar);
        cout << "電腦下棋：" << endl;
        if (checkWin(board, computerChar)) {
            cout << "電腦獲勝！" << endl;
            break;
        }
        if (isGameOver(board)) {
            cout << "遊戲結束，平局！" << endl;
            break;
        }
    }

    return 0;
}
