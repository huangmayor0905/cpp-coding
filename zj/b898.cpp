#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool cmp(string a, string b) {
    if (a.size() > b.size()) {
        return 1;
    } else if (a.size() < b.size()) {
        return 0;
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < b[i]) {
                return 0;
            } else if (a[i] > b[i]) {
                return 1;
            }
        }
        return 0;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string side[3];
        cin >> side[0] >> side[1] >> side[2];
        int max_len = 0;
        for (int j = 0; j < 3; j++) {
            if (side[j].length() > max_len) max_len = side[j].length();
        }
        for (int j = 0; j < 3; j++) {
            if (side[j].length() < max_len) {
                while (side[j].length() < max_len) {
                    side[j].insert(0, "0");
                }
            }
        }
        sort(side, side + 3, cmp);
        cout << side[0] << "\n";
    }
    return 0;
}
