#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

// ���L�C���O
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// �ˬd�O�_�����a���
bool checkWin(const vector<vector<char>>& board, char player) {
    // �ˬd��M�C
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;  // �������
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;  // �������
        }
    }
    // �ˬd�﨤�u
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;  // �﨤�u���
    }
    return false;  // �S�����
}

// �P�_�C���O�_�����]�����Φ����a��ӡ^
bool isGameOver(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;  // �٦��Ŧ�A�C���~��
            }
        }
    }
    return true;  // �S���Ŧ�A�C������
}

// �q���U��
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
    vector<vector<char>> board(3, vector<char>(3, ' '));  // ��l�ƹC���O
    char playerChar, computerChar;

    cout << "��ܪ��a�Ѥl�]X �� O�^�G";
    cin >> playerChar;
    computerChar = (playerChar == 'X') ? 'O' : 'X';

    while (true) {
        // ���a�U��
        cout << "��e�C���O�G" << endl;
        printBoard(board);
        int row, col;
        cout << "����A�U�ѡA�п�J�y�С]�� �C�^�G";
        cin >> row >> col;
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "��J�L�ġI�Э��s��J�C" << endl;
            continue;
        }
        board[row - 1][col - 1] = playerChar;
        if (checkWin(board, playerChar)) {
            cout << "���ߧA��ӡI" << endl;
            break;
        }
        if (isGameOver(board)) {
            cout << "�C�������A�����I" << endl;
            break;
        }

        // �q���U��
        computerMove(board, computerChar);
        cout << "�q���U�ѡG" << endl;
        if (checkWin(board, computerChar)) {
            cout << "�q����ӡI" << endl;
            break;
        }
        if (isGameOver(board)) {
            cout << "�C�������A�����I" << endl;
            break;
        }
    }

    return 0;
}
