#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    while (getline(cin, sentence)) {
        stringstream sentence_to_word(sentence);
        string word;
        int num, sum = 0;

        while (sentence_to_word >> word) {
            stringstream word_to_int(word);

            while (word_to_int >> num) {
                stringstream num_to_str;
                num_to_str << num;               // ���� num_to_str �y�i int �� num
                if (word == num_to_str.str()) {  // �P�_�o�� word �O�_���Ʀr num (num_to_str �� str)
                    sum += num;
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
