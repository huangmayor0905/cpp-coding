#include <cctype>   // �]�t�r�ųB�z��ƪ��Y���
#include <fstream>  // �]�t���ާ@��ƪ��Y���
#include <iostream>
#include <regex>  // �]�t���h��F����ƪ��Y���
#include <string>

using namespace std;

// ��ƥΩ�P�_�K�X���j�שM���i�w����
string passwordStrength(const string& password) {
    int length = password.length();
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool containsCommonWords = false;

    // �P�_�K�X���]�t���r������
    for (char c : password) {
        if (isupper(c)) {
            hasUpper = true;
        } else if (islower(c)) {
            hasLower = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else {
            hasSpecial = true;
        }
    }

    // �K�X���צܤ�8�Ӧr�šA�åB�]�t�ܤ֤@�Ӥj�g�r���B�@�Ӥp�g�r���B�@�ӼƦr�M�@�ӯS��r��
    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        return "�j";
    }
    // �K�X���צܤ�8�Ӧr�šA���O��������L�n�D
    else if (length >= 8) {
        return "��";
    }
    // �K�X���פ���8�Ӧr��
    else {
        return "�z";
    }
}

// ��ƥΩ��ˬd�K�X�O�_�]�t�`�����r��
bool containsCommonWords(const string& password) {
    // ���}�`��������
    ifstream commonWordsFile("words_alpha.txt");
    if (!commonWordsFile.is_open()) {
        cerr << "�L�k���}�`��������I" << endl;
        return false;
    }

    string word;
    while (commonWordsFile >> word) {
        // �ˬd�K�X�O�_�]�t�`�����r��
        if (password.find(word) != string::npos) {
            commonWordsFile.close();
            return true;
        }
    }

    commonWordsFile.close();
    return false;
}

bool containsCommonNumbers(const string& password) {
    bool hasSequentialDigits = false;
    bool hasDate = false;
    // �ˬd�K�X���O�_�]�t�s�򪺼Ʀr
    for (int i = 0; i < length - 1; ++i) {
        if (isdigit(password[i]) && isdigit(password[i + 1]) && password[i + 1] - password[i] == 1) {
            hasSequentialDigits = true;
            cout << "�]"
            break;
        }
    }

    // �ˬd�K�X���O�_�]�t���
    regex datePattern(R"((19|20)\d\d([ \/\-])(0[1-9]|1[012])\2(0[1-9]|[12][0-9]|3[01]))");
    if (regex_search(password, datePattern)) {
        cout << "�]�t���\n";
        hasDate = true;
    }
}

// ��ƥΩ�P�_�K�X�����i�w����
string passwordUnpredictability(const string& password) {
    // �p�G�K�X�]�t�`�����r���A�h�P�_�����i�w��
    if (containsCommonWords(password)&&) {
        return "�i�w��";
    } else {
        return "���i�w��";
    }
}

int main() {
    string password;
    cout << "�п�J�z���K�X�G";
    cin >> password;

    string strength = passwordStrength(password);
    string unpredictability = passwordUnpredictability(password);

    cout << "�z���K�X�j�׬��G" << strength << endl;
    cout << "�z���K�X�����i�w���ʬ��G" << unpredictability << endl;

    return 0;
}
