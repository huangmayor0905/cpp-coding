#include <iostream>
#include <vector>
using namespace std;

void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << (j == board[i].size() - 1 ? ' ' : '|');
        }
        cout << ((i == board.size() - 1) ? "\n" : "\n-----");
        cout << "\n";
    }
}

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

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));  // ��l�ƹC���O
    char currentPlayer = 'X';                             // �]�m��e���a

    while (true) {
        system("cls");
        cout << "��e�ѽL�G" << endl;
        printBoard(board);

        int row, col;
        cout << "���� " << currentPlayer << " ���a�A�п�J�y�С]�� �C�^�G";
        cin >> row >> col;

        // �ˬd�y�Ъ��X�k��
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "��J�L�ġI�Э��s��J�C" << endl;
            system("pause");
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;

        // �ˬd�O�_�����a���
        if (checkWin(board, currentPlayer)) {
            cout << "���ߪ��a " << currentPlayer << " ��ӡI" << endl;
            break;
        }

        // �ˬd�C���O�_����
        if (isGameOver(board)) {
            cout << "�C�������A�����I" << endl;
            break;
        }

        // �������a
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
