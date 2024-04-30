#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string S, T, first, test, a, tmp2;
    cin >> S;
    int n;
    cin >> n;
    vector<string> undo;
    for (int i = 0; i < S.length(); i++) {
        tmp2 = S[i];
        undo.push_back(tmp2);
    }
    vector<string> fir;
    for (int i = 0; i < S.length(); i++) {
        string tmp1;
        for (int i = 0; i < undo.size(); i++) {
            tmp1 += undo[i];
        }
        fir.push_back(tmp1);
        undo.pop_back();
    }
    for (int i = 0; i < n; i++) {
        int min = 0, max = 0, sum = 0, ma[1000];
        cin >> T;
        for (int j = 0; j < T.length(); j++) {
            test += T[j];
            for (int k = 0; k < S.length(); k++) {
                if (fir[k] == test) {
                    if (S.length() - test.length() < test.length()) {
                        min = 1;  // S.length() - test.length();
                    } else {
                        min = test.length();  // test.length();
                    }
                    ma[sum] = min;
                    sum++;
                    break;
                }
            }
        }
        for (int j = 0; j < sum; j++) {
            cout << ma[j] << "\n";
        }
        cout << sum;
    }
}