#include <iostream>
using namespace std;

int main() {
    string code[12][2] = {
        {"00", "A"},
        {"01", "B"},
        {"100", "0"},
        {"101", "1"},
        {"1100", "2"},
        {"1101", "3"},
        {"11100", "4"},
        {"11101", "5"},
        {"111100", "6"},
        {"111101", "7"},
        {"111110", "8"},
        {"111111", "9"}};

    int n;
    while (cin >> n) {
        for (int t = 0; t < n; t++) {
            string str = "";
            cin >> str;

            int outputTimes = 0;
            bool c = false;
            int count = 0;
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] == '1') {
                    count++;
                    if (count == 5) {
                        if (str[i + 1] == '0') {
                            cout << "8";
                            outputTimes++;
                            i++;
                            count = 0;
                        } else {
                            cout << "9";
                            outputTimes++;
                            i++;
                            count = 0;
                        }
                    }
                } else if (str[i] == '0') {
                    if (str[i + 1] == '0') {
                        cout << code[count * 2][1];
                    } else {
                        cout << code[count * 2 + 1][1];
                    }
                    outputTimes++;
                    i++;
                    count = 0;
                    continue;
                }
                if (outputTimes == 4 && c == false) {
                    c = true;
                    cout << ",";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
