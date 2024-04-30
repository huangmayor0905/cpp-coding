#include <windows.h>

#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void SetColor(int f = 7, int b = 0) {
    unsigned short ForeColor = f + 16 * b;
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, ForeColor);
}

void help();
void review_vocabulary();
void add_vocabulary();

int main() {
    SetColor(7, 0);
    char command;

    help();
    while (cin >> command) {
        if (command == '1') {
            review_vocabulary();
        } else if (command == '2') {
            add_vocabulary();
        } else {
            break;
        }
        help();
    }
}

void help() {
    cout << "��J 1 �d�ݳ�r\n";
    cout << "��J 2 �[�J��r\n";
};

void review_vocabulary() {
    ifstream open_voc, open_voc_count;
    open_voc.open("vocabulary.txt");
    open_voc_count.open("voc_count.txt");

    // �^���r�� deque �e��
    deque<pair<string, string>> word;

    // ��r�Ӽ�
    int voc_count;
    open_voc_count >> voc_count;

    int max_len = 0;
    for (int i = 0; i < voc_count; i++) {
        string en, ch;
        open_voc >> en >> ch;
        word.push_back({en, ch});

        if (en.length() > max_len) {
            max_len = en.length();
        }
    }

    cout << "---�H�U���ثe�Ҿ֦�����r---\n";
    for (int i = 0; i < voc_count; i++) {
        cout << right << setw(3) << i + 1 << ". ";
        cout << left << setw(max_len) << word[i].first;
        cout << " " << word[i].second << "\n";
    }
    cout << "----------------------------\n";

    open_voc.close();
    open_voc_count.close();
}

void add_vocabulary() {
    fstream open_voc_count;
    fstream open_voc;
    open_voc.open("vocabulary.txt", ios::app);
    open_voc_count.open("voc_count.txt", ios::out);

    string voc, mean;

    cout << "�п�J��r�]��J 0 �����^�G";
    int amount = 0;
    while (cin >> voc) {
        if (voc == "0") break;

        cout << "�п�J����½Ķ�G";
        cin >> mean;

        open_voc << voc << " " << mean << "\n";
        ++amount;

        SetColor(6, 0);
        cout << "�w�[�J " << voc << " " << mean << "\n\n";
        SetColor(7, 0);
        cout << "�п�J��r�]��J 0 �����^�G";
    }

    int voc_count;
    open_voc_count << voc_count + amount;
    open_voc.close();
    open_voc_count.close();
}
