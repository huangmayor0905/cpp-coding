#include <iostream>
using namespace std;

int main() {
    string str;
    while (cin >> str) {
        int total = 0;
        int y_flag = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'y') {
                total += abs(i - y_flag);
                y_flag += 3;
            }
        }
        cout << total << "\n";
    }
    return 0;
}
