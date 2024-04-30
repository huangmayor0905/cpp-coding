#include <cstdlib> /* �üƻݭn�����Y�� */
#include <ctime>   /* �ɶ��ݭn�����Y�� */
#include <iostream>
#include <string>

using namespace std;

string get_four_num();
int guess_num(string n, string ans);
void rule();

int main() {
    system("clear");  // �� relp ���檺�ܰO�o�n�� clear
    srand(time(NULL));
    string ans = get_four_num();
    string input_num;
    int con;

    rule();

    // �q�Ʀr
    do {
        cout << "Please input a number:";
        cin >> input_num;
        if (input_num == "/0") {
            cout << "End...\n";
            break;
        } else if (input_num == "/help") {
            rule();
            con = 0;
        } else {
            con = guess_num(input_num, ans);
        }
    } while (!con);

    // system("pause");
    return 0;
}

// �W�h
void rule() {
    cout << "----------------------------------------\n"
         << "|Rules:                                |\n"
         << "| 1: �@�ӼƦr�����ƪ��|���,�N�o��!ouo |\n"
         << "| 2: a => �Ʀr���T��m���T             |\n"
         << "| 3: b => �Ʀr���T����m�����T         |\n"
         << "| eg. ans:1234 guess:2134 => 2a2b      |\n"
         << "|     ans:2567 guess:0928 => 0a1b      |\n"
         << "|                                      |\n"
         << "|���O: /0    => �����C��               |\n"
         << "|      /help => �W�h����               |\n"
         << "----------------------------------------\n\n";
}

// �o�̥ΨӼg�|�줣���ƼƦr������
string get_four_num() {
    int n[4];
    for (int i = 0; i < 4; i++) {
    re:
        n[i] = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (n[i] == n[j]) {
                goto re;
            }
        }
    }

    char str_n[4];
    for (int i = 0; i < 4; i++) {
        str_n[i] = char(n[i] + 48);  // ASCII �X 48~57 => 0~9
    }
    return str_n;
}

// �P�_�Xa�Xb
int guess_num(string n, string ans) {
    if (n[3] == '\0') {
        cout << "�п�J�|���!\n\n";
        return 0;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (n[i] == n[j]) {
                cout << "�z��J�F���ƪ��Ʀr, �Э��s��J!\n\n";
                return 0;
            }
        }
    }

    int a = 0, b = 0;
    for (int i = 0; i < 4; i++) {
        if (n[i] == ans[i]) {
            a++;
        }
        for (int j = 0; j < 4; j++) {
            if (n[j] == ans[i] && j != i) {
                b++;
            }
        }
    }
    cout << a << "A" << b << "B\n\n";
    if (a == 4) {
        cout << "Congratulations!\n";
        return 1;
    }
    return 0;
}