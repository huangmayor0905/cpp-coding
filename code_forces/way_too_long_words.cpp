#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int times;
    cin >> times;

    for (int i = 0; i < times; i++) {
        string word;
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
        } else {
            cout << word << "\n";
        }
    }
    return 0;
}
