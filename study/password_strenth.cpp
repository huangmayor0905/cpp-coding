#include <cctype>   // 才矪瞶ㄧ计繷ゅン
#include <fstream>  // ゅン巨ㄧ计繷ゅン
#include <iostream>
#include <regex>  // タ玥笷Αㄧ计繷ゅン
#include <string>

using namespace std;

// ㄧ计ノ耞盞絏眏㎝ぃ箇代┦
string passwordStrength(const string& password) {
    int length = password.length();
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool containsCommonWords = false;

    // 耞盞絏い才摸
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

    // 盞絏ぶ8才ぶ糶ダ糶ダ计㎝疭才
    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        return "眏";
    }
    // 盞絏ぶ8才琌ゼ骸ìㄤ璶―
    else if (length >= 8) {
        return "い";
    }
    // 盞絏ぃì8才
    else {
        return "畓";
    }
}

// ㄧ计ノ浪琩盞絏琌盽ǎ迭
bool containsCommonWords(const string& password) {
    // ゴ秨盽ǎ虫迭ゅン
    ifstream commonWordsFile("words_alpha.txt");
    if (!commonWordsFile.is_open()) {
        cerr << "礚猭ゴ秨盽ǎ虫迭ゅン" << endl;
        return false;
    }

    string word;
    while (commonWordsFile >> word) {
        // 浪琩盞絏琌盽ǎ迭
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
    // 浪琩盞絏い琌硈尿计
    for (int i = 0; i < length - 1; ++i) {
        if (isdigit(password[i]) && isdigit(password[i + 1]) && password[i + 1] - password[i] == 1) {
            hasSequentialDigits = true;
            cout << ""
            break;
        }
    }

    // 浪琩盞絏い琌ら戳
    regex datePattern(R"((19|20)\d\d([ \/\-])(0[1-9]|1[012])\2(0[1-9]|[12][0-9]|3[01]))");
    if (regex_search(password, datePattern)) {
        cout << "ら戳\n";
        hasDate = true;
    }
}

// ㄧ计ノ耞盞絏ぃ箇代┦
string passwordUnpredictability(const string& password) {
    // 狦盞絏盽ǎ迭玥耞ぃ箇代
    if (containsCommonWords(password)&&) {
        return "箇代";
    } else {
        return "ぃ箇代";
    }
}

int main() {
    string password;
    cout << "叫块眤盞絏";
    cin >> password;

    string strength = passwordStrength(password);
    string unpredictability = passwordUnpredictability(password);

    cout << "眤盞絏眏" << strength << endl;
    cout << "眤盞絏ぃ箇代┦" << unpredictability << endl;

    return 0;
}
