#include <iostream>
using namespace std;

int main() {
    int alpha[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

    string id = "";
    cin >> id;

    int sum = (alpha[id[0] - 'A'] / 10) + (alpha[id[0] - 'A'] % 10) * 9 + (id[9] - '0');
    for (int i = 1; i <= 8; i++) {
        sum += (id[i] - '0') * (9 - i);
    }

    if (sum % 10 == 0) {
        cout << "real\n";
    } else {
        cout << "fake\n";
    }
    return 0;
}
